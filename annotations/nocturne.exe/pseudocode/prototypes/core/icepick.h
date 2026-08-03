#pragma once

// Function prototypes for core/icepick.cpp
// Generated from Ghidra function signatures

// Original: core_icepick.cpp_staticInit_FUN_004b9cc0
// Address: 004b9cc0
void __cdecl staticInit(void);

// Original: core_icepick.cpp_factoryFunc_FUN_004b9cf0
// Address: 004b9cf0
CIcePick * __cdecl factoryFunc(void);

// Original: core_icepick.cpp_CIcePick_getActorType_FUN_004b9d10
// Address: 004b9d10
CDemonActorType * __cdecl CIcePick::getActorType(CIcePick *this_ptr);

// Original: core_icepick.cpp_CIcePick_ctor_FUN_004b9d20
// Address: 004b9d20
CIcePick * __cdecl CIcePick::ctor(CIcePick *this_ptr);

// Original: core_icepick.cpp_CIcePick_setup_FUN_004b9db0
// Address: 004b9db0
void __cdecl CIcePick::setup(CIcePick *this_ptr);

// Original: core_icepick.cpp_CIcePick_process_FUN_004b9fe0
// Address: 004b9fe0
void __cdecl CIcePick::process(CIcePick *this_ptr,float delta_time);

// Original: core_icepick.cpp_FUN_004ba740
// Address: 004ba740
void __cdecl FUN_004ba740(CIcePick *this_ptr,float delta_time);

// Original: core_icepick.cpp_CIcePick_findAndPickupGun_FUN_004ba8a0
// Address: 004ba8a0
int __cdecl CIcePick::findAndPickupGun(CIcePick *this_ptr);

// Original: core_icepick.cpp_CIcePick_startThrowAttack_FUN_004baa00
// Address: 004baa00
int __cdecl CIcePick::startThrowAttack(CIcePick *this_ptr);

// Original: core_icepick.cpp_CIcePick_getCarryObjToBodyXForm_FUN_004baa50
// Address: 004baa50
void __stack2_esi CIcePick::getCarryObjToBodyXForm(CIcePick *this_ptr,int hand_index,CMatrix3x4f *out_matrix);

// Original: core_icepick.cpp_FUN_004baba0
// Address: 004baba0
void __cdecl FUN_004baba0(CIcePick *this_ptr,float delta_time);

// Original: core_icepick.cpp_CIcePick_processMotionEvents_FUN_004bb2d0
// Address: 004bb2d0
void __cdecl CIcePick::processMotionEvents(CIcePick *this_ptr,float delta_time);

// Original: core_icepick.cpp_CIcePick_performMeleeAttack_FUN_004bb3c0
// Address: 004bb3c0
void __cdecl CIcePick::performMeleeAttack(CIcePick *this_ptr,int bone_index);

// Original: core_icepick.cpp_CIcePick_archive_FUN_004bb4c0
// Address: 004bb4c0
void __cdecl CIcePick::archive(CIcePick *this_ptr);

// Original: core_icepick.cpp_CIcePick_renderOpaque_FUN_004bb4d0
// Address: 004bb4d0
void __cdecl CIcePick::renderOpaque(CIcePick *this_ptr);

// Original: core_icepick.cpp_CIcePick_processDamage_FUN_004bb4e0
// Address: 004bb4e0
void __cdecl CIcePick::processDamage(CIcePick *this_ptr,SDamageInfo *damage_info);

// Original: core_icepick.cpp_CIcePick_isWeaponDrawn_FUN_004bb690
// Address: 004bb690
int __cdecl CIcePick::isWeaponDrawn(CIcePick *this_ptr);

// Original: core_icepick.cpp_CIcePick_drawWeapon_FUN_004bb6a0
// Address: 004bb6a0
void __cdecl CIcePick::drawWeapon(CIcePick *this_ptr,int drawn);

// Original: core_icepick.cpp_CIcePick_dtor_FUN_004bb6b0
// Address: 004bb6b0
CIcePick * __cdecl CIcePick::dtor(CIcePick *this_ptr,uint flags);
