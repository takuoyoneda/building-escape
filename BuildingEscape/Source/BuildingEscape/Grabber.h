// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
//#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Grabber.generated.h"
//#include "Components/InputComponent.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API UGrabber : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UGrabber();

	// Called when the game starts
	virtual void BeginPlay() override;

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


private:
	float Reach = 100.f;

	UPhysicsHandleComponent* PhysicsHandle = nullptr;
	UInputComponent* InputComponent = nullptr;

	void Grab();
	void Release();

	void FindPhysicsHandleComponent();
	void SetupPhysicsHandleComponent();

	const FHitResult GetFirstPhysicsBodyInReach();

	FVector GetReachLineStart();
	FVector GetReachLineEnd();
};