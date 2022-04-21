// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Camera/CameraComponent.h"
#include "Components/TextRenderComponent.h"
#include "MotionControllerComponent.h"
#include "VRCppPawn.generated.h"

UCLASS()
class UE5CPPEXAMPLE_API AVRCppPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AVRCppPawn();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = _Hide)
	USceneComponent* VRTrackingCenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = _Hide)
	UCameraComponent* Head;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = _Hide)
	UTextRenderComponent* outputText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = _Hide)
	UMotionControllerComponent* LeftController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = _Hide)
	UMotionControllerComponent* RightController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = _Hide)
	UStaticMeshComponent* raygun;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = _Hide)
	UStaticMeshComponent* LeftCone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = _Hide)
	UStaticMeshComponent* RightMesh;

};
 