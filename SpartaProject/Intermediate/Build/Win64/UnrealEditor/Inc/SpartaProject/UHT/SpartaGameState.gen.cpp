// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaProject/SpartaGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpartaGameState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameState();
SPARTAPROJECT_API UClass* Z_Construct_UClass_ASpartaGameState();
SPARTAPROJECT_API UClass* Z_Construct_UClass_ASpartaGameState_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpartaProject();
// End Cross Module References

// Begin Class ASpartaGameState Function AddScore
struct Z_Construct_UFunction_ASpartaGameState_AddScore_Statics
{
	struct SpartaGameState_eventAddScore_Parms
	{
		int32 Amout;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "SpartaGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amout;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASpartaGameState_AddScore_Statics::NewProp_Amout = { "Amout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpartaGameState_eventAddScore_Parms, Amout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpartaGameState_AddScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpartaGameState_AddScore_Statics::NewProp_Amout,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaGameState_AddScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpartaGameState_AddScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpartaGameState, nullptr, "AddScore", nullptr, nullptr, Z_Construct_UFunction_ASpartaGameState_AddScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaGameState_AddScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpartaGameState_AddScore_Statics::SpartaGameState_eventAddScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaGameState_AddScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpartaGameState_AddScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpartaGameState_AddScore_Statics::SpartaGameState_eventAddScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpartaGameState_AddScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpartaGameState_AddScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpartaGameState::execAddScore)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amout);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddScore(Z_Param_Amout);
	P_NATIVE_END;
}
// End Class ASpartaGameState Function AddScore

// Begin Class ASpartaGameState Function GetScore
struct Z_Construct_UFunction_ASpartaGameState_GetScore_Statics
{
	struct SpartaGameState_eventGetScore_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Scroe" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// WaveDatas.Num() == 100\n// \xeb\xa0\x88\xeb\xb2\xa8 \xec\x9b\xa8\xec\x9d\xb4\xeb\xb8\x8c 100\n//TArray<WaveData> WaveDatas;\n" },
#endif
		{ "ModuleRelativePath", "SpartaGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WaveDatas.Num() == 100\n\xeb\xa0\x88\xeb\xb2\xa8 \xec\x9b\xa8\xec\x9d\xb4\xeb\xb8\x8c 100\nTArray<WaveData> WaveDatas;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASpartaGameState_GetScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpartaGameState_eventGetScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpartaGameState_GetScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpartaGameState_GetScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaGameState_GetScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpartaGameState_GetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpartaGameState, nullptr, "GetScore", nullptr, nullptr, Z_Construct_UFunction_ASpartaGameState_GetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaGameState_GetScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpartaGameState_GetScore_Statics::SpartaGameState_eventGetScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaGameState_GetScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpartaGameState_GetScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpartaGameState_GetScore_Statics::SpartaGameState_eventGetScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpartaGameState_GetScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpartaGameState_GetScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpartaGameState::execGetScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetScore();
	P_NATIVE_END;
}
// End Class ASpartaGameState Function GetScore

// Begin Class ASpartaGameState Function OnGameOver
struct Z_Construct_UFunction_ASpartaGameState_OnGameOver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "SpartaGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpartaGameState_OnGameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpartaGameState, nullptr, "OnGameOver", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaGameState_OnGameOver_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpartaGameState_OnGameOver_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASpartaGameState_OnGameOver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpartaGameState_OnGameOver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpartaGameState::execOnGameOver)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGameOver();
	P_NATIVE_END;
}
// End Class ASpartaGameState Function OnGameOver

// Begin Class ASpartaGameState
void ASpartaGameState::StaticRegisterNativesASpartaGameState()
{
	UClass* Class = ASpartaGameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddScore", &ASpartaGameState::execAddScore },
		{ "GetScore", &ASpartaGameState::execGetScore },
		{ "OnGameOver", &ASpartaGameState::execOnGameOver },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpartaGameState);
