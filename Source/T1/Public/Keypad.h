// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Keypad.generated.h"

/**
 * 
 */
UCLASS()
class T1_API UKeypad : public UUserWidget
{
	GENERATED_BODY()
	
	UPROPERTY()
	TArray<int32> senhaAtual;
	
};

