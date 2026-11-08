// Name: FUN_00585e10
// Address: 00585e10
// Address Range: [[00585e10, 00585e5f] [00585e61, 005862d4]]
// Convention: unknown
// Signature: void FUN_00585e10(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00585e10(int param_1)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  float10 fVar10;
  float afStackY_1058 [990];
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  float local_94;
  float local_90;
  float local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  float local_70;
  float local_6c [2];
  int local_64;
  int local_60;
  int local_5c;
  float local_58;
  float local_54 [5];
  int local_40;
  int local_3c;
  int local_38;
  float local_34;
  float afStack_30 [4];
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  bVar9 = 0;
  iVar7 = 0;
  iVar6 = 0;
  iVar8 = 0;
  do {
    iVar4 = iVar8 + 1;
    iVar1 = iVar6 + iVar7;
    iVar7 = iVar7 + 0x20;
    iVar6 = iVar6 + 0x400;
    *(byte *)(iVar8 + 0x265b7c0) = *(byte *)(iVar1 + 0x1c2c90f + iVar4);
    iVar8 = iVar4;
  } while (iVar4 < 0x20);
  *(uint *)(param_1 + 0xc) = 0;
  if ((*(uint *)(param_1 + 4) & 0x7fffffff) != 0) {
    FUN_00476d20();
    local_70 = local_34;
    local_6c[(uint)bVar9 * -2] = afStack_30[(uint)bVar9 * -2];
    local_6c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_30[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    FUN_00476d40();
    local_58 = local_54[2];
    local_54[(uint)bVar9 * -2] = local_54[(uint)bVar9 * -2 + 3];
    local_54[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         local_54[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    fVar2 = (float)_DAT_005edee6;
    _DAT_026537a8 = (local_70 + local_58) * fVar2;
    _DAT_026537b0 = (local_6c[1] + local_54[1]) * fVar2;
    afStack_30[2] = (local_58 - local_70) * fVar2 * (float)_DAT_005edeee;
    _DAT_026537ac = 0.0;
    local_1c = 0.0;
    if (0.0 < afStack_30[2]) {
      local_1c = afStack_30[2];
    }
    afStack_30[3] = local_54[0] - local_6c[0];
    if (local_1c < afStack_30[3]) {
      local_1c = afStack_30[3];
    }
    local_20 = (local_54[1] - local_6c[1]) * (float)_DAT_005edee6 * (float)_DAT_005edeee;
    if (local_1c < local_20) {
      local_1c = local_20;
    }
    fVar10 = (float10)1 + (float10)local_1c / (float10)*(float *)(param_1 + 8);
    FUN_005b7ff0();
    local_18 = (int)ROUND(fVar10);
    _DAT_026537bc = 0;
    iVar8 = -local_18;
    local_14 = local_18;
    if (SBORROW4(iVar8,local_18) != local_18 * -2 < 0) {
      do {
        iVar6 = -local_14;
        if (iVar6 < local_14) {
          do {
            local_94 = (float)iVar8 * *(float *)(param_1 + 8) + _DAT_026537a8;
            local_90 = *(float *)(param_1 + 4) + _DAT_026537ac;
            local_8c = (float)iVar6 * *(float *)(param_1 + 8) + _DAT_026537b0;
            local_10 = iVar6;
            FUN_0046b2b0(DAT_0060b280,&local_94);
            local_40 = (int)ROUND(local_94 * _DAT_005fdc5c);
            local_3c = (int)ROUND(local_90 * _DAT_005fdc5c);
            local_38 = (int)ROUND(local_8c * _DAT_005fdc5c);
            local_94 = 0.0;
            local_90 = 0.0;
            local_8c = 0.0;
            local_64 = (int)ROUND(_DAT_005fdc5c * 0.0);
            local_60 = (int)ROUND(_DAT_005fdc5c * 0.0);
            local_5c = (int)ROUND(_DAT_005fdc5c * 0.0);
            FUN_0055d723(*DAT_0060b280);
            local_94 = *(float *)(param_1 + 8);
            FUN_0055d723(*DAT_0060b280 + 0x30);
            local_8c = *(float *)(param_1 + 8);
            local_7c = (int)ROUND(local_94 * _DAT_005fdc5c);
            local_78 = (int)ROUND(local_90 * _DAT_005fdc5c);
            local_74 = (int)ROUND(local_8c * _DAT_005fdc5c);
            FUN_0055d723(*DAT_0060b280 + 0x60);
            local_94 = 0.0;
            local_88 = (int)ROUND(_DAT_005fdc5c * 0.0);
            local_84 = (int)ROUND(local_90 * _DAT_005fdc5c);
            local_80 = (int)ROUND(local_8c * _DAT_005fdc5c);
            FUN_0055d723();
            uVar3 = DAT_0060b284;
            uVar5 = DAT_00622024 & DAT_00622054 & DAT_00622084 & DAT_006220b4;
            if (((uVar5 & 0x80000000) == 0) || ((char)uVar5 == '\0')) {
              local_c4 = 4;
              local_b4 = 0;
              local_b8 = 0;
              local_bc = 0;
              local_c0 = 0;
              local_b0 = 0;
              local_a4 = 3;
              DAT_0060b284 = 0x10;
              local_ac = 1;
              local_a8 = 2;
              iVar7 = FUN_004699a0();
              if (iVar7 != 0) {
                if (0xfff < _DAT_026537bc) {
                  _DAT_01d046a0 = "..\\core\\water.cpp";
                  _DAT_01d046a4 = 0x103;
                  FUN_004e4500();
                }
                *(int *)(&DAT_026537c0 + _DAT_026537bc * 4) = iVar8;
                *(int *)(&DAT_026577c0 + _DAT_026537bc * 4) = iVar6;
                _DAT_026537bc = _DAT_026537bc + 1;
              }
            }
            iVar6 = iVar6 + 1;
            DAT_0060b284 = uVar3;
          } while (iVar6 < local_14);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < local_18);
    }
    iVar8 = _DAT_026537bc;
    fVar2 = (float)_DAT_026537bc * *(float *)(param_1 + 8) * *(float *)(param_1 + 8);
    *(float *)(param_1 + 0xc) = fVar2;
    FUN_00436710(PTR_DAT_00609ed0,"Vis water tiles : %d, SqFt : %f",iVar8,(double)fVar2);
    return;
  }
  return;
}