UClass* Z_Construct_UClass_ASpartaGameState_NoRegister()
{
	return ASpartaGameState::StaticClass();
}
struct Z_Construct_UClass_ASpartaGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//USTURCT()\n//struct WaveData\n//{\n//\x09int32 CurrentWaveIndex; // \xed\x98\x84\xec\x9e\xac Wave\n//\x09int32 MaxWaves; // \xec\xb5\x9c\xeb\x8c\x80 Wave\n//\x09""float WaveDuration; // Wave \xec\xa7\x80\xec\x86\x8d \xec\x8b\x9c\xea\xb0\x84\n//\x09TArray<int32> ItemsToSpawnPerWave; // \xec\x9b\xa8\xec\x9d\xb4\xeb\xb8\x8c \xeb\x8b\xb9 \xec\x8a\xa4\xed\x8f\xb0 \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\x88\x98\n//};\n" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SpartaGameState.h" },
		{ "ModuleRelativePath", "SpartaGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "USTURCT()\nstruct WaveData\n{\n       int32 CurrentWaveIndex;  \xed\x98\x84\xec\x9e\xac Wave\n       int32 MaxWaves;  \xec\xb5\x9c\xeb\x8c\x80 Wave\n       float WaveDuration;  Wave \xec\xa7\x80\xec\x86\x8d \xec\x8b\x9c\xea\xb0\x84\n       TArray<int32> ItemsToSpawnPerWave;  \xec\x9b\xa8\xec\x9d\xb4\xeb\xb8\x8c \xeb\x8b\xb9 \xec\x8a\xa4\xed\x8f\xb0 \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\x88\x98\n};" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "Score" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Score \xeb\xb0\x8f Coin\n" },
