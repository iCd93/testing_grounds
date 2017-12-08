// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "TestingGroundsC.h"
#include "TestingGroundsCGameMode.h"
#include "TestingGroundsCHUD.h"
#include "TestingGroundsCCharacter.h"

ATestingGroundsCGameMode::ATestingGroundsCGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATestingGroundsCHUD::StaticClass();
}
