// Name: core_dcamera.cpp_FUN_004405d0
// Address: 004405d0
// Address Range: [[004405d0, 00440605]]
// Convention: unknown
// Signature: void core_dcamera_cpp_FUN_004405d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

void core_dcamera_cpp_FUN_004405d0(int param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  
  if (0xff < *(int *)(param_1 + 0x1d0)) {
    *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + 1;
    return;
  }
  puVar1 = (uint *)(*(int *)(param_1 + 0x1d0) * 0x10 + 0x1d4 + param_1);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  puVar1[3] = param_5;
  *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + 1;
  return;
}
