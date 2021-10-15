// Copyright Epic Games, Inc. All Rights Reserved.

#include "TEST1GameMode.h"
#include "TEST1HUD.h"
#include "TEST1Character.h"
#include "UObject/ConstructorHelpers.h"

ATEST1GameMode::ATEST1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATEST1HUD::StaticClass();
}
