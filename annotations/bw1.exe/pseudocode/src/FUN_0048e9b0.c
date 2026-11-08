// Name: FUN_0048e9b0
// Address: 0048e9b0
// Address Range: [[0048e9b0, 0048ee8e]]
// Convention: unknown
// Signature: undefined4 FUN_0048e9b0(int param_1,float *param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0048e9b0(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  int local_54;
  int local_50;
  int local_4c;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  fVar16 = (float10)_DAT_005dbb20;
  fVar19 = (float10)1 / ((float10)*(float *)(param_1 + 0x28) * fVar16);
  fVar20 = (float10)1 / ((float10)*(float *)(param_1 + 0x2c) * fVar16);
  fVar2 = (float)(((float10)*param_2 - (float10)*(float *)(param_1 + 0x10)) * fVar19);
  fVar21 = (float10)1 / ((float10)*(float *)(param_1 + 0x30) * fVar16);
  fVar19 = ((float10)*param_3 - (float10)*(float *)(param_1 + 0x10)) * fVar19;
  fVar3 = (float)(((float10)param_2[1] - (float10)*(float *)(param_1 + 0x14)) * fVar20);
  fVar20 = ((float10)param_3[1] - (float10)*(float *)(param_1 + 0x14)) * fVar20;
  fVar16 = ((float10)param_3[2] - (float10)*(float *)(param_1 + 0x18)) * fVar21;
  iVar15 = 1;
  fVar5 = *param_3 - *param_2;
  fVar6 = param_3[1] - param_2[1];
  fVar7 = param_3[2] - param_2[2];
  fVar4 = (float)(((float10)param_2[2] - (float10)*(float *)(param_1 + 0x18)) * fVar21);
  FUN_005c03a0();
  FUN_005c03a0();
  FUN_005c03a0();
  fVar21 = (float10)fVar2;
  fVar17 = (float10)fVar3;
  fVar18 = (float10)fVar4;
  iVar11 = (int)ROUND(fVar19);
  iVar12 = (int)ROUND(fVar20);
  iVar13 = (int)ROUND(fVar16);
  FUN_005c03a0();
  FUN_005c03a0();
  FUN_005c03a0();
  local_38 = (int)ROUND(fVar21);
  local_34 = (int)ROUND(fVar17);
  iVar1 = (int)ROUND(fVar18);
  if (((local_38 != iVar11) || (local_34 != iVar12)) ||
     (iVar9 = local_28, iVar10 = local_24, iVar1 != iVar13)) {
    fVar8 = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
    if (fVar8 <= 0.0) {
      return 0;
    }
    fVar19 = (float10)fVar5;
    fVar21 = (float10)_DAT_005dbb24 / (float10)fVar8;
    fVar16 = ABS(fVar19) * fVar21;
    fVar20 = ABS((float10)fVar6) * fVar21;
    fVar21 = ABS((float10)fVar7) * fVar21;
    FUN_005c03a0();
    local_40 = (int)ROUND(fVar16);
    fVar16 = (float10)0;
    FUN_005c03a0();
    FUN_005c03a0();
    local_3c = (int)ROUND(fVar20);
    local_44 = (int)ROUND(fVar21);
    if (fVar19 < fVar16) {
      iVar11 = local_38 - iVar11;
      fVar2 = fVar2 - (float)local_38;
      local_4c = -1;
    }
    else {
      iVar11 = iVar11 - local_38;
      fVar2 = (float)(local_38 + 1) - fVar2;
      local_4c = 1;
    }
    if (fVar6 < 0.0) {
      iVar12 = local_34 - iVar12;
      fVar3 = fVar3 - (float)local_34;
      local_54 = -1;
    }
    else {
      iVar12 = iVar12 - local_34;
      fVar3 = (float)(local_34 + 1) - fVar3;
      local_54 = 1;
    }
    if (fVar7 < 0.0) {
      iVar13 = iVar1 - iVar13;
      fVar4 = fVar4 - (float)iVar1;
      local_50 = -1;
    }
    else {
      iVar13 = iVar13 - iVar1;
      fVar4 = (float)(iVar1 + 1) - fVar4;
      local_50 = 1;
    }
    iVar15 = iVar11 + 1 + iVar12 + iVar13;
    fVar20 = (float10)local_3c * (float10)fVar4;
    fVar21 = (float10)local_44 * (float10)fVar2;
    fVar16 = (float10)local_44 * (float10)fVar3;
    fVar19 = (float10)local_3c * (float10)fVar2 - (float10)local_40 * (float10)fVar3;
    fVar17 = (float10)local_40 * (float10)fVar4;
    FUN_005c03a0();
    fVar20 = fVar20 - fVar16;
    local_30 = (int)ROUND(fVar19);
    FUN_005c03a0();
    fVar21 = fVar21 - fVar17;
    FUN_005c03a0();
    iVar9 = (int)ROUND(fVar20);
    iVar10 = (int)ROUND(fVar21);
  }
  do {
    local_24 = iVar10;
    local_28 = iVar9;
    local_2c = iVar1;
    piVar14 = (int *)FUN_0048afe0(param_1,(int)((local_38 + (local_38 >> 0x1f) * -8) -
                                               (uint)((local_38 >> 0x1f) << 2 < 0)) >> 3,
                                  (int)((local_34 + (local_34 >> 0x1f) * -8) -
                                       (uint)((local_34 >> 0x1f) << 2 < 0)) >> 3,
                                  (int)((local_2c + (local_2c >> 0x1f) * -8) -
                                       (uint)((local_2c >> 0x1f) << 2 < 0)) >> 3);
    if (piVar14 != (int *)0x0) {
      if ((*piVar14 != 0) &&
         ((*(byte *)(*piVar14 + (local_2c % 8) * 8 + local_34 % 8) & (&DAT_0061ab68)[local_38 % 8])
          != 0)) {
        return 1;
      }
    }
    iVar15 = iVar15 + -1;
    if (iVar15 < 1) {
      return 0;
    }
    iVar1 = local_2c + local_50;
    iVar9 = local_28 + local_3c;
    iVar10 = local_24 - local_40;
    if (local_30 < 0) {
      if (local_24 < 0) {
        local_38 = local_38 + local_4c;
        local_30 = local_30 + local_3c;
        iVar1 = local_2c;
        iVar9 = local_28;
        iVar10 = local_24 + local_44;
      }
    }
    else if (-1 < local_28) {
      local_34 = local_34 + local_54;
      local_30 = local_30 - local_40;
      iVar1 = local_2c;
      iVar9 = local_28 - local_44;
      iVar10 = local_24;
    }
  } while( true );
}
