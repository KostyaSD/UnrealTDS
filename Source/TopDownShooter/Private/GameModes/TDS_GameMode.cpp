// Top Down Shooter, Copyright GamesWID. All Rights Reserved.

#include "GameModes/TDS_GameMode.h"
#include "Player/TDS_PlayerController.h"
#include "Characters/TDS_Character.h"
#include "UObject/ConstructorHelpers.h"

ATDS_GameMode::ATDS_GameMode()
{
	DefaultPawnClass = ATDS_Character::StaticClass();
	PlayerControllerClass = ATDS_PlayerController::StaticClass();
}
