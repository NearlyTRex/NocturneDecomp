#pragma once

// Function prototypes for core/dmodel.cpp
// Generated from Ghidra function signatures

// Original: core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00452590
// Address: 00452590
void __cdecl CKeyFramedModel::ctor(undefined1 *param_1);

// Original: core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00452630
// Address: 00452630
undefined4 __cdecl CKeyFramedModel::dtor(undefined4 param_1);

// Original: core_dmodel.cpp_CKeyFramedModel_load_FUN_00452650
// Address: 00452650
void __cdecl CKeyFramedModel::load(char *param_1,char *param_2);

// Original: core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_004527a0
// Address: 004527a0
void __cdecl CKeyFramedModel::readBinaryModel(int param_1,undefined4 param_2);

// Original: core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00452990
// Address: 00452990
int __cdecl CKeyFramedModel::readTextModel(int param_1,int param_2);

// Original: core_dmodel.cpp_FUN_00452f10
// Address: 00452f10
void FUN_00452f10(int param_1);

// Original: core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00453040
// Address: 00453040
void __cdecl CKeyFramedModel::prepareForRender(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);

// Original: core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00453080
// Address: 00453080
int __cdecl CKeyFramedModel::getFrameVertices(int param_1,int param_2);

// Original: core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004530c0
// Address: 004530c0
void __cdecl CKeyFramedModel::rotateAndLightVertices(int param_1,undefined4 param_2);

// Original: core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00453170
// Address: 00453170
void __cdecl CKeyFramedModel::submitToRenderer(int param_1,int *param_2,undefined4 param_3);

// Original: core_dmodel.cpp_CKeyFramedModel_allocate_FUN_004533e0
// Address: 004533e0
void CKeyFramedModel::allocate(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);

// Original: core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00453620
// Address: 00453620
void __cdecl CKeyFramedModel::calcNormals(int param_1);

// Original: core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_004537d0
// Address: 004537d0
void __cdecl CKeyFramedModel::calculateFrameBounds(int param_1);

// Original: core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00453950
// Address: 00453950
void __cdecl CKeyFramedModel::captureTextures(int param_1);

// Original: core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_00453990
// Address: 00453990
float CKeyFramedModel::intersectRay(int param_1,int param_2,undefined4 param_3,undefined4 param_4,float *param_5);

// Original: core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_00453e10
// Address: 00453e10
uint __cdecl CKeyFramedModel::intersectCylinder(int param_1,int param_2,undefined4 param_3,float *param_4);

// Original: core_dmodel.cpp_CKeyFramedModel_getFloorHeight_FUN_00453f00
// Address: 00453f00
undefined4 __cdecl CKeyFramedModel::getFloorHeight(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,float *param_6);

// Original: core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00453ff0
// Address: 00453ff0
void __cdecl CKeyFramedModel::buildCollisionTriList(int param_1);

// Original: core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00454100
// Address: 00454100
void __cdecl CKeyFramedModel::populateCollisionList(int param_1,undefined4 *param_2);

// Original: core_dmodel.cpp_loadModel_FUN_004543b0
// Address: 004543b0
int __cdecl loadModel(undefined4 param_1);

// Original: core_dmodel.cpp_FUN_00454460
// Address: 00454460
void FUN_00454460(void);

// Original: core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
// Address: 00454490
int __cdecl CKeyFramedModelInstance::ctor(int param_1);

// Original: core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_004544b0
// Address: 004544b0
void __cdecl CKeyFramedModelInstance::init(undefined4 *param_1);

// Original: core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
// Address: 004544d0
void __cdecl CKeyFramedModelInstance::prepareForRendering(undefined4 param_1,float param_2);

// Original: core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
// Address: 00454510
void __cdecl CKeyFramedModelInstance::preCache(int param_1);

// Original: core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
// Address: 00454530
undefined4 __cdecl CKeyFramedModelInstance::getModelPtr(int param_1);

// Original: core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
// Address: 00454580
void __cdecl CKeyFramedModelInstance::setModelName(int param_1,char *param_2);
