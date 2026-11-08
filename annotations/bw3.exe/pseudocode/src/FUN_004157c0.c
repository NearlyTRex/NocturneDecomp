// Name: FUN_004157c0
// Address: 004157c0
// Address Range: [[004157c0, 00415e2a]]
// Convention: unknown
// Signature: void FUN_004157c0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004157c0(int param_1)

{
  uint *puVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  float *pfVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int *extraout_EDX;
  int iVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float afStackY_1088 [6];
  int aiStackY_1070 [999];
  float local_a0;
  float afStack_9c [4];
  float local_8c;
  uint local_88;
  int aiStack_84 [4];
  int local_74;
  uint local_70;
  int local_6c [5];
  int local_58;
  int local_54;
  int local_50;
  float local_4c;
  float local_48;
  float local_44;
  uint local_40;
  int local_3c [4];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint *local_1c;
  float local_18;
  int local_14;
  
  bVar14 = 0;
  if ((2 < *(int *)(param_1 + 0x174)) && (0 < *(int *)(param_1 + 0x180))) {
    FUN_00416330(param_1,local_6c + 5,aiStack_84 + 2);
    local_14 = -((local_54 + aiStack_84[3]) / 2);
    iVar13 = -((local_58 + aiStack_84[2]) / 2);
    iVar10 = 0;
    iVar11 = -((local_50 + local_74) / 2);
    if (0 < *(int *)(param_1 + 0x174)) {
      iVar12 = 0;
      do {
        iVar2 = *(int *)(param_1 + 0x178);
        *(int *)(iVar12 + iVar2) = *(int *)(iVar12 + iVar2) + iVar13;
        piVar8 = (int *)(iVar12 + 4 + iVar2);
        *piVar8 = *piVar8 + local_14;
        piVar8 = (int *)(iVar12 + 8 + iVar2);
        *piVar8 = *piVar8 + iVar11;
        iVar10 = iVar10 + 1;
        iVar12 = iVar12 + 0xc;
      } while (iVar10 < *(int *)(param_1 + 0x174));
    }
    local_58 = local_58 + iVar13;
    local_54 = local_54 + local_14;
    local_50 = local_50 + iVar11;
    aiStack_84[2] = aiStack_84[2] + iVar13;
    aiStack_84[3] = aiStack_84[3] + local_14;
    local_74 = local_74 + iVar11;
    fVar6 = (float)_DAT_005b6c7a;
    *(float *)(param_1 + 0x15c) = (float)local_58 * fVar6;
    *(float *)(param_1 + 0x160) = (float)local_54 * fVar6;
    *(float *)(param_1 + 0x164) = (float)local_50 * fVar6;
    *(float *)(param_1 + 0x168) = (float)aiStack_84[2] * fVar6;
    local_4c = (float)iVar13 * fVar6;
    *(float *)(param_1 + 0x16c) = (float)aiStack_84[3] * fVar6;
    local_44 = (float)iVar11 * fVar6;
    local_48 = (float)local_14 * fVar6;
    *(float *)(param_1 + 0x170) = (float)local_74 * fVar6;
    local_18 = local_44;
    FUN_00408b00(param_1,&local_4c);
    afStack_9c[2] = local_a0;
    afStack_9c[(uint)bVar14 * -2 + 3] = afStack_9c[(uint)bVar14 * -2];
    afStack_9c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
         afStack_9c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
    *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) - afStack_9c[2];
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) - afStack_9c[3];
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) - local_8c;
    iVar10 = 0;
    if (0 < *(int *)(param_1 + 0x28c)) {
      pfVar7 = (float *)(param_1 + 0x290);
      do {
        *pfVar7 = *pfVar7 + local_4c;
        pfVar7[1] = pfVar7[1] + local_48;
        iVar10 = iVar10 + 1;
        pfVar7[2] = pfVar7[2] + local_44;
        pfVar7 = pfVar7 + 0x65;
      } while (iVar10 < *(int *)(param_1 + 0x28c));
    }
    local_20 = 0;
    if (0 < *(int *)(param_1 + 0x74c)) {
      local_2c = param_1 + 0x750;
      local_1c = (uint *)(param_1 + 0x77c);
      do {
        pfVar7 = (float *)(local_20 * 0x2b0 + local_2c);
        *pfVar7 = *pfVar7 + local_4c;
        pfVar7[1] = pfVar7[1] + local_48;
        pfVar7[2] = pfVar7[2] + local_44;
        FUN_00408b80(param_1,pfVar7);
        local_40 = local_6c[2];
        local_3c[(uint)bVar14 * -2] = local_6c[(uint)bVar14 * -2 + 3];
        local_3c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
             local_6c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
        *local_1c = local_40;
        local_1c[1] = local_3c[0];
        puVar1 = local_1c + 0xac;
        local_1c[2] = local_3c[1];
        local_20 = local_20 + 1;
        local_1c = puVar1;
      } while (local_20 < *(int *)(param_1 + 0x74c));
    }
    FUN_005a28f0(*(uint *)(param_1 + 0x17c),0,*(int *)(param_1 + 0x174) * 0xc);
    local_24 = 0;
    if (0 < *(int *)(param_1 + 0x180)) {
      local_28 = 0;
      do {
        iVar11 = *(int *)(param_1 + 0x184) + local_28;
        *(uint *)(iVar11 + 4) = 3;
        iVar13 = 0;
        FUN_004dece0(*(uint *)(param_1 + 0x178),iVar11);
        iVar10 = iVar11;
        if (0 < *(int *)(iVar11 + 4)) {
          do {
            piVar8 = (int *)(*(int *)(param_1 + 0x17c) + *(int *)(iVar10 + 0x18) * 0xc);
            *piVar8 = *piVar8 + *(int *)(iVar11 + 8);
            piVar8[1] = piVar8[1] + *(int *)(iVar11 + 0xc);
            piVar8[2] = piVar8[2] + *(int *)(iVar11 + 0x10);
            iVar13 = iVar13 + 1;
            iVar10 = iVar10 + 0xc;
          } while (iVar13 < *(int *)(iVar11 + 4));
        }
        local_28 = local_28 + 0x3c;
        local_24 = local_24 + 1;
      } while (local_24 < *(int *)(param_1 + 0x180));
    }
    iVar10 = 0;
    if (0 < *(int *)(param_1 + 0x174)) {
      iVar11 = 0;
      do {
        piVar8 = (int *)(*(int *)(param_1 + 0x17c) + iVar11);
        dVar3 = (double)*piVar8;
        dVar5 = (double)piVar8[1];
        dVar4 = (double)piVar8[2];
        dVar3 = SQRT(dVar4 * dVar4 + dVar5 * dVar5 + dVar3 * dVar3);
        if (dVar3 <= 0.0) {
          piVar8[2] = 0;
          piVar8[1] = piVar8[2];
          *piVar8 = piVar8[2];
        }
        else {
          fVar15 = (float10)_DAT_005b6c82 / (float10)dVar3;
          fVar16 = (float10)*piVar8 * fVar15;
          fVar17 = (float10)piVar8[1] * fVar15;
          fVar15 = (float10)piVar8[2] * fVar15;
          FUN_005a3120();
          FUN_005a3120();
          FUN_005a3120();
          *extraout_EDX = (int)ROUND(fVar16);
          extraout_EDX[1] = (int)ROUND(fVar17);
          extraout_EDX[2] = (int)ROUND(fVar15);
        }
        iVar10 = iVar10 + 1;
        iVar11 = iVar11 + 0xc;
      } while (iVar10 < *(int *)(param_1 + 0x174));
    }
    FUN_00416970(param_1);
    if ((uint *)(param_1 + 0xd10) != (uint *)(param_1 + 0x280)) {
      *(uint *)(param_1 + 0xd10) = *(uint *)(param_1 + 0x280);
      *(uint *)(param_1 + 0xd14) = *(uint *)(param_1 + 0x284);
      *(uint *)(param_1 + 0xd18) = *(uint *)(param_1 + 0x288);
    }
    FUN_0045b870(param_1 + 0xce8,param_1 + 0x280);
    local_70 = local_88;
    local_6c[(uint)bVar14 * -2] = aiStack_84[(uint)bVar14 * -2];
    local_6c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
         aiStack_84[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
    if ((uint *)(param_1 + 0xd1c) != &local_70) {
      *(uint *)(param_1 + 0xd1c) = local_70;
      *(int *)(param_1 + 0xd20) = local_6c[0];
      *(int *)(param_1 + 0xd24) = local_6c[1];
    }
    local_14 = FUN_0040ce40(0xc0490fdb,0x40490fdb);
    *(int *)(param_1 + 0xd40) = local_14;
    local_14 = FUN_0040ce40(0xc0490fdb,0x40490fdb);
    *(int *)(param_1 + 0xd48) = local_14;
    uVar9 = FUN_0040ce40(0xc116cbe4,0x4116cbe4);
    *(uint *)(param_1 + 0xd44) = uVar9;
    return;
  }
  *(uint *)(param_1 + 0x70) = 2;
  FUN_00414910(param_1,0,0);
  puVar1 = (uint *)(param_1 + 0x168);
  if (puVar1 != (uint *)&DAT_02cfd900) {
    *puVar1 = _DAT_02cfd900;
    *(uint *)(param_1 + 0x16c) = _DAT_02cfd904;
    *(uint *)(param_1 + 0x170) = _DAT_02cfd908;
  }
  if ((uint *)(param_1 + 0x15c) != puVar1) {
    *(uint *)(param_1 + 0x15c) = *puVar1;
    *(uint *)(param_1 + 0x160) = *(uint *)(param_1 + 0x16c);
    *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x170);
  }
  return;
}
