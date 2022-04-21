// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5CPPExampleGameMode.h"
#include "UE5CPPExampleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5CPPExampleGameMode::AUE5CPPExampleGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
