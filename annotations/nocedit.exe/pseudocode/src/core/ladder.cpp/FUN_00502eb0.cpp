// Name: core_ladder.cpp_FUN_00502eb0
// Address: 00502eb0
// Address Range: [[00502eb0, 00502ec7]]
// Convention: unknown
// Signature: undefined core_ladder.cpp_FUN_00502eb0()
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0

#include "nocturne.h"

/* Signature: undefined1 actors_other_ladder.cpp_FUN_00502eb0(undefined4 param_1, undefined4
   param_2) */

void core_ladder_cpp_FUN_00502eb0(void)

{
  int in_stack_00000004;
  FILE *in_stack_00000008;
  
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158),in_stack_00000008);
  return;
}


// Assembly code:
// 00502eb0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_ladder.cpp_FUN_00502eb0
//   XREF to: Stack[0x8] (READ)
// 00502eb4: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 00502eb8: PUSH EDX
// 00502eb9: ADD EAX,0x158
// 00502ebe: PUSH EAX
// 00502ebf: CALL core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
//   XREF to: 0047edd0 (UNCONDITIONAL_CALL)
// 00502ec4: ADD ESP,0x8
// 00502ec7: RET
