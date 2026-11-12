// Name: core_charactr.cpp_FUN_004342c0
// Address: 004342c0
// Address Range: [[004342c0, 00434312]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_004342c0(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void core_charactr_cpp_FUN_004342c0(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x27c4) * 0x38;
  core_skeleton_cpp_FUN_00568100
            (param_1 + 0x158,*(uint *)(iVar1 + 0x2c + param_1 + 0x27c8),
             (float)*(int *)(iVar1 + 0x30 + param_1 + 0x27c8) * *(float *)(param_1 + 0x2c9c),param_2
             ,param_3,core_skeleton_cpp_FUN_00567360);
  return;
}
