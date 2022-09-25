// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IMotionController.h"
#include "MotionControllerComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "CharacterActor.generated.h"

UCLASS()
class VR_C_PLUSPLUS_API ACharacterActor : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacterActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(BlueprintReadWrite)
	USceneComponent* VROrigin;
	// UPROPERTY()
	// UMotionControllerComponent* MotionControllerRight;
	// UPROPERTY()
	// UMotionControllerComponent* MotionControllerLeft;
	UPROPERTY(BlueprintReadWrite)
	UCameraComponent* Camera; 
	
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
