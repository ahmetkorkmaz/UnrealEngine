// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#pragma once

class FCameraFilmbackSettingsCustomization : public IPropertyTypeCustomization
{
public:
	FCameraFilmbackSettingsCustomization();

	static TSharedRef<IPropertyTypeCustomization> MakeInstance();

	/** IPropertyTypeCustomization instance */
	virtual void CustomizeHeader(TSharedRef<IPropertyHandle> PropertyHandle, FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& CustomizationUtils) override;
	virtual void CustomizeChildren( TSharedRef<IPropertyHandle> StructPropertyHandle, class IDetailChildrenBuilder& ChildBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils ) override;

protected:

	TSharedPtr<IPropertyHandle> SensorWidthHandle;
	TSharedPtr<IPropertyHandle> SensorHeightHandle;

	TSharedPtr<class SComboBox< TSharedPtr<FString> > > PresetComboBox;
	TArray< TSharedPtr< FString > >						PresetComboList;

	void OnPresetChanged(TSharedPtr<FString> NewSelection, ESelectInfo::Type SelectInfo);
	TSharedRef<SWidget> MakePresetComboWidget(TSharedPtr<FString> InItem);
		
	FText GetPresetComboBoxContent() const;
	TSharedPtr<FString> GetPresetString() const;
};
