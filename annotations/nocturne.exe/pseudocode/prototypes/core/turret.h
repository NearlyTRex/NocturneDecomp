#pragma once

// Function prototypes for core/turret.cpp
// Generated from Ghidra function signatures

// Original: core_turret.cpp_staticInit_FUN_00549440
// Address: 00549440
void __cdecl staticInit(void);

// Original: core_turret.cpp_factoryFunc_FUN_00549470
// Address: 00549470
CTurret * __cdecl factoryFunc(void);

// Original: core_turret.cpp_CTurret_getActorType_FUN_00549490
// Address: 00549490
CDemonActorType * CTurret::getActorType(void);

// Original: core_turret.cpp_CTurret_ctor_FUN_005494a0
// Address: 005494a0
CTurret * __cdecl CTurret::ctor(CTurret *this_ptr);

// Original: core_turret.cpp_CTurret_setup_FUN_005495f0
// Address: 005495f0
void CTurret::setup(CWeapon *param_1);

// Original: core_turret.cpp_CTurret_renderOpaque_FUN_005496d0
// Address: 005496d0
int CTurret::renderOpaque(CTurret *param_1);

// Original: core_turret.cpp_CTurret_process_FUN_005497f0
// Address: 005497f0
void __cdecl CTurret::process(CTurret *this_ptr,float delta_time);

// Original: core_turret.cpp_CTurret_getBoundingBox_FUN_00549cd0
// Address: 00549cd0
CBoundingBox3D * CTurret::getBoundingBox(CTurret *param_1,CBoundingBox3D *param_2);

// Original: core_turret.cpp_CTurret_getCurFrame_FUN_00549ef0
// Address: 00549ef0
float __cdecl CTurret::getCurFrame(CTurret *this_ptr,int model_index);

// Original: core_turret.cpp_CTurret_archive_FUN_0054a000
// Address: 0054a000
void CTurret::archive(CWeapon *param_1);

// Original: core_turret.cpp_CTurret_updateTargeting_FUN_0054a110
// Address: 0054a110
void __cdecl CTurret::updateTargeting(CTurret *this_ptr,float delta_time);

// Original: core_turret.cpp_CTurret_aimAtTarget_FUN_0054a640
// Address: 0054a640
undefined4 CTurret::aimAtTarget(CDemonActor *param_1,float *param_2,float param_3);

// Original: core_turret.cpp_CTurret_getInteractionInfo_FUN_0054a800
// Address: 0054a800
void CTurret::getInteractionInfo(int param_1,undefined4 *param_2);

// Original: core_turret.cpp_CTurret_startInteraction_FUN_0054a870
// Address: 0054a870
undefined4 CTurret::startInteraction(int param_1,undefined4 param_2);

// Original: core_turret.cpp_CTurret_updateInteraction_FUN_0054a890
// Address: 0054a890
undefined4 CTurret::updateInteraction(CCharacter *param_1,float *param_2,int param_3);

// Original: core_turret.cpp_CTurret_stopUsing_FUN_0054a900
// Address: 0054a900
void CTurret::stopUsing(int param_1,int param_2);

// Original: core_turret.cpp_CTurret_updatePatrol_FUN_0054a920
// Address: 0054a920
void __cdecl CTurret::updatePatrol(CTurret *this_ptr,float delta_time);

// Original: core_turret.cpp_FUN_0054aab0
// Address: 0054aab0
float FUN_0054aab0(void);

// Original: core_turret.cpp_FUN_0054aae0
// Address: 0054aae0
undefined4 * FUN_0054aae0(int param_1,undefined4 *param_2);

// Original: core_turret.cpp_CTurret_fire_FUN_0054ab10
// Address: 0054ab10
undefined4 CTurret::fire(CCharacter *param_1);

// Original: core_turret.cpp_CTurret_canPickup_FUN_0054b030
// Address: 0054b030
int __cdecl CTurret::canPickup(CTurret *this_ptr,CDemonActor *picker);

// Original: core_turret.cpp_CTurret_dtor_FUN_0054b060
// Address: 0054b060
CTurret * __cdecl CTurret::dtor(CTurret *this_ptr,uint flags);
