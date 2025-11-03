// Name: core_actor.cpp_CActorPropertyList_FUN_0040e2d0
// Address: 0040e2d0
// Address Range: [[0040e2d0, 0040e2f4]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CActorPropertyList_FUN_0040e2d0(CActorPropertyList * this_ptr)
// Cross-references:
//   core_ammobox.cpp_CAmmoBox_getPropertyList_FUN_00411b30 (00411b30) at 00411ba5 [UNCONDITIONAL_CALL]
//   core_bat.cpp_CBat_FUN_00414dc0 (00414dc0) at 00414e83 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_004226e0 (004226e0) at 00422766 [UNCONDITIONAL_CALL]
//   core_chain.cpp_FUN_00431120 (00431120) at 0043122e [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_getPropertyList_FUN_00481320 (00481320) at 00481403 [UNCONDITIONAL_CALL]
//   core_drip.cpp_FUN_0048e930 (0048e930) at 0048e9e9 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8db0 (004a8db0) at 004a8f6e [UNCONDITIONAL_CALL]
//   core_grave.cpp_FUN_004ee9e0 (004ee9e0) at 004eea60 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_FUN_004f69c0 (004f69c0) at 004f6b23 [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_00505240 (00505240) at 005052d2 [UNCONDITIONAL_CALL]
//   core_melee.cpp_FUN_0050ecf0 (0050ecf0) at 0050ede2 [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_FUN_0054a5f0 (0054a5f0) at 0054a6c1 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054e7d0 (0054e7d0) at 0054e847 [UNCONDITIONAL_CALL]
//   core_spike.cpp_FUN_005b8e90 (005b8e90) at 005b8faa [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_FUN_005e51a0 (005e51a0) at 005e521b [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_FUN_005eb940 (005eb940) at 005eb9d2 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0

#include "nocturne.h"

void __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e2d0(CActorPropertyList *this_ptr)

{
  int iVar1;
  char *in_stack_00000008;
  void *in_stack_0000000c;
  
  iVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                    (this_ptr,8,in_stack_00000008,in_stack_0000000c,(void *)0x0);
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  return;
}


// Assembly code:
// 0040e2d0: PUSH EBX
//   Label: core_actor.cpp_CActorPropertyList_FUN_0040e2d0
// 0040e2d1: PUSH 0x0
// 0040e2d3: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0040e2d7: PUSH EDX
// 0040e2d8: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0040e2dc: PUSH ECX
// 0040e2dd: PUSH 0x8
// 0040e2df: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0040e2e3: PUSH EBX
// 0040e2e4: CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
//   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)
// 0040e2e9: ADD ESP,0x14
// 0040e2ec: MOV dword ptr [EAX + 0x5c],0x0
// 0040e2f3: POP EBX
// 0040e2f4: RET
