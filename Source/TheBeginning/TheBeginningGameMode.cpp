// Copyright Epic Games, Inc. All Rights Reserved.

#include "TheBeginningGameMode.h"
#include "TheBeginningCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATheBeginningGameMode::ATheBeginningGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
