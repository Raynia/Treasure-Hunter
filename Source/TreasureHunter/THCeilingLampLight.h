// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PointLightComponent.h"
#include "THCeilingLampLight.generated.h"

UCLASS()
class TREASUREHUNTER_API ATHCeilingLampLight : public AActor
{
	GENERATED_BODY()	

	UStaticMeshComponent* StaticMesh;
	UPointLightComponent* PointLight;

public:	
	// Sets default values for this actor's properties
	ATHCeilingLampLight();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
