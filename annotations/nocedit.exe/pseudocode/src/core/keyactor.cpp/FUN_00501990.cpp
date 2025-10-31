// Name: core_keyactor.cpp_FUN_00501990
// Address: 00501990
// Address Range: [[00501990, 005019a7]]
// Convention: unknown
// Signature: undefined core_keyactor.cpp_FUN_00501990()
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0

#include "nocturne.h"

/* Signature: undefined1 actors_other_keyactor.cpp_FUN_00501990(undefined4 param_1, undefined4
   param_2) */

void core_keyactor_cpp_FUN_00501990(void)

{
  int in_stack_00000004;
  FILE *in_stack_00000008;
  
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158),in_stack_00000008);
  return;
}


// Assembly code:
// 00501990: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_keyactor.cpp_FUN_00501990
//   XREF to: Stack[0x8] (READ)
// 00501994: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 00501998: PUSH EDX
// 00501999: ADD EAX,0x158
// 0050199e: PUSH EAX
// 0050199f: CALL core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
//   XREF to: 0047edd0 (UNCONDITIONAL_CALL)
// 005019a4: ADD ESP,0x8
// 005019a7: RET
