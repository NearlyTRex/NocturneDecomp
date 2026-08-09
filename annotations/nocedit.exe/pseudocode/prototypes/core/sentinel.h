#pragma once

// Function prototypes for core/sentinel.cpp
// Generated from Ghidra function signatures

// Original: core_sentinel.cpp_staticInit_FUN_00567d40
// Address: 00567d40
void __cdecl staticInit(void);

// Original: core_sentinel.cpp_factoryFuncSentinel_FUN_00567d70
// Address: 00567d70
CSentinel * __cdecl factoryFuncSentinel(void);

// Original: core_sentinel.cpp_CSentinel_getActorType_FUN_00567da0
// Address: 00567da0
CDemonActorType * __cdecl CSentinel::getActorType(CSentinel *this_ptr);

// Original: core_sentinel.cpp_CSentinel_ctor_FUN_00567db0
// Address: 00567db0
CSentinel * __cdecl CSentinel::ctor(CSentinel *this_ptr);

// Original: core_sentinel.cpp_CSentinel_setup_FUN_00567e20
// Address: 00567e20
void __cdecl CSentinel::setup(CSentinel *this_ptr);

// Original: core_sentinel.cpp_CSentinel_process_FUN_00568030
// Address: 00568030
void __cdecl CSentinel::process(CSentinel *this_ptr,float delta_time);

// Original: core_sentinel.cpp_CSentinel_attractActorToward_FUN_00568b70
// Address: 00568b70
int __cdecl CSentinel::attractActorToward(CSentinel *this_ptr,CDemonActor *actor,CVector3f *target_local_point);

// Original: core_sentinel.cpp_CSentinel_archive_FUN_00568c70
// Address: 00568c70
void __cdecl CSentinel::archive(CSentinel *this_ptr);

// Original: core_sentinel.cpp_CSentinel_processDamage_FUN_00568cd0
// Address: 00568cd0
void __cdecl CSentinel::processDamage(CSentinel *this_ptr,SDamageInfo *damage_info);

// Original: core_sentinel.cpp_CSentinel_getTargetPoints_FUN_00568dd0
// Address: 00568dd0
int __cdecl CSentinel::getTargetPoints(CSentinel *this_ptr,CVector3f *out_points_array);

// Original: core_sentinel.cpp_CSentinel_getCollisionType_FUN_00568ef0
// Address: 00568ef0
ECollisionType __cdecl CSentinel::getCollisionType(CSentinel *this_ptr,SCollisionInfo *collision_info);

// Original: core_sentinel.cpp_CSentinel_getPropertyList_FUN_00568f10
// Address: 00568f10
void __cdecl CSentinel::getPropertyList(CSentinel *this_ptr,CActorPropertyList *property_list);

// Original: core_sentinel.cpp_CSentinel_addFilesToExtract_FUN_00568f50
// Address: 00568f50
void __cdecl CSentinel::addFilesToExtract(CSentinel *this_ptr,_FILE *file_handle);

// Original: core_sentinel.cpp_CSentinel_dtor_FUN_00568f80
// Address: 00568f80
CSentinel * __cdecl CSentinel::dtor(CSentinel *this_ptr,uint flags);
