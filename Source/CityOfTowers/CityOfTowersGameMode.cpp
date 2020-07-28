// Copyright Epic Games, Inc. All Rights Reserved.

#include "CityOfTowersGameMode.h"
#include "CityOfTowersPlayerController.h"
#include "CityOfTowersCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACityOfTowersGameMode::ACityOfTowersGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ACityOfTowersPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}