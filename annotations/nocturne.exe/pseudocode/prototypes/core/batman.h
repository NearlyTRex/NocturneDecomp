#pragma once

// Function prototypes for core/batman.cpp
// Generated from Ghidra function signatures

// Original: core_batman.cpp_staticInit_FUN_00413380
// Address: 00413380
void __cdecl staticInit(void);

// Original: core_batman.cpp_factoryFuncBatman_FUN_004133b0
// Address: 004133b0
CBatman * __cdecl factoryFuncBatman(void);

// Original: core_batman.cpp_CBatman_getActorType_FUN_004133d0
// Address: 004133d0
CDemonActorType * __cdecl CBatman::getActorType(CBatman *this_ptr);

// Original: core_batman.cpp_CBatman_ctor_FUN_004133e0
// Address: 004133e0
CBatman * __cdecl CBatman::ctor(CBatman *this_ptr);

// Original: core_batman.cpp_CBatman_setup_FUN_004134a0
// Address: 004134a0
void __cdecl CBatman::setup(CBatman *this_ptr);

// Original: core_batman.cpp_CBatman_pickRandomMovementState_FUN_00413780
// Address: 00413780
void __cdecl CBatman::pickRandomMovementState(CBatman *this_ptr);

// Original: core_batman.cpp_CBatman_process_FUN_00413800
// Address: 00413800
void __cdecl CBatman::process(CBatman *this_ptr,float delta_time);

// Original: core_batman.cpp_CBatman_renderOpaque_FUN_00414340
// Address: 00414340
int __cdecl CBatman::renderOpaque(CBatman *this_ptr);

// Original: core_batman.cpp_CBatman_archive_FUN_00414510
// Address: 00414510
void __cdecl CBatman::archive(CBatman *this_ptr);

// Original: core_batman.cpp_CBatman_processDismemberment_FUN_004145f0
// Address: 004145f0
void __cdecl CBatman::processDismemberment(CBatman *this_ptr,SDamageInfo *damage_info);

// Original: core_batman.cpp_CBatman_processDamage_FUN_00414930
// Address: 00414930
void __cdecl CBatman::processDamage(CBatman *this_ptr,SDamageInfo *damage_info);

// Original: core_batman.cpp_CBatman_getTargetPoints_FUN_00414b40
// Address: 00414b40
int __cdecl CBatman::getTargetPoints(CBatman *this_ptr,CVector3f *out_points_array);

// Original: core_batman.cpp_CBatman_getCollisionType_FUN_00414c40
// Address: 00414c40
ECollisionType __cdecl CBatman::getCollisionType(CBatman *this_ptr,SCollisionInfo *collision_info);

// Original: core_batman.cpp_CBatman_dtor_FUN_00414c60
// Address: 00414c60
CBatman * __cdecl CBatman::dtor(CBatman *this_ptr,uint flags);
