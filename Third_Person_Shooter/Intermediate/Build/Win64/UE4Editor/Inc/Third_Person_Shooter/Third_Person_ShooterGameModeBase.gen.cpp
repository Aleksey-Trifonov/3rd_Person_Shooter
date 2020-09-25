// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Third_Person_Shooter/Third_Person_ShooterGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThird_Person_ShooterGameModeBase() {}
// Cross Module References
	THIRD_PERSON_SHOOTER_API UClass* Z_Construct_UClass_AThird_Person_ShooterGameModeBase_NoRegister();
	THIRD_PERSON_SHOOTER_API UClass* Z_Construct_UClass_AThird_Person_ShooterGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Third_Person_Shooter();
// End Cross Module References
	void AThird_Person_ShooterGameModeBase::StaticRegisterNativesAThird_Person_ShooterGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AThird_Person_ShooterGameModeBase_NoRegister()
	{
		return AThird_Person_ShooterGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AThird_Person_ShooterGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThird_Person_ShooterGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Third_Person_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThird_Person_ShooterGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Third_Person_ShooterGameModeBase.h" },
		{ "ModuleRelativePath", "Third_Person_ShooterGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThird_Person_ShooterGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThird_Person_ShooterGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AThird_Person_ShooterGameModeBase_Statics::ClassParams = {
		&AThird_Person_ShooterGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AThird_Person_ShooterGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThird_Person_ShooterGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThird_Person_ShooterGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AThird_Person_ShooterGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AThird_Person_ShooterGameModeBase, 4253946136);
	template<> THIRD_PERSON_SHOOTER_API UClass* StaticClass<AThird_Person_ShooterGameModeBase>()
	{
		return AThird_Person_ShooterGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AThird_Person_ShooterGameModeBase(Z_Construct_UClass_AThird_Person_ShooterGameModeBase, &AThird_Person_ShooterGameModeBase::StaticClass, TEXT("/Script/Third_Person_Shooter"), TEXT("AThird_Person_ShooterGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThird_Person_ShooterGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
