// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLESHOOTER_ShooterPlayerController_generated_h
#error "ShooterPlayerController.generated.h already included, missing '#pragma once' in ShooterPlayerController.h"
#endif
#define SIMPLESHOOTER_ShooterPlayerController_generated_h

#define Third_Person_Shooter_Source_SimpleShooter_ShooterPlayerController_h_15_SPARSE_DATA
#define Third_Person_Shooter_Source_SimpleShooter_ShooterPlayerController_h_15_RPC_WRAPPERS
#define Third_Person_Shooter_Source_SimpleShooter_ShooterPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Third_Person_Shooter_Source_SimpleShooter_ShooterPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterPlayerController(); \
	friend struct Z_Construct_UClass_AShooterPlayerController_Statics; \
public: \
	DECLARE_CLASS(AShooterPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimpleShooter"), NO_API) \
	DECLARE_SERIALIZER(AShooterPlayerController)


#define Third_Person_Shooter_Source_SimpleShooter_ShooterPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAShooterPlayerController(); \
	friend struct Z_Construct_UClass_AShooterPlayerController_Statics; \
public: \
	DECLARE_CLASS(AShooterPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimpleShooter"), NO_API) \
	DECLARE_SERIALIZER(AShooterPlayerController)


#define Third_Person_Shooter_Source_SimpleShooter_ShooterPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterPlayerController(AShooterPlayerController&&); \
	NO_API AShooterPlayerController(const AShooterPlayerController&); \
public:


#define Third_Person_Shooter_Source_SimpleShooter_ShooterPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterPlayerController(AShooterPlayerController&&); \
	NO_API AShooterPlayerController(const AShooterPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterPlayerController)


#define Third_Person_Shooter_Source_SimpleShooter_ShooterPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HUDClass() { return STRUCT_OFFSET(AShooterPlayerController, HUDClass); } \
	FORCEINLINE static uint32 __PPO__WinScreenClass() { return STRUCT_OFFSET(AShooterPlayerController, WinScreenClass); } \
	FORCEINLINE static uint32 __PPO__LoseScreenClass() { return STRUCT_OFFSET(AShooterPlayerController, LoseScreenClass); } \
	FORCEINLINE static uint32 __PPO__RestartDelay() { return STRUCT_OFFSET(AShooterPlayerController, RestartDelay); }


#define Third_Person_Shooter_Source_SimpleShooter_ShooterPlayerController_h_12_PROLOG
#define Third_Person_Shooter_Source_SimpleShooter_ShooterPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Third_Person_Shooter_Source_SimpleShooter_ShooterPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	Third_Person_Shooter_Source_SimpleShooter_ShooterPlayerController_h_15_SPARSE_DATA \
	Third_Person_Shooter_Source_SimpleShooter_ShooterPlayerController_h_15_RPC_WRAPPERS \
	Third_Person_Shooter_Source_SimpleShooter_ShooterPlayerController_h_15_INCLASS \
	Third_Person_Shooter_Source_SimpleShooter_ShooterPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Third_Person_Shooter_Source_SimpleShooter_ShooterPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Third_Person_Shooter_Source_SimpleShooter_ShooterPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	Third_Person_Shooter_Source_SimpleShooter_ShooterPlayerController_h_15_SPARSE_DATA \
	Third_Person_Shooter_Source_SimpleShooter_ShooterPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Third_Person_Shooter_Source_SimpleShooter_ShooterPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	Third_Person_Shooter_Source_SimpleShooter_ShooterPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLESHOOTER_API UClass* StaticClass<class AShooterPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Third_Person_Shooter_Source_SimpleShooter_ShooterPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
