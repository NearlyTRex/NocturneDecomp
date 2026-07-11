// Name: FUN_00482c80
// Address: 00482c80
// Address Range: [[00482c80, 00482e84]]
// Convention: unknown
// Signature: void FUN_00482c80(float *param_1,float *param_2,float *param_3,float param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00482c80(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float10 fVar7;
  byte local_10c [48];
  byte local_dc [48];
  uint local_ac [12];
  uint local_7c [12];
  float local_4c;
  float local_48;
  float local_44;
  byte local_40 [12];
  float local_34;
  float local_30;
  float local_2c;
  byte local_28 [12];
  byte local_1c [12];
  
  bVar6 = 0;
  if (param_1 != param_2) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  local_4c = *param_3 * _DAT_005810b8;
  local_48 = param_3[1] * _DAT_005810b8;
  local_44 = _DAT_005810b8 * param_3[2];
  local_34 = *param_1 + local_4c;
  local_30 = param_1[1] + local_48;
  local_2c = param_1[2] + local_44;
  if (param_1 != &local_34) {
    *param_1 = local_34;
    param_1[1] = local_30;
    param_1[2] = local_2c;
  }
  fVar7 = (float10)param_3[1];
  FUN_00566c81();
  param_1[7] = 0.0;
  param_1[5] = (float)-fVar7;
  fVar7 = (float10)*param_3;
  FUN_00566c81();
  param_1[6] = (float)fVar7;
  fVar1 = (float)FUN_0040de00(0,3);
  param_1[3] = 1.4013e-45;
  param_1[8] = fVar1;
  param_1[4] = param_4;
  if (param_4 != 0.0) {
    FUN_0055afb0(local_10c,param_1,param_1 + 5);
    FUN_0055ae80(local_dc,(int)param_1[4] + 0x20,(int)param_1[4] + 0x30);
    FUN_0055aa00(local_10c,local_dc);
    puVar4 = local_7c;
    puVar5 = local_ac;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    pfVar2 = (float *)FUN_0055bc00(local_ac,local_40);
    if (param_1 + 9 != pfVar2) {
      param_1[9] = *pfVar2;
      param_1[10] = pfVar2[1];
      param_1[0xb] = pfVar2[2];
    }
    pfVar2 = (float *)FUN_0055b180(local_ac,local_1c);
    if (param_1 + 5 != pfVar2) {
      param_1[5] = *pfVar2;
      param_1[6] = pfVar2[1];
      param_1[7] = pfVar2[2];
    }
    pfVar2 = (float *)FUN_0040a220(param_1[4],local_28,param_3);
    if (param_1 + 0xc != pfVar2) {
      param_1[0xc] = *pfVar2;
      param_1[0xd] = pfVar2[1];
      param_1[0xe] = pfVar2[2];
      return;
    }
  }
  return;
}
