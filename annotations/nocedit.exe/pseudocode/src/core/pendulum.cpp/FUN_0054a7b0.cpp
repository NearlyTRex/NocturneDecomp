// Name: core_pendulum.cpp_FUN_0054a7b0
// Address: 0054a7b0
// Address Range: [[0054a7b0, 0054a7c7]]
// Convention: unknown
// Signature: undefined core_pendulum.cpp_FUN_0054a7b0()
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0

#include "nocturne.h"

/* Signature: undefined1 actors_other_pendulum.cpp_FUN_0054a7b0(undefined4 param_1, undefined4
   param_2) */

void core_pendulum_cpp_FUN_0054a7b0(void)

{
  int in_stack_00000004;
  FILE *in_stack_00000008;
  
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158),in_stack_00000008);
  return;
}


// Assembly code:
// 0054a7b0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_pendulum.cpp_FUN_0054a7b0
//   XREF to: Stack[0x8] (READ)
// 0054a7b4: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0054a7b8: PUSH EDX
// 0054a7b9: ADD EAX,0x158
// 0054a7be: PUSH EAX
// 0054a7bf: CALL core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
//   XREF to: 0047edd0 (UNCONDITIONAL_CALL)
// 0054a7c4: ADD ESP,0x8
// 0054a7c7: RET
