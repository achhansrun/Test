// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST_TESTGameMode_generated_h
#error "TESTGameMode.generated.h already included, missing '#pragma once' in TESTGameMode.h"
#endif
#define TEST_TESTGameMode_generated_h

#define FID_TEST_Source_TEST_TESTGameMode_h_12_SPARSE_DATA
#define FID_TEST_Source_TEST_TESTGameMode_h_12_RPC_WRAPPERS
#define FID_TEST_Source_TEST_TESTGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_TEST_Source_TEST_TESTGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATESTGameMode(); \
	friend struct Z_Construct_UClass_ATESTGameMode_Statics; \
public: \
	DECLARE_CLASS(ATESTGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TEST"), TEST_API) \
	DECLARE_SERIALIZER(ATESTGameMode)


#define FID_TEST_Source_TEST_TESTGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATESTGameMode(); \
	friend struct Z_Construct_UClass_ATESTGameMode_Statics; \
public: \
	DECLARE_CLASS(ATESTGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TEST"), TEST_API) \
	DECLARE_SERIALIZER(ATESTGameMode)


#define FID_TEST_Source_TEST_TESTGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEST_API ATESTGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATESTGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEST_API, ATESTGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATESTGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TEST_API ATESTGameMode(ATESTGameMode&&); \
	TEST_API ATESTGameMode(const ATESTGameMode&); \
public:


#define FID_TEST_Source_TEST_TESTGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TEST_API ATESTGameMode(ATESTGameMode&&); \
	TEST_API ATESTGameMode(const ATESTGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEST_API, ATESTGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATESTGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATESTGameMode)


#define FID_TEST_Source_TEST_TESTGameMode_h_9_PROLOG
#define FID_TEST_Source_TEST_TESTGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TEST_Source_TEST_TESTGameMode_h_12_SPARSE_DATA \
	FID_TEST_Source_TEST_TESTGameMode_h_12_RPC_WRAPPERS \
	FID_TEST_Source_TEST_TESTGameMode_h_12_INCLASS \
	FID_TEST_Source_TEST_TESTGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TEST_Source_TEST_TESTGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TEST_Source_TEST_TESTGameMode_h_12_SPARSE_DATA \
	FID_TEST_Source_TEST_TESTGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TEST_Source_TEST_TESTGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_TEST_Source_TEST_TESTGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST_API UClass* StaticClass<class ATESTGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TEST_Source_TEST_TESTGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
