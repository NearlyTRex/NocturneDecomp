// Name: FUN_004cbdc0
// Address: 004cbdc0
// Address Range: [[004cbdc0, 004cc676]]
// Convention: unknown
// Signature: undefined4 FUN_004cbdc0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004cbdc0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  float afStackY_114c [986];
  float *pfVar8;
  uint *puVar9;
  uint uStack_1c8;
  float fStack_1c4;
  uint uStack_1c0;
  float fStack_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  float fStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  uint uStack_198;
  int iStack_194;
  uint uStack_190;
  byte auStack_18c [40];
  uint uStack_164;
  float afStack_160 [5];
  float fStack_14c;
  uint uStack_148;
  uint uStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float afStack_134 [3];
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float afStack_11c [3];
  float fStack_110;
  uint uStack_10c;
  uint uStack_108;
  float afStack_104 [3];
  uint uStack_f8;
  float afStack_f4 [4];
  float fStack_e4;
  float afStack_e0 [3];
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  float afStack_94 [6];
  float afStack_7c [5];
  float fStack_68;
  float fStack_64;
  float fStack_60;
  uint uStack_5c;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  uint uStack_40;
  uint uStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int iStack_2c;
  float fStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar7 = 0;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0xe8))(param_1);
  pfVar8 = afStack_160 + 0x11;
  afStack_11c[0] = (float)uStack_98;
  afStack_160[(uint)bVar7 * -2 + 0x12] = afStack_94[(uint)bVar7 * -2];
  afStack_160[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
       afStack_94[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  FUN_00408d70(param_1,pfVar8);
  fStack_128 = afStack_160[2];
  afStack_160[(uint)bVar7 * -2 + 0xf] = afStack_160[(uint)bVar7 * -2 + 3];
  iVar3 = param_1;
  afStack_160[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
       afStack_160[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  iVar3 = FUN_0058a290(iVar3);
  if (iVar3 == 0) {
    FUN_0055ae50(0x0264B290,param_1,"45-dry-!.wav",afStack_160 + 0xe);
    return 0;
  }
  afStack_104[2] = *(float *)(param_1 + 0x444);
  afStack_104[0] = 0.0;
  afStack_104[1] = 0.0;
  FUN_00408cf0(param_1,afStack_160 + 0x17);
  fVar2 = fStack_124;
  fVar1 = fStack_128;
  fStack_b0 = afStack_7c[2];
  afStack_f4[(uint)bVar7 * -2 + 0x12] = afStack_7c[(uint)bVar7 * -2 + 3];
  afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
       afStack_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  fStack_d4 = fVar1 + fStack_b0;
  fStack_d0 = fVar2 + fStack_ac;
  fStack_cc = fStack_120 + fStack_a8;
  afStack_e0[0] = fVar1 + fStack_b0;
  afStack_f4[(uint)bVar7 * -2 + 6] = afStack_f4[(uint)bVar7 * -2 + 9];
  afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
  fVar1 = fStack_128;
  fStack_28 = (float)_DAT_005d97e6 / *(float *)(param_1 + 0x444);
  fStack_50 = fStack_b0 * fStack_28;
  fStack_4c = fStack_ac * fStack_28;
  fStack_48 = fStack_a8 * fStack_28;
  fStack_bc = fStack_b0 * fStack_28;
  afStack_f4[(uint)bVar7 * -2 + 0xf] = afStack_7c[(uint)bVar7 * -2 + 0xc];
  afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
       afStack_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
  fStack_38 = fVar1 - fStack_bc;
  fStack_34 = fStack_124 - fStack_b8;
  fStack_30 = fStack_120 - fStack_b4;
  afStack_134[0] = fVar1 - fStack_bc;
  afStack_160[(uint)bVar7 * -2 + 0xc] = afStack_7c[(uint)bVar7 * -2 + 0x12];
  afStack_160[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
       afStack_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
  FUN_00537e00(0x01E661B8);
  FUN_00537eb0(0x01E661B8,1);
  FUN_00537e30(0x01E661B8,param_1);
  if (*(int *)(param_1 + 0x460) != 0) {
    FUN_00537e30(0x01E661B8,*(int *)(param_1 + 0x460));
  }
  iStack_20 = 0;
  do {
    fStack_14 = (float)FUN_00535ee0(0x01E661B8,afStack_160 + 0xb,afStack_f4 + 5);
    if ((fStack_14 < 0.0) || (1.0 < fStack_14)) break;
    iStack_18 = FUN_0040c8f0(*(uint *)(0x01E661B8 + 0x14d144),DAT_007bdc94);
    if ((iStack_18 != 0) &&
       (iVar3 = (**(code **)(*(int *)(iStack_18 + 0x2b0) + 0x114))(iStack_18), 0 < iVar3)) {
      iStack_18 = 0;
    }
    iVar3 = FUN_0040c8f0(*(uint *)(0x01E661B8 + 0x14d144),_DAT_01cb8280);
    iVar5 = FUN_0040c8f0(*(uint *)(0x01E661B8 + 0x14d144),_DAT_02653628);
    iStack_2c = iVar5;
    iStack_24 = FUN_0040c8f0(*(uint *)(0x01E661B8 + 0x14d144),DAT_007c2670);
    iVar6 = FUN_0040c8f0(*(uint *)(0x01E661B8 + 0x14d144),_DAT_01cab6f8);
    if (iStack_18 == 0) {
      if (iVar3 == 0) {
        if (iVar5 == 0) {
          if (iStack_24 == 0) {
            if (iVar6 == 0) {
              FUN_0049cd50(0x01C3DEB4,0x01E661B8 + 0x14d138,0x01E661B8 + 0x14d128,
                           *(uint *)(0x01E661B8 + 0x14d134),
                           *(uint *)(0x01E661B8 + 0x14d144));
              break;
            }
            FUN_004a08d0(iVar6);
          }
          else {
            FUN_0043a350(iStack_24);
          }
        }
        else {
          FUN_00578550(iVar5);
          iVar3 = FUN_00578570(iVar5,param_1);
          if (iVar3 != 0) {
            fStack_14 = (float)(**(code **)(*(int *)(param_1 + 0x2b0) + 0xf4))(param_1);
            FUN_005785b0(iVar5,fStack_14);
          }
          FUN_00537e30(0x01E661B8,iStack_2c);
        }
      }
      else {
        iVar5 = FUN_004c72d0(iVar3);
        if (iVar5 == 0) break;
        FUN_004c6d40(iVar3,0x01E661B8 + 0x14d138);
      }
    }
    else {
      iVar5 = (**(code **)(*(int *)(iStack_18 + 0x2b0) + 0xe8))(iStack_18);
      iVar3 = 0x01E661B8;
      if (iVar5 != 0) {
        if (iStack_20 == 0) {
          *(int *)(param_1 + 0x6c4) = *(int *)(param_1 + 0x6c4) + 1;
          FUN_00537e00(iVar3);
          return 0;
        }
        break;
      }
      FUN_004222d0(&uStack_1c8);
      uStack_1c8 = *(uint *)(0x01E661B8 + 0x14d148);
      fStack_14 = (float)(**(code **)(*(int *)(param_1 + 0x2b0) + 0xf4))(param_1);
      uStack_1c0 = 0x3ecccccd;
      fStack_1c4 = fStack_14;
      fStack_140 = *(float *)(0x01E661B8 + 0x14d11c) - *(float *)(0x01E661B8 + 0x14d110);
      fStack_13c = *(float *)(0x01E661B8 + 0x14d120) - *(float *)(0x01E661B8 + 0x14d114);
      fStack_138 = *(float *)(0x01E661B8 + 0x14d124) - *(float *)(0x01E661B8 + 0x14d118);
      afStack_f4[2] = fStack_140;
      afStack_f4[(uint)bVar7 * -2 + 3] = afStack_160[(uint)bVar7 * -2 + 9];
      afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_160[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
      fStack_1c = (float)_DAT_005d97f6 /
                  SQRT(fStack_e4 * fStack_e4 +
                       afStack_f4[2] * afStack_f4[2] + afStack_f4[3] * afStack_f4[3]);
      fStack_68 = afStack_f4[2] * fStack_1c;
      fStack_64 = afStack_f4[3] * fStack_1c;
      fStack_60 = fStack_e4 * fStack_1c;
      fStack_110 = afStack_f4[2] * fStack_1c;
      afStack_160[(uint)bVar7 * -2 + 0x15] = afStack_7c[(uint)bVar7 * -2 + 6];
      afStack_160[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16] =
           afStack_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
      if (&fStack_1bc != afStack_160 + 0x14) {
        fStack_1bc = fStack_110;
        uStack_1b8 = uStack_10c;
        uStack_1b4 = uStack_108;
      }
      FUN_00408de0(iStack_18,0x01E661B8 + 0x14d138);
      fStack_44 = afStack_94[5];
      afStack_7c[(uint)bVar7 * -2 + 0xf] = afStack_7c[(uint)bVar7 * -2];
      afStack_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
           afStack_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      if (&fStack_1ac != afStack_7c + 0xe) {
        fStack_1ac = fStack_44;
        uStack_1a8 = uStack_40;
        uStack_1a4 = uStack_3c;
      }
      uStack_1a0 = *(uint *)(param_1 + 0x6c8);
      uStack_198 = 0x65;
      iStack_194 = param_1;
      uStack_19c = 0;
      uStack_190 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x9c))(param_1);
      (**(code **)(*(int *)(iStack_18 + 0x2b0) + 0x110))(iStack_18,&uStack_1c8);
      if (*(int *)(param_1 + 0x440) == 0) break;
      FUN_00537e30(0x01E661B8,*(uint *)(0x01E661B8 + 0x14d144));
    }
    iStack_20 = iStack_20 + 1;
  } while (iStack_20 < 4);
  FUN_00537e00(0x01E661B8);
  iVar3 = param_1 + 0x3c;
  fStack_c8 = fStack_128;
  afStack_f4[(uint)bVar7 * -2 + 0xc] = afStack_160[(uint)bVar7 * -2 + 0xf];
  afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
       afStack_160[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
  fStack_c4 = fStack_c4 + _DAT_005d97ee;
  FUN_0049d120(0x01C3DEB4,afStack_f4 + 0xb,iVar3);
  FUN_0055ae50(0x0264B290,param_1,"45.wav",afStack_160 + 0xe);
  *(uint *)(param_1 + 0x45c) = 0x3eaa7efa;
  afStack_94[2] = 3.0;
  afStack_94[3] = 3.0;
  afStack_94[4] = -4.0;
  fStack_a4 = (float)FUN_0040cf60(0xbec90fdb,0x3ec90fdb);
  fStack_14 = fStack_a4;
  uStack_a0 = FUN_0040cf60(0xbec90fdb,0x3ec90fdb);
  uStack_9c = 0;
  fStack_14 = (float)uStack_a0;
  FUN_00449280(auStack_18c,afStack_f4 + 0x14);
  FUN_00449530(auStack_18c,afStack_94 + 2);
  puVar9 = &uStack_f8;
  uStack_f8 = uStack_164;
  afStack_f4[(uint)bVar7 * -2] = afStack_160[(uint)bVar7 * -2];
  afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_160[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  FUN_00408cf0(param_1,puVar9);
  fStack_14c = (float)uStack_5c;
  afStack_160[(uint)bVar7 * -2 + 6] = afStack_7c[(uint)bVar7 * -2 + 9];
  afStack_160[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       afStack_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
  if (afStack_94 + 2 != afStack_160 + 5) {
    afStack_94[2] = fStack_14c;
    afStack_94[3] = (float)uStack_148;
    afStack_94[4] = (float)uStack_144;
  }
  uVar4 = FUN_0044fba0("gatbullet.kfm");
  FUN_0049e970(0x01C3DEB4,param_1 + 0x20,param_1 + 0x30,afStack_94 + 2,uVar4);
  return 1;
}
