#pragma once

// Function prototypes for core/beast.cpp
// Generated from Ghidra function signatures

// Original: core_beast.cpp_staticInit_FUN_004181b0
// Address: 004181b0
void __cdecl staticInit(void);

// Original: core_beast.cpp_factoryFunc_FUN_004181e0
// Address: 004181e0
CBeast * __cdecl factoryFunc(void);

// Original: core_beast.cpp_CBeast_getActorType_FUN_00418210
// Address: 00418210
CDemonActorType * __cdecl CBeast::getActorType(CBeast *this_ptr);

// Original: core_beast.cpp_CBeast_ctor_FUN_00418220
// Address: 00418220
CBeast * __cdecl CBeast::ctor(CBeast *this_ptr);

// Original: core_beast.cpp_CBeast_setup_FUN_00418280
// Address: 00418280
void __cdecl CBeast::setup(CBeast *this_ptr);

// Original: core_beast.cpp_CBeast_process_FUN_004182a0
// Address: 004182a0
void __cdecl CBeast::process(CBeast *this_ptr,float delta_time);

// Original: core_beast.cpp_CBeast_archive_FUN_00418330
// Address: 00418330
void __cdecl CBeast::archive(CBeast *this_ptr);

// Original: core_beast.cpp_CBeast_processDamage_FUN_00418380
// Address: 00418380
void __cdecl CBeast::processDamage(CBeast *this_ptr,SDamageInfo *damage_info);

// Original: core_beast.cpp_CBeast_getDeathState_FUN_004183a0
// Address: 004183a0
int __cdecl CBeast::getDeathState(CBeast *this_ptr);

// Original: core_beast.cpp_CBeast_getTargetPoints_FUN_004183b0
// Address: 004183b0
int __cdecl CBeast::getTargetPoints(CBeast *this_ptr,CVector3f *out_points_array);

// Original: core_beast.cpp_CBeast_hasCollision_FUN_00418400
// Address: 00418400
int __cdecl CBeast::hasCollision(CBeast *this_ptr,SCollisionInfo *collision_info);

// Original: core_beast.cpp_CBeast_getPropertyList_FUN_00418420
// Address: 00418420
void __cdecl CBeast::getPropertyList(CBeast *this_ptr,CActorPropertyList *property_list);

// Original: core_beast.cpp_CBeast_addFilesToExtract_FUN_00418460
// Address: 00418460
void __cdecl CBeast::addFilesToExtract(CBeast *this_ptr,_FILE *file_handle);

// Original: core_beast.cpp_CBeast_dtor_FUN_00418490
// Address: 00418490
CBeast * __cdecl CBeast::dtor(CBeast *this_ptr,uint flags);
