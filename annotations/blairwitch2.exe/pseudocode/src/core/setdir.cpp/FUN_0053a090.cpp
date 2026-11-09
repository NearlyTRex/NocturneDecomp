// Name: core_setdir.cpp_FUN_0053a090
// Address: 0053a090
// Address Range: [[0053a090, 0053a148]]
// Convention: unknown
// Signature: undefined4 core_setdir_cpp_FUN_0053a090(int param_1,int param_2,float *param_3)

#include "nocturne.h"

uint core_setdir_cpp_FUN_0053a090(int param_1,int param_2,float *param_3)

{
  float *pfVar1;
  byte bVar2;
  float afStackY_1028 [1016];
  float local_40;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  
  bVar2 = 0;
  pfVar1 = (float *)(param_1 + 0x15b428 + param_2 * 0x44);
  local_34 = *param_3 - *pfVar1;
  local_30 = param_3[1] - pfVar1[1];
  local_2c = param_3[2] - pfVar1[2];
  local_1c = local_34;
  fStack_18 = local_30;
  fStack_14 = local_2c;
  core_dirmat_cpp_FUN_004495a0(pfVar1 + 6,&stack0xffffffe4);
  local_28 = local_40;
  *(uint *)((int)&stack0xffffffdc + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffc4 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if (((ABS(local_28) <= pfVar1[3]) && (ABS(local_24) <= pfVar1[4])) && (ABS(local_20) <= pfVar1[5])
     ) {
    return 1;
  }
  return 0;
}
