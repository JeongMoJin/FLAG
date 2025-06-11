#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h" // 꼭 이거여야 해!!!
#include "MyFirstActor2.generated.h" // 항상 마지막에!

UCLASS()
class FLAG_API AMyFirstActor2 : public AActor
{
	GENERATED_BODY()

public:
	AMyFirstActor2();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};
