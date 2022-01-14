// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectX_NetGameMode.h"
#include "ProjectX_NetCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectX_NetGameMode::AProjectX_NetGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
