// Fill out your copyright notice in the Description page of Project Settings.

#include "OpenDoor.h"
#include "GameFramework/Actor.h"

#define OUT

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
	Owner = GetOwner();

	if (!PressurePlate)
	{
		UE_LOG(LogTemp, Error, TEXT("%s missing pressure plate"), *GetOwner()->GetName());
	}

	//ActorThatOpens = GetWorld()->GetFirstPlayerController()->GetPawn();

	//FString ObjectName = GetOwner()->GetName();
	//UE_LOG(LogTemp, Warning, TEXT("=======================> BeginPlay: %s"), *ObjectName);

	//if (ActorThatOpens != NULL)
	//{
	//	ObjectName = ActorThatOpens->GetName();
	//	UE_LOG(LogTemp, Warning, TEXT("=======================> ActorThatOpens: %s"), *ObjectName);
	//}

	//if (PressurePlate != NULL)
	//{
	//	ObjectName = PressurePlate->GetName();
	//	UE_LOG(LogTemp, Warning, TEXT("=======================> PressurePlate: %s"), *ObjectName);
	//}
}

// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//UE_LOG(LogTemp, Warning, TEXT("=======================> TickComponent"));

	if (GetTotalMassOfActorsOnPlate() > TriggerMass)
	{
		OnOpen.Broadcast();
	}
	else
	{
		OnClose.Broadcast();
	}
}

float UOpenDoor::GetTotalMassOfActorsOnPlate()
{
	float TotalMass = 0.f;

	TArray<AActor*> OverlappingActors;

	if (!PressurePlate) { return TotalMass; }
	PressurePlate->GetOverlappingActors(OUT OverlappingActors);

	for (const auto& Actor : OverlappingActors)
	{
		TotalMass += Actor->FindComponentByClass<UPrimitiveComponent>()->GetMass();
		//UE_LOG(LogTemp, Warning, TEXT("%s on pressure plate"), *Actor->GetName())
	}

	return TotalMass;
}
