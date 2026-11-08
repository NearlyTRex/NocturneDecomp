// Name: FUN_00518560
// Address: 00518560
// Address Range: [[00518560, 005186ab]]
// Convention: unknown
// Signature: void FUN_00518560(float *param_1,float *param_2,float *param_3,float *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00518560(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  byte bVar2;
  float afStackY_1048 [1017];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar2 = 0;
  local_14 = (param_3[2] - param_2[2]) * param_1[2] +
             (*param_3 - *param_2) * *param_1 + (param_3[1] - param_2[1]) * param_1[1];
  if (ABS(local_14) == 0.0) {
    _DAT_01d1d400 = "..\\core\\mirror.cpp";
    _DAT_01d1d404 = 0x42;
    FUN_005030e0("Bad clip!");
  }
  fVar1 = -(param_1[2] * param_2[2] + param_1[1] * param_2[1] + *param_1 * *param_2 + param_1[3]) /
          local_14;
  local_30 = *param_3 - *param_2;
  local_2c = param_3[1] - param_2[1];
  local_28 = param_3[2] - param_2[2];
  local_60 = *param_3 - *param_2;
  *(uint *)((int)&stack0xffffffa4 + (uint)bVar2 * -8) =
       *(uint *)((int)&stack0xffffffd4 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffa8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)((int)&stack0xffffffd8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  local_18 = fVar1;
  local_24 = local_60 * fVar1;
  local_20 = local_5c * fVar1;
  local_1c = local_58 * fVar1;
  local_3c = local_60 * fVar1;
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar2 * -8) =
       *(uint *)((int)&stack0xffffffe0 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffcc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)((int)&stack0xffffffe4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  local_54 = *param_2 + local_3c;
  local_50 = param_2[1] + local_38;
  local_4c = param_2[2] + local_34;
  local_48 = *param_2 + local_3c;
  *(uint *)((int)&stack0xffffffbc + (uint)bVar2 * -8) =
       *(uint *)((int)&stack0xffffffb0 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffc0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)((int)&stack0xffffffb4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if (param_4 == &stack0xffffffb8) {
    return;
  }
  *param_4 = local_48;
  param_4[1] = local_44;
  param_4[2] = local_40;
  return;
}
