// Name: FUN_0053f170
// Address: 0053f170
// Address Range: [[0053f170, 0053f989]]
// Convention: unknown
// Signature: undefined4 FUN_0053f170(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0053f170(int param_1)

{
  double dVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  byte bVar6;
  float10 fVar7;
  float10 fVar8;
  float afStackY_1130 [995];
  float *pfVar9;
  uint uStack_184;
  float fStack_180;
  uint uStack_17c;
  float fStack_178;
  uint uStack_174;
  uint uStack_170;
  float fStack_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  int iStack_150;
  uint uStack_14c;
  float fStack_148;
  float afStack_144 [4];
  uint uStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float afStack_118 [3];
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_f4;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  float fStack_d0;
  float afStack_c4 [3];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float afStack_78 [5];
  uint uStack_64;
  float fStack_44;
  int iStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  int iStack_30;
  int iStack_2c;
  float fStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar6 = 0;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0xe8))(param_1);
  pfVar9 = afStack_78 + 2;
  afStack_78[2] = (float)uStack_64;
  afStack_78[(uint)bVar6 * -2 + 3] = afStack_78[(uint)bVar6 * -2 + 6];
  afStack_78[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
       afStack_78[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
  FUN_00408d70(param_1,pfVar9);
  fStack_e8 = fStack_100;
  afStack_144[(uint)bVar6 * -2 + 0x18] = afStack_144[(uint)bVar6 * -2 + 0x12];
  iVar2 = param_1;
  afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19] =
       afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
  iVar2 = FUN_0058a290(iVar2);
  if (iVar2 == 0) {
    FUN_0055ae50(0x0264B290,param_1,"shotgun-noammo.wav",afStack_144 + 0x17);
    return 0;
  }
  fVar7 = (float10)fptan((float10)*(float *)(param_1 + 0x6d4) * (float10)_DAT_005e67f1 *
                         (float10)_DAT_005e67f5);
  fStack_44 = (float)(fVar7 * (float10)*(float *)(param_1 + 0x444));
  fStack_34 = (float)FUN_0040cfc0(10,0xf);
  iStack_40 = 0;
  if (0 < (int)fStack_34) {
    do {
      fStack_38 = (float)FUN_0040cf60(0,0x40c90fdb);
      fStack_14 = fStack_38;
      fStack_14 = (float)FUN_0040cf60(0,fStack_44);
      fVar7 = (float10)fcos((float10)fStack_38);
      fVar8 = (float10)fsin((float10)fStack_38);
      fStack_88 = (float)(fVar7 * (float10)fStack_14);
      fStack_84 = (float)(fVar8 * (float10)fStack_14);
      fStack_80 = *(float *)(param_1 + 0x444);
      FUN_00408cf0(param_1,afStack_144 + 0x2f);
      fStack_130 = fStack_f4;
      afStack_144[(uint)bVar6 * -2 + 6] = afStack_144[(uint)bVar6 * -2 + 0x15];
      afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
           afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16];
      if (afStack_144 + 0x2f != afStack_144 + 5) {
        fStack_88 = fStack_130;
        fStack_84 = fStack_12c;
        fStack_80 = fStack_128;
      }
      fStack_124 = fStack_e8 + fStack_88;
      fStack_120 = fStack_e4 + fStack_84;
      fStack_11c = fStack_e0 + fStack_80;
      afStack_c4[0] = fStack_e8 + fStack_88;
      afStack_144[(uint)bVar6 * -2 + 0x21] = afStack_144[(uint)bVar6 * -2 + 9];
      afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x22] =
           afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
      fVar5 = fStack_e4;
      fVar3 = fStack_e8;
      fStack_3c = (float)_DAT_005e6805 / *(float *)(param_1 + 0x444);
      fStack_a0 = fStack_88 * fStack_3c;
      fStack_9c = fStack_84 * fStack_3c;
      fStack_98 = fStack_80 * fStack_3c;
      fStack_148 = fStack_88 * fStack_3c;
      afStack_144[(uint)bVar6 * -2] = afStack_144[(uint)bVar6 * -2 + 0x2a];
      afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2b];
      fStack_7c = fVar3 - fStack_148;
      afStack_78[0] = fVar5 - afStack_144[0];
      afStack_78[1] = fStack_e0 - afStack_144[1];
      afStack_118[0] = fVar3 - fStack_148;
      afStack_144[(uint)bVar6 * -2 + 0xc] = afStack_78[(uint)bVar6 * -2];
      afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
           afStack_78[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      FUN_00537e00(0x01E661B8);
      FUN_00537eb0(0x01E661B8,1);
      FUN_00537e30(0x01E661B8,param_1);
      if (*(int *)(param_1 + 0x460) != 0) {
        FUN_00537e30(0x01E661B8,*(int *)(param_1 + 0x460));
      }
      iStack_20 = 0;
      do {
        fVar3 = (float)FUN_00535ee0(0x01E661B8,afStack_144 + 0xb,afStack_144 + 0x20);
        dVar1 = (double)fVar3;
        fStack_14 = fVar3;
        if ((dVar1 < 0.0) || (1.0 < dVar1)) break;
        iStack_18 = FUN_0040c8f0(*(uint *)(0x01E661B8 + 0x14d144),DAT_007bdc94,dVar1,fVar3);
        if ((iStack_18 != 0) &&
           (iVar2 = (**(code **)(*(int *)(iStack_18 + 0x2b0) + 0x114))(iStack_18), 0 < iVar2)) {
          iStack_18 = 0;
        }
        iVar2 = FUN_0040c8f0(*(uint *)(0x01E661B8 + 0x14d144),_DAT_01cb8280);
        iVar4 = FUN_0040c8f0(*(uint *)(0x01E661B8 + 0x14d144),_DAT_02653628);
        iStack_30 = iVar4;
        iStack_24 = FUN_0040c8f0(*(uint *)(0x01E661B8 + 0x14d144),DAT_007c2670);
        iStack_2c = FUN_0040c8f0(*(uint *)(0x01E661B8 + 0x14d144),_DAT_01cab6f8);
        fVar5 = (float)(**(code **)(*(int *)(param_1 + 0x2b0) + 0xf4))(param_1);
        fStack_14 = fStack_34;
        fStack_28 = ((1.0 - fVar3) * fVar5) / (float)(int)fStack_34;
        if (iStack_18 == 0) {
          if (iVar2 == 0) {
            if (iVar4 == 0) {
              if (iStack_24 == 0) {
                if (iStack_2c == 0) {
                  FUN_0049cd50(0x01C3DEB4,0x01E661B8 + 0x14d138,0x01E661B8 + 0x14d128,
                               *(uint *)(0x01E661B8 + 0x14d134),
                               *(uint *)(0x01E661B8 + 0x14d144));
                  break;
                }
                FUN_004a08d0(iStack_2c);
              }
              else {
                FUN_0043a350(iStack_24);
              }
            }
            else {
              FUN_00578550(iVar4);
              iVar2 = FUN_00578570(iVar4,param_1);
              if (iVar2 != 0) {
                FUN_005785b0(iVar4,fStack_28);
              }
              FUN_00537e30(0x01E661B8,iStack_30);
            }
          }
          else {
            iVar4 = FUN_004c72d0(iVar2);
            if (iVar4 == 0) break;
            FUN_004c6d40(iVar2,0x01E661B8 + 0x14d138);
          }
        }
        else {
          iVar2 = (**(code **)(*(int *)(iStack_18 + 0x2b0) + 0xe8))(iStack_18);
          if (iVar2 != 0) break;
          FUN_004222d0(&uStack_184);
          uStack_184 = *(uint *)(0x01E661B8 + 0x14d148);
          fStack_180 = fStack_28;
          uStack_17c = 0x3ecccccd;
          fStack_10c = *(float *)(0x01E661B8 + 0x14d11c) - *(float *)(0x01E661B8 + 0x14d110);
          fStack_108 = *(float *)(0x01E661B8 + 0x14d120) - *(float *)(0x01E661B8 + 0x14d114);
          fStack_104 = *(float *)(0x01E661B8 + 0x14d124) - *(float *)(0x01E661B8 + 0x14d118);
          fStack_b8 = fStack_10c;
          afStack_144[(uint)bVar6 * -2 + 0x24] = afStack_144[(uint)bVar6 * -2 + 0xf];
          afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x25] =
               afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
          fStack_1c = (float)_DAT_005e680d /
                      SQRT(fStack_b0 * fStack_b0 + fStack_b8 * fStack_b8 + fStack_b4 * fStack_b4);
          fStack_94 = fStack_b8 * fStack_1c;
          fStack_90 = fStack_b4 * fStack_1c;
          fStack_8c = fStack_b0 * fStack_1c;
          afStack_144[2] = fStack_b8 * fStack_1c;
          afStack_144[(uint)bVar6 * -2 + 3] = afStack_144[(uint)bVar6 * -2 + 0x2d];
          afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
               afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2e];
          if (&fStack_178 != afStack_144 + 2) {
            fStack_178 = afStack_144[2];
            uStack_174 = afStack_144[3];
            uStack_170 = uStack_134;
          }
          FUN_00408de0(iStack_18,0x01E661B8 + 0x14d138);
          fStack_dc = fStack_d0;
          afStack_144[(uint)bVar6 * -2 + 0x1b] = afStack_144[(uint)bVar6 * -2 + 0x1e];
          afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c] =
               afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f];
          if (&fStack_168 != afStack_144 + 0x1a) {
            fStack_168 = fStack_dc;
            uStack_164 = uStack_d8;
            uStack_160 = uStack_d4;
          }
          uStack_15c = *(uint *)(param_1 + 0x6c8);
          uStack_154 = 0x65;
          uStack_158 = 0x3e19999a;
          iStack_150 = param_1;
          uStack_14c = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x9c))(param_1);
          (**(code **)(*(int *)(iStack_18 + 0x2b0) + 0x110))(iStack_18,&uStack_184);
          if (*(int *)(param_1 + 0x440) == 0) break;
          FUN_00537e30(0x01E661B8,*(uint *)(0x01E661B8 + 0x14d144));
        }
        iStack_20 = iStack_20 + 1;
      } while (iStack_20 < 4);
      iStack_40 = iStack_40 + 1;
    } while (iStack_40 < (int)fStack_34);
  }
  FUN_00537e00(0x01E661B8);
  iVar2 = param_1 + 0x3c;
  fStack_ac = fStack_e8;
  afStack_144[(uint)bVar6 * -2 + 0x27] = afStack_144[(uint)bVar6 * -2 + 0x18];
  afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x28] =
       afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
  fStack_a8 = fStack_a8 + _DAT_005e67fd;
  FUN_0049d120(0x01C3DEB4,afStack_144 + 0x26,iVar2);
  FUN_0055ae50(0x0264B290,param_1,"shotgun.wav",afStack_144 + 0x17);
  *(uint *)(param_1 + 0x45c) = 0x3f2a7efa;
  return 1;
}
