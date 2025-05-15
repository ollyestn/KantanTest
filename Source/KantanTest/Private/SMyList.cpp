// Fill out your copyright notice in the Description page of Project Settings.


#include "SMyList.h"
#include "SlateOptMacros.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION
void SMyList::Construct(const FArguments& InArgs)
{
	/*
	ChildSlot
	[
		// Populate the widget
	];
	*/

    //TArray<FString> ColumnNames;
    //ColumnNames.Add(TEXT("名称"));
    //ColumnNames.Add(TEXT("值"));

    //// 填充数据
    //ListItems.Add(MakeShared<FMyData>(TEXT("Item1"), 10));
    //ListItems.Add(MakeShared<FMyData>(TEXT("Item2"), 20));
	//ListIndex.Add(MakeShared<int32>(0));
	//ListIndex.Add(MakeShared<int32>(1));


    //TSharedRef<SHeaderRow> HeaderRow = SNew(SHeaderRow);
    //for (const FString& Col : ColumnNames)
    //{
    //    HeaderRow->AddColumn(
    //        SHeaderRow::Column(FName(*Col))
    //        .DefaultLabel(FText::FromString(Col)).FillWidth(1.0f)
    //    );
    //}

    ChildSlot
        [
    //        SNew(SListView<TSharedPtr<int32>>)
    //            .ListItemsSource(&ListIndex)
    //            .OnGenerateRow(this, &SMyList::OnGenerateRow)
				//.HeaderRow(HeaderRow)
    //            .HeaderRow(
    //                SNew(SHeaderRow)
    //                //+ SHeaderRow::Column(FName(TEXT("Name"))).DefaultLabel(NSLOCTEXT("", "Name", "名称"))
    //                + SHeaderRow::Column(FName(TEXT("Name"))).DefaultLabel(TEXT("名称"))
    //                //+ SHeaderRow::Column(FName(TEXT("Value"))).DefaultLabel(NSLOCTEXT("", "Value", "值"))
    //                + SHeaderRow::Column(FName(TEXT("Value"))).DefaultLabel(TEXT("值"))
    //            )
			SNew(STextBlock)
				.Text(FText::FromString(TEXT("Hello, World!")))
        ];
}

TSharedRef<ITableRow> SMyList::OnGenerateRow(TSharedPtr<int32> Item, const TSharedRef<STableViewBase>& OwnerTable) {
    return SNew(STableRow<TSharedPtr<FMyData>>, OwnerTable);
        //[
        //    SNew(SHorizontalBox)
        //        + SHorizontalBox::Slot().Padding(5).AutoWidth()
        //        [
        //            SNew(STextBlock).Text(FText::FromString(Item->Name))
        //        ]
        //        + SHorizontalBox::Slot().Padding(5).FillWidth(1.0f)
        //        [
        //            SNew(STextBlock).Text(FText::AsNumber(Item->Value))
        //        ]
        //];
}

END_SLATE_FUNCTION_BUILD_OPTIMIZATION
