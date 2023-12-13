// Fill out your copyright notice in the Description page of Project Settings.


#include "THCeilingLampLight.h"

// Sets default values
ATHCeilingLampLight::ATHCeilingLampLight()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ceiling Lamp"));
	PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("Point Light"));

	StaticMesh->SetupAttachment(RootComponent);
	PointLight->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ATHCeilingLampLight::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATHCeilingLampLight::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

