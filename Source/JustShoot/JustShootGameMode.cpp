// Copyright Epic Games, Inc. All Rights Reserved.

#include "JustShootGameMode.h"
#include "JustShootCharacter.h"
#include "UObject/ConstructorHelpers.h"

AJustShootGameMode::AJustShootGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
