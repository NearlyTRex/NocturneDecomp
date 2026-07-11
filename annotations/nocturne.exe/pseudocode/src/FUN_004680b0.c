// Name: FUN_004680b0
// Address: 004680b0
// Address Range: [[004680b0, 0046857d]]
// Convention: unknown
// Signature: undefined4 FUN_004680b0(int param_1,float *param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004680b0(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  double dVar12;
  float local_94;
  float local_90;
  float local_8c;
  double local_7c;
  float local_6c;
  int local_68;
  float local_64;
  int local_60;
  int local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  float local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_14;
  
  local_50 = (param_2[1] - *(float *)(param_1 + 0x14)) / *(float *)(param_1 + 0x2c);
  fVar7 = (float10)1 / (float10)*(float *)(param_1 + 0x28);
  fVar8 = ((float10)param_2[2] - (float10)*(float *)(param_1 + 0x18)) /
          (float10)*(float *)(param_1 + 0x30);
  fVar9 = ((float10)*param_2 - (float10)*(float *)(param_1 + 0x10)) * fVar7;
  fVar7 = ((float10)*param_3 - (float10)*(float *)(param_1 + 0x10)) * fVar7;
  local_58 = (float)fVar8;
  fVar10 = (float10)local_50;
  FUN_00563a30();
  FUN_00563a30();
  local_30 = (int)ROUND(fVar10);
  local_28 = (int)ROUND(fVar8);
  local_4c = (float)fVar9;
  FUN_00563a30();
  local_2c = (int)ROUND(fVar9);
  local_7c = (double)FUN_005648c0((double)fVar7);
  fVar10 = (float10)local_7c;
  fVar7 = ((float10)param_3[1] - (float10)*(float *)(param_1 + 0x14)) /
          (float10)*(float *)(param_1 + 0x2c);
  FUN_00563a30();
  local_5c = (int)ROUND(fVar10);
  dVar12 = (double)FUN_005648c0((double)fVar7);
  fVar10 = (float10)dVar12;
  fVar7 = ((float10)param_3[2] - (float10)*(float *)(param_1 + 0x18)) /
          (float10)*(float *)(param_1 + 0x30);
  local_7c = dVar12;
  FUN_00563a30();
  local_68 = (int)ROUND(fVar10);
  dVar12 = (double)FUN_005648c0((double)fVar7);
  fVar7 = (float10)dVar12;
  iVar6 = 1;
  local_7c = dVar12;
  pfVar3 = (float *)FUN_00563a30();
  local_94 = *pfVar3 - *param_2;
  local_60 = (int)ROUND(fVar7);
  local_90 = pfVar3[1] - param_2[1];
  local_8c = pfVar3[2] - param_2[2];
  if (((local_2c != local_5c) || (local_30 != local_68)) ||
     (iVar4 = local_28, iVar5 = local_20, iVar2 = local_1c, local_28 != local_60)) {
    fVar1 = SQRT(local_8c * local_8c + local_94 * local_94 + local_90 * local_90);
    if (fVar1 <= 0.0) {
      return 0;
    }
    fVar10 = (float10)local_94;
    fVar9 = (float10)_DAT_0057e1de / (float10)fVar1;
    fVar7 = ABS(fVar10) * fVar9;
    fVar8 = ABS((float10)local_90) * fVar9;
    fVar9 = ABS((float10)local_8c) * fVar9;
    FUN_00563a30();
    local_38 = (int)ROUND(fVar7);
    fVar7 = (float10)0;
    FUN_00563a30();
    FUN_00563a30();
    local_3c = (int)ROUND(fVar8);
    local_34 = (float)(int)ROUND(fVar9);
    if (fVar10 < fVar7) {
      iVar4 = local_2c - local_5c;
      local_44 = -1;
      local_6c = local_4c - (float)local_2c;
    }
    else {
      iVar4 = local_5c - local_2c;
      local_44 = 1;
      local_6c = (float)(local_2c + 1) - local_4c;
    }
    if (local_90 < 0.0) {
      iVar5 = local_30 - local_68;
      local_48 = -1;
      local_54 = local_50 - (float)local_30;
    }
    else {
      iVar5 = local_68 - local_30;
      local_48 = 1;
      local_54 = (float)(local_30 + 1) - local_50;
    }
    if (local_8c < 0.0) {
      iVar6 = local_28 - local_60;
      local_40 = -1;
      local_64 = local_58 - (float)local_28;
    }
    else {
      iVar6 = local_60 - local_28;
      local_40 = 1;
      local_64 = (float)(local_28 + 1) - local_58;
    }
    iVar6 = iVar4 + 1 + iVar5 + iVar6;
    fVar8 = (float10)local_3c * (float10)local_64;
    fVar9 = (float10)(int)local_34 * (float10)local_6c;
    fVar7 = (float10)(int)local_34 * (float10)local_54;
    fVar10 = (float10)local_3c * (float10)local_6c - (float10)local_38 * (float10)local_54;
    fVar11 = (float10)local_38 * (float10)local_64;
    local_14 = local_34;
    FUN_00563a30();
    fVar8 = fVar8 - fVar7;
    local_24 = (int)ROUND(fVar10);
    FUN_00563a30();
    fVar9 = fVar9 - fVar11;
    local_20 = (int)ROUND(fVar8);
    FUN_00563a30();
    iVar4 = local_28;
    iVar5 = local_20;
    iVar2 = (int)ROUND(fVar9);
  }
  do {
    local_1c = iVar2;
    local_20 = iVar5;
    local_28 = iVar4;
    iVar4 = FUN_004678d0(param_1,local_2c,local_30,local_28);
    if (iVar4 != 0) {
      local_14 = (float)FUN_0044b290(iVar4,param_2,&local_94);
      if ((0.0 <= local_14) && (local_14 <= 1.0)) {
        return 1;
      }
    }
    iVar6 = iVar6 + -1;
    if (iVar6 < 1) {
      return 0;
    }
    iVar4 = local_28 + local_40;
    iVar5 = local_20 + local_3c;
    iVar2 = local_1c - local_38;
    if (local_24 < 0) {
      if (local_1c < 0) {
        local_2c = local_2c + local_44;
        local_24 = local_24 + local_3c;
        iVar4 = local_28;
        iVar5 = local_20;
        iVar2 = local_1c + (int)local_34;
      }
    }
    else if (-1 < local_20) {
      local_30 = local_30 + local_48;
      local_24 = local_24 - local_38;
      iVar4 = local_28;
      iVar5 = local_20 - (int)local_34;
      iVar2 = local_1c;
    }
  } while( true );
}
