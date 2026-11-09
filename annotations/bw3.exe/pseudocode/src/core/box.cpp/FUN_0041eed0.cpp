// Name: core_box.cpp_FUN_0041eed0
// Address: 0041eed0
// Address Range: [[0041eed0, 0041ef34]]
// Convention: unknown
// Signature: bool core_box_cpp_FUN_0041eed0(undefined4 param_1,float *param_2,float param_3)

#include "nocturne.h"

bool core_box_cpp_FUN_0041eed0(uint param_1,float *param_2,float param_3)

{
  byte bVar1;
  float afStackY_101c [1016];
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  
  bVar1 = 0;
  core_box_cpp_FUN_0041ee30(param_1,param_2);
  local_34 = local_28;
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  return (local_2c - param_2[2]) * (local_2c - param_2[2]) +
         (local_30 - param_2[1]) * (local_30 - param_2[1]) +
         (local_34 - *param_2) * (local_34 - *param_2) <= param_3 * param_3;
}
