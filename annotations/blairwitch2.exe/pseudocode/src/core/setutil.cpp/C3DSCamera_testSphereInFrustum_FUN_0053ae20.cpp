// Name: core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_0053ae20
// Address: 0053ae20
// Address Range: [[0053ae20, 0053af07]]
// Convention: unknown
// Signature: undefined4 core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_0053ae20(int param_1,float *param_2,float param_3)

#include "nocturne.h"

uint core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_0053ae20(int param_1,float *param_2,float param_3)

{
  byte bVar1;
  float afStackY_1018 [1013];
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_18;
  float fStack_14;
  float fStack_10;
  
  bVar1 = 0;
  local_3c = *param_2 - *(float *)(param_1 + 0x100);
  local_38 = param_2[1] - *(float *)(param_1 + 0x104);
  local_34 = param_2[2] - *(float *)(param_1 + 0x108);
  local_18 = local_3c;
  fStack_14 = local_38;
  fStack_10 = local_34;
  core_dirmat_cpp_FUN_004495a0(param_1 + 0x118,&stack0xffffffe8);
  local_30 = local_24;
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffd8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if ((((*(float *)(param_1 + 0x17c) <= local_30 + param_3) &&
       (*(float *)(param_1 + 0x180) <= local_2c + param_3)) &&
      (*(float *)(param_1 + 0x184) <= local_28 + param_3)) &&
     (((local_30 - param_3 <= *(float *)(param_1 + 0x188) &&
       (local_2c - param_3 <= *(float *)(param_1 + 0x18c))) &&
      (local_28 - param_3 <= *(float *)(param_1 + 400))))) {
    return 1;
  }
  return 0;
}
