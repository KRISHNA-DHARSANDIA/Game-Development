// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "Mover.h"
#include "TriggerComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CRYPTRAIDER_API UTriggerComponent : public UBoxComponent
{
	GENERATED_BODY()

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	
public:	
	// Sets default values for this component's properties
	UTriggerComponent();

public:	
	// Called every frame
 	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction);

	UFUNCTION(BlueprintCallable)
	void SetMover(UMover* Mover);


private:

	UPROPERTY(EditAnywhere)
	FName AcceptabeleActorTag;

	UMover* Mover;

	AActor* GetAcceptableActor() const;

};

 