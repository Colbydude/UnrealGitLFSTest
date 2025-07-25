// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LoadingProcessTask.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLoadingProcessTask() {}

// ********** Begin Cross Module References ********************************************************
COMMONLOADINGSCREEN_API UClass* Z_Construct_UClass_ULoadingProcessInterface_NoRegister();
COMMONLOADINGSCREEN_API UClass* Z_Construct_UClass_ULoadingProcessTask();
COMMONLOADINGSCREEN_API UClass* Z_Construct_UClass_ULoadingProcessTask_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_CommonLoadingScreen();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULoadingProcessTask Function CreateLoadingScreenProcessTask **************
struct Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask_Statics
{
	struct LoadingProcessTask_eventCreateLoadingScreenProcessTask_Parms
	{
		UObject* WorldContextObject;
		FString ShowLoadingScreenReason;
		ULoadingProcessTask* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadingProcessTask.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowLoadingScreenReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ShowLoadingScreenReason;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoadingProcessTask_eventCreateLoadingScreenProcessTask_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask_Statics::NewProp_ShowLoadingScreenReason = { "ShowLoadingScreenReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoadingProcessTask_eventCreateLoadingScreenProcessTask_Parms, ShowLoadingScreenReason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowLoadingScreenReason_MetaData), NewProp_ShowLoadingScreenReason_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoadingProcessTask_eventCreateLoadingScreenProcessTask_Parms, ReturnValue), Z_Construct_UClass_ULoadingProcessTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask_Statics::NewProp_ShowLoadingScreenReason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULoadingProcessTask, nullptr, "CreateLoadingScreenProcessTask", Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask_Statics::LoadingProcessTask_eventCreateLoadingScreenProcessTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask_Statics::LoadingProcessTask_eventCreateLoadingScreenProcessTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULoadingProcessTask::execCreateLoadingScreenProcessTask)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_ShowLoadingScreenReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULoadingProcessTask**)Z_Param__Result=ULoadingProcessTask::CreateLoadingScreenProcessTask(Z_Param_WorldContextObject,Z_Param_ShowLoadingScreenReason);
	P_NATIVE_END;
}
// ********** End Class ULoadingProcessTask Function CreateLoadingScreenProcessTask ****************

// ********** Begin Class ULoadingProcessTask Function SetShowLoadingScreenReason ******************
struct Z_Construct_UFunction_ULoadingProcessTask_SetShowLoadingScreenReason_Statics
{
	struct LoadingProcessTask_eventSetShowLoadingScreenReason_Parms
	{
		FString InReason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadingProcessTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULoadingProcessTask_SetShowLoadingScreenReason_Statics::NewProp_InReason = { "InReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoadingProcessTask_eventSetShowLoadingScreenReason_Parms, InReason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InReason_MetaData), NewProp_InReason_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadingProcessTask_SetShowLoadingScreenReason_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingProcessTask_SetShowLoadingScreenReason_Statics::NewProp_InReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingProcessTask_SetShowLoadingScreenReason_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadingProcessTask_SetShowLoadingScreenReason_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULoadingProcessTask, nullptr, "SetShowLoadingScreenReason", Z_Construct_UFunction_ULoadingProcessTask_SetShowLoadingScreenReason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingProcessTask_SetShowLoadingScreenReason_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULoadingProcessTask_SetShowLoadingScreenReason_Statics::LoadingProcessTask_eventSetShowLoadingScreenReason_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingProcessTask_SetShowLoadingScreenReason_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoadingProcessTask_SetShowLoadingScreenReason_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULoadingProcessTask_SetShowLoadingScreenReason_Statics::LoadingProcessTask_eventSetShowLoadingScreenReason_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULoadingProcessTask_SetShowLoadingScreenReason()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoadingProcessTask_SetShowLoadingScreenReason_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULoadingProcessTask::execSetShowLoadingScreenReason)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShowLoadingScreenReason(Z_Param_InReason);
	P_NATIVE_END;
}
// ********** End Class ULoadingProcessTask Function SetShowLoadingScreenReason ********************

// ********** Begin Class ULoadingProcessTask Function Unregister **********************************
struct Z_Construct_UFunction_ULoadingProcessTask_Unregister_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadingProcessTask.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadingProcessTask_Unregister_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULoadingProcessTask, nullptr, "Unregister", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingProcessTask_Unregister_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoadingProcessTask_Unregister_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ULoadingProcessTask_Unregister()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoadingProcessTask_Unregister_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULoadingProcessTask::execUnregister)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Unregister();
	P_NATIVE_END;
}
// ********** End Class ULoadingProcessTask Function Unregister ************************************

// ********** Begin Class ULoadingProcessTask ******************************************************
void ULoadingProcessTask::StaticRegisterNativesULoadingProcessTask()
{
	UClass* Class = ULoadingProcessTask::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateLoadingScreenProcessTask", &ULoadingProcessTask::execCreateLoadingScreenProcessTask },
		{ "SetShowLoadingScreenReason", &ULoadingProcessTask::execSetShowLoadingScreenReason },
		{ "Unregister", &ULoadingProcessTask::execUnregister },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULoadingProcessTask;
UClass* ULoadingProcessTask::GetPrivateStaticClass()
{
	using TClass = ULoadingProcessTask;
	if (!Z_Registration_Info_UClass_ULoadingProcessTask.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LoadingProcessTask"),
			Z_Registration_Info_UClass_ULoadingProcessTask.InnerSingleton,
			StaticRegisterNativesULoadingProcessTask,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ULoadingProcessTask.InnerSingleton;
}
UClass* Z_Construct_UClass_ULoadingProcessTask_NoRegister()
{
	return ULoadingProcessTask::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULoadingProcessTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LoadingProcessTask.h" },
		{ "ModuleRelativePath", "Public/LoadingProcessTask.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask, "CreateLoadingScreenProcessTask" }, // 4131530592
		{ &Z_Construct_UFunction_ULoadingProcessTask_SetShowLoadingScreenReason, "SetShowLoadingScreenReason" }, // 633906606
		{ &Z_Construct_UFunction_ULoadingProcessTask_Unregister, "Unregister" }, // 3453081695
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadingProcessTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULoadingProcessTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CommonLoadingScreen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingProcessTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULoadingProcessTask_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_ULoadingProcessInterface_NoRegister, (int32)VTABLE_OFFSET(ULoadingProcessTask, ILoadingProcessInterface), false },  // 2401025800
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoadingProcessTask_Statics::ClassParams = {
	&ULoadingProcessTask::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingProcessTask_Statics::Class_MetaDataParams), Z_Construct_UClass_ULoadingProcessTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULoadingProcessTask()
{
	if (!Z_Registration_Info_UClass_ULoadingProcessTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoadingProcessTask.OuterSingleton, Z_Construct_UClass_ULoadingProcessTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULoadingProcessTask.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadingProcessTask);
ULoadingProcessTask::~ULoadingProcessTask() {}
// ********** End Class ULoadingProcessTask ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Parrot_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessTask_h__Script_CommonLoadingScreen_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULoadingProcessTask, ULoadingProcessTask::StaticClass, TEXT("ULoadingProcessTask"), &Z_Registration_Info_UClass_ULoadingProcessTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoadingProcessTask), 902481090U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Parrot_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessTask_h__Script_CommonLoadingScreen_4242249028(TEXT("/Script/CommonLoadingScreen"),
	Z_CompiledInDeferFile_FID_Parrot_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessTask_h__Script_CommonLoadingScreen_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Parrot_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessTask_h__Script_CommonLoadingScreen_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
