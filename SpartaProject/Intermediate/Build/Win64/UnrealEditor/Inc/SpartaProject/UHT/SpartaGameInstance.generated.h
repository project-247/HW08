// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpartaGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPARTAPROJECT_SpartaGameInstance_generated_h
#error "SpartaGameInstance.generated.h already included, missing '#pragma once' in SpartaGameInstance.h"
#endif
#define SPARTAPROJECT_SpartaGameInstance_generated_h

#define FID_Unreal_Project_HW08_SpartaProject_Source_SpartaProject_SpartaGameInstance_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddToScore);


#define FID_Unreal_Project_HW08_SpartaProject_Source_SpartaProject_SpartaGameInstance_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpartaGameInstance(); \
	friend struct Z_Construct_UClass_USpartaGameInstance_Statics; \
public: \
	DECLARE_CLASS(USpartaGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SpartaProject"), NO_API) \
	DECLARE_SERIALIZER(USpartaGameInstance)


#define FID_Unreal_Project_HW08_SpartaProject_Source_SpartaProject_SpartaGameInstance_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USpartaGameInstance(USpartaGameInstance&&); \
	USpartaGameInstance(const USpartaGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpartaGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpartaGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USpartaGameInstance) \
	NO_API virtual ~USpartaGameInstance();


#define FID_Unreal_Project_HW08_SpartaProject_Source_SpartaProject_SpartaGameInstance_h_8_PROLOG
#define FID_Unreal_Project_HW08_SpartaProject_Source_SpartaProject_SpartaGameInstance_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_HW08_SpartaProject_Source_SpartaProject_SpartaGameInstance_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Project_HW08_SpartaProject_Source_SpartaProject_SpartaGameInstance_h_11_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Project_HW08_SpartaProject_Source_SpartaProject_SpartaGameInstance_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPARTAPROJECT_API UClass* StaticClass<class USpartaGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_HW08_SpartaProject_Source_SpartaProject_SpartaGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
