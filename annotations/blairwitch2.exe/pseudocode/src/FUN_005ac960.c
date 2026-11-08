// Name: FUN_005ac960
// Address: 005ac960
// Address Range: [[005ac960, 005ad2f3]]
// Convention: unknown
// Signature: void FUN_005ac960(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ac960(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  float10 fVar5;
  float10 fVar6;
  float afStackY_1160 [1001];
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte *puVar13;
  byte *puVar14;
  uint uStack_184;
  float fStack_180;
  uint uStack_17c;
  uint uStack_178;
  uint auStack_174 [2];
  uint uStack_16c;
  uint uStack_168;
  uint uStack_164;
  uint uStack_160;
  uint auStack_15c [2];
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  uint uStack_148;
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  uint auStack_138 [2];
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint auStack_120 [5];
  uint uStack_10c;
  uint uStack_108;
  float fStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  float fStack_ec;
  float afStack_e8 [3];
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint auStack_c0 [5];
  uint uStack_ac;
  uint uStack_a8;
  float fStack_a4;
  uint uStack_a0;
  float afStack_9c [5];
  uint uStack_88;
  float fStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint auStack_78 [7];
  float fStack_5c;
  uint uStack_58;
  float fStack_54;
  uint uStack_50;
  float fStack_4c;
  uint uStack_48;
  float fStack_44;
  uint uStack_40;
  uint uStack_3c;
  float fStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  uint uStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar4 = 0;
  FUN_0041c090();
  FUN_005a8180();
  FUN_005a8180();
  FUN_005a8180();
  FUN_005a8180();
  fVar1 = *(float *)(param_1 + 0x2a8) - param_2;
  *(float *)(param_1 + 0x2a8) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2a8) = 0x3d4ccccd;
    iVar3 = FUN_005a8130();
    if (iVar3 != 0) {
      iVar3 = 0;
      do {
        fVar1 = (float)FUN_0040cf60();
        fStack_14 = fVar1;
        iVar2 = FUN_005a7ed0();
        if (iVar2 != 0) {
          fVar5 = (float10)fcos((float10)fVar1);
          fVar6 = (float10)fsin((float10)fVar1);
          afStack_e8[1] = 0.0;
          afStack_e8[2] = (float)(fVar5 * (float10)_DAT_005f0ea3);
          afStack_e8[0] = (float)(fVar6 * (float10)_DAT_005f0ea3);
          fStack_44 = afStack_e8[2];
          fStack_14 = (float)FUN_0040cf60();
          if (fStack_14 <= (float)_DAT_005f0ec3) {
            if (&stack0x00000000 != (byte *)0x2653878) {
              uStack_16c = _DAT_0265370c;
              uStack_168 = _DAT_02653710;
              uStack_164 = _DAT_02653714;
            }
          }
          else {
            uStack_12c = 0x3f000000;
            uStack_128 = 0;
            uStack_130 = 0;
            if (&uStack_16c != &uStack_130) {
              uStack_164 = 0;
              uStack_16c = 0;
              uStack_168 = 0x3f000000;
            }
          }
          auStack_120[3] = 0x3fc00000;
          auStack_120[2] = 0;
          auStack_120[4] = 0;
          FUN_005a8300(param_1 + 0x154,0x3f800000,0x3f800000,0,0x3f000000,0,0x3f07ae14,0x3f800000,
                       0x3eeb851f,afStack_e8,&uStack_16c);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x14);
    }
    iVar3 = FUN_005a8130();
    if (iVar3 != 0) {
      iStack_18 = 0;
      iStack_30 = param_1 + 0x198;
      do {
        iVar3 = FUN_005a7ed0();
        if (iVar3 != 0) {
          fStack_14 = (float)FUN_0040cf60();
          afStack_9c[4] = fStack_14 * _DAT_005f0eab;
          afStack_9c[2] = 0.0;
          afStack_9c[3] = 0.0;
          fStack_44 = afStack_9c[4];
          FUN_00408cf0();
          uStack_178 = auStack_c0[2];
          *(uint *)((int)auStack_174 + (uint)bVar4 * 0xfffffff8) =
               *(uint *)((int)auStack_c0 + ((uint)bVar4 * -2 + 3) * 4);
          *(uint *)((int)auStack_174 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 1) * 4) =
               *(uint *)((int)auStack_c0 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 4) * 4);
          fStack_14 = (float)FUN_0040cf60();
          if (fStack_14 <= (float)_DAT_005f0ec3) {
            if (&stack0x00000000 != (byte *)0x26537e8) {
              uStack_dc = _DAT_0265370c;
              uStack_d8 = _DAT_02653710;
              uStack_d4 = _DAT_02653714;
            }
          }
          else {
            uStack_c8 = 0;
            uStack_d0 = 0;
            uStack_cc = 0x3f800000;
            if (&uStack_dc != &uStack_d0) {
              uStack_d8 = 0x3f800000;
              uStack_d4 = 0;
              uStack_dc = 0;
            }
          }
          uStack_100 = 0;
          uStack_fc = 0x3fc00000;
          uStack_f8 = 0;
          FUN_005a8300(iStack_30,0x40400000,0x3f800000,0,0x3f000000,0,0x3f07ae14,0x3f800000,
                       0x3eeb851f,&uStack_178,&uStack_dc);
        }
        iStack_18 = iStack_18 + 1;
      } while (iStack_18 < 7);
    }
    iVar3 = FUN_005a8130();
    if (iVar3 != 0) {
      iStack_20 = 0;
      iStack_2c = param_1 + 0x1dc;
      do {
        iVar3 = FUN_005a7ed0();
        if (iVar3 != 0) {
          fStack_5c = (float)FUN_0040cf60();
          fStack_44 = fStack_5c * _DAT_005f0eaf;
          fStack_14 = fStack_5c;
          uStack_28 = FUN_0040cf60();
          uStack_ac = FUN_0040cf60();
          uStack_58 = uStack_28;
          uStack_a8 = uStack_28;
          fStack_a4 = fStack_44;
          uStack_50 = uStack_ac;
          fStack_14 = (float)uStack_ac;
          FUN_00408cf0();
          fVar1 = fStack_5c * (float)_DAT_005f0eb3;
          uStack_13c = uStack_c4;
          *(uint *)((int)auStack_138 + (uint)bVar4 * 0xfffffff8) =
               *(uint *)((int)auStack_c0 + (uint)bVar4 * 0xfffffff8);
          *(uint *)((int)auStack_138 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 1) * 4) =
               *(uint *)((int)auStack_c0 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 1) * 4);
          fStack_44 = fVar1;
          uStack_10c = FUN_0040cf60();
          uStack_108 = 0;
          fStack_104 = fStack_44;
          fStack_14 = (float)uStack_10c;
          fStack_180 = (float)FUN_0040cf60();
          uStack_184 = 0;
          uStack_17c = 0;
          fStack_54 = fStack_180;
          fStack_14 = fStack_180;
          FUN_005a8300(iStack_2c,0x40200000,0x3f800000,0,0x3e99999a,0,0x3f000000,0x3f000000,
                       0x3f0ccccd,&uStack_13c,&uStack_10c);
        }
        iStack_20 = iStack_20 + 1;
      } while (iStack_20 < 0x11);
    }
  }
  param_2 = *(float *)(param_1 + 0x7d4) - param_2;
  *(float *)(param_1 + 0x7d4) = param_2;
  if (param_2 <= 0.0) {
    iStack_34 = param_1 + 0x220;
    iVar3 = FUN_005a8130();
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0x7d4) = 0x3d4ccccd;
      FUN_0040cf60();
      uStack_28 = FUN_0040cf60();
      fStack_84 = (float)FUN_0040cf60();
      uStack_48 = uStack_28;
      uStack_88 = 0;
      uStack_80 = uStack_28;
      fStack_4c = fStack_84;
      fStack_14 = fStack_84;
      FUN_00408cf0();
      puVar14 = (byte *)&fStack_154;
      puVar13 = (byte *)&uStack_a0;
      uVar12 = 0x3f28f5c3;
      uVar11 = 0x3f19999a;
      uVar10 = 0x3f19999a;
      uVar9 = 0;
      uVar8 = 0x3f000000;
      uVar7 = 0;
      uStack_a0 = uStack_124;
      *(uint *)((int)afStack_9c + (uint)bVar4 * 0xfffffff8) =
           *(uint *)((int)auStack_120 + (uint)bVar4 * 0xfffffff8);
      iVar3 = iStack_34;
      *(uint *)((int)afStack_9c + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 1) * 4) =
           *(uint *)((int)auStack_120 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 1) * 4);
      fStack_154 = 0.0;
      fStack_150 = -0.1;
      fStack_14c = 0.0;
      FUN_005a8300(iStack_34,0x3f800000,0x3f000000,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,puVar13,
                   puVar14);
      iStack_1c = 0;
      iStack_24 = iVar3;
      do {
        iVar3 = FUN_005a7ed0();
        if (iVar3 != 0) {
          fStack_44 = (float)FUN_0040cf60();
          uStack_28 = FUN_0040cf60();
          uStack_f4 = FUN_0040cf60();
          uStack_3c = uStack_28;
          fStack_38 = fStack_44;
          uStack_f0 = uStack_28;
          fStack_ec = fStack_44;
          uStack_40 = uStack_f4;
          fStack_14 = (float)uStack_f4;
          FUN_00408cf0();
          uStack_160 = uStack_7c;
          *(uint *)((int)auStack_15c + (uint)bVar4 * 0xfffffff8) =
               *(uint *)((int)auStack_78 + (uint)bVar4 * 0xfffffff8);
          *(uint *)((int)auStack_15c + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 1) * 4) =
               *(uint *)((int)auStack_78 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 1) * 4);
          if (&uStack_a0 != &uStack_160) {
            uStack_a0 = uStack_160;
            afStack_9c[0] = (float)auStack_15c[0];
            afStack_9c[1] = (float)auStack_15c[1];
          }
          uStack_144 = 0x40000000;
          uStack_140 = 0;
          uStack_148 = 0;
          if (&fStack_154 != (float *)&uStack_148) {
            fStack_150 = 2.0;
            fStack_14c = 0.0;
            fStack_154 = 0.0;
          }
          auStack_78[2] = 0;
          auStack_78[3] = 0xc0a00000;
          auStack_78[4] = 0;
          fStack_14 = (float)FUN_0040cf60(0x40000000,0x40800000,0,0x3f19999a,0x3f19999a,0x3f28f5c3,
                                          &uStack_a0,&fStack_154);
          fStack_14 = (float)FUN_0040cf60(0x3f000000,0x3f800000,0x3f000000,0,fStack_14);
          FUN_005a8300(iStack_24,fStack_14);
          fStack_154 = fStack_154 * _DAT_005f0ebb;
          fStack_150 = fStack_150 * _DAT_005f0ebb;
          fStack_14c = fStack_14c * _DAT_005f0ebb;
          fStack_14 = (float)FUN_0040cf60();
          if ((float)_DAT_005f0ecb < fStack_14) {
            FUN_005a8300(iStack_24,0x3f000000,0x3f000000,0,0x3e4ccccd,0,0x3f19999a,0x3f19999a,
                         0x3f28f5c3,&uStack_a0,&fStack_154);
          }
        }
        iStack_1c = iStack_1c + 1;
      } while (iStack_1c < 10);
    }
  }
  return;
}
