// Name: FUN_00474400
// Address: 00474400
// Address Range: [[00474400, 00474939]]
// Convention: unknown
// Signature: undefined4 FUN_00474400(int param_1,float *param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00474400(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  double dVar12;
  float afStackY_1080 [1007];
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  double local_80;
  float local_70;
  float local_6c;
  float local_68;
  int local_64;
  int local_60;
  int local_5c;
  float local_58;
  float local_54;
  float local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  float local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  float local_18;
  
  bVar6 = 0;
  fVar7 = (float10)1 / (float10)*(float *)(param_1 + 0x28);
  fVar8 = ((float10)param_2[1] - (float10)*(float *)(param_1 + 0x14)) /
          (float10)*(float *)(param_1 + 0x2c);
  fVar9 = ((float10)param_2[2] - (float10)*(float *)(param_1 + 0x18)) /
          (float10)*(float *)(param_1 + 0x30);
  fVar10 = ((float10)*param_2 - (float10)*(float *)(param_1 + 0x10)) * fVar7;
  fVar7 = ((float10)*param_3 - (float10)*(float *)(param_1 + 0x10)) * fVar7;
  local_6c = (float)fVar10;
  FUN_005a3120();
  local_34 = (int)ROUND(fVar10);
  local_50 = (float)fVar8;
  FUN_005a3120();
  local_30 = (int)ROUND(fVar8);
  local_58 = (float)fVar9;
  FUN_005a3120();
  local_2c = (int)ROUND(fVar9);
  local_80 = (double)FUN_005a3600((double)fVar7);
  fVar10 = (float10)local_80;
  fVar7 = ((float10)param_3[1] - (float10)*(float *)(param_1 + 0x14)) /
          (float10)*(float *)(param_1 + 0x2c);
  FUN_005a3120();
  local_64 = (int)ROUND(fVar10);
  dVar12 = (double)FUN_005a3600((double)fVar7);
  fVar10 = (float10)dVar12;
  fVar7 = ((float10)param_3[2] - (float10)*(float *)(param_1 + 0x18)) /
          (float10)*(float *)(param_1 + 0x30);
  local_80 = dVar12;
  FUN_005a3120();
  local_60 = (int)ROUND(fVar10);
  iVar5 = 1;
  dVar12 = (double)FUN_005a3600((double)fVar7);
  fVar7 = (float10)*param_3;
  fVar10 = (float10)param_3[1];
  fVar8 = (float10)param_3[2];
  fVar9 = (float10)dVar12;
  local_80 = dVar12;
  FUN_005a3120();
  iVar4 = local_34;
  iVar3 = local_64;
  local_5c = (int)ROUND(fVar9);
  local_98 = (float)(fVar7 - (float10)*param_2);
  local_94 = (float)(fVar10 - (float10)param_2[1]);
  local_90 = (float)(fVar8 - (float10)param_2[2]);
  local_8c = (float)(fVar7 - (float10)*param_2);
  (&stack0xffffff78)[(uint)bVar6 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffff6c + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffff7c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffff70 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  if (((iVar4 != iVar3) || (local_30 != local_60)) ||
     (iVar3 = local_2c, iVar4 = local_24, iVar2 = local_20, local_2c != local_5c)) {
    fVar1 = SQRT(local_84 * local_84 + local_8c * local_8c + local_88 * local_88);
    if (fVar1 <= 0.0) {
      return 0;
    }
    fVar10 = (float10)local_8c;
    fVar9 = (float10)_DAT_005bca0d / (float10)fVar1;
    fVar7 = ABS(fVar10) * fVar9;
    fVar8 = ABS((float10)local_88) * fVar9;
    fVar9 = ABS((float10)local_84) * fVar9;
    FUN_005a3120();
    local_3c = (int)ROUND(fVar7);
    fVar7 = (float10)0;
    FUN_005a3120();
    FUN_005a3120();
    local_40 = (int)ROUND(fVar8);
    local_38 = (float)(int)ROUND(fVar9);
    if (fVar10 < fVar7) {
      iVar3 = local_34 - local_64;
      local_54 = local_6c - (float)local_34;
      local_48 = -1;
    }
    else {
      iVar3 = local_64 - local_34;
      local_54 = (float)(local_34 + 1) - local_6c;
      local_48 = 1;
    }
    if (local_88 < 0.0) {
      iVar4 = local_30 - local_60;
      local_70 = local_50 - (float)local_30;
      local_4c = -1;
    }
    else {
      iVar4 = local_60 - local_30;
      local_70 = (float)(local_30 + 1) - local_50;
      local_4c = 1;
    }
    if (local_84 < 0.0) {
      iVar5 = local_2c - local_5c;
      local_68 = local_58 - (float)local_2c;
      local_44 = -1;
    }
    else {
      iVar5 = local_5c - local_2c;
      local_68 = (float)(local_2c + 1) - local_58;
      local_44 = 1;
    }
    iVar5 = iVar3 + 1 + iVar4 + iVar5;
    fVar8 = (float10)local_40 * (float10)local_68;
    fVar9 = (float10)(int)local_38 * (float10)local_54;
    fVar7 = (float10)(int)local_38 * (float10)local_70;
    fVar10 = (float10)local_40 * (float10)local_54 - (float10)local_3c * (float10)local_70;
    fVar11 = (float10)local_3c * (float10)local_68;
    local_18 = local_38;
    FUN_005a3120();
    fVar8 = fVar8 - fVar7;
    local_28 = (int)ROUND(fVar10);
    FUN_005a3120();
    fVar9 = fVar9 - fVar11;
    local_24 = (int)ROUND(fVar8);
    FUN_005a3120();
    iVar3 = local_2c;
    iVar4 = local_24;
    iVar2 = (int)ROUND(fVar9);
  }
  while (((local_20 = iVar2, local_24 = iVar4, local_2c = iVar3,
          iVar3 = FUN_00473b60(param_1,local_34,local_30,local_2c), iVar3 == 0 ||
          (local_18 = (float)FUN_00454360(iVar3,param_2,&stack0xffffff74), local_18 < 0.0)) ||
         (1.0 < local_18))) {
    iVar5 = iVar5 + -1;
    if (iVar5 < 1) {
      return 0;
    }
    iVar3 = local_2c + local_44;
    iVar4 = local_24 + local_40;
    iVar2 = local_20 - local_3c;
    if (local_28 < 0) {
      if (local_20 < 0) {
        local_34 = local_34 + local_48;
        local_28 = local_28 + local_40;
        iVar3 = local_2c;
        iVar4 = local_24;
        iVar2 = local_20 + (int)local_38;
      }
    }
    else if (-1 < local_24) {
      local_30 = local_30 + local_4c;
      local_28 = local_28 - local_3c;
      iVar3 = local_2c;
      iVar4 = local_24 - (int)local_38;
      iVar2 = local_20;
    }
  }
  return 1;
}
