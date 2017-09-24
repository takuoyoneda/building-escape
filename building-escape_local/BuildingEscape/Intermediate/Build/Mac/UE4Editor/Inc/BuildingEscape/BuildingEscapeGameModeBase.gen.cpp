// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BuildingEscapeGameModeBase.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildingEscapeGameModeBase() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ABuildingEscapeGameModeBase_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ABuildingEscapeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
// End Cross Module References
	void ABuildingEscapeGameModeBase::StaticRegisterNativesABuildingEscapeGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABuildingEscapeGameModeBase_NoRegister()
	{
		return ABuildingEscapeGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ABuildingEscapeGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_BuildingEscape();
			OuterClass = ABuildingEscapeGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900288u;


				static TCppClassTypeInfo<TCppClassTypeTraits<ABuildingEscapeGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BuildingEscapeGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BuildingEscapeGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuildingEscapeGameModeBase, 472372548);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuildingEscapeGameModeBase(Z_Construct_UClass_ABuildingEscapeGameModeBase, &ABuildingEscapeGameModeBase::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("ABuildingEscapeGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildingEscapeGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
