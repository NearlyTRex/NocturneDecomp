#pragma once

// Function prototypes for core/drone.cpp
// Generated from Ghidra function signatures

// Original: core_drone.cpp_staticInit_FUN_004628e0
// Address: 004628e0
void __cdecl staticInit(void);

// Original: core_drone.cpp_FUN_00462910
// Address: 00462910
void FUN_00462910(void);

// Original: core_drone.cpp_FUN_00462930
// Address: 00462930
CDemonActorType * FUN_00462930(void);

// Original: core_drone.cpp_CDrone_ctor_FUN_00462940
// Address: 00462940
CDrone * __cdecl CDrone::ctor(CDrone *this_ptr);

// Original: core_drone.cpp_CDrone_setup_FUN_004629b0
// Address: 004629b0
void CDrone::setup(CEnemy *param_1);

// Original: core_drone.cpp_CDrone_process_FUN_00462a60
// Address: 00462a60
void CDrone::process(CEnemy *param_1,float param_2);

// Original: core_drone.cpp_FUN_004630e0
// Address: 004630e0
void FUN_004630e0(CEnemy *param_1);

// Original: core_drone.cpp_CDrone_processDamage_FUN_00463150
// Address: 00463150
void CDrone::processDamage(CEnemy *param_1,SDamageInfo *param_2);

// Original: core_drone.cpp_CDrone_getTargetPoints_FUN_004632c0
// Address: 004632c0
int __cdecl CDrone::getTargetPoints(CDrone *this_ptr,CVector3f *out_points_array);

// Original: core_drone.cpp_CDrone_dtor_FUN_00463310
// Address: 00463310
CDrone * __cdecl CDrone::dtor(CDrone *this_ptr,uint flags);
