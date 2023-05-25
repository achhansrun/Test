// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEST/TESTGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTESTGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TEST_API UClass* Z_Construct_UClass_ATESTGameMode();
	TEST_API UClass* Z_Construct_UClass_ATESTGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TEST();
// End Cross Module References
	void ATESTGameMode::StaticRegisterNativesATESTGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATESTGameMode);
	UClass* Z_Construct_UClass_ATESTGameMode_NoRegister()
	{
		return ATESTGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATESTGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATESTGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TEST,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATESTGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TESTGameMode.h" },
		{ "ModuleRelativePath", "TESTGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATESTGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATESTGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATESTGameMode_Statics::ClassParams = {
		&ATESTGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATESTGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATESTGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATESTGameMode()
	{
		if (!Z_Registration_Info_UClass_ATESTGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATESTGameMode.OuterSingleton, Z_Construct_UClass_ATESTGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATESTGameMode.OuterSingleton;
	}
	template<> TEST_API UClass* StaticClass<ATESTGameMode>()
	{
		return ATESTGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATESTGameMode);
	ATESTGameMode::~ATESTGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_Fals3_Desktop_Summer_Repo_Test_TEST_Source_TEST_TESTGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Fals3_Desktop_Summer_Repo_Test_TEST_Source_TEST_TESTGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATESTGameMode, ATESTGameMode::StaticClass, TEXT("ATESTGameMode"), &Z_Registration_Info_UClass_ATESTGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATESTGameMode), 271227894U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Fals3_Desktop_Summer_Repo_Test_TEST_Source_TEST_TESTGameMode_h_1587483389(TEXT("/Script/TEST"),
		Z_CompiledInDeferFile_FID_Users_Fals3_Desktop_Summer_Repo_Test_TEST_Source_TEST_TESTGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Fals3_Desktop_Summer_Repo_Test_TEST_Source_TEST_TESTGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
