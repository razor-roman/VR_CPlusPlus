// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VR_C_PlusPlus/VR_C_PlusPlusGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVR_C_PlusPlusGameModeBase() {}
// Cross Module References
	VR_C_PLUSPLUS_API UClass* Z_Construct_UClass_AVR_C_PlusPlusGameModeBase_NoRegister();
	VR_C_PLUSPLUS_API UClass* Z_Construct_UClass_AVR_C_PlusPlusGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_VR_C_PlusPlus();
// End Cross Module References
	void AVR_C_PlusPlusGameModeBase::StaticRegisterNativesAVR_C_PlusPlusGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVR_C_PlusPlusGameModeBase);
	UClass* Z_Construct_UClass_AVR_C_PlusPlusGameModeBase_NoRegister()
	{
		return AVR_C_PlusPlusGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AVR_C_PlusPlusGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVR_C_PlusPlusGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VR_C_PlusPlus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_C_PlusPlusGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "VR_C_PlusPlusGameModeBase.h" },
		{ "ModuleRelativePath", "VR_C_PlusPlusGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVR_C_PlusPlusGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVR_C_PlusPlusGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVR_C_PlusPlusGameModeBase_Statics::ClassParams = {
		&AVR_C_PlusPlusGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AVR_C_PlusPlusGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_C_PlusPlusGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVR_C_PlusPlusGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AVR_C_PlusPlusGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVR_C_PlusPlusGameModeBase.OuterSingleton, Z_Construct_UClass_AVR_C_PlusPlusGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVR_C_PlusPlusGameModeBase.OuterSingleton;
	}
	template<> VR_C_PLUSPLUS_API UClass* StaticClass<AVR_C_PlusPlusGameModeBase>()
	{
		return AVR_C_PlusPlusGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVR_C_PlusPlusGameModeBase);
	struct Z_CompiledInDeferFile_FID_VR_C_PlusPlus_Source_VR_C_PlusPlus_VR_C_PlusPlusGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_C_PlusPlus_Source_VR_C_PlusPlus_VR_C_PlusPlusGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVR_C_PlusPlusGameModeBase, AVR_C_PlusPlusGameModeBase::StaticClass, TEXT("AVR_C_PlusPlusGameModeBase"), &Z_Registration_Info_UClass_AVR_C_PlusPlusGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVR_C_PlusPlusGameModeBase), 4160904261U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_C_PlusPlus_Source_VR_C_PlusPlus_VR_C_PlusPlusGameModeBase_h_2802700925(TEXT("/Script/VR_C_PlusPlus"),
		Z_CompiledInDeferFile_FID_VR_C_PlusPlus_Source_VR_C_PlusPlus_VR_C_PlusPlusGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VR_C_PlusPlus_Source_VR_C_PlusPlus_VR_C_PlusPlusGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
