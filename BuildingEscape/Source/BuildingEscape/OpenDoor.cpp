// Fill out your copyright notice in the Description page of Project Settings.

#include "OpenDoor.h"
#include "GameFramework/Actor.h"


// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();

	//OpenDoor();
	FString ObjectName = GetOwner()->GetName();
	UE_LOG(LogTemp, Warning, TEXT("=======================> BeginPlay: %s"), *ObjectName);

	if (ActorThatOpens != NULL)
	{
		ObjectName = ActorThatOpens->GetName();
		UE_LOG(LogTemp, Warning, TEXT("=======================> ActorThatOpens: %s"), *ObjectName);
	}

	if (PressurePlate != NULL)
	{
		ObjectName = PressurePlate->GetName();
		UE_LOG(LogTemp, Warning, TEXT("=======================> PressurePlate: %s"), *ObjectName);
	}
}


void UOpenDoor::OpenDoor()
{
	FString ObjectName = GetOwner()->GetName();
	UE_LOG(LogTemp, Warning, TEXT("=======================> OpenDoor: %s"), *ObjectName);

	AActor* Owner = GetOwner();
	FRotator NewRotation = FRotator(0.f, -60.f, 0.f);
	Owner->SetActorRotation(NewRotation);
}


// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//UE_LOG(LogTemp, Warning, TEXT("=======================> TickComponent"));

	if (PressurePlate != NULL && PressurePlate->IsOverlappingActor(ActorThatOpens))
	{
		OpenDoor();
	}
}


