#pragma once

// Function prototypes for core/ammo.cpp
// Generated from Ghidra function signatures

// Original: core_ammo.cpp_staticInit_FUN_0040eb10
// Address: 0040eb10
void __cdecl staticInit(void);

// Original: core_ammo.cpp_factoryFunc_FUN_0040eb40
// Address: 0040eb40
CAmmo * __cdecl factoryFunc(void);

// Original: core_ammo.cpp_CAmmo_getActorType_FUN_0040eb60
// Address: 0040eb60
CDemonActorType * CAmmo::getActorType(void);

// Original: core_ammo.cpp_CAmmo_ctor_FUN_0040eb70
// Address: 0040eb70
CAmmo * __cdecl CAmmo::ctor(CAmmo *this_ptr);

// Original: core_ammo.cpp_CAmmo_setup_FUN_0040ec00
// Address: 0040ec00
void CAmmo::setup(CDemonActor *param_1);

// Original: core_ammo.cpp_CAmmo_process_FUN_0040ec20
// Address: 0040ec20
void CAmmo::process(void);

// Original: core_ammo.cpp_CAmmo_renderOpaque_FUN_0040ec30
// Address: 0040ec30
int CAmmo::renderOpaque(CDemonActor *param_1);

// Original: core_ammo.cpp_CAmmo_getBoundingBox_FUN_0040eca0
// Address: 0040eca0
undefined4 * CAmmo::getBoundingBox(int param_1,undefined4 *param_2);

// Original: core_ammo.cpp_CAmmo_archive_FUN_0040ecf0
// Address: 0040ecf0
void CAmmo::archive(CDemonActor *param_1);

// Original: core_ammo.cpp_CAmmo_getCollisionType_FUN_0040ed50
// Address: 0040ed50
undefined4 CAmmo::getCollisionType(void);

// Original: core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80
// Address: 0040ed80
void __cdecl CAmmo::setWeaponClass(CAmmo *this_ptr,char *weapon_class_name);

// Original: core_ammo.cpp_FUN_0040ef60
// Address: 0040ef60
void __cdecl FUN_0040ef60(CAmmo *this_ptr,int ammo_count);

// Original: core_ammo.cpp_CAmmo_canPickup_FUN_0040ef70
// Address: 0040ef70
undefined4 CAmmo::canPickup(undefined4 param_1,CDemonActor *param_2);

// Original: core_ammo.cpp_CAmmo_dtor_FUN_0040ef90
// Address: 0040ef90
CAmmo * __cdecl CAmmo::dtor(CAmmo *this_ptr,uint flags);
