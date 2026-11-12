// Name: core_charactr.cpp_FUN_0042a2d0
// Address: 0042a2d0
// Address Range: [[0042a2d0, 0042a322]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042a2d0(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void core_charactr_cpp_FUN_0042a2d0(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2830) * 0x38;
  core_skeleton_cpp_FUN_00545a60
            (param_1 + 0x2b4,*(uint *)(iVar1 + 0x2c + param_1 + 0x2834),
             (float)*(int *)(iVar1 + 0x30 + param_1 + 0x2834) * *(float *)(param_1 + 0x2d08),param_2
             ,param_3,core_skeleton_cpp_FUN_00544cc0);
  return;
}
