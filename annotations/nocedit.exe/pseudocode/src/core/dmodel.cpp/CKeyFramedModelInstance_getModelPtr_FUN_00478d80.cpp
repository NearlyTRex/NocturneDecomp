// Name: core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
// Address: 00478d80
// Address Range: [[00478d80, 00478dc6]]
// Convention: __cdecl
// Signature: CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
// Cross-references:
//   core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470 (00409470) at 0040972a [UNCONDITIONAL_CALL]
//   core_ammo.cpp_CAmmo_getBoundingBox_FUN_00410ef0 (00410ef0) at 00410eff [UNCONDITIONAL_CALL]
//   core_ammobox.cpp_CAmmoBox_FUN_00411820 (00411820) at 00411870 [UNCONDITIONAL_CALL]
//   core_ammobox.cpp_CAmmoBox_FUN_004118b0 (004118b0) at 004118bf [UNCONDITIONAL_CALL]
//   core_anvil.cpp_CAnvil_FUN_00411fe0 (00411fe0) at 00411fef [UNCONDITIONAL_CALL]
//   core_anvil.cpp_CAnvil_FUN_00412090 (00412090) at 004120c6 [UNCONDITIONAL_CALL]
//   core_backgnd.cpp_CBackgroundActor_FUN_00412940 (00412940) at 0041294f [UNCONDITIONAL_CALL]
//   core_backgnd.cpp_CBackgroundActor_FUN_004129f0 (004129f0) at 00412a09 [UNCONDITIONAL_CALL]
//   core_bat.cpp_CBat_FUN_00414c60 (00414c60) at 00414c81 [UNCONDITIONAL_CALL]
//   core_bat.cpp_CBat_process_FUN_00414a00 (00414a00) at 00414ae8 [UNCONDITIONAL_CALL]
//   core_battery.cpp_FUN_00418060 (00418060) at 0041806f [UNCONDITIONAL_CALL]
//   core_battery.cpp_FUN_00418110 (00418110) at 00418146 [UNCONDITIONAL_CALL]
//   core_biggs.cpp_FUN_00418680 (00418680) at 004186c3 [UNCONDITIONAL_CALL]
//   core_biggs.cpp_FUN_004189b0 (004189b0) at 00418a37 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CBoxActor_process_FUN_004219e0 (004219e0) at 004219f9 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00421e00 (00421e00) at 00421e10 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00421ef0 (00421ef0) at 00421f00 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00421fe0 (00421fe0) at 00422001 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00422340 (00422340) at 00422363 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_004226e0 (004226e0) at 0042272b [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00422900 (00422900) at 0042290c [UNCONDITIONAL_CALL]
//   core_crate.cpp_FUN_00448980 (00448980) at 0044898f [UNCONDITIONAL_CALL]
//   core_crate.cpp_FUN_00448b60 (00448b60) at 00448b96 [UNCONDITIONAL_CALL]
//   core_crossbow.cpp_FUN_00448eb0 (00448eb0) at 00448ec2 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 (00478d20) at 00478d40 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0 (0047edd0) at 0047ee13 [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_getBoundingBox_FUN_00480a50 (00480a50) at 00480a5f [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_hasCollision_FUN_00480d90 (00480d90) at 00480d9a [UNCONDITIONAL_CALL]
//   core_drip.cpp_FUN_0048e740 (0048e740) at 0048e7d5 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8070 (004a8070) at 004a8456 [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_FUN_004be910 (004be910) at 004be91f [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_FUN_004be9b0 (004be9b0) at 004be9e6 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireball_render_FUN_004c0e70 (004c0e70) at 004c0ee0 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CStake_FUN_004bfe90 (004bfe90) at 004bffd8 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CToss_create_FUN_004c3ee0 (004c3ee0) at 004c3f58 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CToss_process_FUN_004c4000 (004c4000) at 004c40a8 [UNCONDITIONAL_CALL]
//   core_fire.cpp_FUN_004c0140 (004c0140) at 004c0177 [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_FUN_004cb690 (004cb690) at 004cb69f [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_FUN_004cb750 (004cb750) at 004cb786 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_FUN_004d20f0 (004d20f0) at 004d2111 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_FUN_004d23a0 (004d23a0) at 004d23af [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_LoadModel_FUN_004d2190 (004d2190) at 004d21f5 [UNCONDITIONAL_CALL]
//   core_gasmask.cpp_CGasMask_FUN_004e5e60 (004e5e60) at 004e5e6f [UNCONDITIONAL_CALL]
//   core_gasmask.cpp_FUN_004e5ef0 (004e5ef0) at 004e5f26 [UNCONDITIONAL_CALL]
//   core_grave.cpp_FUN_004ee5c0 (004ee5c0) at 004ee626 [UNCONDITIONAL_CALL]
//   core_grave.cpp_FUN_004ee8f0 (004ee8f0) at 004ee96a [UNCONDITIONAL_CALL]
//   core_grave.cpp_FUN_004eea70 (004eea70) at 004eeaa6 [UNCONDITIONAL_CALL]
//   core_health.cpp_FUN_004f1ed0 (004f1ed0) at 004f1edf [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_renderItemModel_FUN_004fee00 (004fee00) at 004feee4 [UNCONDITIONAL_CALL]
//   core_keyactor.cpp_FUN_00501830 (00501830) at 0050183f [UNCONDITIONAL_CALL]
//   core_ladder.cpp_FUN_005028c0 (005028c0) at 005028d4 [UNCONDITIONAL_CALL]
//   core_ladder.cpp_FUN_00502a40 (00502a40) at 00502a4a [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_00504cf0 (00504cf0) at 00504d40 [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_00504d80 (00504d80) at 00504d8f [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_00504dd0 (00504dd0) at 00504de6 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_00509330 (00509330) at 0050934b [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_00509720 (00509720) at 00509735 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050a1f0 (0050a1f0) at 0050a24f [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050b260 (0050b260) at 0050b26f [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053af50 (0053af50) at 0053af8b [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_FUN_005495c0 (005495c0) at 005497e9 [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_FUN_0054a360 (0054a360) at 0054a36f [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_FUN_0054a550 (0054a550) at 0054a569 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054db70 (0054db70) at 0054db7f [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054df80 (0054df80) at 0054e130 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054e180 (0054e180) at 0054e18a [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 (005716b0) at 00572108 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470 (00573470) at 005737a7 [UNCONDITIONAL_CALL]
//   core_simbox.cpp_CSimBox_FUN_00589160 (00589160) at 0058916f [UNCONDITIONAL_CALL]
//   core_spike.cpp_FUN_005b87a0 (005b87a0) at 005b87af [UNCONDITIONAL_CALL]
//   core_stranger.cpp_FUN_005bb010 (005bb010) at 005bb04a [UNCONDITIONAL_CALL]
//   core_trap.cpp_CTrap_FUN_005dea00 (005dea00) at 005dea0f [UNCONDITIONAL_CALL]
//   core_trash.cpp_CTrash_FUN_005df610 (005df610) at 005df624 [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_FUN_005e2240 (005e2240) at 005e226a [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_FUN_005e2320 (005e2320) at 005e2399 [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_FUN_005e2910 (005e2910) at 005e2952 [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_getCurFrame_FUN_005e2b30 (005e2b30) at 005e2bff [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_FUN_005e5050 (005e5050) at 005e5071 [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_process_FUN_005e4210 (005e4210) at 005e48f2 [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_FUN_005e86d0 (005e86d0) at 005e86df [UNCONDITIONAL_CALL]
//   core_vessel.cpp_CCryptVessel_FUN_005e9bb0 (005e9bb0) at 005e9bbf [UNCONDITIONAL_CALL]
//   core_vessel.cpp_FUN_005e98b0 (005e98b0) at 005e9961 [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_FUN_005ee0c0 (005ee0c0) at 005ee0cf [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_FUN_005ee670 (005ee670) at 005ee682 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dmodel_cpp_0061f97b
//   TerminatedCString s_Tried_to_do_something_wi_0061f98e
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

