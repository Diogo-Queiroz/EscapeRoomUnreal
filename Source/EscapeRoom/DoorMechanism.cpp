// Project By Diogo Queiroz


#include "DoorMechanism.h"
#include "GameFramework/Actor.h"
#include <string>

// Sets default values for this component's properties
UDoorMechanism::UDoorMechanism()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDoorMechanism::BeginPlay()
{
	Super::BeginPlay();

	InitialRotation = GetOwner()->GetActorRotation().Yaw;
	CurrentRotation = InitialRotation;
	// ...
	
}


// Called every frame
void UDoorMechanism::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	UE_LOG(LogTemp, Warning, TEXT("Rotation: %.2f"), CurrentRotation);
	
	// ...
}

