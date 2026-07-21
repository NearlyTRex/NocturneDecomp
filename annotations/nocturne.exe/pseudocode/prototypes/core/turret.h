#pragma once

// Function prototypes for core/turret.cpp
// Generated from Ghidra function signatures

// Original: core_turret.cpp_CTurret_ctor_FUN_005494a0
// Address: 005494a0
int CTurret::ctor(undefined4 param_1);

// Original: core_turret.cpp_CTurret_process_FUN_005497f0
// Address: 005497f0
void CTurret::process(int param_1,float param_2);

// Original: core_turret.cpp_CTurret_getCurFrame_FUN_00549ef0
// Address: 00549ef0
float CTurret::getCurFrame(int param_1,int param_2);

// Original: core_turret.cpp_CTurret_archive_FUN_0054a000
// Address: 0054a000
void CTurret::archive(int param_1);

// Original: core_turret.cpp_CTurret_updateTargeting_FUN_0054a110
// Address: 0054a110
void __cdecl CTurret::updateTargeting(int param_1,undefined4 param_2);

// Original: core_turret.cpp_CTurret_aimAtTarget_FUN_0054a640
// Address: 0054a640
undefined4 CTurret::aimAtTarget(int param_1,float *param_2,float param_3);

// Original: core_turret.cpp_CTurret_getInteractionInfo_FUN_0054a800
// Address: 0054a800
void CTurret::getInteractionInfo(int param_1,undefined4 *param_2);

// Original: core_turret.cpp_CTurret_updateInteraction_FUN_0054a890
// Address: 0054a890
undefined4 CTurret::updateInteraction(int param_1,undefined4 *param_2,int param_3);

// Original: core_turret.cpp_CTurret_updatePatrol_FUN_0054a920
// Address: 0054a920
void __cdecl CTurret::updatePatrol(int param_1,float param_2);

// Original: core_turret.cpp_CTurret_fire_FUN_0054ab10
// Address: 0054ab10
undefined4 CTurret::fire(int param_1);

// Original: core_turret.cpp_CTurret_canPickup_FUN_0054b030
// Address: 0054b030
undefined4 CTurret::canPickup(undefined4 param_1,undefined4 param_2);
