#pragma once

// Function prototypes for core/hotdemon.cpp
// Generated from Ghidra function signatures

// Original: core_hotdemon.cpp_staticInit_FUN_004b8c40
// Address: 004b8c40
void __cdecl staticInit(void);

// Original: core_hotdemon.cpp_factoryFunc_FUN_004b8c70
// Address: 004b8c70
CHotDemon * __cdecl factoryFunc(void);

// Original: core_hotdemon.cpp_CHotDemon_getActorType_FUN_004b8c90
// Address: 004b8c90
CDemonActorType * __cdecl CHotDemon::getActorType(CHotDemon *this_ptr);

// Original: core_hotdemon.cpp_CHotDemon_ctor_FUN_004b8ca0
// Address: 004b8ca0
CHotDemon * __cdecl CHotDemon::ctor(CHotDemon *this_ptr);

// Original: core_hotdemon.cpp_CHotDemon_setup_FUN_004b8d00
// Address: 004b8d00
void __cdecl CHotDemon::setup(CHotDemon *this_ptr);

// Original: core_hotdemon.cpp_CHotDemon_process_FUN_004b8f20
// Address: 004b8f20
void __cdecl CHotDemon::process(CHotDemon *this_ptr,float delta_time);

// Original: core_hotdemon.cpp_CHotDemon_getDeathState_FUN_004b9680
// Address: 004b9680
EDeathState __cdecl CHotDemon::getDeathState(CHotDemon *this_ptr);

// Original: core_hotdemon.cpp_CHotDemon_archive_FUN_004b96c0
// Address: 004b96c0
void __cdecl CHotDemon::archive(CHotDemon *this_ptr);

// Original: core_hotdemon.cpp_CHotDemon_processDamage_FUN_004b9720
// Address: 004b9720
void __cdecl CHotDemon::processDamage(CHotDemon *this_ptr,SDamageInfo *damage_info);

// Original: core_hotdemon.cpp_CHotDemon_getTargetPoints_FUN_004b98f0
// Address: 004b98f0
int __cdecl CHotDemon::getTargetPoints(CHotDemon *this_ptr,CVector3f *out_points_array);

// Original: core_hotdemon.cpp_CHotDemon_getCollisionType_FUN_004b99b0
// Address: 004b99b0
ECollisionType __cdecl CHotDemon::getCollisionType(CHotDemon *this_ptr,SCollisionInfo *collision_info);

// Original: core_hotdemon.cpp_CHotDemon_dtor_FUN_004b99d0
// Address: 004b99d0
CDemonActor * __cdecl CHotDemon::dtor(CHotDemon *this_ptr,uint flags);
