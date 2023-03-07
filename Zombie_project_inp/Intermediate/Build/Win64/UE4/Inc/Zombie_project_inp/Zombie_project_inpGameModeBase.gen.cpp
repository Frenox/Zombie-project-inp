// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Zombie_project_inp/Zombie_project_inpGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombie_project_inpGameModeBase() {}
// Cross Module References
	ZOMBIE_PROJECT_INP_API UClass* Z_Construct_UClass_AZombie_project_inpGameModeBase_NoRegister();
	ZOMBIE_PROJECT_INP_API UClass* Z_Construct_UClass_AZombie_project_inpGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Zombie_project_inp();
// End Cross Module References
	void AZombie_project_inpGameModeBase::StaticRegisterNativesAZombie_project_inpGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AZombie_project_inpGameModeBase_NoRegister()
	{
		return AZombie_project_inpGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AZombie_project_inpGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombie_project_inpGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Zombie_project_inp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombie_project_inpGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Zombie_project_inpGameModeBase.h" },
		{ "ModuleRelativePath", "Zombie_project_inpGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombie_project_inpGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombie_project_inpGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombie_project_inpGameModeBase_Statics::ClassParams = {
		&AZombie_project_inpGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AZombie_project_inpGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombie_project_inpGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombie_project_inpGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombie_project_inpGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombie_project_inpGameModeBase, 1847527129);
	template<> ZOMBIE_PROJECT_INP_API UClass* StaticClass<AZombie_project_inpGameModeBase>()
	{
		return AZombie_project_inpGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombie_project_inpGameModeBase(Z_Construct_UClass_AZombie_project_inpGameModeBase, &AZombie_project_inpGameModeBase::StaticClass, TEXT("/Script/Zombie_project_inp"), TEXT("AZombie_project_inpGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombie_project_inpGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
