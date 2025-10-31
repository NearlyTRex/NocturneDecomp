// Name: core_gasmask.cpp_CGasMask_FUN_004e5d70
// Address: 004e5d70
// Address Range: [[004e5d70, 004e5d8f]]
// Convention: unknown
// Signature: undefined core_gasmask.cpp_CGasMask_FUN_004e5d70()
// Globals:
//   TerminatedCString s_CHero_0062dab5
// Function calls:
//   core_actor.cpp_isOfClass_FUN_0040c6d0

#include "nocturne.h"

/* Signature: undefined1 actors_other_gasmask.cpp_CGasMask_FUN_004e5d70(undefined1 param_1,
   undefined4 param_2) */

int core_gasmask_cpp_CGasMask_FUN_004e5d70(void)

{
  int iVar1;
  CDemonActor *in_stack_00000008;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000008,"CHero");
  if (iVar1 != 0) {
    iVar1 = 2;
  }
  return iVar1;
}


// Assembly code:
// 004e5d70: PUSH 0x62dab5
//   Label: core_gasmask.cpp_CGasMask_FUN_004e5d70
//   XREF to: 0062dab5 (DATA)
// 004e5d75: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004e5d79: PUSH EDX
// 004e5d7a: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004e5d7f: ADD ESP,0x8
// 004e5d82: TEST EAX,EAX
// 004e5d84: JZ 0x004e5d90
//   XREF to: 004e5d90 (CONDITIONAL_JUMP)
// 004e5d86: MOV EAX,0x2
// 004e5d8b: LEA EAX,[EAX]
// 004e5d8e: MOV ECX,ECX
