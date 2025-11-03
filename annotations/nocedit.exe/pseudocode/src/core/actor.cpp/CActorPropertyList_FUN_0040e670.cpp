// Name: core_actor.cpp_CActorPropertyList_FUN_0040e670
// Address: 0040e670
// Address Range: [[0040e670, 0040e699]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CActorPropertyList_FUN_0040e670(CActorPropertyList * this_ptr)
// Cross-references:
//   core_ammo.cpp_CAmmo_getPropertyList_FUN_00411360 (00411360) at 004113cb [UNCONDITIONAL_CALL]
//   core_ammobox.cpp_CAmmoBox_getPropertyList_FUN_00411b30 (00411b30) at 00411bef [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CLightActor_FUN_004234e0 (004234e0) at 00423504 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042f730 (0042f730) at 0042f78b [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_getPropertyList_FUN_00481320 (00481320) at 00481387 [UNCONDITIONAL_CALL]
//   core_drip.cpp_FUN_0048e930 (0048e930) at 0048e954 [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_00505240 (00505240) at 00505293 [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_FUN_0054a5f0 (0054a5f0) at 0054a6ee [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054e7d0 (0054e7d0) at 0054e8cc [UNCONDITIONAL_CALL]
//   core_simbox.cpp_CSimBox_FUN_00589310 (00589310) at 00589362 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_FUN_005f20d0 (005f20d0) at 005f211b [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0

#include "nocturne.h"

void __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e670(CActorPropertyList *this_ptr)

{
  int iVar1;
  char *in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  iVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                    (this_ptr,0x11,in_stack_00000008,(void *)0x0,(void *)0x0);
  *(undefined4 *)(iVar1 + 0x68) = in_stack_00000010;
  *(undefined4 *)(iVar1 + 0xe8) = in_stack_00000014;
  return;
}


// Assembly code:
// 0040e670: PUSH 0x0
//   Label: core_actor.cpp_CActorPropertyList_FUN_0040e670
// 0040e672: PUSH 0x0
// 0040e674: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0040e678: PUSH EDX
// 0040e679: PUSH 0x11
// 0040e67b: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0040e67f: PUSH ECX
// 0040e680: CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
//   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)
// 0040e685: ADD ESP,0x14
// 0040e688: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 0040e68c: MOV dword ptr [EAX + 0x68],EDX
// 0040e68f: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x10] (READ)
// 0040e693: MOV dword ptr [EAX + 0xe8],EDX
// 0040e699: RET
