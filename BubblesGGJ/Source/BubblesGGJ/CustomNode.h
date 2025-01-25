// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "CustomNode.generated.h"

/**
 * 
 */
UCLASS()
class BUBBLESGGJ_API UCustomNode : public UCharacterMovementComponent
{
	GENERATED_BODY()
	
public: 
	UFUNCTION(BlueprintCallable)
	void SetGravDirection(const FVector& GravityDir);
};
