// Name: FUN_005a61f0
// Address: 005a61f0
// Address Range: [[005a61f0, 005a6715]]
// Convention: unknown
// Signature: void FUN_005a61f0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a61f0(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float10 fVar7;
  float10 fVar8;
  uint auStackY_196c [1478];
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *puVar12;
  byte *puVar13;
  byte *puVar14;
  uint uVar15;
  uint auStack_220 [12];
  uint auStack_1f0 [12];
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  uint auStack_1a8 [6];
  uint uStack_190;
  uint auStack_18c [7];
  uint uStack_170;
  uint auStack_16c [7];
  uint uStack_150;
  uint uStack_140;
  uint auStack_13c [3];
  uint uStack_130;
  uint auStack_12c [7];
  uint uStack_110;
  uint auStack_10c [3];
  uint uStack_100;
  float afStack_fc [4];
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  float fStack_b4;
  uint auStack_b0 [2];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  float fStack_78;
  uint auStack_74 [2];
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  float fStack_60;
  float afStack_5c [4];
  float fStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  float afStack_3c [5];
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar1 = FUN_0059daa0(param_1 + 0x10af8,"Death");
  if ((iVar1 == 0) && (iVar1 = FUN_0059daa0(param_1 + 0x10af8,"Animation"), iVar1 == 0)) {
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
  }
  iStack_1c = param_1 + 0x154;
  FUN_005a8180(iStack_1c,param_2);
  FUN_005a8180(param_1 + 0x198,param_2);
  param_2 = *(float *)(param_1 + 0x2a8) - param_2;
  *(float *)(param_1 + 0x2a8) = param_2;
  if ((param_2 <= 0.0) && (iVar1 = FUN_005a8130(iStack_1c), iVar1 != 0)) {
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
    puVar4 = auStack_1a8;
    puVar5 = &fStack_1c0;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    fStack_e4 = fStack_1c0 + fStack_1b4;
    fStack_e0 = fStack_1bc + fStack_1b0;
    fStack_dc = fStack_1b8 + fStack_1ac;
    afStack_fc[3] = fStack_1c0 + fStack_1b4;
    *(uint *)((int)afStack_fc + ((uint)bVar6 * -2 + 4) * 4) =
         *(uint *)((int)afStack_fc + ((uint)bVar6 * -2 + 7) * 4);
    *(uint *)((int)afStack_fc + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 5) * 4) =
         *(uint *)((int)afStack_fc + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 8) * 4);
    fStack_cc = afStack_fc[3] * _DAT_005f06a6;
    fStack_c8 = fStack_ec * _DAT_005f06a6;
    fStack_c4 = fStack_e8 * _DAT_005f06a6;
    fStack_d8 = afStack_fc[3] * _DAT_005f06a6;
    *(uint *)((int)afStack_fc + ((uint)bVar6 * -2 + 10) * 4) =
         *(uint *)((int)afStack_fc + ((uint)bVar6 * -2 + 0xd) * 4);
    *(uint *)((int)afStack_fc + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xb) * 4) =
         *(uint *)((int)afStack_fc + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xe) * 4);
    iVar1 = 0;
    *(uint *)(param_1 + 0x2a8) = 0x3d4ccccd;
    iStack_18 = iStack_1c;
    do {
      iVar2 = FUN_005a7ed0();
      if (iVar2 != 0) {
        uStack_28 = FUN_0040cf60(0,0x40c90fdb);
        fStack_14 = (float)uStack_28;
        uStack_24 = FUN_0040cf60(0,0x40c90fdb);
        fStack_14 = (float)uStack_24;
        fStack_14 = (float)FUN_0040cf60(0,0x40c90fdb);
        FUN_00594020(fStack_14);
        puVar13 = (byte *)&uStack_170;
        uStack_170 = auStack_12c[3];
        *(uint *)((int)auStack_16c + (uint)bVar6 * 0xfffffff8) =
             *(uint *)((int)auStack_12c + ((uint)bVar6 * -2 + 4) * 4);
        *(uint *)((int)auStack_16c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4) =
             *(uint *)((int)auStack_12c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 5) * 4);
        ((uint *)((int)auStack_16c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4))
        [(uint)bVar6 * -2 + 1] =
             ((uint *)((int)auStack_12c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 5) * 4))
             [(uint)bVar6 * -2 + 1];
        FUN_00593fe0(uStack_24,puVar13);
        puVar13 = (byte *)&uStack_110;
        uStack_110 = auStack_16c[3];
        *(uint *)((int)auStack_10c + (uint)bVar6 * 0xfffffff8) =
             *(uint *)((int)auStack_16c + ((uint)bVar6 * -2 + 4) * 4);
        *(uint *)((int)auStack_10c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4) =
             *(uint *)((int)auStack_16c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 5) * 4);
        ((uint *)((int)auStack_10c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4))
        [(uint)bVar6 * -2 + 1] =
             ((uint *)((int)auStack_16c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 5) * 4))
             [(uint)bVar6 * -2 + 1];
        FUN_00593fa0(uStack_28,puVar13);
        uStack_140 = uStack_190;
        *(uint *)((int)auStack_13c + (uint)bVar6 * 0xfffffff8) =
             *(uint *)((int)auStack_18c + (uint)bVar6 * 0xfffffff8);
        *(uint *)((int)auStack_13c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4) =
             *(uint *)((int)auStack_16c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + -7) * 4);
        ((uint *)((int)auStack_13c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4))
        [(uint)bVar6 * -2 + 1] =
             ((uint *)((int)auStack_16c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + -7) * 4))
             [(uint)bVar6 * -2 + 1];
        FUN_00593c60(&uStack_140);
        uStack_100 = uStack_150;
        *(uint *)((int)afStack_fc + (uint)bVar6 * 0xfffffff8) =
             *(uint *)((int)auStack_16c + ((uint)bVar6 * -2 + 8) * 4);
        *(uint *)((int)afStack_fc + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4) =
             *(uint *)((int)auStack_16c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 9) * 4);
        ((uint *)((int)afStack_fc + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4))
        [(uint)bVar6 * -2 + 1] =
             ((uint *)((int)auStack_16c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 9) * 4))
             [(uint)bVar6 * -2 + 1];
        FUN_00593c60(&uStack_100);
        uStack_130 = auStack_18c[3];
        *(uint *)((int)auStack_12c + (uint)bVar6 * 0xfffffff8) =
             *(uint *)((int)auStack_16c + ((uint)bVar6 * -2 + -4) * 4);
        *(uint *)((int)auStack_12c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4) =
             *(uint *)((int)auStack_16c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + -3) * 4);
        ((uint *)((int)auStack_12c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4))
        [(uint)bVar6 * -2 + 1] =
             ((uint *)((int)auStack_16c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + -3) * 4))
             [(uint)bVar6 * -2 + 1];
        FUN_00593a10(&uStack_130);
        puVar4 = auStack_1f0;
        puVar5 = auStack_220;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
          puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
        }
        uStack_80 = FUN_0040cf60(0x3f000000,0x3fc00000,auStack_220);
        uStack_84 = 0;
        uStack_7c = 0;
        uStack_20 = uStack_80;
        fStack_14 = (float)uStack_80;
        FUN_00591530(&uStack_84);
        puVar14 = (byte *)&uStack_c0;
        uStack_c0 = 0;
        uStack_bc = 0x40a00000;
        uStack_b8 = 0;
        afStack_5c[2] = fStack_b4;
        *(uint *)((int)afStack_5c + ((uint)bVar6 * -2 + 3) * 4) =
             *(uint *)((int)auStack_b0 + (uint)bVar6 * 0xfffffff8);
        *(uint *)((int)afStack_5c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 4) * 4) =
             *(uint *)((int)auStack_b0 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4);
        uVar15 = 0;
        puVar13 = (byte *)&fStack_78;
        fStack_9c = afStack_5c[2] + fStack_d8;
        fStack_98 = afStack_5c[3] + fStack_d4;
        fStack_94 = fStack_4c + fStack_d0;
        fStack_a8 = afStack_5c[2] + fStack_d8;
        *(uint *)((int)auStack_b0 + ((uint)bVar6 * -2 + 3) * 4) =
             *(uint *)((int)auStack_b0 + ((uint)bVar6 * -2 + 6) * 4);
        *(uint *)((int)auStack_b0 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 4) * 4) =
             *(uint *)((int)auStack_b0 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 7) * 4);
        puVar12 = (byte *)&fStack_a8;
        uVar11 = 0;
        uVar10 = 0x3e4ccccd;
        fStack_60 = fStack_a8 - fStack_d8;
        afStack_5c[0] = fStack_a4 - fStack_d4;
        afStack_5c[1] = fStack_a0 - fStack_d0;
        uVar9 = 0;
        fStack_78 = fStack_a8 - fStack_d8;
        *(uint *)((int)auStack_74 + (uint)bVar6 * 0xfffffff8) =
             *(uint *)((int)afStack_5c + (uint)bVar6 * 0xfffffff8);
        *(uint *)((int)auStack_74 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4) =
             *(uint *)((int)afStack_5c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4);
        fStack_14 = (float)FUN_0040cf60(uVar9,uVar10,uVar11,puVar12,puVar13,puVar14,uVar15);
        fStack_14 = (float)FUN_0040cf60(0x3e99999a,0x3f19999a,fStack_14);
        FUN_005a8300(iStack_18,0x3f800000,0x3f800000,0,0x3f333333,0,fStack_14);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x14);
  }
  if (*(float *)(param_1 + 0x2a8) <= 0.0) {
    iVar1 = FUN_005a8130(param_1 + 0x198);
    if (iVar1 != 0) {
      iVar1 = 0;
      *(uint *)(param_1 + 0x2a8) = 0x3d4ccccd;
      do {
        fVar3 = (float)FUN_0040cf60(0,0x40c90fdb);
        fVar7 = (float10)fcos((float10)fVar3);
        fVar8 = (float10)fsin((float10)fVar3);
        afStack_3c[1] = 0.0;
        afStack_3c[2] = (float)(fVar7 * (float10)_DAT_005f06ae);
        afStack_3c[0] = (float)(fVar8 * (float10)_DAT_005f06ae);
        fStack_14 = afStack_3c[2];
        fStack_14 = (float)FUN_0040cf60(0,0x3f800000);
        if ((float)_DAT_005f06b6 < fStack_14) {
          uStack_8c = 0x3f000000;
          uStack_88 = 0;
          uStack_90 = 0;
          if (&uStack_48 != &uStack_90) {
            uStack_44 = 0x3f000000;
            uStack_40 = 0;
            uStack_48 = 0;
          }
        }
        else if (&stack0x00000000 != (byte *)0x2653754) {
          uStack_48 = _DAT_0265370c;
          uStack_44 = _DAT_02653710;
          uStack_40 = _DAT_02653714;
        }
        uStack_68 = 0x3fc00000;
        iVar1 = iVar1 + 1;
        uStack_6c = 0;
        uStack_64 = 0;
        FUN_005a8300(param_1 + 0x198,0x3f800000,0x3f800000,0,0x3f000000,0,0x3f07ae14,0x3f800000,
                     0x3eeb851f,afStack_3c,&uStack_48,&uStack_6c,1);
      } while (iVar1 < 0x14);
    }
  }
  return;
}