CKeyFramedModel * __cdecl
core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance *this_ptr)

{
  if (this_ptr->model_ptr != (CKeyFramedModel *)0x0) {
    return this_ptr->model_ptr;
  }
  g_CurrentFilename = "..\\core\\dmodel.cpp";
  g_CurrentLineNumber = 0x52d;
  core_main_c_displayErrorAndQuit_FUN_00506f10
            ("Tried to do something with model %s, but modelPtr not set.  (CKeyFramedModelInstance::preCache not called.",this_ptr->model_name);
  return this_ptr->model_ptr;
}


// Assembly code:
// 00478d80: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
// 00478d81: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00478d85: CMP dword ptr [EBX + 0x178],0x0
// 00478d8c: JZ 0x00478d96
//   XREF to: 00478d96 (CONDITIONAL_JUMP)
// 00478d8e: MOV EAX,dword ptr [EBX + 0x178]
// 00478d94: POP EBX
// 00478d95: RET
// 00478d96: PUSH ESI
//   Label: LAB_00478d96
// 00478d97: LEA EAX,[EBX + 0x78]
// 00478d9a: PUSH EAX
// 00478d9b: MOV ECX,0x61f97b
//   XREF to: 0061f97b (PARAM)
// 00478da0: MOV ESI,0x52d
// 00478da5: PUSH 0x61f98e
//   XREF to: 0061f98e (DATA)
// 00478daa: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00478db0: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00478db6: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00478dbb: ADD ESP,0x8
// 00478dbe: POP ESI
// 00478dbf: MOV EAX,dword ptr [EBX + 0x178]
// 00478dc5: POP EBX
// 00478dc6: RET
