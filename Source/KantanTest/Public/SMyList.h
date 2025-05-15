// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"


// 自定义数据
struct FMyData {
	FString Name;
	int32 Value;
};

/**
 * 
 */
class KANTANTEST_API SMyList : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SMyList)
	{}
	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);

private:
    TArray<TSharedPtr<FMyData>> ListItems;
    TArray<TSharedPtr<int32>> ListIndex;

	TSharedRef<ITableRow> OnGenerateRow(TSharedPtr<int32> Item, const TSharedRef<STableViewBase>& OwnerTable);
};
