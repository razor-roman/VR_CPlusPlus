// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterActor.h"

// Sets default values
ACharacterActor::ACharacterActor()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	VROrigin=CreateDefaultSubobject<USceneComponent>("VROrigin");
	VROrigin->SetupAttachment(RootComponent);

	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(VROrigin);

	// MotionControllerLeft = CreateDefaultSubobject<UMotionControllerComponent>("MotionControllerLeft");
	// MotionControllerLeft->SetupAttachment(VROrigin);
	//
	// MotionControllerRight = CreateDefaultSubobject<UMotionControllerComponent>("MotionControllerRight");
	// MotionControllerRight->SetupAttachment(VROrigin);
	//
	// MotionControllerLeft->DisplayModelSource="OpenXR";
	// MotionControllerRight->DisplayModelSource="OpenXR";
}

// Called when the game starts or when spawned
void ACharacterActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharacterActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharacterActor::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

