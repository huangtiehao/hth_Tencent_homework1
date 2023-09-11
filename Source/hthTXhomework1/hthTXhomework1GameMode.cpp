// Copyright Epic Games, Inc. All Rights Reserved.

#include "hthTXhomework1GameMode.h"
#include "hthTXhomework1Character.h"
#include "UObject/ConstructorHelpers.h"

AhthTXhomework1GameMode::AhthTXhomework1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
