// Name: core_actor.cpp_CActorPropertyList_FUN_0040e160
// Address: 0040e160
// Address Range: [[0040e160, 0040e190]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList * this_ptr)
// Cross-references:
//   core_anvil.cpp_CAnvil_FUN_00412030 (00412030) at 0041207f [UNCONDITIONAL_CALL]
//   core_bat.cpp_CBat_FUN_00414dc0 (00414dc0) at 00414e22 [UNCONDITIONAL_CALL]
//   core_battery.cpp_FUN_004180b0 (004180b0) at 00418101 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_SnagRelated_ModelStateDeath_FUN_0041d990 (0041d990) at 0041d9da [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CLightActor_FUN_004234e0 (004234e0) at 00423582 [UNCONDITIONAL_CALL]
//   core_chain.cpp_FUN_00431120 (00431120) at 004311a6 [UNCONDITIONAL_CALL]
//   core_curtain.cpp_FUN_0044b610 (0044b610) at 0044b663 [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_getPropertyList_FUN_00481320 (00481320) at 00481483 [UNCONDITIONAL_CALL]
//   core_drip.cpp_FUN_0048e930 (0048e930) at 0048e9a6 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8db0 (004a8db0) at 004a8e05 [UNCONDITIONAL_CALL]
//   core_enemy.cpp_CEnemy_FUN_004aa170 (004aa170) at 004aa1e7 [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004cae70 (004cae70) at 004caf05 [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_FUN_004cb6e0 (004cb6e0) at 004cb71a [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_FUN_004d2500 (004d2500) at 004d254b [UNCONDITIONAL_CALL]
//   core_hostage.cpp_FUN_004f69c0 (004f69c0) at 004f6a1f [UNCONDITIONAL_CALL]
//   core_litecone.cpp_FUN_00506da0 (00506da0) at 00506dc3 [UNCONDITIONAL_CALL]
//   core_marquee.cpp_FUN_0050c3e0 (0050c3e0) at 0050c41c [UNCONDITIONAL_CALL]
//   core_melee.cpp_FUN_0050ecf0 (0050ecf0) at 0050ed28 [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_FUN_00544e40 (00544e40) at 00544e9f [UNCONDITIONAL_CALL]
//   core_passngr.cpp_FUN_00546270 (00546270) at 005462c1 [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_FUN_0054a5f0 (0054a5f0) at 0054a680 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054e7d0 (0054e7d0) at 0054e888 [UNCONDITIONAL_CALL]
//   core_simbox.cpp_CSimBox_FUN_00589310 (00589310) at 0058934a [UNCONDITIONAL_CALL]
//   core_spike.cpp_FUN_005b8e90 (005b8e90) at 005b8f80 [UNCONDITIONAL_CALL]
//   core_stairs.cpp_FUN_005ba840 (005ba840) at 005ba8a8 [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_FUN_005e0f70 (005e0f70) at 005e10ca [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_FUN_005e51a0 (005e51a0) at 005e5249 [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_FUN_005e8ba0 (005e8ba0) at 005e8cb8 [UNCONDITIONAL_CALL]
//   core_vessel.cpp_CCryptVessel_FUN_005e9c00 (005e9c00) at 005e9cdc [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_FUN_005eb940 (005eb940) at 005eba46 [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_FUN_005ee9f0 (005ee9f0) at 005eea52 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0

#include "nocturne.h"

void __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList *this_ptr)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0(this_ptr);
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  *(undefined4 *)(iVar1 + 0x6c) = 0x3f800000;
  return;
}


// Assembly code:
// 0040e160: PUSH EBX
//   Label: core_actor.cpp_CActorPropertyList_FUN_0040e160
// 0040e161: PUSH ESI
// 0040e162: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 0040e166: PUSH EDX
// 0040e167: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0040e16b: PUSH ECX
// 0040e16c: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0040e170: PUSH EBX
// 0040e171: PUSH 0x1
// 0040e173: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0040e177: PUSH ESI
// 0040e178: CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
//   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)
// 0040e17d: MOV dword ptr [EAX + 0x5c],0x0
// 0040e184: ADD ESP,0x14
// 0040e187: MOV dword ptr [EAX + 0x6c],0x3f800000
// 0040e18e: POP ESI
// 0040e18f: POP EBX
// 0040e190: RET
