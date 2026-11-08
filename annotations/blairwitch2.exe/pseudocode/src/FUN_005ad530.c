// Name: FUN_005ad530
// Address: 005ad530
// Address Range: [[005ad530, 005ad8f4]]
// Convention: unknown
// Signature: void FUN_005ad530(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ad530(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float10 fVar9;
  float10 fVar10;
  uint auStackY_18ac [1460];
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  byte auStack_1a8 [4];
  float fStack_1a4;
  int iStack_174;
  int iStack_170;
  byte auStack_16c [4];
  uint uStack_168;
  int iStack_138;
  int iStack_134;
  uint auStack_130 [12];
  uint auStack_100 [12];
  uint uStack_d0;
  uint auStack_cc [7];
  float afStack_b0 [3];
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint auStack_88 [4];
  uint uStack_78;
  uint uStack_74;
  uint auStack_70 [5];
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  float fStack_2c;
  uint uStack_24;
  float fStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar8 = 0;
  iStack_18 = param_1 + 0x154;
  FUN_005a8180(iStack_18,param_2);
  FUN_0041c090(param_1,param_2);
  FUN_005ad940(param_1);
  iVar2 = iStack_18;
  iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  fVar4 = *(float *)(param_1 + 0x20) - *(float *)(iVar5 + 0x20);
  fVar1 = *(float *)(param_1 + 0x28) - *(float *)(iVar5 + 0x28);
  fStack_20 = SQRT(fVar1 * fVar1 + fVar4 * fVar4);
  fStack_1c = fStack_20;
  if (*(float *)(param_1 + 0x7f0) <= 0.0) {
    *(uint *)(param_1 + 0x7f0) = 0;
    if (fStack_20 <= *(float *)(param_1 + 0x7d4)) {
      iVar5 = 0;
      do {
        iVar3 = FUN_005a7ed0();
        if (iVar3 != 0) {
          fStack_2c = (float)FUN_0040cf60(0,0x40c90fdb);
          fStack_14 = fStack_2c;
          fVar4 = (float)FUN_0040cf60(0x3f800000,0x40000000);
          fVar9 = (float10)fcos((float10)fStack_2c);
          fVar10 = (float10)fsin((float10)fStack_2c);
          afStack_b0[1] = 0.0;
          afStack_b0[2] = (float)(fVar9 * (float10)fVar4);
          afStack_b0[0] = (float)(fVar10 * (float10)fVar4);
          fStack_14 = afStack_b0[2];
          auStack_88[3] = FUN_0040cf60(0x40400000,0x40c00000);
          auStack_88[2] = 0;
          uStack_78 = 0;
          uStack_24 = auStack_88[3];
          fStack_14 = (float)auStack_88[3];
          FUN_005a8300(iVar2,0x40400000,0x3f000000,0,0x3f000000,0,0x3df5c28f,0x3f28f5c3,0x3f2147ae,
                       auStack_cc + 7,auStack_88 + 2,0,0);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 100);
      FUN_004222d0(auStack_16c);
      uStack_168 = 0x40a00000;
      iStack_138 = param_1;
      iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
      iStack_134 = param_1;
      (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x110))(iVar5,auStack_16c);
      *(uint *)(param_1 + 0x7ec) = 0;
      *(uint *)(param_1 + 0x7f0) = *(uint *)(param_1 + 0x7e0);
      return;
    }
  }
  else {
    fVar4 = *(float *)(param_1 + 0x7ec) - param_2;
    *(float *)(param_1 + 0x7f0) = *(float *)(param_1 + 0x7f0) - param_2;
    *(float *)(param_1 + 0x7ec) = fVar4;
    if (fVar4 <= 0.0) {
      *(uint *)(param_1 + 0x7ec) = 0x3f000000;
      uStack_34 = FUN_0040cf60(0x40490fdb,0x40c90fdb);
      fStack_14 = (float)uStack_34;
      uStack_38 = FUN_0040cf60(0x40490fdb,0x40c90fdb);
      fStack_14 = (float)uStack_38;
      uStack_54 = FUN_0040cf60(0x40490fdb,0x40c90fdb);
      uStack_5c = uStack_34;
      uStack_58 = uStack_38;
      uStack_3c = uStack_54;
      fStack_14 = (float)uStack_54;
      FUN_00594380(auStack_70 + 5);
      auStack_cc[3] = uStack_d0;
      auStack_cc[(uint)bVar8 * -2 + 4] = auStack_cc[(uint)bVar8 * -2];
      auStack_cc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 5] =
           auStack_cc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      (auStack_cc + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 5)[(uint)bVar8 * -2 + 1] =
           (auStack_cc + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
      FUN_00593a10(auStack_cc + 3);
      puVar6 = auStack_130;
      puVar7 = auStack_100;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
      }
      uStack_a4 = 0;
      uStack_a0 = 0;
      uStack_9c = 0x3f800000;
      FUN_00591530(&uStack_a4,auStack_100);
      uVar15 = 3;
      uStack_98 = 0;
      uStack_90 = 0;
      puVar6 = &uStack_98;
      puVar7 = &uStack_8c;
      puVar14 = auStack_70 + 2;
      uStack_94 = 0x3f800000;
      auStack_70[2] = uStack_74;
      auStack_70[(uint)bVar8 * -2 + 3] = auStack_70[(uint)bVar8 * -2];
      auStack_70[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
           auStack_70[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      uVar13 = 0x3f266666;
      uVar12 = 0x3f666666;
      uVar11 = 0x3f333333;
      uStack_8c = uStack_74;
      auStack_88[(uint)bVar8 * -2] = auStack_70[(uint)bVar8 * -2];
      auStack_88[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           auStack_70[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      fStack_14 = (float)FUN_0040cf60(uVar11,uVar12,uVar13,puVar14,puVar7,puVar6,uVar15);
      FUN_005a8300(iStack_18,0x40000000,*(float *)(param_1 + 0x7f0) / *(float *)(param_1 + 0x7e0),0,
                   0x3f000000,0x40000000,0x3f051eb8,fStack_14);
    }
    if (fStack_20 <= *(float *)(param_1 + 0x7d4)) {
      FUN_004222d0(auStack_1a8);
      fStack_1a4 = *(float *)(param_1 + 0x7e4) * param_2;
      iStack_174 = param_1;
      iStack_170 = param_1;
      iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
      (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x110))(iVar5,auStack_1a8);
      return;
    }
  }
  return;
}
