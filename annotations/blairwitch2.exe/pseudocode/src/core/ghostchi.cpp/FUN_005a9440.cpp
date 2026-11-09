// Name: core_ghostchi.cpp_FUN_005a9440
// Address: 005a9440
// Address Range: [[005a9440, 005a94be]]
// Convention: unknown
// Signature: void core_ghostchi_cpp_FUN_005a9440(int param_1)

#include "nocturne.h"

void core_ghostchi_cpp_FUN_005a9440(int param_1)

{
  int iVar1;
  
  unkafter_basicene_cpp_FUN_0059e6a0(param_1);
  iVar1 = core_skeleton_cpp_FUN_00540e80(*(CSkeleton **)(param_1 + 0x113b0),"Bip01 Head",1)
  ;
  *(int *)(param_1 + 0x11850) = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00540e80
                    (*(CSkeleton **)(param_1 + 0x113b0),"Bip01 R Hand",1);
  *(int *)(param_1 + 0x11854) = iVar1;
  iVar1 = param_1 + 0x264;
  *(uint *)(param_1 + 0x10a24) = *(uint *)(param_1 + 0x11850);
  unkaddr_005a7eb0_cpp_FUN_005a8030(iVar1,0x100);
  unkaddr_005a7eb0_cpp_FUN_005a8050(iVar1,param_1);
  unkaddr_005a7eb0_cpp_FUN_005a80d0(iVar1,0);
  return;
}
