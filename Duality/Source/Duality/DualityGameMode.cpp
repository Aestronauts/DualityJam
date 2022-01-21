// Copyright Epic Games, Inc. All Rights Reserved.

#include "DualityGameMode.h"
#include "DualityCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADualityGameMode::ADualityGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
