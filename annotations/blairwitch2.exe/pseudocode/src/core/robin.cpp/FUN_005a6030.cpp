// Name: core_robin.cpp_FUN_005a6030
// Address: 005a6030
// Address Range: [[005a6030, 005a60c1]]
// Convention: unknown
// Signature: void core_robin_cpp_FUN_005a6030(int param_1)

#include "nocturne.h"

void core_robin_cpp_FUN_005a6030(int param_1)

{
  int iVar1;
  
  core_basicnpc_cpp_FUN_005a4870(param_1);
  iVar1 = core_skeleton_cpp_FUN_00540e80(*(CSkeleton **)(param_1 + 0x113b0),"Bip01 Head",1)
  ;
  *(int *)(param_1 + 0x11850) = iVar1;
  *(int *)(param_1 + 0x10a24) = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00540e80
                    (*(CSkeleton **)(param_1 + 0x113b0),"Bip01 R Hand",1);
  *(int *)(param_1 + 0x11854) = iVar1;
  *(int *)(param_1 + 0x2618) = iVar1;
  unkaddr_005a7eb0_cpp_FUN_005a8030(param_1 + 0x154,0x100);
  unkaddr_005a7eb0_cpp_FUN_005a8050(param_1 + 0x154,param_1);
  unkaddr_005a7eb0_cpp_FUN_005a8030(param_1 + 0x198,0x100);
  unkaddr_005a7eb0_cpp_FUN_005a8050(param_1 + 0x198,param_1);
  return;
}
