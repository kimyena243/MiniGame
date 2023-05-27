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

    //// 마우스 왼쪽 버튼 클릭 이벤트 바인딩
    //InputComponent->BindAction("LeftMouseClick", IE_Pressed, this, &AShooting::OnLeftMouseClick);
}

void AShooting::OnLeftMouseClick()
{
    //// 클릭한 좌표 가져오기
    //FVector WorldLocation;
    //FVector WorldDirection;
    //DeprojectMousePositionToWorld(WorldLocation, WorldDirection);

    //// 클릭한 좌표로 총알 발사
    //ShootBullet(WorldLocation);
}

void AShooting::ShootBullet(FVector TargetLocation)
{
    //// 블루프린트 기능을 사용하여 총알 발사 로직 구현
    //if (ABP_PlayerChick* BlueprintActor = Cast<AYourBlueprintClass>(GetCharacter()))
    //{
    //    BlueprintActor->ShootAtLocation(TargetLocation);
    //}
}
