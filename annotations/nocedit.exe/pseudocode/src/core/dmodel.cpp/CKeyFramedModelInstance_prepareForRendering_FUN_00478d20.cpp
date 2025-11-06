// Name: core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
// Address: 00478d20
// Address Range: [[00478d20, 00478d54]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
// Cross-references:
//   core_ammo.cpp_CAmmo_renderOpaque_FUN_00410e80 (00410e80) at 00410ecd [UNCONDITIONAL_CALL]
//   core_ammobox.cpp_CAmmoBox_FUN_00411820 (00411820) at 00411892 [UNCONDITIONAL_CALL]
//   core_anvil.cpp_CAnvil_FUN_00411ec0 (00411ec0) at 00411f2e [UNCONDITIONAL_CALL]
//   core_backgnd.cpp_CBackgroundActor_FUN_00412860 (00412860) at 004128b0 [UNCONDITIONAL_CALL]
//   core_backgnd.cpp_CBackgroundActor_FUN_004128d0 (004128d0) at 00412920 [UNCONDITIONAL_CALL]
//   core_baron.cpp_CBaron_renderTransparent_FUN_00413ae0 (00413ae0) at 00413bc0 [UNCONDITIONAL_CALL]
//   core_bat.cpp_CBat_FUN_00414bf0 (00414bf0) at 00414c41 [UNCONDITIONAL_CALL]
//   core_battery.cpp_FUN_00417f80 (00417f80) at 00417ff2 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_CBodyPart_renderOpaque_FUN_004194b0 (004194b0) at 00419583 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00421e00 (00421e00) at 00421ea8 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00421ef0 (00421ef0) at 00421fa2 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_004251b0 (004251b0) at 004252e4 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042a420 (0042a420) at 0042a4f8 [UNCONDITIONAL_CALL]
//   core_crate.cpp_FUN_00448880 (00448880) at 004488fc [UNCONDITIONAL_CALL]
//   core_crossbow.cpp_CCrossbow_renderOpaque_FUN_00448e00 (00448e00) at 00448e62 [UNCONDITIONAL_CALL]
//   core_dest.cpp_CDestActor_renderTransparent_FUN_0046fb70 (0046fb70) at 0046fc9b [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_renderBackground_FUN_004809e0 (004809e0) at 00480a38 [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_renderOpaque_FUN_004807d0 (004807d0) at 004809d0 [UNCONDITIONAL_CALL]
//   core_drip.cpp_FUN_0048e6c0 (0048e6c0) at 0048e717 [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_FUN_004be810 (004be810) at 004be88c [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_FUN_004bed00 (004bed00) at 004beda7 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireball_render_FUN_004c0e70 (004c0e70) at 004c0f5a [UNCONDITIONAL_CALL]
//   core_fire.cpp_CStake_render_FUN_004c0140 (004c0140) at 004c0205 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CToss_render_FUN_004c4160 (004c4160) at 004c41ac [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_FUN_004cb4c0 (004cb4c0) at 004cb538 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_FUN_004d1f70 (004d1f70) at 004d202b [UNCONDITIONAL_CALL]
//   core_gasmask.cpp_CGasMask_FUN_004e5da0 (004e5da0) at 004e5e12 [UNCONDITIONAL_CALL]
//   core_grave.cpp_FUN_004ee680 (004ee680) at 004ee6ec [UNCONDITIONAL_CALL]
//   core_grave.cpp_FUN_004ee710 (004ee710) at 004ee770 [UNCONDITIONAL_CALL]
//   core_health.cpp_FUN_004f1e60 (004f1e60) at 004f1ead [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_renderItemModel_FUN_004fee00 (004fee00) at 004ff161 [UNCONDITIONAL_CALL]
//   core_keyactor.cpp_FUN_005017c0 (005017c0) at 0050180d [UNCONDITIONAL_CALL]
//   core_ladder.cpp_FUN_00502620 (00502620) at 005028aa [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_00504cf0 (00504cf0) at 00504d62 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_00509bf0 (00509bf0) at 00509c3c [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_00509d50 (00509d50) at 00509e59 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050a1f0 (0050a1f0) at 0050a26e [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050b180 (0050b180) at 0050b1a8 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_FUN_005205f0 (005205f0) at 005207eb [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_FUN_0054a2f0 (0054a2f0) at 0054a33d [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054d720 (0054d720) at 0054d995 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054d9b0 (0054d9b0) at 0054db11 [UNCONDITIONAL_CALL]
//   core_simbox.cpp_CSimBox_FUN_005890f0 (005890f0) at 0058913d [UNCONDITIONAL_CALL]
//   core_spike.cpp_FUN_005b8730 (005b8730) at 005b877d [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c3150 (005c3150) at 005c34e8 [UNCONDITIONAL_CALL]
//   core_trap.cpp_CTrap_FUN_005de920 (005de920) at 005de98a [UNCONDITIONAL_CALL]
//   core_trash.cpp_CTrash_FUN_005df550 (005df550) at 005df5e0 [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_FUN_005e2320 (005e2320) at 005e2374 [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_FUN_005e4d80 (005e4d80) at 005e4dda [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_FUN_005e88c0 (005e88c0) at 005e8998 [UNCONDITIONAL_CALL]
//   core_vessel.cpp_FUN_005e98b0 (005e98b0) at 005e99ba [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_FUN_005ee030 (005ee030) at 005ee06c [UNCONDITIONAL_CALL]
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
          (CKeyFramedModelInstance *this_ptr,float animation_frame,int render_flags)

{
  CKeyFramedModelInstance *this_ptr_00;
  CKeyFramedModel *this_ptr_01;
  float10 fVar1;
  double dVar2;
  int render_flags_00;
  int in_stack_fffffffc;
  
  fVar1 = (float10)animation_frame;
  dVar2 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(render_flags,this_ptr));
  this_ptr_00 = SUB84(dVar2,0);
  render_flags_00 = (int)ROUND(fVar1);
  this_ptr_01 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(this_ptr_00);
  core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
            (this_ptr_01,this_ptr_00,in_stack_fffffffc,render_flags_00);
  return;
}


// Assembly code:
// 00478d20: SUB ESP,0x4
//   Label: core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
// 00478d23: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00478d27: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00478d2b: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00478d2f: PUSH EDX
// 00478d30: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00478d35: PUSH EAX
// 00478d36: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x4] (WRITE)
// 00478d3a: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x4] (READ)
// 00478d3e: PUSH ECX
// 00478d3f: PUSH EAX
// 00478d40: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 00478d45: ADD ESP,0x4
// 00478d48: PUSH EAX
// 00478d49: CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
//   XREF to: 00477850 (UNCONDITIONAL_CALL)
// 00478d4e: ADD ESP,0x10
// 00478d51: ADD ESP,0x4
// 00478d54: RET
