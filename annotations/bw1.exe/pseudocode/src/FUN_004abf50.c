// Name: FUN_004abf50
// Address: 004abf50
// Address Range: [[004abf50, 004ac0a7]]
// Convention: unknown
// Signature: void FUN_004abf50(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004abf50(uint *param_1)

{
  float *pfVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1024 [1014];
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
  float local_10;
  float local_c;
  float local_8;
  
  bVar3 = 0;
  local_c = *(float *)(0x01CCF390 + 0x294);
  param_1[6] = local_c * _DAT_005df184 + (float)param_1[6];
  if (0x421fffff < (int)param_1[6]) {
    *param_1 = 0;
    return;
  }
  param_1[2] = local_c * (float)param_1[4] * (float)param_1[5] + (float)param_1[2];
  local_8 = (float)FUN_0040cc00(0xbf800000,0x3f800000);
  param_1[1] = local_8 * local_c + (float)param_1[1];
  local_8 = (float)FUN_0040cc00(0xbf800000,0x3f800000);
  param_1[3] = local_8 * local_c + (float)param_1[3];
  iVar2 = 0x01E82168;
  pfVar1 = (float *)(param_1 + 1);
  local_30 = (float)param_1[7] * local_c;
  local_2c = (float)param_1[8] * local_c;
  local_28 = (float)param_1[9] * local_c;
  local_24 = (float)param_1[7] * local_c;
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar3 * -8) =
       *(uint *)((int)&stack0xffffffd4 + (uint)bVar3 * -8);
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)((int)&stack0xffffffd8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  *pfVar1 = *pfVar1 + local_24;
  param_1[2] = (float)param_1[2] + local_20;
  param_1[3] = (float)param_1[3] + local_1c;
  local_18 = *(float *)(iVar2 + 0x15ac70) * local_c;
  local_14 = *(float *)(iVar2 + 0x15ac74) * local_c;
  local_10 = *(float *)(iVar2 + 0x15ac78) * local_c;
  local_3c = local_18;
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar3 * -8) =
       *(uint *)((int)&stack0xffffffec + (uint)bVar3 * -8);
  *(uint *)((int)&stack0xffffffcc + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)((int)&stack0xfffffff0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  *pfVar1 = *pfVar1 + local_3c;
  param_1[2] = (float)param_1[2] + local_38;
  param_1[3] = (float)param_1[3] + local_34;
  return;
}
