// Name: core_dog1.cpp_FUN_005abdd0
// Address: 005abdd0
// Address Range: [[005abdd0, 005abe8c]]
// Convention: unknown
// Signature: void core_dog1_cpp_FUN_005abdd0(int param_1)

#include "nocturne.h"

void core_dog1_cpp_FUN_005abdd0(int param_1)

{
  int iVar1;
  int iVar2;
  uint auStack_1c [3];
  
  unkafter_basicene_cpp_FUN_0059e6a0(param_1);
  iVar1 = core_skeleton_cpp_FUN_00540e80(*(CSkeleton **)(param_1 + 0x113b0),"Dummy01",1);
  iVar2 = *(int *)(param_1 + 0x1185c);
  *(int *)(param_1 + 0x11850) = iVar1;
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x90))(iVar2,param_1);
  }
  iVar2 = _strcmp((char *)(param_1 + 0x2514),"BDOG.DFM");
  if (iVar2 == 0) {
    *(uint *)(param_1 + 0x10a28) = 1;
    iVar2 = core_skeleton_cpp_FUN_00540e80
                      (*(CSkeleton **)(param_1 + 0x113b0),"Bip01 Head",1);
    *(int *)(param_1 + 0x10a24) = iVar2;
    if ((uint *)(param_1 + 0x10a3c) != auStack_1c) {
      *(uint *)(param_1 + 0x10a3c) = 0x3f800000;
      *(uint *)(param_1 + 0x10a40) = 0;
      *(uint *)(param_1 + 0x10a44) = 0;
      return;
    }
  }
  return;
}
