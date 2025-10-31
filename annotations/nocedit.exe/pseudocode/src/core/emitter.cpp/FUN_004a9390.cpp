// Name: core_emitter.cpp_FUN_004a9390
// Address: 004a9390
// Address Range: [[004a9390, 004a93b1]]
// Convention: unknown
// Signature: undefined core_emitter.cpp_FUN_004a9390()
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0

#include "nocturne.h"

/* Signature: undefined1 actors_other_emitter.cpp_FUN_004a9390(undefined4 param_1, undefined4
   param_2) */

void core_emitter_cpp_FUN_004a9390(void)

{
  int in_stack_00000004;
  FILE *in_stack_00000008;
  
  if (*(int *)(in_stack_00000004 + 0x158) != 4) {
    return;
  }
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x248),in_stack_00000008);
  return;
}


// Assembly code:
// 004a9390: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_emitter.cpp_FUN_004a9390
//   XREF to: Stack[0x4] (READ)
// 004a9394: CMP dword ptr [EAX + 0x158],0x4
// 004a939b: JZ 0x004a939e
//   XREF to: 004a939e (CONDITIONAL_JUMP)
// 004a939d: RET
// 004a939e: MOV ECX,dword ptr [ESP + 0x8]
//   Label: LAB_004a939e
//   XREF to: Stack[0x8] (READ)
// 004a93a2: PUSH ECX
// 004a93a3: ADD EAX,0x248
// 004a93a8: PUSH EAX
// 004a93a9: CALL core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
//   XREF to: 0047edd0 (UNCONDITIONAL_CALL)
// 004a93ae: ADD ESP,0x8
// 004a93b1: RET