#endif
		{ "ModuleRelativePath", "SpartaGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Score \xeb\xb0\x8f Coin" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedCoinCount_MetaData[] = {
		{ "Category", "Coin" },
		{ "ModuleRelativePath", "SpartaGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectedCoinCount_MetaData[] = {
		{ "Category", "Coin" },
		{ "ModuleRelativePath", "SpartaGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelDuration_MetaData[] = {
		{ "Category", "Coin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Level\n" },
#endif
		{ "ModuleRelativePath", "SpartaGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Level" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevelIndex_MetaData[] = {
		{ "Category", "Coin" },
		{ "ModuleRelativePath", "SpartaGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLevels_MetaData[] = {
		{ "Category", "Coin" },
		{ "ModuleRelativePath", "SpartaGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelMapNames_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "SpartaGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWaveIndex_MetaData[] = {
		{ "Category", "Wave" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Wave\n" },
#endif
		{ "ModuleRelativePath", "SpartaGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wave" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxWaves_MetaData[] = {
		{ "Category", "Wave" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x98\x84\xec\x9e\xac Wave\n" },
#endif
		{ "ModuleRelativePath", "SpartaGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x98\x84\xec\x9e\xac Wave" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveDuration_MetaData[] = {
		{ "Category", "Wave" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb5\x9c\xeb\x8c\x80 Wave\n" },
#endif
		{ "ModuleRelativePath", "SpartaGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb5\x9c\xeb\x8c\x80 Wave" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemsToSpawnPerWave_MetaData[] = {
		{ "Category", "Wave" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Wave \xec\xa7\x80\xec\x86\x8d \xec\x8b\x9c\xea\xb0\x84\n" },
#endif
		{ "ModuleRelativePath", "SpartaGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wave \xec\xa7\x80\xec\x86\x8d \xec\x8b\x9c\xea\xb0\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreWaveItems_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x9b\xa8\xec\x9d\xb4\xeb\xb8\x8c \xeb\x8b\xb9 \xec\x8a\xa4\xed\x8f\xb0 \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "SpartaGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9b\xa8\xec\x9d\xb4\xeb\xb8\x8c \xeb\x8b\xb9 \xec\x8a\xa4\xed\x8f\xb0 \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnedCoinCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CollectedCoinCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LevelDuration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLevelIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLevels;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LevelMapNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelMapNames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentWaveIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxWaves;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaveDuration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemsToSpawnPerWave_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemsToSpawnPerWave;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreWaveItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PreWaveItems;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpartaGameState_AddScore, "AddScore" }, // 4105111631
		{ &Z_Construct_UFunction_ASpartaGameState_GetScore, "GetScore" }, // 2137906840
		{ &Z_Construct_UFunction_ASpartaGameState_OnGameOver, "OnGameOver" }, // 1744966842
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpartaGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASpartaGameState_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaGameState, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASpartaGameState_Statics::NewProp_SpawnedCoinCount = { "SpawnedCoinCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaGameState, SpawnedCoinCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedCoinCount_MetaData), NewProp_SpawnedCoinCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASpartaGameState_Statics::NewProp_CollectedCoinCount = { "CollectedCoinCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaGameState, CollectedCoinCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectedCoinCount_MetaData), NewProp_CollectedCoinCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpartaGameState_Statics::NewProp_LevelDuration = { "LevelDuration", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaGameState, LevelDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelDuration_MetaData), NewProp_LevelDuration_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASpartaGameState_Statics::NewProp_CurrentLevelIndex = { "CurrentLevelIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaGameState, CurrentLevelIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLevelIndex_MetaData), NewProp_CurrentLevelIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASpartaGameState_Statics::NewProp_MaxLevels = { "MaxLevels", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaGameState, MaxLevels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLevels_MetaData), NewProp_MaxLevels_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASpartaGameState_Statics::NewProp_LevelMapNames_Inner = { "LevelMapNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASpartaGameState_Statics::NewProp_LevelMapNames = { "LevelMapNames", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaGameState, LevelMapNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelMapNames_MetaData), NewProp_LevelMapNames_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASpartaGameState_Statics::NewProp_CurrentWaveIndex = { "CurrentWaveIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaGameState, CurrentWaveIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWaveIndex_MetaData), NewProp_CurrentWaveIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASpartaGameState_Statics::NewProp_MaxWaves = { "MaxWaves", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaGameState, MaxWaves), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxWaves_MetaData), NewProp_MaxWaves_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpartaGameState_Statics::NewProp_WaveDuration = { "WaveDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaGameState, WaveDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveDuration_MetaData), NewProp_WaveDuration_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASpartaGameState_Statics::NewProp_ItemsToSpawnPerWave_Inner = { "ItemsToSpawnPerWave", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASpartaGameState_Statics::NewProp_ItemsToSpawnPerWave = { "ItemsToSpawnPerWave", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaGameState, ItemsToSpawnPerWave), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemsToSpawnPerWave_MetaData), NewProp_ItemsToSpawnPerWave_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaGameState_Statics::NewProp_PreWaveItems_Inner = { "PreWaveItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASpartaGameState_Statics::NewProp_PreWaveItems = { "PreWaveItems", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaGameState, PreWaveItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreWaveItems_MetaData), NewProp_PreWaveItems_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpartaGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaGameState_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaGameState_Statics::NewProp_SpawnedCoinCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaGameState_Statics::NewProp_CollectedCoinCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaGameState_Statics::NewProp_LevelDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaGameState_Statics::NewProp_CurrentLevelIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaGameState_Statics::NewProp_MaxLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaGameState_Statics::NewProp_LevelMapNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaGameState_Statics::NewProp_LevelMapNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaGameState_Statics::NewProp_CurrentWaveIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaGameState_Statics::NewProp_MaxWaves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaGameState_Statics::NewProp_WaveDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaGameState_Statics::NewProp_ItemsToSpawnPerWave_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaGameState_Statics::NewProp_ItemsToSpawnPerWave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaGameState_Statics::NewProp_PreWaveItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaGameState_Statics::NewProp_PreWaveItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpartaGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameState,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpartaGameState_Statics::ClassParams = {
	&ASpartaGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASpartaGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaGameState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpartaGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpartaGameState()
{
	if (!Z_Registration_Info_UClass_ASpartaGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpartaGameState.OuterSingleton, Z_Construct_UClass_ASpartaGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpartaGameState.OuterSingleton;
}
template<> SPARTAPROJECT_API UClass* StaticClass<ASpartaGameState>()
{
	return ASpartaGameState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpartaGameState);
ASpartaGameState::~ASpartaGameState() {}
// End Class ASpartaGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_HW08_SpartaProject_Source_SpartaProject_SpartaGameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpartaGameState, ASpartaGameState::StaticClass, TEXT("ASpartaGameState"), &Z_Registration_Info_UClass_ASpartaGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpartaGameState), 1025594981U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_HW08_SpartaProject_Source_SpartaProject_SpartaGameState_h_2888690353(TEXT("/Script/SpartaProject"),
	Z_CompiledInDeferFile_FID_Unreal_Project_HW08_SpartaProject_Source_SpartaProject_SpartaGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_HW08_SpartaProject_Source_SpartaProject_SpartaGameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
