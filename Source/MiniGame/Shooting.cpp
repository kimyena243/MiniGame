// Fill out your copyright notice in the Description page of Project Settings.


#include "Shooting.h"
#include "UObject/ConstructorHelpers.h"

AShooting::AShooting()
{

    ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/BluePrint/BP_PlayerChick.BP_PlayerChick_C"));
    Chick = PlayerPawnBPClass.Class;

}


void AShooting::SetupInputComponent()
{
    //Super::SetupInputComponent();

    //// ���콺 ���� ��ư Ŭ�� �̺�Ʈ ���ε�
    //InputComponent->BindAction("LeftMouseClick", IE_Pressed, this, &AShooting::OnLeftMouseClick);
}

void AShooting::OnLeftMouseClick()
{
    //// Ŭ���� ��ǥ ��������
    //FVector WorldLocation;
    //FVector WorldDirection;
    //DeprojectMousePositionToWorld(WorldLocation, WorldDirection);

    //// Ŭ���� ��ǥ�� �Ѿ� �߻�
    //ShootBullet(WorldLocation);
}

void AShooting::ShootBullet(FVector TargetLocation)
{
    //// �������Ʈ ����� ����Ͽ� �Ѿ� �߻� ���� ����
    //if (ABP_PlayerChick* BlueprintActor = Cast<AYourBlueprintClass>(GetCharacter()))
    //{
    //    BlueprintActor->ShootAtLocation(TargetLocation);
    //}
}
