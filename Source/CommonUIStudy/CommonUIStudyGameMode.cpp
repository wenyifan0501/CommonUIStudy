// Copyright Epic Games, Inc. All Rights Reserved.

#include "CommonUIStudyGameMode.h"
#include "CommonUIStudyCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACommonUIStudyGameMode::ACommonUIStudyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
