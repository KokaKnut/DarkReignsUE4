// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "DarkReignsUE4GameMode.h"
#include "DarkReignsUE4Character.h"

ADarkReignsUE4GameMode::ADarkReignsUE4GameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ADarkReignsUE4Character::StaticClass();	
}
