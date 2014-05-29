// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "PanelWidget.generated.h"

UCLASS(Abstract)
class UMG_API UPanelWidget : public UWidget
{
	GENERATED_UCLASS_BODY()

	virtual int32 GetChildrenCount() const { return 0; }
	virtual UWidget* GetChildAt(int32 Index) const { return NULL; }

	virtual int32 GetChildIndex(UWidget* Content) const { return -1; }

	virtual void ReplaceChildAt(int32 Index, UWidget* Child)
	{
	}

	virtual void InsertChildAt(int32 Index, UWidget* Child)
	{
	}

	virtual bool AddChild(UWidget* Child, FVector2D Position)
	{
		return false;
	}

	virtual bool RemoveChild(UWidget* Child)
	{
		return false;
	}
};
