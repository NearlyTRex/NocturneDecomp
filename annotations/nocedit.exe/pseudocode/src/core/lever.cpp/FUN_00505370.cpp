// Name: core_lever.cpp_FUN_00505370
// Address: 00505370
// Address Range: [[00505370, 00505387]]
// Convention: unknown
// Signature: undefined core_lever.cpp_FUN_00505370()
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0

#include "nocturne.h"

/* Signature: undefined1 actors_other_lever.cpp_FUN_00505370(undefined4 param_1, undefined4 param_2)
    */

void core_lever_cpp_FUN_00505370(void)

{
  int in_stack_00000004;
  FILE *in_stack_00000008;
  
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158),in_stack_00000008);
  return;
}


// Assembly code:
// 00505370: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_lever.cpp_FUN_00505370
//   XREF to: Stack[0x8] (READ)
// 00505374: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 00505378: PUSH EDX
// 00505379: ADD EAX,0x158
// 0050537e: PUSH EAX
// 0050537f: CALL core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
//   XREF to: 0047edd0 (UNCONDITIONAL_CALL)
// 00505384: ADD ESP,0x8
// 00505387: RET
