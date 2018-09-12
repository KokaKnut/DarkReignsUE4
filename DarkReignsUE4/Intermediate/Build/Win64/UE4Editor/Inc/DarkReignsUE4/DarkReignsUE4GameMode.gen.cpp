// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DarkReignsUE4/DarkReignsUE4GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDarkReignsUE4GameMode() {}
// Cross Module References
	DARKREIGNSUE4_API UClass* Z_Construct_UClass_ADarkReignsUE4GameMode_NoRegister();
	DARKREIGNSUE4_API UClass* Z_Construct_UClass_ADarkReignsUE4GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DarkReignsUE4();
// End Cross Module References
	void ADarkReignsUE4GameMode::StaticRegisterNativesADarkReignsUE4GameMode()
	{
	}
	UClass* Z_Construct_UClass_ADarkReignsUE4GameMode_NoRegister()
	{
		return ADarkReignsUE4GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADarkReignsUE4GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADarkReignsUE4GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DarkReignsUE4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADarkReignsUE4GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DarkReignsUE4GameMode.h" },
		{ "ModuleRelativePath", "DarkReignsUE4GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "The GameMode defines the game being played. It governs the game rules, scoring, what actors\nare allowed to exist in this game type, and who may enter the game.\n\nThis game mode just sets the default pawn to be the MyCharacter asset, which is a subclass of DarkReignsUE4Character" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADarkReignsUE4GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADarkReignsUE4GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADarkReignsUE4GameMode_Statics::ClassParams = {
		&ADarkReignsUE4GameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ADarkReignsUE4GameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADarkReignsUE4GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADarkReignsUE4GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADarkReignsUE4GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADarkReignsUE4GameMode, 3707056809);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADarkReignsUE4GameMode(Z_Construct_UClass_ADarkReignsUE4GameMode, &ADarkReignsUE4GameMode::StaticClass, TEXT("/Script/DarkReignsUE4"), TEXT("ADarkReignsUE4GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADarkReignsUE4GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
