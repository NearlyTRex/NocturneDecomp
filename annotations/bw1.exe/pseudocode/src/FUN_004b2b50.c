// Name: FUN_004b2b50
// Address: 004b2b50
// Address Range: [[004b2b50, 004b2d37]]
// Convention: unknown
// Signature: void FUN_004b2b50(float *param_1,float *param_2,float *param_3,float param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b2b50(float *param_1,float *param_2,float *param_3,float param_4)

{
  byte bVar1;
  float afStackY_1048 [1006];
  uint uVar2;
  uint uVar3;
  byte local_88 [40];
  float local_60;
  float local_5c [5];
  float local_48;
  float local_44 [5];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  uint local_18;
  float local_14;
  float local_10;
  
  bVar1 = 0;
  if (param_1 + 1 != param_2) {
    param_1[1] = *param_2;
    param_1[2] = param_2[1];
    param_1[3] = param_2[2];
  }
  local_10 = (float)FUN_0040cc00(0x3f666666,0x3f800000);
  *param_1 = _DAT_005fffb0 * local_10;
  local_10 = (float)FUN_0040cc00(0,0x41980000);
  uVar3 = 0x3d567750;
  param_1[7] = local_10;
  uVar2 = 0xbd567750;
  local_48 = *param_3;
  local_44[(uint)bVar1 * -2] = param_3[(uint)bVar1 * -2 + 1];
  local_44[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       (param_3 + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1];
  local_10 = (float)FUN_0040cc00(uVar2,uVar3);
  local_44[0] = local_10 + local_44[0];
  local_10 = (float)FUN_0040cc00(0xbd567750,0x3d567750);
  local_48 = local_10 + local_48;
  FUN_0045f3e0(local_88,&local_48);
  local_5c[4] = (float)FUN_0040cc00(0x40a33333,0x40cccccd);
  local_5c[2] = 0.0;
  local_5c[3] = 0.0;
  local_18 = local_5c[4];
  local_10 = local_5c[4];
  FUN_0045f690(local_88,local_5c + 2);
  local_60 = local_44[2];
  local_5c[(uint)bVar1 * -2] = local_44[(uint)bVar1 * -2 + 3];
  local_5c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       local_44[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4];
  if (param_1 + 4 != &local_60) {
    param_1[4] = local_60;
    param_1[5] = local_5c[0];
    param_1[6] = local_5c[1];
  }
  local_10 = (float)FUN_0040cc00(0,0x3dcccccd);
  local_14 = local_10;
  local_24 = param_1[4] * local_10;
  local_20 = param_1[5] * local_10;
  local_1c = param_1[6] * local_10;
  local_30 = param_1[4] * local_10;
  local_44[(uint)bVar1 * -2 + 6] = local_44[(uint)bVar1 * -2 + 9];
  local_44[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 7] =
       local_44[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 10];
  param_1[1] = param_1[1] + local_30;
  param_1[2] = param_1[2] + local_2c;
  param_1[3] = param_1[3] + local_28;
  param_1[8] = param_4;
  return;
}
