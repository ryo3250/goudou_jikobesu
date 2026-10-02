// Fill out your copyright notice in the Description page of Project Settings.


#include "Updraft.h"

// Sets default values
AUpdraft::AUpdraft()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AUpdraft::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AUpdraft::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

