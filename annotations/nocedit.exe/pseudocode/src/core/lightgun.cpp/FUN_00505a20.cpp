// Name: core_lightgun.cpp_FUN_00505a20
// Address: 00505a20
// Address Range: [[00505a20, 00505ab9]]
// Convention: unknown
// Signature: undefined core_lightgun.cpp_FUN_00505a20()
// Globals:
//   TerminatedCString s_CGhoul_00631487
//   TerminatedCString s_CTVBat_0063148e
//   TerminatedCString s_CBatCreature_00631495
//   TerminatedCString s_CWerewolf_006314a2
//   TerminatedCString s_CSvetlana_006314ac
// Function calls:
//   core_actor.cpp_isOfClass_FUN_0040c6d0

#include "nocturne.h"

int core_lightgun_cpp_FUN_00505a20(void)

{
  int iVar1;
  CDemonActor *in_stack_00000004;
  
  iVar1 = (*in_stack_00000004->vtable[1].renderOpaque)(in_stack_00000004);
  if (iVar1 == 0) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000004,"CGhoul");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000004,"CTVBat");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000004,"CBatCreature");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000004,"CWerewolf");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000004,"CSvetlana");
    if (iVar1 != 0) {
      return 1;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


// Assembly code:
// 00505a20: PUSH EBX
//   Label: core_lightgun.cpp_FUN_00505a20
// 00505a21: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00505a25: PUSH EBX
// 00505a26: MOV EAX,dword ptr [EBX + 0x154]
// 00505a2c: CALL dword ptr [EAX + 0xf4]
// 00505a32: ADD ESP,0x4
// 00505a35: TEST EAX,EAX
// 00505a37: JZ 0x00505a3d
//   XREF to: 00505a3d (CONDITIONAL_JUMP)
// 00505a39: XOR EAX,EAX
// 00505a3b: POP EBX
//   Label: LAB_00505a3b
// 00505a3c: RET
// 00505a3d: PUSH 0x631487
//   Label: LAB_00505a3d
//   XREF to: 00631487 (DATA)
// 00505a42: PUSH EBX
// 00505a43: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 00505a48: ADD ESP,0x8
// 00505a4b: TEST EAX,EAX
// 00505a4d: JZ 0x00505a56
//   XREF to: 00505a56 (CONDITIONAL_JUMP)
// 00505a4f: MOV EAX,0x1
// 00505a54: POP EBX
// 00505a55: RET
// 00505a56: PUSH 0x63148e
//   Label: LAB_00505a56
//   XREF to: 0063148e (DATA)
// 00505a5b: PUSH EBX
// 00505a5c: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 00505a61: ADD ESP,0x8
// 00505a64: TEST EAX,EAX
// 00505a66: JZ 0x00505a6f
//   XREF to: 00505a6f (CONDITIONAL_JUMP)
// 00505a68: MOV EAX,0x1
// 00505a6d: POP EBX
// 00505a6e: RET
// 00505a6f: PUSH 0x631495
//   Label: LAB_00505a6f
//   XREF to: 00631495 (DATA)
// 00505a74: PUSH EBX
// 00505a75: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 00505a7a: ADD ESP,0x8
// 00505a7d: TEST EAX,EAX
// 00505a7f: JZ 0x00505a88
//   XREF to: 00505a88 (CONDITIONAL_JUMP)
// 00505a81: MOV EAX,0x1
// 00505a86: POP EBX
// 00505a87: RET
// 00505a88: PUSH 0x6314a2
//   Label: LAB_00505a88
//   XREF to: 006314a2 (DATA)
// 00505a8d: PUSH EBX
// 00505a8e: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 00505a93: ADD ESP,0x8
// 00505a96: TEST EAX,EAX
// 00505a98: JZ 0x00505aa1
//   XREF to: 00505aa1 (CONDITIONAL_JUMP)
// 00505a9a: MOV EAX,0x1
// 00505a9f: POP EBX
// 00505aa0: RET
// 00505aa1: PUSH 0x6314ac
//   Label: LAB_00505aa1
//   XREF to: 006314ac (DATA)
// 00505aa6: PUSH EBX
// 00505aa7: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 00505aac: ADD ESP,0x8
// 00505aaf: TEST EAX,EAX
// 00505ab1: JZ 0x00505a3b
//   XREF to: 00505a3b (CONDITIONAL_JUMP)
// 00505ab3: MOV EAX,0x1
// 00505ab8: POP EBX
// 00505ab9: RET
