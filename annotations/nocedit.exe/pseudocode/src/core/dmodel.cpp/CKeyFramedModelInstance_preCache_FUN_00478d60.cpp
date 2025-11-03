// Name: core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
// Address: 00478d60
// Address Range: [[00478d60, 00478d7a]]
// Convention: __cdecl
// Signature: CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
// Cross-references:
//   core_ammo.cpp_CAmmo_FUN_00410fd0 (00410fd0) at 0041110c [UNCONDITIONAL_CALL]
//   core_ammo.cpp_CAmmo_setup_FUN_00410e50 (00410e50) at 00410e5a [UNCONDITIONAL_CALL]
//   core_backgnd.cpp_FUN_00412810 (00412810) at 0041281c [UNCONDITIONAL_CALL]
//   core_baron.cpp_CBaron_FUN_00412cb0 (00412cb0) at 00412e5a [UNCONDITIONAL_CALL]
//   core_bat.cpp_CBat_FUN_004148a0 (004148a0) at 004148af [UNCONDITIONAL_CALL]
//   core_biggs.cpp_FUN_00418680 (00418680) at 004186a6 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_0041add0 (0041add0) at 0041ae2e [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00422d60 (00422d60) at 00422db7 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00424e50 (00424e50) at 004250bf [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0 (0047edd0) at 0047edd6 [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_setup_FUN_0047fc70 (0047fc70) at 0047fc7d [UNCONDITIONAL_CALL]
//   core_drip.cpp_FUN_0048e0e0 (0048e0e0) at 0048e0ef [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_FUN_004beb00 (004beb00) at 004beb15 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CToss_create_FUN_004c3ee0 (004c3ee0) at 004c3f4f [UNCONDITIONAL_CALL]
//   core_fire.cpp_loadDebrisAssets_FUN_004c38d0 (004c38d0) at 004c3963 [UNCONDITIONAL_CALL]
//   core_fire.cpp_loadFireBallAssets_FUN_004c0ad0 (004c0ad0) at 004c0b25 [UNCONDITIONAL_CALL]
//   core_fire.cpp_loadGunFlashAssets_FUN_004c1be0 (004c1be0) at 004c1bf7 [UNCONDITIONAL_CALL]
//   core_fire.cpp_loadStakeAssets_FUN_004bfe00 (004bfe00) at 004bfe17 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_FUN_004d17b0 (004d17b0) at 004d1840 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004e0502 [UNCONDITIONAL_CALL]
//   core_grave.cpp_FUN_004ee5a0 (004ee5a0) at 004ee5aa [UNCONDITIONAL_CALL]
//   core_health.cpp_FUN_004f1e30 (004f1e30) at 004f1e3a [UNCONDITIONAL_CALL]
//   core_keyactor.cpp_FUN_005016f0 (005016f0) at 005016fa [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_005048a0 (005048a0) at 005048b0 [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_FUN_005494a0 (005494a0) at 005494af [UNCONDITIONAL_CALL]
//   core_simbox.cpp_CSimBox_FUN_00588e00 (00588e00) at 00588e10 [UNCONDITIONAL_CALL]
//   core_spike.cpp_FUN_005b8360 (005b8360) at 005b836f [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb4b0 (005bb4b0) at 005bb78e [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_FUN_005e2240 (005e2240) at 005e2252 [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_FUN_005e4050 (005e4050) at 005e405f [UNCONDITIONAL_CALL]
// Function calls:
//   core_dmodel.cpp_loadModel_FUN_00478c00

#include "nocturne.h"

CKeyFramedModel * __cdecl
core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance *this_ptr)

{
  CKeyFramedModel *pCVar1;
  int in_stack_00000008;
  
  pCVar1 = core_dmodel_cpp_loadModel_FUN_00478c00(this_ptr->model_name);
  *(CKeyFramedModel **)(in_stack_00000008 + 0x178) = pCVar1;
  return pCVar1;
}


// Assembly code:
// 00478d60: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: Stack[0x4] (READ)
// 00478d64: ADD EAX,0x78
// 00478d67: PUSH EAX
// 00478d68: CALL core_dmodel.cpp_loadModel_FUN_00478c00
//   XREF to: 00478c00 (UNCONDITIONAL_CALL)
// 00478d6d: ADD ESP,0x4
// 00478d70: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 00478d74: MOV dword ptr [EDX + 0x178],EAX
// 00478d7a: RET
