#pragma once

// Function prototypes for core/wateract.cpp
// Generated from Ghidra function signatures

// Original: core_wateract.cpp_CWaterActor_ctor_FUN_00551220
// Address: 00551220
int CWaterActor::ctor(undefined4 param_1);

// Original: core_wateract.cpp_CWaterActor_setup_FUN_00551370
// Address: 00551370
void CWaterActor::setup(int param_1);

// Original: core_wateract.cpp_CWaterActor_updateWorldPositions_FUN_00551920
// Address: 00551920
void __cdecl CWaterActor::updateWorldPositions(int param_1);

// Original: core_wateract.cpp_CWaterActor_process_FUN_00551a80
// Address: 00551a80
void CWaterActor::process(float param_1,float param_2);

// Original: core_wateract.cpp_CWaterActor_archive_FUN_00551ea0
// Address: 00551ea0
void CWaterActor::archive(int param_1);

// Original: core_wateract.cpp_CWaterActor_getCollisionType_FUN_005520a0
// Address: 005520a0
undefined4 CWaterActor::getCollisionType(undefined4 param_1,int *param_2);

// Original: core_wateract.cpp_CWaterActor_customRayIntersect_FUN_005520d0
// Address: 005520d0
float CWaterActor::customRayIntersect(int param_1,undefined4 param_2,undefined4 param_3,float *param_4);

// Original: core_wateract.cpp_CWaterActor_onLaserHit_FUN_005522a0
// Address: 005522a0
void CWaterActor::onLaserHit(undefined4 param_1,int param_2);
