#pragma once

// Function prototypes for core/bat.cpp
// Generated from Ghidra function signatures

// Original: core_bat.cpp_staticInit_FUN_00411910
// Address: 00411910
void __cdecl staticInit(void);

// Original: core_bat.cpp_FUN_00411940
// Address: 00411940
float FUN_00411940(float param_1,float param_2);

// Original: core_bat.cpp_factoryFunc_FUN_004119e0
// Address: 004119e0
CBat * __cdecl factoryFunc(void);

// Original: core_bat.cpp_CBat_getActorType_FUN_00411a00
// Address: 00411a00
CDemonActorType * CBat::getActorType(void);

// Original: core_bat.cpp_FUN_00411a10
// Address: 00411a10
CKeyFramedModel ** FUN_00411a10(CDemonActor *param_1);

// Original: core_bat.cpp_CBat_setup_FUN_00411ae0
// Address: 00411ae0
void CBat::setup(CBat *param_1);

// Original: core_bat.cpp_CBat_archive_FUN_00411b50
// Address: 00411b50
void CBat::archive(CDemonActor *param_1);

// Original: core_bat.cpp_CBat_process_FUN_00411c40
// Address: 00411c40
void CBat::process(CBat *param_1,float param_2);

// Original: core_bat.cpp_CBat_renderOpaque_FUN_00411e30
// Address: 00411e30
int CBat::renderOpaque(CDemonActor *param_1);

// Original: core_bat.cpp_CBat_getBoundingBox_FUN_00411ea0
// Address: 00411ea0
undefined4 * CBat::getBoundingBox(int param_1,undefined4 *param_2);

// Original: core_bat.cpp_CBat_updateCoursePosition_FUN_00411f20
// Address: 00411f20
void __cdecl CBat::updateCoursePosition(CBat *this_ptr);

// Original: core_bat.cpp_CStairs_dtor_FUN_00412000
// Address: 00412000
CStairs * __cdecl CStairs::dtor(CStairs *this_ptr,uint flags);

// Original: core_bat.cpp_FUN_0041206c
// Address: 0041206c
void FUN_0041206c(void);

// Original: core_bat.cpp_FUN_00412080
// Address: 00412080
undefined4 * FUN_00412080(undefined4 *param_1,undefined4 *param_2);

// Original: core_bat.cpp_FUN_00412090
// Address: 00412090
undefined4 * FUN_00412090(undefined4 *param_1,undefined4 *param_2);
