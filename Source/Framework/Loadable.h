// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Object.h"
#include "Loadable.generated.h"

/**
 * 
 */
UINTERFACE(Blueprintable) //Delete?
class ULoadable : public UInterface {

	GENERATED_UINTERFACE_BODY()

};

class FRAMEWORK_API ILoadable {

	GENERATED_IINTERFACE_BODY()

public:

	//UFUNCTION(BlueprintCallable, Category = "Properties")
	//virtual bool Load(UVaRestJsonObject* JsonObject) = 0;

};