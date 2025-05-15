// Copyright Epic Games, Inc. All Rights Reserved.

#include "KantanTestGameMode.h"
#include "KantanTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AKantanTestGameMode::AKantanTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
