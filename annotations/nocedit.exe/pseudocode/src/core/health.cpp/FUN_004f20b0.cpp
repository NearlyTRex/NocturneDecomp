// Name: core_health.cpp_FUN_004f20b0
// Address: 004f20b0
// Address Range: [[004f20b0, 004f20c7]]
// Convention: unknown
// Signature: undefined core_health.cpp_FUN_004f20b0()
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0

#include "nocturne.h"

/* Signature: undefined1 actors_other_health.cpp_FUN_004f20b0(undefined4 param_1, undefined4
   param_2) */

void core_health_cpp_FUN_004f20b0(void)

{
  int in_stack_00000004;
  FILE *in_stack_00000008;
  
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158),in_stack_00000008);
  return;
}


// Assembly code:
// 004f20b0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_health.cpp_FUN_004f20b0
//   XREF to: Stack[0x8] (READ)
// 004f20b4: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 004f20b8: PUSH EDX
// 004f20b9: ADD EAX,0x158
// 004f20be: PUSH EAX
// 004f20bf: CALL core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
//   XREF to: 0047edd0 (UNCONDITIONAL_CALL)
// 004f20c4: ADD ESP,0x8
// 004f20c7: RET
