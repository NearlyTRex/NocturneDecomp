// Name: core_boxactor.cpp_FUN_004224b0
// Address: 004224b0
// Address Range: [[004224b0, 004224de]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_004224b0()
// Globals:
//   TerminatedCString s_CHero_0061679f
// Function calls:
//   core_actor.cpp_isOfClass_FUN_0040c6d0

#include "nocturne.h"

/* Signature: undefined1 actors_other_boxactor.cpp_FUN_004224b0(undefined4 param_1, undefined4
   param_2) */

undefined4 core_boxactor_cpp_FUN_004224b0(void)

{
  int iVar1;
  int in_stack_00000004;
  CDemonActor *in_stack_00000008;
  
  if (*(int *)(in_stack_00000004 + 0x314) != 3) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000008,"CHero");
    if (iVar1 == 0) {
      return 0;
    }
  }
  return *(undefined4 *)(in_stack_00000004 + 0x314);
}


// Assembly code:
// 004224b0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_boxactor.cpp_FUN_004224b0
//   XREF to: Stack[0x4] (READ)
// 004224b4: CMP dword ptr [EAX + 0x314],0x3
// 004224bb: JNZ 0x004224c8
//   XREF to: 004224c8 (CONDITIONAL_JUMP)
// 004224bd: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004224bd
//   XREF to: Stack[0x4] (READ)
// 004224c1: MOV EAX,dword ptr [EAX + 0x314]
// 004224c7: RET
// 004224c8: PUSH 0x61679f
//   Label: LAB_004224c8
//   XREF to: 0061679f (DATA)
// 004224cd: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004224d1: PUSH ECX
// 004224d2: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004224d7: ADD ESP,0x8
// 004224da: TEST EAX,EAX
// 004224dc: JNZ 0x004224bd
//   XREF to: 004224bd (CONDITIONAL_JUMP)
// 004224de: RET
