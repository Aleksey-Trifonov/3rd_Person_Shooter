// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THIRD_PERSON_SHOOTER_Gun_generated_h
#error "Gun.generated.h already included, missing '#pragma once' in Gun.h"
#endif
#define THIRD_PERSON_SHOOTER_Gun_generated_h

#define Third_Person_Shooter_Source_Third_Person_Shooter_Gun_h_12_SPARSE_DATA
#define Third_Person_Shooter_Source_Third_Person_Shooter_Gun_h_12_RPC_WRAPPERS
#define Third_Person_Shooter_Source_Third_Person_Shooter_Gun_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Third_Person_Shooter_Source_Third_Person_Shooter_Gun_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGun(); \
	friend struct Z_Construct_UClass_AGun_Statics; \
public: \
	DECLARE_CLASS(AGun, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Third_Person_Shooter"), NO_API) \
	DECLARE_SERIALIZER(AGun)


#define Third_Person_Shooter_Source_Third_Person_Shooter_Gun_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGun(); \
	friend struct Z_Construct_UClass_AGun_Statics; \
public: \
	DECLARE_CLASS(AGun, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Third_Person_Shooter"), NO_API) \
	DECLARE_SERIALIZER(AGun)


#define Third_Person_Shooter_Source_Third_Person_Shooter_Gun_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGun(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGun) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGun); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGun); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGun(AGun&&); \
	NO_API AGun(const AGun&); \
public:


#define Third_Person_Shooter_Source_Third_Person_Shooter_Gun_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGun(AGun&&); \
	NO_API AGun(const AGun&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGun); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGun); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGun)


#define Third_Person_Shooter_Source_Third_Person_Shooter_Gun_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(AGun, Root); } \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(AGun, Mesh); }


#define Third_Person_Shooter_Source_Third_Person_Shooter_Gun_h_9_PROLOG
#define Third_Person_Shooter_Source_Third_Person_Shooter_Gun_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Third_Person_Shooter_Source_Third_Person_Shooter_Gun_h_12_PRIVATE_PROPERTY_OFFSET \
	Third_Person_Shooter_Source_Third_Person_Shooter_Gun_h_12_SPARSE_DATA \
	Third_Person_Shooter_Source_Third_Person_Shooter_Gun_h_12_RPC_WRAPPERS \
	Third_Person_Shooter_Source_Third_Person_Shooter_Gun_h_12_INCLASS \
	Third_Person_Shooter_Source_Third_Person_Shooter_Gun_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Third_Person_Shooter_Source_Third_Person_Shooter_Gun_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Third_Person_Shooter_Source_Third_Person_Shooter_Gun_h_12_PRIVATE_PROPERTY_OFFSET \
	Third_Person_Shooter_Source_Third_Person_Shooter_Gun_h_12_SPARSE_DATA \
	Third_Person_Shooter_Source_Third_Person_Shooter_Gun_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Third_Person_Shooter_Source_Third_Person_Shooter_Gun_h_12_INCLASS_NO_PURE_DECLS \
	Third_Person_Shooter_Source_Third_Person_Shooter_Gun_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THIRD_PERSON_SHOOTER_API UClass* StaticClass<class AGun>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Third_Person_Shooter_Source_Third_Person_Shooter_Gun_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
