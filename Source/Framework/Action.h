// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Object.h"
#include "BaseCharacter.h"
#include "Action.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FExecuteEvent, ABaseCharacter*, Character);

/**
 * 
 */
UINTERFACE(Blueprintable, meta = (CannotImplementInterfaceInBlueprint))
class UAction : public UInterface, public IEventContainer {

	GENERATED_UINTERFACE_BODY()

};

class FRAMEWORK_API IAction {

	GENERATED_IINTERFACE_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Action")
	virtual UAnimationAsset* GetAnimation();

	//DECLARE_EVENT_OneParam(IAction, FExecuteEvent, UAnimInstance*)
	UFUNCTION(BlueprintCallable, Category = "Action")
	virtual void Execute(ABaseCharacter* Executor);
	
};
