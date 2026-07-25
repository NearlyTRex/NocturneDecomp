// Name: FUN_00473080
// Address: 00473080
// Address Range: [[00473080, 0047318e]]
// Convention: unknown
// Signature: void FUN_00473080(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00473080(float *param_1,float *param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_9c [12];
  uint auStack_6c [9];
  uint uStack_48;
  uint uStack_44;
  int *piStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int local_24;
  int local_20;
  int local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  bVar4 = 0;
  local_24 = (int)ROUND(*param_1 * _DAT_0059ca4c);
  local_20 = (int)ROUND(param_1[1] * _DAT_0059ca4c);
  local_1c = (int)ROUND(param_1[2] * _DAT_0059ca4c);
  piStack_40 = &local_24;
  uStack_44 = 0;
  uStack_48 = 0x4730c2;
  engine_matrix_c_transformToCache_FUN_004cd210();
  fStack_30 = *param_2 * 0.000878906456455297._0_4_;
  fStack_2c = param_2[1] * 0.000878906456455297._0_4_;
  fStack_28 = 0.000878906456455297._0_4_ * param_2[2];
  fStack_3c = *param_1 * 0.000878906456455297._4_4_;
  fStack_38 = param_1[1] * 0.000878906456455297._4_4_;
  fStack_34 = 0.000878906456455297._4_4_ * param_1[2];
  fStack_18 = fStack_3c + fStack_30;
  fStack_14 = fStack_38 + fStack_2c;
  fStack_10 = fStack_34 + fStack_28;
  local_24 = (int)ROUND(fStack_18 * _DAT_0059ca4c);
  local_20 = (int)ROUND(fStack_14 * _DAT_0059ca4c);
  local_1c = (int)ROUND(fStack_10 * _DAT_0059ca4c);
  piStack_40 = &local_24;
  uStack_44 = 1;
  uStack_48 = 0x47315b;
  engine_matrix_c_transformToCache_FUN_004cd210();
  puVar2 = &DAT_005c5044;
  puVar3 = auStack_6c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  puVar2 = &DAT_005c5014;
  puVar3 = auStack_9c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00409290();
  return;
}
