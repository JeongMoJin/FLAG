#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h" // �� �̰ſ��� ��!!!
#include "MyFirstActor2.generated.h" // �׻� ��������!

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
