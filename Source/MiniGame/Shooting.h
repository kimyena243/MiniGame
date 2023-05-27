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
    // Ŭ�� �̺�Ʈ ó��
    virtual void SetupInputComponent() override;
    void OnLeftMouseClick();
   
protected:
    // Ŭ���� ��ǥ�� �Ѿ� �߻�
    UFUNCTION(BlueprintCallable, Category = "Custom")
    void ShootBullet(FVector TargetLocation);
private:
    TSubclassOf<APawn> Chick;

};
