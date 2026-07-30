#pragma once

// Function prototypes for core/wateract.cpp
// Generated from Ghidra function signatures

// Original: core_wateract.cpp_staticInit_FUN_005511a0
// Address: 005511a0
void __cdecl staticInit(void);

// Original: core_wateract.cpp_factoryFunc_FUN_005511f0
// Address: 005511f0
CWaterActor * __cdecl factoryFunc(void);

// Original: core_wateract.cpp_CWaterActor_getActorType_FUN_00551210
// Address: 00551210
CDemonActorType * CWaterActor::getActorType(void);

// Original: core_wateract.cpp_CWaterActor_ctor_FUN_00551220
// Address: 00551220
CWaterActor * __cdecl CWaterActor::ctor(CWaterActor *this_ptr);

// Original: core_wateract.cpp_CWaterActor_setup_FUN_00551370
// Address: 00551370
void CWaterActor::setup(CWaterActor *param_1);

// Original: core_wateract.cpp_CWaterActor_updateWorldPositions_FUN_00551920
// Address: 00551920
void __cdecl CWaterActor::updateWorldPositions(CWaterActor *this_ptr);

// Original: core_wateract.cpp_FUN_005519c0
// Address: 005519c0
void FUN_005519c0(int param_1);

// Original: core_wateract.cpp_CWaterActor_process_FUN_00551a80
// Address: 00551a80
void __cdecl CWaterActor::process(CWaterActor *this_ptr,float delta_time);

// Original: core_wateract.cpp_CWaterActor_renderTransparent_FUN_00551c00
// Address: 00551c00
int CWaterActor::renderTransparent(CDemonActor *param_1);

// Original: core_wateract.cpp_CWaterActor_getBoundingBox_FUN_00551e40
// Address: 00551e40
void CWaterActor::getBoundingBox(int param_1,float *param_2);

// Original: core_wateract.cpp_CWaterActor_archive_FUN_00551ea0
// Address: 00551ea0
void CWaterActor::archive(CDemonActor *param_1);

// Original: core_wateract.cpp_CWaterActor_getCollisionType_FUN_005520a0
// Address: 005520a0
ECollisionType __cdecl CWaterActor::getCollisionType(CWaterActor *this_ptr,SCollisionInfo *collision_info);

// Original: core_wateract.cpp_CWaterActor_getGroundType_FUN_005520c0
// Address: 005520c0
undefined4 CWaterActor::getGroundType(void);

// Original: core_wateract.cpp_CWaterActor_customRayIntersect_FUN_005520d0
// Address: 005520d0
float CWaterActor::customRayIntersect(int param_1,CVector3f *param_2,CVector3f *param_3,float *param_4);

// Original: core_wateract.cpp_CWaterActor_onLaserHit_FUN_005522a0
// Address: 005522a0
void __cdecl CWaterActor::onLaserHit(CWaterActor *this_ptr,SLaserInfo *laser_info);

// Original: core_wateract.cpp_CWaterActor_dtor_FUN_005522d0
// Address: 005522d0
CWaterActor * __cdecl CWaterActor::dtor(CWaterActor *this_ptr,uint flags);

// Original: core_wateract.cpp_FUN_00552340
// Address: 00552340
undefined4 FUN_00552340(undefined4 param_1);

// Original: core_wateract.cpp_FUN_00552350
// Address: 00552350
undefined4 FUN_00552350(undefined4 param_1);

// Original: core_wateract.cpp_FUN_00552360
// Address: 00552360
void FUN_00552360(void *param_1);
