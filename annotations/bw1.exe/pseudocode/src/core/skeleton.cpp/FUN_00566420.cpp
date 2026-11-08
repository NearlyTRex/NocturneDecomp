// Name: FUN_00566420
// Address: 00566420
// Address Range: [[00566420, 00566a1a]]
// Convention: unknown
// Signature: void FUN_00566420(int param_1,float *param_2,undefined4 param_3,int param_4,int *param_5,byte *param_6,int *param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00566420(int param_1,float *param_2,uint param_3,int param_4,int *param_5,byte *param_6,int *param_7)

{
  ushort *puVar1;
  uint *puVar2;
  ushort *puVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  float afStackY_1090 [990];
  byte local_100 [40];
  uint local_d8 [9];
  uint local_b4 [3];
  float local_a8;
  float local_a4 [4];
  float local_94;
  float local_90;
  uint local_84 [3];
  float local_78;
  float local_74 [2];
  int local_6c;
  int local_68;
  int local_64;
  byte *local_60;
  int local_5c;
  byte *local_58;
  int local_54;
  int *local_50;
  int *local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  
  bVar9 = 0;
  local_1c = 0xffff;
  FUN_0045f3e0(local_100,param_3);
  if ((DAT_026b82a0 & 1) == 0) {
    DAT_026b82a0 = DAT_026b82a0 | 1;
    FUN_005c0357(&DAT_026af600,3000,&DAT_005fb430);
  }
  if (3000 < *(int *)(param_4 * 4 + param_1 + 0x2c)) {
    _DAT_01d1d400 = "..\\core\\skeleton.cpp";
    _DAT_01d1d404 = 0x767;
    FUN_005030e0("CDeformableModel::shatter - too many vertices!");
  }
  local_48 = 0;
  pfVar5 = (float *)&DAT_026af600;
  local_64 = param_1 + param_4 * 4;
  local_4c = param_5;
  if (0 < *(int *)(local_64 + 0x2c)) {
    do {
      *pfVar5 = (float)*local_4c * _DAT_00605890;
      pfVar5[1] = (float)local_4c[1] * _DAT_00605890;
      pfVar5[2] = (float)local_4c[2] * _DAT_00605890;
      FUN_0045f690(local_100,pfVar5);
      local_a8 = local_90;
      local_a4[(uint)bVar9 * -2] = local_a4[(uint)bVar9 * -2 + 6];
      local_a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           local_a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
      local_78 = *param_2 + local_a8;
      local_74[0] = param_2[1] + local_a4[0];
      local_74[1] = param_2[2] + local_a4[1];
      local_a4[2] = *param_2 + local_a8;
      local_a4[(uint)bVar9 * -2 + 3] = local_74[(uint)bVar9 * -2];
      local_a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
           local_74[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      if (pfVar5 != local_a4 + 2) {
        *pfVar5 = local_a4[2];
        pfVar5[1] = local_a4[3];
        pfVar5[2] = local_94;
      }
      pfVar5 = pfVar5 + 3;
      local_4c = local_4c + 3;
      local_48 = local_48 + 1;
    } while (local_48 < *(int *)(local_64 + 0x2c));
  }
  FUN_005c0357(local_d8,3,&DAT_005fb430);
  local_24 = 0;
  local_44 = 0;
  if (0 < *(int *)(param_1 + 0xc00)) {
    local_38 = param_1 + param_4 * 4;
    local_68 = param_1 + 0xc0;
    local_54 = param_4 * 4 + param_1;
    local_60 = param_6;
    local_50 = param_7;
    local_30 = local_38;
    do {
      local_40 = *(int *)(local_54 + 0xc24) + local_24;
      local_2c = local_68 + *local_50 * 0x240;
      if (((*local_60 & 1) != 0) && (local_24 < local_40)) {
        iVar7 = local_24 * 0x12;
        iVar6 = local_24 * 4;
        local_20 = local_40 * 4;
        do {
          puVar3 = (ushort *)(*(int *)(local_38 + 0x7c) + iVar7);
          puVar2 = local_d8;
          iVar8 = 0;
          do {
            iVar4 = (uint)*puVar3 * 0xc;
            if (puVar2 != (uint *)(&DAT_026af600 + iVar4)) {
              *puVar2 = *(uint *)(&DAT_026af600 + iVar4);
              puVar2[1] = *(uint *)(&DAT_026af604 + iVar4);
              puVar2[2] = *(uint *)(&DAT_026af608 + iVar4);
            }
            puVar2 = puVar2 + 3;
            *(uint *)((int)local_b4 + iVar8) = (uint)puVar3[3];
            iVar4 = iVar8 + 4;
            puVar1 = puVar3 + 6;
            puVar3 = puVar3 + 1;
            *(uint *)((int)local_84 + iVar8) = (uint)*puVar1;
            iVar8 = iVar4;
          } while (iVar4 != 0xc);
          FUN_004b5d50(0x01C57074,local_d8,local_b4,local_84,
                       *(int *)(iVar6 + *(int *)(local_30 + 0x90)) * 0x48 + local_2c,local_1c);
          iVar6 = iVar6 + 4;
          iVar7 = iVar7 + 0x12;
        } while (iVar6 < local_20);
      }
      local_60 = local_60 + 4;
      local_50 = local_50 + 1;
      local_54 = local_54 + 0x60;
      local_44 = local_44 + 1;
      local_24 = local_40;
    } while (local_44 < *(int *)(param_1 + 0xc00));
  }
  local_3c = 0;
  if (0 < *(int *)(param_1 + 0xc00)) {
    local_34 = param_1 + param_4 * 4;
    local_6c = param_1 + 0xc0;
    local_5c = param_4 * 4 + param_1;
    local_58 = param_6;
    local_18 = local_34;
    do {
      iVar6 = *(int *)(local_5c + 0xc38) + local_24;
      if (((*local_58 & 1) != 0) &&
         (local_28 = local_6c + param_7[local_3c] * 0x240, local_24 < iVar6)) {
        iVar8 = local_24 * 0x12;
        local_14 = local_24 << 2;
        iVar7 = local_24;
        local_24 = iVar6;
        do {
          puVar3 = (ushort *)(*(int *)(local_18 + 0x7c) + iVar8);
          if ((param_6[*(int *)(*(int *)(local_18 + 0xa4) + (iVar7 - *(int *)(local_18 + 0x54)) * 4)
                       * 4] & 1) == 0) {
            puVar2 = local_d8;
            iVar6 = 0;
            do {
              iVar4 = (uint)*puVar3 * 0xc;
              if (puVar2 != (uint *)(&DAT_026af600 + iVar4)) {
                *puVar2 = *(uint *)(&DAT_026af600 + iVar4);
                puVar2[1] = *(uint *)(&DAT_026af604 + iVar4);
                puVar2[2] = *(uint *)(&DAT_026af608 + iVar4);
              }
              *(uint *)((int)local_b4 + iVar6) = (uint)puVar3[3] << 8;
              puVar2 = puVar2 + 3;
              puVar1 = puVar3 + 6;
              iVar4 = iVar6 + 4;
              puVar3 = puVar3 + 1;
              *(uint *)((int)local_84 + iVar6) = (uint)*puVar1 << 8;
              iVar6 = iVar4;
            } while (iVar4 != 0xc);
            FUN_004b5d50(0x01C57074,local_d8,local_b4,local_84,
                         *(int *)(*(int *)(local_34 + 0x90) + local_14) * 0x48 + local_28,local_1c);
          }
          iVar8 = iVar8 + 0x12;
          local_14 = local_14 + 4;
          iVar7 = iVar7 + 1;
          iVar6 = local_24;
        } while (iVar7 < local_24);
      }
      local_24 = iVar6;
      local_5c = local_5c + 0x60;
      local_58 = local_58 + 4;
      local_3c = local_3c + 1;
    } while (local_3c < *(int *)(param_1 + 0xc00));
  }
  return;
}
