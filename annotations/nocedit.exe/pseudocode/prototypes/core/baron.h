#pragma once

// Function prototypes for core/baron.cpp
// Generated from Ghidra function signatures

// Original: core_baron.cpp_staticInit_FUN_00412b20
// Address: 00412b20
void __cdecl staticInit(void);

// Original: core_baron.cpp_staticInit_FUN_00412b41
// Address: 00412b41
void __cdecl staticInit(void);

// Original: core_baron.cpp_factoryFunc_FUN_00412b80
// Address: 00412b80
CBaron * __cdecl factoryFunc(void);

// Original: core_baron.cpp_CBaron_getActorType_FUN_00412bb0
// Address: 00412bb0
CDemonActorType * __cdecl CBaron::getActorType(CBaron *this_ptr);

// Original: core_baron.cpp_CBaron_ctor_FUN_00412bc0
// Address: 00412bc0
CBaron * __cdecl CBaron::ctor(CBaron *this_ptr);

// Original: core_baron.cpp_CBaron_setup_FUN_00412cb0
// Address: 00412cb0
void __cdecl CBaron::setup(CBaron *this_ptr);

// Original: core_baron.cpp_CBaron_process_FUN_00412e80
// Address: 00412e80
void __cdecl CBaron::process(CBaron *this_ptr,float delta_time);

// Original: core_baron.cpp_FUN_00413470
// Address: 00413470
void __cdecl FUN_00413470(int param_1,CDemonActor *param_2);

// Original: core_baron.cpp_CBaron_FUN_004135a0
// Address: 004135a0
void __cdecl CBaron(CBaron *this_ptr,int param_2);

// Original: core_baron.cpp_CBaron_FUN_004135e0
// Address: 004135e0
void __cdecl CBaron(CBaron *this_ptr);

// Original: core_baron.cpp_CBaron_FUN_004136b0
// Address: 004136b0
void __cdecl CBaron(CBaron *this_ptr);

// Original: core_baron.cpp_CBaron_FUN_00413a00
// Address: 00413a00
void __cdecl CBaron(CBaron *this_ptr,float param_2);

// Original: core_baron.cpp_CBaron_archive_FUN_00413a70
// Address: 00413a70
void __cdecl CBaron::archive(CBaron *this_ptr);

// Original: core_baron.cpp_CBaron_renderOpaque_FUN_00413ad0
// Address: 00413ad0
int __cdecl CBaron::renderOpaque(CBaron *this_ptr);

// Original: core_baron.cpp_CBaron_renderTransparent_FUN_00413ae0
// Address: 00413ae0
int __cdecl CBaron::renderTransparent(CBaron *this_ptr);

// Original: core_baron.cpp_CBaron_processDamage_FUN_00413cd0
// Address: 00413cd0
void __cdecl CBaron::processDamage(CBaron *this_ptr,SDamageInfo *damage_info);

// Original: core_baron.cpp_CBaron_FUN_00413cf0
// Address: 00413cf0
void __cdecl CBaron(CBaron *this_ptr);

// Original: core_baron.cpp_factoryFunc_FUN_00413d00
// Address: 00413d00
CBaronWeapon * __cdecl factoryFunc(void);

// Original: core_baron.cpp_CBaronWeapon_getActorType_FUN_00413d30
// Address: 00413d30
CDemonActorType * __cdecl CBaronWeapon::getActorType(CBaronWeapon *this_ptr);

// Original: core_baron.cpp_CBaronWeapon_ctor_FUN_00413d40
// Address: 00413d40
CBaronWeapon * __cdecl CBaronWeapon::ctor(CBaronWeapon *this_ptr);

// Original: core_baron.cpp_CBaronWeapon_setup_FUN_00413da0
// Address: 00413da0
void __cdecl CBaronWeapon::setup(CBaronWeapon *this_ptr);

// Original: core_baron.cpp_CBaronWeapon_process_FUN_00413dc0
// Address: 00413dc0
void __cdecl CBaronWeapon::process(CBaronWeapon *this_ptr,float delta_time);

// Original: core_baron.cpp_CBaronWeapon_renderOpaque_FUN_00413de0
// Address: 00413de0
void __cdecl CBaronWeapon::renderOpaque(CBaronWeapon *this_ptr);

// Original: core_baron.cpp_CBaronWeapon_FUN_00413df0
// Address: 00413df0
int __cdecl CBaronWeapon(CBaronWeapon *this_ptr);

// Original: core_baron.cpp_CBaronWeapon_FUN_00413e30
// Address: 00413e30
int __cdecl CBaronWeapon(CBaronWeapon *this_ptr);

// Original: core_baron.cpp_CBaronWeapon_FUN_00413e60
// Address: 00413e60
void __cdecl CBaronWeapon(CBaronWeapon *this_ptr);

// Original: core_baron.cpp_CBaronWeapon_setWeaponState_FUN_00413e90
// Address: 00413e90
void __cdecl CBaronWeapon::setWeaponState(CBaronWeapon *this_ptr);

// Original: core_baron.cpp_CBaronWeapon_FUN_00413f20
// Address: 00413f20
void __cdecl CBaronWeapon(CBaronWeapon *this_ptr);

// Original: core_baron.cpp_CBaron_onActorDeleted_FUN_00413ff0
// Address: 00413ff0
void __cdecl CBaron::onActorDeleted(CBaron *this_ptr,CDemonActor *deleted_actor);

// Original: core_baron.cpp_CBaron_getPropertyList_FUN_00414010
// Address: 00414010
void __cdecl CBaron::getPropertyList(CBaron *this_ptr,CActorPropertyList *property_list);

// Original: core_baron.cpp_CBaron_writeDependencies_FUN_00414070
// Address: 00414070
void __cdecl CBaron::writeDependencies(CBaron *this_ptr,_FILE *file_handle);

// Original: core_baron.cpp_CBaron_FUN_00414090
// Address: 00414090
void __cdecl CBaron(CBaron *this_ptr);

// Original: core_baron.cpp_CBaron_hasCollision_FUN_004140a0
// Address: 004140a0
int __cdecl CBaron::hasCollision(CBaron *this_ptr,SCollisionInfo *collision_info);

// Original: core_baron.cpp_CBaronWeapon_dtor_FUN_004140b0
// Address: 004140b0
CBaronWeapon * __cdecl CBaronWeapon::dtor(CBaronWeapon *this_ptr,uint d1,uint d2);

// Original: core_baron.cpp_CBaron_dtor_FUN_00414100
// Address: 00414100
CBaron * __cdecl CBaron::dtor(CBaron *this_ptr,uint d1,uint d2);
