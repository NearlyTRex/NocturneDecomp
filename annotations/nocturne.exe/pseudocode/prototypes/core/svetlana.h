#pragma once

// Function prototypes for core/svetlana.cpp
// Generated from Ghidra function signatures

// Original: core_svetlana.cpp_staticInit_FUN_00541950
// Address: 00541950
void __cdecl staticInit(void);

// Original: core_svetlana.cpp_factoryFunc_FUN_00541980
// Address: 00541980
CSvetlana * __cdecl factoryFunc(void);

// Original: core_svetlana.cpp_CSvetlana_getActorType_FUN_005419a0
// Address: 005419a0
CDemonActorType * __cdecl CSvetlana::getActorType(CSvetlana *this_ptr);

// Original: core_svetlana.cpp_CSvetlana_ctor_FUN_005419b0
// Address: 005419b0
CSvetlana * __cdecl CSvetlana::ctor(CSvetlana *this_ptr);

// Original: core_svetlana.cpp_CSvetlana_setup_FUN_00541a40
// Address: 00541a40
void __cdecl CSvetlana::setup(CSvetlana *this_ptr);

// Original: core_svetlana.cpp_CSvetlana_process_FUN_00541d00
// Address: 00541d00
void __cdecl CSvetlana::process(CSvetlana *this_ptr,float delta_time);

// Original: core_svetlana.cpp_CSvetlana_FUN_005423c0
// Address: 005423c0
void __cdecl CSvetlana(CSvetlana *this_ptr,float delta_time);

// Original: core_svetlana.cpp_CSvetlana_advanceMotion_FUN_00542ad0
// Address: 00542ad0
void __cdecl CSvetlana::advanceMotion(CSvetlana *this_ptr,float delta_time);

// Original: core_svetlana.cpp_CSvetlana_performBladeAttack_FUN_00542b70
// Address: 00542b70
void __cdecl CSvetlana::performBladeAttack(CSvetlana *this_ptr,int bone_index);

// Original: core_svetlana.cpp_CSvetlana_archive_FUN_00542d10
// Address: 00542d10
void CSvetlana::archive(CHero *param_1);

// Original: core_svetlana.cpp_CSvetlana_renderOpaque_FUN_00542d20
// Address: 00542d20
int __cdecl CSvetlana::renderOpaque(CSvetlana *this_ptr);

// Original: core_svetlana.cpp_CSvetlana_processDamage_FUN_00542e90
// Address: 00542e90
void __cdecl CSvetlana::processDamage(CSvetlana *this_ptr,SDamageInfo *damage_info);

// Original: core_svetlana.cpp_CSvetlana_getGrabbed_FUN_00543020
// Address: 00543020
int __cdecl CSvetlana::getGrabbed(CSvetlana *this_ptr,CDemonActor *grabber,int grab_type);

// Original: core_svetlana.cpp_CSvetlana_isWeaponDrawn_FUN_00543030
// Address: 00543030
int __cdecl CSvetlana::isWeaponDrawn(CSvetlana *this_ptr);

// Original: core_svetlana.cpp_CSvetlana_drawWeapon_FUN_00543040
// Address: 00543040
void __cdecl CSvetlana::drawWeapon(CSvetlana *this_ptr,int drawn);

// Original: core_svetlana.cpp_CSvetlana_dtor_FUN_00543050
// Address: 00543050
CSvetlana * __cdecl CSvetlana::dtor(CSvetlana *this_ptr,uint flags);
