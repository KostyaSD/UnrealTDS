// Top Down Shooter, Copyright GamesWID. All Rights Reserved.

#include "GameModes/TDS_GameMode.h"
#include "Player/TDS_PlayerController.h"
#include "Characters/TDS_Character.h"
#include "UObject/ConstructorHelpers.h"

ATDS_GameMode::ATDS_GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATDS_PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_Character"));
	//if (PlayerPawnBPClass.Class != nullptr)
	//{
	//	DefaultPawnClass = PlayerPawnBPClass.Class;
	//}

	// set default controller to our Blueprinted controller
	//static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(
	//	TEXT("/Game/TopDown/Blueprints/BP_PlayerController"));
	//if (PlayerControllerBPClass.Class != NULL)
	//{
	//	PlayerControllerClass = PlayerControllerBPClass.Class;
	//}
}
