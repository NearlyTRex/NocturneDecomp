// Name: core_actor.cpp_CActorPropertyList_FUN_0040e290
// Address: 0040e290
// Address Range: [[0040e290, 0040e2c0]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CActorPropertyList_FUN_0040e290(CActorPropertyList * this_ptr)
// Cross-references:
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 (0040d290) at 0040d2ab [UNCONDITIONAL_CALL]
//   core_ammo.cpp_CAmmo_getPropertyList_FUN_00411360 (00411360) at 0041139c [UNCONDITIONAL_CALL]
//   core_ammobox.cpp_CAmmoBox_getPropertyList_FUN_00411b30 (00411b30) at 00411bc0 [UNCONDITIONAL_CALL]
//   core_barrier.cpp_CBarrier_FUN_00414400 (00414400) at 0041443f [UNCONDITIONAL_CALL]
//   core_chain.cpp_FUN_00431120 (00431120) at 00431204 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042f730 (0042f730) at 0042f7ce [UNCONDITIONAL_CALL]
//   core_conveyor.cpp_FUN_00442130 (00442130) at 004421ab [UNCONDITIONAL_CALL]
//   core_curtain.cpp_FUN_0044b610 (0044b610) at 0044b635 [UNCONDITIONAL_CALL]
//   core_dest.cpp_FUN_0046fe80 (0046fe80) at 0046fed8 [UNCONDITIONAL_CALL]
//   core_enemy.cpp_CEnemy_FUN_004aa170 (004aa170) at 004aa200 [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_FUN_004be960 (004be960) at 004be99c [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_getPropertyList_FUN_004eb3c0 (004eb3c0) at 004eb3e5 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_FUN_004f69c0 (004f69c0) at 004f6acb [UNCONDITIONAL_CALL]
//   core_marquee.cpp_FUN_0050c3e0 (0050c3e0) at 0050c405 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_00520d10 (00520d10) at 00520d91 [UNCONDITIONAL_CALL]
//   core_passngr.cpp_FUN_00546270 (00546270) at 00546295 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054e7d0 (0054e7d0) at 0054e9d1 [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_FUN_005e0f70 (005e0f70) at 005e1142 [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_FUN_005e3ca0 (005e3ca0) at 005e3dad [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_FUN_005e8ba0 (005e8ba0) at 005e8cd7 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0

#include "nocturne.h"

void __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e290(CActorPropertyList *this_ptr)

{
  int iVar1;
  char *in_stack_00000008;
  void *in_stack_0000000c;
  void *in_stack_00000014;
  
  iVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                    (this_ptr,3,in_stack_00000008,in_stack_0000000c,in_stack_00000014);
  *(undefined4 *)(iVar1 + 0x5c) = 1;
  *(void **)(iVar1 + 100) = in_stack_00000014;
  return;
}


// Assembly code:
// 0040e290: PUSH EBX
//   Label: core_actor.cpp_CActorPropertyList_FUN_0040e290
// 0040e291: PUSH ESI
// 0040e292: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x14] (READ)
// 0040e296: PUSH EDX
// 0040e297: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0040e29b: PUSH ECX
// 0040e29c: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0040e2a0: PUSH EBX
// 0040e2a1: PUSH 0x3
// 0040e2a3: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0040e2a7: PUSH ESI
// 0040e2a8: CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
//   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)
// 0040e2ad: ADD ESP,0x14
// 0040e2b0: MOV dword ptr [EAX + 0x5c],0x1
// 0040e2b7: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 0040e2bb: MOV dword ptr [EAX + 0x64],EDX
// 0040e2be: POP ESI
// 0040e2bf: POP EBX
// 0040e2c0: RET
