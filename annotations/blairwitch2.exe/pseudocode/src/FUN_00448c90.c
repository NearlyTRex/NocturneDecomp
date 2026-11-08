// Name: FUN_00448c90
// Address: 00448c90
// Address Range: [[00448c90, 00448d99]]
// Convention: unknown
// Signature: undefined4 FUN_00448c90(int param_1,float *param_2,undefined4 param_3,float *param_4,float *param_5)

#include "nocturne.h"

uint FUN_00448c90(int param_1,float *param_2,uint param_3,float *param_4,float *param_5)

{
  byte bVar1;
  float afStackY_1028 [1016];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar1 = 0;
  local_28 = *(float *)(param_1 + 0x24) - *param_2;
  local_24 = *(float *)(param_1 + 0x28) - param_2[1];
  local_20 = *(float *)(param_1 + 0x2c) - param_2[2];
  local_1c = local_28;
  local_18 = local_24;
  local_14 = local_20;
  FUN_004495a0(param_3,&local_1c);
  local_40 = local_34;
  *(uint *)((int)&stack0xffffffc4 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffd0 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (&local_1c != &stack0xffffffc0) {
    local_1c = local_40;
    local_18 = local_3c;
    local_14 = local_38;
  }
  if ((((*param_4 <= local_1c + *(float *)(param_1 + 0x30)) &&
       (param_4[1] <= local_18 + *(float *)(param_1 + 0x30))) &&
      (param_4[2] <= local_14 + *(float *)(param_1 + 0x30))) &&
     (((local_1c - *(float *)(param_1 + 0x30) <= *param_5 &&
       (local_18 - *(float *)(param_1 + 0x30) <= param_5[1])) &&
      (local_14 - *(float *)(param_1 + 0x30) <= param_5[2])))) {
    return 1;
  }
  return 0;
}
