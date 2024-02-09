// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"
// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	//acess variables that we created in yhe header file
	MyInt = 9;

	APlusB = InputA + InputB;

	// testing float
	float1float2 = float1 + float2;
	
	//
	MyX = MyVector.X;

		//
	
	ChangePos();

}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMovingPlatform::ChangePos()
{
	//add new value and change position of x and y 
	Vector2.X =newAux;
	float auxX= Vector2.X;
	Vector2.X= Vector2.Y;
	Vector2.Y= auxX;
}
