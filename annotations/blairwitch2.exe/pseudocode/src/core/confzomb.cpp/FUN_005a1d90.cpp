// Name: core_confzomb.cpp_FUN_005a1d90
// Address: 005a1d90
// Address Range: [[005a1d90, 005a1e02]]
// Convention: unknown
// Signature: void core_confzomb_cpp_FUN_005a1d90(int param_1)

#include "nocturne.h"

void core_confzomb_cpp_FUN_005a1d90(int param_1)

{
  int iVar1;
  int iVar2;
  
  unkafter_basicene_cpp_FUN_0059e6a0(param_1);
  iVar1 = core_skeleton_cpp_FUN_00540e80
                    (*(CSkeleton **)(param_1 + 0x113b0),"Bip01 L Finger1",1);
  *(int *)(param_1 + 0x11850) = iVar1;
  iVar2 = core_skeleton_cpp_FUN_00540e80
                    (*(CSkeleton **)(param_1 + 0x113b0),"Bip01 R Finger1",1);
  iVar1 = param_1 + 0x264;
  *(int *)(param_1 + 0x11854) = iVar2;
  unkaddr_005a7eb0_cpp_FUN_005a8030(iVar1,0x100);
  unkaddr_005a7eb0_cpp_FUN_005a8050(iVar1,param_1);
  unkaddr_005a7eb0_cpp_FUN_005a80d0(iVar1,0);
  return;
}
