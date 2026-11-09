// Name: unkafter_zombie.cpp_FUN_005cc9f0
// Address: 005cc9f0
// Address Range: [[005cc9f0, 005cca6b]]
// Convention: unknown
// Signature: void unkafter_zombie_cpp_FUN_005cc9f0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void unkafter_zombie_cpp_FUN_005cc9f0(uint param_1,uint param_2)

{
  int iVar1;
  byte local_10 [4];
  byte local_c [4];
  
  unkafter_2d_cpp_FUN_005cdec0(local_c,param_1);
  iVar1 = FUN_005c9110(param_1);
  local_c[iVar1] = 0;
  unkafter_2d_cpp_FUN_005cdec0(local_10,param_2);
  iVar1 = FUN_005c9110(param_2);
  local_10[iVar1] = 0;
  unkafter_2d_cpp_FUN_005cdf00(local_c);
  unkafter_2d_cpp_FUN_005cdf00(local_10);
  unkafter_2d_cpp_FUN_005cdf70(local_c,local_10);
  return;
}
