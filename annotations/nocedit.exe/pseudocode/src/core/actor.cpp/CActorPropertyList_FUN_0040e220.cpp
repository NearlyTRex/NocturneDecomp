// Name: core_actor.cpp_CActorPropertyList_FUN_0040e220
// Address: 0040e220
// Address Range: [[0040e220, 0040e25e]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CActorPropertyList_FUN_0040e220(CActorPropertyList * this_ptr)
// Cross-references:
//   core_bugs.cpp_CBugs_FUN_004277e0 (004277e0) at 00427811 [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004ccaa0 (004ccaa0) at 004ccad0 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e8dc0 (004e8dc0) at 004e8e11 [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHeroPlaceholder_FUN_004f3f60 (004f3f60) at 004f3f8d [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0

#include "nocturne.h"

void __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e220(CActorPropertyList *this_ptr)

{
  int iVar1;
  char *in_stack_00000008;
  void *in_stack_0000000c;
  undefined4 in_stack_00000014;
  void *in_stack_00000018;
  
  iVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                    (this_ptr,0,in_stack_00000008,in_stack_0000000c,in_stack_00000018);
  *(undefined4 *)(iVar1 + 0x5c) = 1;
  *(undefined4 *)(iVar1 + 0x6c) = 1;
  *(undefined4 *)(iVar1 + 0x60) = in_stack_00000014;
  *(void **)(iVar1 + 100) = in_stack_00000018;
  return;
}


// Assembly code:
// 0040e220: PUSH EBX
//   Label: core_actor.cpp_CActorPropertyList_FUN_0040e220
// 0040e221: PUSH ESI
// 0040e222: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x18] (READ)
// 0040e226: PUSH EDX
// 0040e227: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0040e22b: PUSH ECX
// 0040e22c: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0040e230: PUSH EBX
// 0040e231: PUSH 0x0
// 0040e233: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0040e237: PUSH ESI
// 0040e238: CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
//   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)
// 0040e23d: MOV dword ptr [EAX + 0x5c],0x1
// 0040e244: ADD ESP,0x14
// 0040e247: MOV dword ptr [EAX + 0x6c],0x1
// 0040e24e: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 0040e252: MOV dword ptr [EAX + 0x60],EDX
// 0040e255: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x14] (READ)
// 0040e259: MOV dword ptr [EAX + 0x64],EDX
// 0040e25c: POP ESI
// 0040e25d: POP EBX
// 0040e25e: RET
