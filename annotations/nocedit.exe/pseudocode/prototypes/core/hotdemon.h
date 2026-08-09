#pragma once

// Function prototypes for core/hotdemon.cpp
// Generated from Ghidra function signatures

// Original: core_hotdemon.cpp_staticInit_FUN_004f6c30
// Address: 004f6c30
void __cdecl staticInit(void);

// Original: core_hotdemon.cpp_factoryFuncHotDemon_FUN_004f6c60
// Address: 004f6c60
CHotDemon * __cdecl factoryFuncHotDemon(void);

// Original: core_hotdemon.cpp_CHotDemon_getActorType_FUN_004f6c90
// Address: 004f6c90
CDemonActorType * __cdecl CHotDemon::getActorType(CHotDemon *this_ptr);

// Original: core_hotdemon.cpp_CHotDemon_ctor_FUN_004f6ca0
// Address: 004f6ca0
CHotDemon * __cdecl CHotDemon::ctor(CHotDemon *this_ptr);

// Original: core_hotdemon.cpp_CHotDemon_setup_FUN_004f6d00
// Address: 004f6d00
void __cdecl CHotDemon::setup(CHotDemon *this_ptr);

// Original: core_hotdemon.cpp_CHotDemon_process_FUN_004f6f20
// Address: 004f6f20
void __cdecl CHotDemon::process(CHotDemon *this_ptr,float delta_time);

// Original: core_hotdemon.cpp_CHotDemon_getDeathState_FUN_004f7680
// Address: 004f7680
EDeathState __cdecl CHotDemon::getDeathState(CHotDemon *this_ptr);

// Original: core_hotdemon.cpp_CHotDemon_archive_FUN_004f76c0
// Address: 004f76c0
void __cdecl CHotDemon::archive(CHotDemon *this_ptr);

// Original: core_hotdemon.cpp_CHotDemon_processDamage_FUN_004f7720
// Address: 004f7720
void __cdecl CHotDemon::processDamage(CHotDemon *this_ptr,SDamageInfo *damage_info);

// Original: core_hotdemon.cpp_CHotDemon_getTargetPoints_FUN_004f78f0
// Address: 004f78f0
int __cdecl CHotDemon::getTargetPoints(CHotDemon *this_ptr,CVector3f *out_points_array);

// Original: core_hotdemon.cpp_CHotDemon_getCollisionType_FUN_004f79b0
// Address: 004f79b0
ECollisionType __cdecl CHotDemon::getCollisionType(CHotDemon *this_ptr,SCollisionInfo *collision_info);

// Original: core_hotdemon.cpp_CHotDemon_getPropertyList_FUN_004f79d0
// Address: 004f79d0
void __cdecl CHotDemon::getPropertyList(CHotDemon *this_ptr,CActorPropertyList *property_list);

// Original: core_hotdemon.cpp_CHotDemon_addFilesToExtract_FUN_004f7a10
// Address: 004f7a10
void __cdecl CHotDemon::addFilesToExtract(CHotDemon *this_ptr,_FILE *file_handle);

// Original: core_hotdemon.cpp_CHotDemon_dtor_FUN_004f7a40
// Address: 004f7a40
CDemonActor * __cdecl CHotDemon::dtor(CHotDemon *this_ptr,uint flags);
