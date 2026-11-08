// Name: FUN_0049e1a0
// Address: 0049e1a0
// Address Range: [[0049e1a0, 0049e385]]
// Convention: unknown
// Signature: void FUN_0049e1a0(float *param_1,float *param_2,float *param_3,float param_4,float param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049e1a0(float *param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  float fVar1;
  byte bVar2;
  float afStackY_1024 [1006];
  uint uVar3;
  uint uVar4;
  byte local_64 [40];
  float local_3c;
  float local_38 [4];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar2 = 0;
  if (param_1 != param_2) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  if (param_5 == 8.40779e-45) {
    param_1[3] = 0x40400000;
  }
  else {
    fVar1 = (float)FUN_0040ce40(0x3f666666,0x3f800000);
    param_1[3] = fVar1 * _DAT_005df900;
  }
  if ((((param_5 == 2.8026e-45) || (param_5 == 5.60519e-45)) || (param_5 == 4.2039e-45)) ||
     ((param_5 == 8.40779e-45 || (param_5 == 9.80909e-45)))) {
    param_1[10] = 1.4013e-45;
  }
  else if (param_5 == 7.00649e-45) {
    param_1[10] = 8.40779e-45;
  }
  else {
    param_1[10] = 2.8026e-44;
  }
  local_14 = (float)((int)param_1[10] + -1);
  local_14 = (float)FUN_0040ce40(0,(float)(int)local_14);
  param_1[7] = local_14;
  uVar4 = 0x3d567750;
  uVar3 = 0xbd567750;
  local_3c = *param_3;
  local_38[(uint)bVar2 * -2] = param_3[(uint)bVar2 * -2 + 1];
  local_38[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       (param_3 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1];
  local_14 = (float)FUN_0040ce40(uVar3,uVar4);
  local_38[0] = local_14 + local_38[0];
  local_14 = (float)FUN_0040ce40(0xbd567750,0x3d567750);
  local_3c = local_14 + local_3c;
  FUN_0045b550(local_64,&local_3c);
  if (param_1 + 4 != &local_3c) {
    param_1[4] = local_3c;
    param_1[5] = local_38[0];
    param_1[6] = local_38[1];
  }
  local_14 = (float)FUN_0040ce40(0,0x3dcccccd);
  local_18 = local_14;
  local_24 = param_1[4] * local_14;
  local_20 = param_1[5] * local_14;
  local_1c = param_1[6] * local_14;
  local_38[2] = param_1[4] * local_14;
  local_38[(uint)bVar2 * -2 + 3] = local_38[(uint)bVar2 * -2 + 6];
  local_38[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
       local_38[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7];
  param_1[8] = param_4;
  param_1[9] = param_5;
  *param_1 = *param_1 + local_38[2];
  param_1[1] = param_1[1] + local_38[3];
  param_1[2] = param_1[2] + local_28;
  return;
}
