#pragma once

// Function prototypes for core/ammo.cpp
// Generated from Ghidra function signatures

// Original: core_ammo.cpp_staticInit_FUN_0040eb10
// Address: 0040eb10
void __cdecl staticInit(void);

// Original: core_ammo.cpp_factoryFuncAmmo_FUN_0040eb40
// Address: 0040eb40
CAmmo * __cdecl factoryFuncAmmo(void);

// Original: core_ammo.cpp_CAmmo_getActorType_FUN_0040eb60
// Address: 0040eb60
CDemonActorType * __cdecl CAmmo::getActorType(CAmmo *this_ptr);

// Original: core_ammo.cpp_CAmmo_ctor_FUN_0040eb70
// Address: 0040eb70
CAmmo * __cdecl CAmmo::ctor(CAmmo *this_ptr);

// Original: core_ammo.cpp_CAmmo_setup_FUN_0040ec00
// Address: 0040ec00
void __cdecl CAmmo::setup(CAmmo *this_ptr);

// Original: core_ammo.cpp_CAmmo_process_FUN_0040ec20
// Address: 0040ec20
void __cdecl CAmmo::process(CAmmo *this_ptr,float delta_time);

// Original: core_ammo.cpp_CAmmo_renderOpaque_FUN_0040ec30
// Address: 0040ec30
int __cdecl CAmmo::renderOpaque(CAmmo *this_ptr);

// Original: core_ammo.cpp_CAmmo_getBoundingBox_FUN_0040eca0
// Address: 0040eca0
CBoundingBox3D * __cdecl CAmmo::getBoundingBox(CAmmo *this_ptr,CBoundingBox3D *out_box);

// Original: core_ammo.cpp_CAmmo_archive_FUN_0040ecf0
// Address: 0040ecf0
void __cdecl CAmmo::archive(CAmmo *this_ptr);

// Original: core_ammo.cpp_CAmmo_getCollisionType_FUN_0040ed50
// Address: 0040ed50
ECollisionType __cdecl CAmmo::getCollisionType(CAmmo *this_ptr,SCollisionInfo *collision_info);

// Original: core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80
// Address: 0040ed80
void __cdecl CAmmo::setWeaponClass(CAmmo *this_ptr,char *weapon_class_name);

// Original: core_ammo.cpp_CAmmo_setWeaponAmmo_FUN_0040ef60
// Address: 0040ef60
void __cdecl CAmmo::setWeaponAmmo(CAmmo *this_ptr,int ammo_count);

// Original: core_ammo.cpp_CAmmo_canPickup_FUN_0040ef70
// Address: 0040ef70
int __cdecl CAmmo::canPickup(CAmmo *this_ptr,CDemonActor *picker);

// Original: core_ammo.cpp_CAmmo_dtor_FUN_0040ef90
// Address: 0040ef90
CAmmo * __cdecl CAmmo::dtor(CAmmo *this_ptr,uint flags);
