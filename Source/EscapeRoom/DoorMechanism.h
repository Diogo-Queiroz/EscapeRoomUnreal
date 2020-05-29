// Project By Diogo Queiroz

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DoorMechanism.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ESCAPEROOM_API UDoorMechanism : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDoorMechanism();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	float InitialRotation;
	float CurrentRotation;

	UPROPERTY(EditAnywhere)
	float TargetRotation;
		
};
