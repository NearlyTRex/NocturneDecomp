// Name: FUN_00544380
// Address: 00544380
// Address Range: [[00544380, 0054492e]]
// Convention: unknown
// Signature: int FUN_00544380(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00544380(int param_1)

{
  float *pfVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  byte *pbVar8;
  ushort *puVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  byte bVar14;
  float afStackY_10b0 [916];
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  ushort *local_1c;
  float local_18;
  
  bVar14 = 0;
  if (*(int *)(param_1 + 0xc00) < 2) {
    *(uint *)(param_1 + 0xc60) = 0;
    iVar13 = param_1;
    do {
      iVar3 = iVar13 + 4;
      *(uint *)(iVar13 + 0x26fc) = 0;
      iVar13 = iVar3;
    } while (iVar3 != param_1 + 400);
  }
  else {
    FUN_00541540(param_1);
    iVar3 = FUN_005415d0(param_1);
    local_28 = *(int *)(iVar3 + 0x1d1f8);
    iVar3 = FUN_005b8be2(0x22b4);
    local_24 = 0;
    if (iVar3 != 0) {
      local_24 = FUN_00544cd0(iVar3);
    }
    if (local_24 == 0) {
      _DAT_01d046a0 = "..\\core\\skeleton.cpp";
      _DAT_01d046a4 = 0x7e2;
      FUN_004e4500("CDeformableModel::computePartDominantBones - out of memory!");
    }
    FUN_005474b0(local_24,param_1);
    FUN_00544e60(local_24);
    iVar3 = local_24;
    FUN_00546ae0(local_24);
    FUN_005471f0(iVar3,0);
    local_38 = 0;
    if (0 < *(int *)(param_1 + 0xc00)) {
      local_30 = param_1;
      iVar3 = 0;
      do {
        local_34 = *(int *)(local_30 + 0xc24) + iVar3;
        if (0 < local_28) {
          iVar13 = local_28 * 4;
          iVar11 = 0;
          do {
            iVar4 = iVar11 + 4;
            *(uint *)(&stack0xfffffda8 + iVar11) = 0;
            iVar11 = iVar4;
          } while (iVar4 < iVar13);
        }
        if (iVar3 < local_34) {
          local_20 = iVar3 * 0x12;
          local_2c = local_34 * 0x12;
          do {
            puVar9 = (ushort *)(*(int *)(param_1 + 0x7c) + local_20);
            piVar5 = (int *)(*(int *)(local_24 + 0x2234) + (uint)*puVar9 * 0xc);
            local_8c = (float)*piVar5 * _DAT_005fb9a0;
            local_88 = (float)piVar5[1] * _DAT_005fb9a0;
            local_84 = (float)piVar5[2] * _DAT_005fb9a0;
            piVar5 = (int *)((uint)puVar9[1] * 0xc + *(int *)(local_24 + 0x2234));
            local_98 = (float)*piVar5 * _DAT_005fb9a0;
            local_94 = (float)piVar5[1] * _DAT_005fb9a0;
            local_90 = (float)piVar5[2] * _DAT_005fb9a0;
            piVar6 = (int *)(*(int *)(local_24 + 0x2234) + (uint)puVar9[2] * 0xc);
            local_68 = (float)*piVar6 * _DAT_005fb9a0;
            local_64 = (float)piVar6[1] * _DAT_005fb9a0;
            local_60 = (float)piVar6[2] * _DAT_005fb9a0;
            local_c8 = (float)*piVar6 * _DAT_005fb9a0 - (float)*piVar5 * _DAT_005fb9a0;
            local_c4 = (float)piVar6[1] * _DAT_005fb9a0 - (float)piVar5[1] * _DAT_005fb9a0;
            local_c0 = (float)piVar6[2] * _DAT_005fb9a0 - (float)piVar5[2] * _DAT_005fb9a0;
            local_80 = local_c8;
            (&stack0xffffff84)[(uint)bVar14 * 0xfffffffe] =
                 (float)*(uint *)((int)&stack0xffffff3c + (uint)bVar14 * -8);
            *(uint *)((int)&stack0xffffff88 + (uint)bVar14 * -8 + (uint)bVar14 * -8) =
                 *(uint *)((int)&stack0xffffff40 + (uint)bVar14 * -8 + (uint)bVar14 * -8);
            if (&stack0xffffffb0 != &stack0xffffff80) {
              local_50 = local_80;
              local_4c = local_7c;
              local_48 = local_78;
            }
            local_40 = local_94 - local_88;
            local_3c = local_90 - local_84;
            local_44 = local_98 - local_8c;
            local_a4 = local_98 - local_8c;
            (&stack0xffffff60)[(uint)bVar14 * 0xfffffffe] =
                 (&stack0xffffffc0)[(uint)bVar14 * 0xfffffffe];
            *(uint *)((int)&stack0xffffff64 + (uint)bVar14 * -8 + (uint)bVar14 * -8) =
                 *(uint *)((int)&stack0xffffffc4 + (uint)bVar14 * -8 + (uint)bVar14 * -8);
            if (&stack0xffffff8c != &stack0xffffff5c) {
              local_74 = local_a4;
              local_70 = local_a0;
              local_6c = local_9c;
            }
            local_5c = local_4c * local_6c - local_48 * local_70;
            local_58 = local_48 * local_74 - local_50 * local_6c;
            local_54 = local_50 * local_70 - local_4c * local_74;
            local_bc = local_5c;
            (&stack0xffffff48)[(uint)bVar14 * 0xfffffffe] =
                 (&stack0xffffffa8)[(uint)bVar14 * 0xfffffffe];
            *(uint *)((int)&stack0xffffff4c + (uint)bVar14 * -8 + (uint)bVar14 * -8) =
                 *(uint *)((int)&stack0xffffffac + (uint)bVar14 * -8 + (uint)bVar14 * -8);
            if (&stack0xffffff50 != &stack0xffffff44) {
              local_b0 = local_bc;
              local_ac = local_b8;
              local_a8 = local_b4;
            }
            local_1c = puVar9 + 3;
            local_18 = SQRT(local_a8 * local_a8 + local_b0 * local_b0 + local_ac * local_ac);
            do {
              pbVar12 = (byte *)((uint)*puVar9 * 0x34 + *(int *)(param_1 + 0x40));
              pbVar8 = pbVar12;
              pbVar10 = pbVar12;
              for (iVar3 = 0; iVar3 < (int)(uint)*pbVar12; iVar3 = iVar3 + 1) {
                pfVar1 = (float *)(pbVar10 + 4);
                pbVar2 = pbVar8 + 1;
                pbVar10 = pbVar10 + 4;
                pbVar8 = pbVar8 + 1;
                *(float *)(&stack0xfffffda8 + (uint)*pbVar2 * 4) =
                     *pfVar1 * local_18 + *(float *)(&stack0xfffffda8 + (uint)*pbVar2 * 4);
              }
              puVar9 = puVar9 + 1;
            } while (puVar9 != local_1c);
            local_20 = local_20 + 0x12;
          } while (local_20 < local_2c);
        }
        iVar13 = 1;
        iVar3 = 0;
        if (1 < local_28) {
          iVar11 = 4;
          do {
            if (*(float *)(&stack0xfffffda8 + iVar3 * 4) < *(float *)(&stack0xfffffda8 + iVar11)) {
              iVar3 = iVar13;
            }
            iVar13 = iVar13 + 1;
            iVar11 = iVar11 + 4;
          } while (iVar13 < local_28);
        }
        local_38 = local_38 + 1;
        *(int *)(local_30 + 0xc60) = iVar3;
        local_30 = local_30 + 0x60;
        iVar3 = local_34;
      } while (local_38 < *(int *)(param_1 + 0xc00));
    }
    iVar3 = 0;
    if (local_24 != 0) {
      iVar3 = (*(code *)**(uint **)(local_24 + 0x50))(local_24,2);
    }
    iVar11 = 0;
    iVar13 = param_1;
    if (0 < local_28) {
      do {
        uVar7 = FUN_005431b0(param_1,iVar11);
        iVar11 = iVar11 + 1;
        *(uint *)(iVar13 + 0x26fc) = uVar7;
        iVar13 = iVar13 + 4;
      } while (iVar11 < local_28);
      return local_28;
    }
  }
  return iVar3;
}
