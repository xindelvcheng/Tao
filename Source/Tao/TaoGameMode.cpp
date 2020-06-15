// Copyright Epic Games, Inc. All Rights Reserved.

#include "TaoGameMode.h"
#include "TaoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATaoGameMode::ATaoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
