#pragma once

// Function prototypes for core/scat.cpp
// Generated from Ghidra function signatures

// Original: core_scat.cpp_staticInit_FUN_004fbb40
// Address: 004fbb40
void __cdecl staticInit(void);

// Original: core_scat.cpp_FUN_004fbb70
// Address: 004fbb70
undefined4 FUN_004fbb70(void);

// Original: core_scat.cpp_FUN_004fbbb0
// Address: 004fbbb0
undefined4 FUN_004fbbb0(int param_1);

// Original: core_scat.cpp_factoryFunc_FUN_004fbbd0
// Address: 004fbbd0
CScat * __cdecl factoryFunc(void);

// Original: core_scat.cpp_CScat_getActorType_FUN_004fbbf0
// Address: 004fbbf0
CDemonActorType * CScat::getActorType(void);

// Original: core_scat.cpp_FUN_004fbc00
// Address: 004fbc00
CScat * __cdecl FUN_004fbc00(CScat *this_ptr);

// Original: core_scat.cpp_CScat_setup_FUN_004fbcc0
// Address: 004fbcc0
void CScat::setup(CHero *param_1);

// Original: core_scat.cpp_CScat_createDefaultWeapon_FUN_004fbe80
// Address: 004fbe80
void __cdecl CScat::createDefaultWeapon(CScat *this_ptr);

// Original: core_scat.cpp_CScat_process_FUN_004fbf20
// Address: 004fbf20
void CScat::process(CScat *param_1,float param_2);

// Original: core_scat.cpp_CScat_updateAI_FUN_004fc610
// Address: 004fc610
void __cdecl CScat::updateAI(CScat *this_ptr,float delta_time);

// Original: core_scat.cpp_CScat_advanceMotionWithGrabDamage_FUN_004fca50
// Address: 004fca50
void __cdecl CScat::advanceMotionWithGrabDamage(CScat *this_ptr,float delta_time);

// Original: core_scat.cpp_CScat_archive_FUN_004fcae0
// Address: 004fcae0
void CScat::archive(CHero *param_1);

// Original: core_scat.cpp_CScat_renderOpaque_FUN_004fcb20
// Address: 004fcb20
undefined4 CScat::renderOpaque(CCharacter *param_1);

// Original: core_scat.cpp_CScat_processDamage_FUN_004fcbd0
// Address: 004fcbd0
void CScat::processDamage(CScat *param_1,SDamageInfo *param_2);

// Original: core_scat.cpp_CScat_handlePureVirtualCall_FUN_004fcd20
// Address: 004fcd20
undefined4 CScat::handlePureVirtualCall(int param_1);

// Original: core_scat.cpp_CScat_handlePureVirtualCall_FUN_004fcd30
// Address: 004fcd30
void CScat::handlePureVirtualCall(int param_1,undefined4 param_2);

// Original: core_scat.cpp_CScat_isWeaponReady_FUN_004fcd40
// Address: 004fcd40
int __cdecl CScat::isWeaponReady(CScat *this_ptr);

// Original: core_scat.cpp_FUN_004fcd90
// Address: 004fcd90
void __cdecl FUN_004fcd90(CScat *this_ptr,float delta_time);

// Original: core_scat.cpp_CScat_blendLayerAction_FUN_004fcff0
// Address: 004fcff0
void __cdecl CScat::blendLayerAction(CScat *this_ptr);

// Original: core_scat.cpp_FUN_004fd1d0
// Address: 004fd1d0
void __cdecl FUN_004fd1d0(CScat *this_ptr,int hand_index);

// Original: core_scat.cpp_CScat_updateAiming_FUN_004fd450
// Address: 004fd450
void __cdecl CScat::updateAiming(CScat *this_ptr,float delta_time,int is_holstered);

// Original: core_scat.cpp_CScat_scoreAimTarget_FUN_004fda20
// Address: 004fda20
int __cdecl CScat::scoreAimTarget(CScat *this_ptr,CDemonActor *target,int hand_index);

// Original: core_scat.cpp_FUN_004fdd00
// Address: 004fdd00
void __cdecl FUN_004fdd00(CScat *this_ptr);

// Original: core_scat.cpp_CScat_dtor_FUN_004fde30
// Address: 004fde30
CScat * __cdecl CScat::dtor(CScat *this_ptr,uint flags);
