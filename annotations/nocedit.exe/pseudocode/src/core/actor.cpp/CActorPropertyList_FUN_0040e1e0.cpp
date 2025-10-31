// Name: core_actor.cpp_CActorPropertyList_FUN_0040e1e0
// Address: 0040e1e0
// Address Range: [[0040e1e0, 0040e210]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CActorPropertyList_FUN_0040e1e0(CActorPropertyList * this_ptr)
// Cross-references:
//   core_ammo.cpp_CAmmo_getPropertyList_FUN_00411360 (00411360) at 004113b3 [UNCONDITIONAL_CALL]
//   core_ammobox.cpp_CAmmoBox_getPropertyList_FUN_00411b30 (00411b30) at 00411bd7 [UNCONDITIONAL_CALL]
//   core_chain.cpp_FUN_00431120 (00431120) at 00431143 [UNCONDITIONAL_CALL]
//   core_curtain.cpp_FUN_0044b610 (0044b610) at 0044b64c [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_getPropertyList_FUN_00481320 (00481320) at 0048142f [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00486c90 (00486c90) at 00486cef [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8db0 (004a8db0) at 004a8e64 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_getPropertyList_FUN_004e5af0 (004e5af0) at 004e5b68 [UNCONDITIONAL_CALL]
//   core_glass.cpp_FUN_004eb3c0 (004eb3c0) at 004eb43b [UNCONDITIONAL_CALL]
//   core_health.cpp_FUN_004f2040 (004f2040) at 004f207a [UNCONDITIONAL_CALL]
//   core_keyactor.cpp_FUN_00501940 (00501940) at 0050197a [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_00505240 (00505240) at 0050531c [UNCONDITIONAL_CALL]
//   core_marquee.cpp_FUN_0050c3e0 (0050c3e0) at 0050c467 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_00520d10 (00520d10) at 00520d5d [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054e7d0 (0054e7d0) at 0054e942 [UNCONDITIONAL_CALL]
//   core_spike.cpp_FUN_005b8e90 (005b8e90) at 005b8f02 [UNCONDITIONAL_CALL]
//   core_stairs.cpp_FUN_005ba840 (005ba840) at 005ba863 [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_FUN_005e0f70 (005e0f70) at 005e10aa [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_FUN_005eb940 (005eb940) at 005ebaa0 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0

#include "nocturne.h"

void __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e1e0(CActorPropertyList *this_ptr)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0(this_ptr);
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  *(undefined4 *)(iVar1 + 0x6c) = 1;
  return;
}


// Assembly code:
// 0040e1e0: PUSH EBX
//   Label: core_actor.cpp_CActorPropertyList_FUN_0040e1e0
// 0040e1e1: PUSH ESI
// 0040e1e2: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 0040e1e6: PUSH EDX
// 0040e1e7: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0040e1eb: PUSH ECX
// 0040e1ec: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0040e1f0: PUSH EBX
// 0040e1f1: PUSH 0x0
// 0040e1f3: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0040e1f7: PUSH ESI
// 0040e1f8: CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
//   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)
// 0040e1fd: MOV dword ptr [EAX + 0x5c],0x0
// 0040e204: ADD ESP,0x14
// 0040e207: MOV dword ptr [EAX + 0x6c],0x1
// 0040e20e: POP ESI
// 0040e20f: POP EBX
// 0040e210: RET
