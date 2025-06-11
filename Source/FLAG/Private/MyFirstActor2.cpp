#include "MyFirstActor2.h"
#include "Engine/Engine.h"

AMyFirstActor2::AMyFirstActor2()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AMyFirstActor2::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Hello, Unreal! ¾È³ç, ¾ð¸®¾ó!"));
	}
}

void AMyFirstActor2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
