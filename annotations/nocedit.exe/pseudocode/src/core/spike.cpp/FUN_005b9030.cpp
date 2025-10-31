// Name: core_spike.cpp_FUN_005b9030
// Address: 005b9030
// Address Range: [[005b9030, 005b9047]]
// Convention: unknown
// Signature: undefined core_spike.cpp_FUN_005b9030()
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0

#include "nocturne.h"

/* Signature: undefined1 actors_other_spike.cpp_FUN_005b9030(undefined4 param_1, undefined4 param_2)
    */

void core_spike_cpp_FUN_005b9030(void)

{
  int in_stack_00000004;
  FILE *in_stack_00000008;
  
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158),in_stack_00000008);
  return;
}


// Assembly code:
// 005b9030: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_spike.cpp_FUN_005b9030
//   XREF to: Stack[0x8] (READ)
// 005b9034: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005b9038: PUSH EDX
// 005b9039: ADD EAX,0x158
// 005b903e: PUSH EAX
// 005b903f: CALL core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
//   XREF to: 0047edd0 (UNCONDITIONAL_CALL)
// 005b9044: ADD ESP,0x8
// 005b9047: RET
