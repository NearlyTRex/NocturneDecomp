// Name: core_hand.cpp_FUN_005a9dd0
// Address: 005a9dd0
// Address Range: [[005a9dd0, 005a9e01]]
// Convention: unknown
// Signature: void core_hand_cpp_FUN_005a9dd0(int param_1)

#include "nocturne.h"

void core_hand_cpp_FUN_005a9dd0(int param_1)

{
  int iVar1;
  
  unkafter_basicene_cpp_FUN_0059e6a0(param_1);
  iVar1 = core_skeleton_cpp_FUN_00540e80
                    (*(CSkeleton **)(param_1 + 0x113b0),"Bip01 R Hand",1);
  *(int *)(param_1 + 0x11850) = iVar1;
  *(int *)(param_1 + 0x1137c) = iVar1;
  return;
}
