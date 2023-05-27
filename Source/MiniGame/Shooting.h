// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Shooting.generated.h"

/**
 * 
 */
UCLASS()
class MINIGAME_API AShooting : public APlayerController
{
	GENERATED_BODY()

public:
   
    AShooting();
    // 클릭 이벤트 처리
    virtual void SetupInputComponent() override;
    void OnLeftMouseClick();
   
protected:
    // 클릭한 좌표로 총알 발사
    UFUNCTION(BlueprintCallable, Category = "Custom")
    void ShootBullet(FVector TargetLocation);
private:
    TSubclassOf<APawn> Chick;

};
