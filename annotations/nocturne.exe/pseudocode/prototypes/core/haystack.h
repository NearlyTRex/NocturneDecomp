#pragma once

// Function prototypes for core/haystack.cpp
// Generated from Ghidra function signatures

// Original: core_haystack.cpp_staticInit_FUN_004b3040
// Address: 004b3040
void __cdecl staticInit(void);

// Original: core_haystack.cpp_factoryFunc_FUN_004b3070
// Address: 004b3070
CHaystack * __cdecl factoryFunc(void);

// Original: core_haystack.cpp_CHaystack_getActorType_FUN_004b3090
// Address: 004b3090
CDemonActorType * CHaystack::getActorType(void);

// Original: core_haystack.cpp_FUN_004b30a0
// Address: 004b30a0
CHero * FUN_004b30a0(CHero *param_1);

// Original: core_haystack.cpp_CHaystack_setup_FUN_004b3110
// Address: 004b3110
void __cdecl CHaystack::setup(CHaystack *this_ptr);

// Original: core_haystack.cpp_CHaystack_process_FUN_004b32d0
// Address: 004b32d0
void CHaystack::process(CHaystack *param_1,float param_2);

// Original: core_haystack.cpp_CHaystack_updateAI_FUN_004b3880
// Address: 004b3880
void __cdecl CHaystack::updateAI(CHaystack *this_ptr,float delta_time);

// Original: core_haystack.cpp_CHaystack_advanceMotion_FUN_004b3e00
// Address: 004b3e00
void __cdecl CHaystack::advanceMotion(CHaystack *this_ptr,float delta_time);

// Original: core_haystack.cpp_CHaystack_checkMeleeHit_FUN_004b3f40
// Address: 004b3f40
void __cdecl CHaystack::checkMeleeHit(CHaystack *this_ptr,int bone_index);

// Original: core_haystack.cpp_CHaystack_archive_FUN_004b3fe0
// Address: 004b3fe0
void CHaystack::archive(CHero *param_1);

// Original: core_haystack.cpp_CHaystack_renderOpaque_FUN_004b3ff0
// Address: 004b3ff0
void CHaystack::renderOpaque(CCharacter *param_1);

// Original: core_haystack.cpp_CHaystack_processDamage_FUN_004b4000
// Address: 004b4000
void CHaystack::processDamage(CCharacter *param_1,SDamageInfo *param_2);

// Original: core_haystack.cpp_CHaystack_isWeaponDrawn_FUN_004b4120
// Address: 004b4120
int __cdecl CHaystack::isWeaponDrawn(CHaystack *this_ptr);

// Original: core_haystack.cpp_CHaystack_drawWeapon_FUN_004b4130
// Address: 004b4130
void __cdecl CHaystack::drawWeapon(CHaystack *this_ptr,int drawn);

// Original: core_haystack.cpp_CHaystack_dtor_FUN_004b4140
// Address: 004b4140
CHero * CHaystack::dtor(CHero *param_1,byte param_2);
