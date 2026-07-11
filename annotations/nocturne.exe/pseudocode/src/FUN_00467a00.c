// Name: FUN_00467a00
// Address: 00467a00
// Address Range: [[00467a00, 004680a9]]
// Convention: unknown
// Signature: float FUN_00467a00(int param_1,float *param_2,float *param_3,undefined4 *param_4,undefined4 *param_5 )

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_00467a00(int param_1,float *param_2,float *param_3,uint *param_4,uint *param_5 )

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  double dVar14;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  double local_78;
  uint local_70;
  float local_68;
  float local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_50;
  int local_4c;
  int local_48;
  float local_44;
  float local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  
  fVar1 = (*param_2 - *(float *)(param_1 + 0x10)) / *(float *)(param_1 + 0x28);
  fVar2 = (param_2[1] - *(float *)(param_1 + 0x14)) / *(float *)(param_1 + 0x2c);
  fVar3 = (param_2[2] - *(float *)(param_1 + 0x18)) / *(float *)(param_1 + 0x30);
  local_78 = (double)FUN_005648c0((double)fVar1);
  fVar9 = (float10)local_78;
  FUN_00563a30();
  local_38 = (int)ROUND(fVar9);
  dVar14 = (double)FUN_005648c0((double)fVar2);
  fVar9 = (float10)dVar14;
  local_78 = dVar14;
  FUN_00563a30();
  local_3c = (int)ROUND(fVar9);
  dVar14 = (double)FUN_005648c0((double)fVar3);
  fVar10 = (float10)dVar14;
  fVar9 = ((float10)*param_3 - (float10)*(float *)(param_1 + 0x10)) /
          (float10)*(float *)(param_1 + 0x28);
  fVar11 = ((float10)param_3[1] - (float10)*(float *)(param_1 + 0x14)) /
           (float10)*(float *)(param_1 + 0x2c);
  fVar12 = ((float10)param_3[2] - (float10)*(float *)(param_1 + 0x18)) /
           (float10)*(float *)(param_1 + 0x30);
  local_78 = dVar14;
  FUN_00563a30();
  local_34 = (int)ROUND(fVar10);
  dVar14 = (double)FUN_005648c0((double)(float)fVar9);
  fVar10 = (float10)dVar14;
  local_78 = dVar14;
  FUN_00563a30();
  local_58 = (int)ROUND(fVar10);
  dVar14 = (double)FUN_005648c0((double)(float)fVar11);
  fVar10 = (float10)dVar14;
  local_78 = dVar14;
  FUN_00563a30();
  local_60 = (int)ROUND(fVar10);
  dVar14 = (double)FUN_005648c0((double)(float)fVar12);
  fVar10 = (float10)dVar14;
  local_78 = dVar14;
  FUN_00563a30();
  local_5c = (int)ROUND(fVar10);
  if ((-1 < local_38) || (-1 < local_58)) {
    if ((local_3c < 0) && (local_60 < 0)) {
      return -1.0;
    }
    if ((local_34 < 0) && (local_5c < 0)) {
      return -1.0;
    }
    if ((((local_38 < *(int *)(param_1 + 0x40)) || (local_58 < *(int *)(param_1 + 0x40))) &&
        ((local_3c < *(int *)(param_1 + 0x44) || (local_60 < *(int *)(param_1 + 0x44))))) &&
       ((local_34 < *(int *)(param_1 + 0x48) || (local_5c < *(int *)(param_1 + 0x48))))) {
      local_90 = *param_3 - *param_2;
      local_8c = param_3[1] - param_2[1];
      iVar8 = 1;
      local_88 = param_3[2] - param_2[2];
      if ((local_38 != local_58) || ((local_3c != local_60 || (local_34 != local_5c)))) {
        fVar4 = SQRT(local_88 * local_88 + local_90 * local_90 + local_8c * local_8c);
        if (fVar4 <= 0.0) {
          return -1.0;
        }
        fVar13 = (float10)_DAT_0057e1da / (float10)fVar4;
        fVar9 = ABS((float10)(float)fVar9 - (float10)fVar1) * fVar13;
        fVar10 = ABS((float10)(float)fVar11 - (float10)fVar2) * fVar13;
        fVar13 = ABS((float10)(float)fVar12 - (float10)fVar3) * fVar13;
        FUN_00563a30();
        local_48 = (int)ROUND(fVar9);
        fVar11 = (float10)local_90;
        FUN_00563a30();
        local_1c = (int)ROUND(fVar10);
        fVar9 = (float10)0;
        FUN_00563a30();
        local_44 = (float)(int)ROUND(fVar13);
        if (fVar11 < fVar9) {
          iVar6 = local_38 - local_58;
          local_68 = fVar1 - (float)local_38;
          local_20 = -1;
        }
        else {
          iVar6 = local_58 - local_38;
          local_68 = (float)(local_38 + 1) - fVar1;
          local_20 = 1;
        }
        if (local_8c < 0.0) {
          local_50 = -1;
          iVar7 = local_3c - local_60;
          local_64 = fVar2 - (float)local_3c;
        }
        else {
          iVar7 = local_60 - local_3c;
          local_64 = (float)(local_3c + 1) - fVar2;
          local_50 = 1;
        }
        if (local_88 < 0.0) {
          local_4c = -1;
          iVar8 = local_34 - local_5c;
          local_40 = fVar3 - (float)local_34;
        }
        else {
          iVar8 = local_5c - local_34;
          local_40 = (float)(local_34 + 1) - fVar3;
          local_4c = 1;
        }
        iVar8 = iVar6 + 1 + iVar7 + iVar8;
        fVar12 = (float10)local_1c * (float10)local_40;
        fVar10 = (float10)(int)local_44 * (float10)local_68;
        fVar9 = (float10)(int)local_44 * (float10)local_64;
        fVar11 = (float10)local_1c * (float10)local_68 - (float10)local_48 * (float10)local_64;
        fVar13 = (float10)local_48 * (float10)local_40;
        local_14 = local_44;
        FUN_00563a30();
        fVar12 = fVar12 - fVar9;
        local_30 = (int)ROUND(fVar11);
        FUN_00563a30();
        fVar10 = fVar10 - fVar13;
        local_2c = (int)ROUND(fVar12);
        FUN_00563a30();
        local_28 = (int)ROUND(fVar10);
      }
      local_98 = 1.0001;
      iVar6 = local_34;
      iVar7 = local_2c;
      iVar5 = local_28;
      while( true ) {
        local_28 = iVar5;
        local_2c = iVar7;
        local_34 = iVar6;
        iVar6 = FUN_004678d0(param_1,local_38,local_3c,local_34);
        if (iVar6 != 0) {
          local_18 = (float)FUN_0044b290(iVar6,param_2,&local_90);
          if (local_18 < local_98) {
            if ((param_4 != (uint *)0x0) && (param_4 != &local_84)) {
              *param_4 = local_84;
              param_4[1] = local_80;
              param_4[2] = local_7c;
            }
            local_98 = local_18;
            if (param_5 != (uint *)0x0) {
              *param_5 = local_70;
            }
          }
          local_14 = local_18;
          if (local_98 <= 1.0) {
            return local_98;
          }
        }
        iVar8 = iVar8 + -1;
        if (iVar8 < 1) break;
        iVar6 = local_34 + local_4c;
        iVar7 = local_2c + local_1c;
        iVar5 = local_28 - local_48;
        if (local_30 < 0) {
          if (local_28 < 0) {
            local_38 = local_38 + local_20;
            local_30 = local_30 + local_1c;
            iVar6 = local_34;
            iVar7 = local_2c;
            iVar5 = local_28 + (int)local_44;
          }
        }
        else if (-1 < local_2c) {
          local_3c = local_3c + local_50;
          local_30 = local_30 - local_48;
          iVar6 = local_34;
          iVar7 = local_2c - (int)local_44;
          iVar5 = local_28;
        }
      }
      if (param_5 != (uint *)0x0) {
        *param_5 = 1;
        return -1.0;
      }
    }
  }
  return -1.0;
}
