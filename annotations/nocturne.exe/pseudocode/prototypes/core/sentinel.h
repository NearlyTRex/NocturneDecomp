#pragma once

// Function prototypes for core/sentinel.cpp
// Generated from Ghidra function signatures

// Original: core_sentinel.cpp_staticInit_FUN_005058c0
// Address: 005058c0
void __cdecl staticInit(void);

// Original: core_sentinel.cpp_factoryFuncSentinel_FUN_005058f0
// Address: 005058f0
CSentinel * __cdecl factoryFuncSentinel(void);

// Original: core_sentinel.cpp_CSentinel_getActorType_FUN_00505910
// Address: 00505910
CDemonActorType * __cdecl CSentinel::getActorType(CSentinel *this_ptr);

// Original: core_sentinel.cpp_CSentinel_ctor_FUN_00505920
// Address: 00505920
CSentinel * __cdecl CSentinel::ctor(CSentinel *this_ptr);

// Original: core_sentinel.cpp_CSentinel_setup_FUN_00505990
// Address: 00505990
void __cdecl CSentinel::setup(CSentinel *this_ptr);

// Original: core_sentinel.cpp_CSentinel_process_FUN_00505ba0
// Address: 00505ba0
void __cdecl CSentinel::process(CSentinel *this_ptr,float delta_time);

// Original: core_sentinel.cpp_CSentinel_attractActorToward_FUN_005066e0
// Address: 005066e0
int __cdecl CSentinel::attractActorToward(CSentinel *this_ptr,CDemonActor *actor,CVector3f *target_local_point);

// Original: core_sentinel.cpp_CSentinel_archive_FUN_005067e0
// Address: 005067e0
void __cdecl CSentinel::archive(CSentinel *this_ptr);

// Original: core_sentinel.cpp_CSentinel_processDamage_FUN_00506840
// Address: 00506840
void __cdecl CSentinel::processDamage(CSentinel *this_ptr,SDamageInfo *damage_info);

// Original: core_sentinel.cpp_CSentinel_getTargetPoints_FUN_00506940
// Address: 00506940
int __cdecl CSentinel::getTargetPoints(CSentinel *this_ptr,CVector3f *out_points_array);

// Original: core_sentinel.cpp_CSentinel_getCollisionType_FUN_00506a60
// Address: 00506a60
ECollisionType __cdecl CSentinel::getCollisionType(CSentinel *this_ptr,SCollisionInfo *collision_info);

// Original: core_sentinel.cpp_CSentinel_dtor_FUN_00506a80
// Address: 00506a80
CSentinel * __cdecl CSentinel::dtor(CSentinel *this_ptr,uint flags);
