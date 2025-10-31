// Name: core_actor.cpp_CActorPropertyList_FUN_0040e3b0
// Address: 0040e3b0
// Address Range: [[0040e3b0, 0040e3db]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CActorPropertyList_FUN_0040e3b0(CActorPropertyList * this_ptr)
// Cross-references:
//   core_ammo.cpp_CAmmo_getPropertyList_FUN_00411360 (00411360) at 00411383 [UNCONDITIONAL_CALL]
//   core_ammobox.cpp_CAmmoBox_getPropertyList_FUN_00411b30 (00411b30) at 00411b53 [UNCONDITIONAL_CALL]
//   core_anvil.cpp_CAnvil_FUN_00412030 (00412030) at 00412053 [UNCONDITIONAL_CALL]
//   core_backgnd.cpp_CBackgroundActor_FUN_00412a40 (00412a40) at 00412a63 [UNCONDITIONAL_CALL]
//   core_bat.cpp_CBat_FUN_00414dc0 (00414dc0) at 00414e40 [UNCONDITIONAL_CALL]
//   core_battery.cpp_FUN_004180b0 (004180b0) at 004180d3 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_004226e0 (004226e0) at 00422704 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_CBugs_FUN_004277e0 (004277e0) at 00427869 [UNCONDITIONAL_CALL]
//   core_crate.cpp_FUN_00448b20 (00448b20) at 00448b49 [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_getPropertyList_FUN_00481320 (00481320) at 00481344 [UNCONDITIONAL_CALL]
//   core_drip.cpp_FUN_0048e930 (0048e930) at 0048ea18 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8db0 (004a8db0) at 004a8f03 [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_FUN_004be960 (004be960) at 004be983 [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_FUN_004cb6e0 (004cb6e0) at 004cb703 [UNCONDITIONAL_CALL]
//   core_gasmask.cpp_CGasMask_FUN_004e5eb0 (004e5eb0) at 004e5ed9 [UNCONDITIONAL_CALL]
//   core_grave.cpp_FUN_004ee9e0 (004ee9e0) at 004eea03 [UNCONDITIONAL_CALL]
//   core_health.cpp_FUN_004f2040 (004f2040) at 004f2063 [UNCONDITIONAL_CALL]
//   core_keyactor.cpp_FUN_00501940 (00501940) at 00501963 [UNCONDITIONAL_CALL]
//   core_ladder.cpp_FUN_00502ca0 (00502ca0) at 00502cc3 [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_00505240 (00505240) at 00505263 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050b3e0 (0050b3e0) at 0050b403 [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_FUN_0054a5f0 (0054a5f0) at 0054a613 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054e7d0 (0054e7d0) at 0054e7f3 [UNCONDITIONAL_CALL]
//   core_simbox.cpp_CSimBox_FUN_00589310 (00589310) at 00589333 [UNCONDITIONAL_CALL]
//   core_spike.cpp_FUN_005b8e90 (005b8e90) at 005b8eb3 [UNCONDITIONAL_CALL]
//   core_trap.cpp_CTrap_FUN_005dea50 (005dea50) at 005dea79 [UNCONDITIONAL_CALL]
//   core_trash.cpp_CTrash_FUN_005df6e0 (005df6e0) at 005df709 [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_FUN_005e51a0 (005e51a0) at 005e51c3 [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_FUN_005e8ba0 (005e8ba0) at 005e8c49 [UNCONDITIONAL_CALL]
//   core_vessel.cpp_CCryptVessel_FUN_005e9c00 (005e9c00) at 005e9c23 [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_FUN_005ee9f0 (005ee9f0) at 005eea13 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0

#include "nocturne.h"

void __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e3b0(CActorPropertyList *this_ptr)

{
  int iVar1;
  undefined4 in_stack_00000014;
  
  iVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0(this_ptr);
  *(undefined4 *)(iVar1 + 0x58) = 1;
  *(undefined4 *)(iVar1 + 0x5c) = in_stack_00000014;
  return;
}


// Assembly code:
// 0040e3b0: PUSH EBX
//   Label: core_actor.cpp_CActorPropertyList_FUN_0040e3b0
// 0040e3b1: PUSH 0x0
// 0040e3b3: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0040e3b7: PUSH EDX
// 0040e3b8: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0040e3bc: PUSH ECX
// 0040e3bd: PUSH 0x6
// 0040e3bf: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0040e3c3: PUSH EBX
// 0040e3c4: CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
//   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)
// 0040e3c9: ADD ESP,0x14
// 0040e3cc: MOV dword ptr [EAX + 0x58],0x1
// 0040e3d3: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 0040e3d7: MOV dword ptr [EAX + 0x5c],EDX
// 0040e3da: POP EBX
// 0040e3db: RET
