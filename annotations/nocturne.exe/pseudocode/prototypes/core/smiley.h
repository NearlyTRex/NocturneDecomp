#pragma once

// Function prototypes for core/smiley.cpp
// Generated from Ghidra function signatures

// Original: core_smiley.cpp_staticInit_FUN_0051fc90
// Address: 0051fc90
void __cdecl staticInit(void);

// Original: core_smiley.cpp_factoryFuncSmiley_FUN_0051fcc0
// Address: 0051fcc0
CSmiley * __cdecl factoryFuncSmiley(void);

// Original: core_smiley.cpp_CSmiley_getActorType_FUN_0051fce0
// Address: 0051fce0
CDemonActorType * __cdecl CSmiley::getActorType(CSmiley *this_ptr);

// Original: core_smiley.cpp_CSmiley_ctor_FUN_0051fcf0
// Address: 0051fcf0
CSmiley * __cdecl CSmiley::ctor(CSmiley *this_ptr);

// Original: core_smiley.cpp_CSmiley_setup_FUN_0051fd90
// Address: 0051fd90
void __cdecl CSmiley::setup(CSmiley *this_ptr);

// Original: core_smiley.cpp_CSmiley_process_FUN_005200c0
// Address: 005200c0
void __cdecl CSmiley::process(CSmiley *this_ptr,float delta_time);

// Original: core_smiley.cpp_CSmiley_attractActorToward_FUN_00520a20
// Address: 00520a20
int __cdecl CSmiley::attractActorToward(CSmiley *this_ptr,CDemonActor *actor,CVector3f *target_local_point);

// Original: core_smiley.cpp_CSmiley_archive_FUN_00520ae0
// Address: 00520ae0
void __cdecl CSmiley::archive(CSmiley *this_ptr);

// Original: core_smiley.cpp_CSmiley_reset_FUN_00520b40
// Address: 00520b40
void __cdecl CSmiley::reset(CSmiley *this_ptr);

// Original: core_smiley.cpp_CSmiley_processDismemberment_FUN_00520b60
// Address: 00520b60
void __cdecl CSmiley::processDismemberment(CSmiley *this_ptr,SDamageInfo *damage_info);

// Original: core_smiley.cpp_CSmiley_processDamage_FUN_00520e40
// Address: 00520e40
void __cdecl CSmiley::processDamage(CSmiley *this_ptr,SDamageInfo *damage_info);

// Original: core_smiley.cpp_CSmiley_getTargetPoints_FUN_00520f50
// Address: 00520f50
int __cdecl CSmiley::getTargetPoints(CSmiley *this_ptr,CVector3f *out_points_array);

// Original: core_smiley.cpp_CSmiley_getCollisionType_FUN_005210b0
// Address: 005210b0
ECollisionType __cdecl CSmiley::getCollisionType(CSmiley *this_ptr,SCollisionInfo *collision_info);

// Original: core_smiley.cpp_CSmiley_dtor_FUN_005210d0
// Address: 005210d0
CSmiley * __cdecl CSmiley::dtor(CSmiley *this_ptr,uint flags);
