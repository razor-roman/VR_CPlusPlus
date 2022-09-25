// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VR_C_PlusPlus/CharacterActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterActor() {}
// Cross Module References
	VR_C_PLUSPLUS_API UClass* Z_Construct_UClass_ACharacterActor_NoRegister();
	VR_C_PLUSPLUS_API UClass* Z_Construct_UClass_ACharacterActor();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_VR_C_PlusPlus();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void ACharacterActor::StaticRegisterNativesACharacterActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACharacterActor);
	UClass* Z_Construct_UClass_ACharacterActor_NoRegister()
	{
		return ACharacterActor::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VROrigin_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VROrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_VR_C_PlusPlus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CharacterActor.h" },
		{ "ModuleRelativePath", "CharacterActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterActor_Statics::NewProp_VROrigin_MetaData[] = {
		{ "Category", "CharacterActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharacterActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterActor_Statics::NewProp_VROrigin = { "VROrigin", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterActor, VROrigin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterActor_Statics::NewProp_VROrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterActor_Statics::NewProp_VROrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterActor_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "CharacterActor" },
		{ "Comment", "// UPROPERTY()\n// UMotionControllerComponent* MotionControllerRight;\n// UPROPERTY()\n// UMotionControllerComponent* MotionControllerLeft;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharacterActor.h" },
		{ "ToolTip", "UPROPERTY()\nUMotionControllerComponent* MotionControllerRight;\nUPROPERTY()\nUMotionControllerComponent* MotionControllerLeft;" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterActor_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterActor, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterActor_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterActor_Statics::NewProp_Camera_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacterActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterActor_Statics::NewProp_VROrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterActor_Statics::NewProp_Camera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterActor_Statics::ClassParams = {
		&ACharacterActor::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACharacterActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACharacterActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacterActor()
	{
		if (!Z_Registration_Info_UClass_ACharacterActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacterActor.OuterSingleton, Z_Construct_UClass_ACharacterActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACharacterActor.OuterSingleton;
	}
	template<> VR_C_PLUSPLUS_API UClass* StaticClass<ACharacterActor>()
	{
		return ACharacterActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterActor);
	struct Z_CompiledInDeferFile_FID_VR_C_PlusPlus_Source_VR_C_PlusPlus_CharacterActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_C_PlusPlus_Source_VR_C_PlusPlus_CharacterActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterActor, ACharacterActor::StaticClass, TEXT("ACharacterActor"), &Z_Registration_Info_UClass_ACharacterActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterActor), 795433134U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_C_PlusPlus_Source_VR_C_PlusPlus_CharacterActor_h_2838739579(TEXT("/Script/VR_C_PlusPlus"),
		Z_CompiledInDeferFile_FID_VR_C_PlusPlus_Source_VR_C_PlusPlus_CharacterActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VR_C_PlusPlus_Source_VR_C_PlusPlus_CharacterActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
