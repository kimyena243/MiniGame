// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerChick.h"

// Sets default values
APlayerChick::APlayerChick()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerChick::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerChick::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerChick::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

