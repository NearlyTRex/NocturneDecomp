// Name: FUN_00575800
// Address: 00575800
// Address Range: [[00575800, 005760f5]]
// Convention: unknown
// Signature: undefined4 FUN_00575800(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00575800(int param_1)

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
  uint uStack_1c8;
  float fStack_1c4;
  uint uStack_1c0;
  float fStack_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  uint uStack_1ac;
  float fStack_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  uint uStack_198;
  int iStack_194;
  uint uStack_190;
  byte auStack_18c [40];
  uint uStack_164;
  float afStack_160 [4];
  uint uStack_150;
  float afStack_14c [3];
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float afStack_128 [3];
  float fStack_11c;
  float afStack_118 [4];
  float fStack_108;
  float afStack_104 [3];
  float fStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  float fStack_ec;
  float afStack_e8 [4];
  uint uStack_d8;
  uint uStack_d4;
  float afStack_d0 [5];
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  uint uStack_b0;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float afStack_8c [3];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  uint uStack_74;
  float afStack_68 [3];
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  float fStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar7 = 0;
  *(uint *)(param_1 + 0x6d4) = 2;
  if (0.0 < *(float *)(param_1 + 0x45c)) {
    return 0;
  }
  *(float *)(param_1 + 0x45c) = *(float *)(param_1 + 0x45c) + _DAT_005ecc90;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0xe8))(param_1);
  pfVar8 = afStack_d0 + 0x1a;
  afStack_68[0] = (float)uStack_d4;
  afStack_d0[(uint)bVar7 * -2 + 0x1b] = afStack_d0[(uint)bVar7 * -2];
  afStack_d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1c] =
       afStack_d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  FUN_00408d70(param_1,pfVar8);
  fStack_bc = afStack_d0[2];
  afStack_d0[(uint)bVar7 * -2 + 6] = afStack_d0[(uint)bVar7 * -2 + 3];
  iVar3 = param_1;
  afStack_d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       afStack_d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  iVar3 = FUN_0058a290(iVar3);
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0x6d4) = 0;
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"45-dry-!.wav @2.0");
    FUN_00551050(*(uint *)(param_1 + 0x6d8));
    *(uint *)(param_1 + 0x6d8) = 0;
    return 0;
  }
  afStack_128[2] = *(float *)(param_1 + 0x444);
  afStack_128[0] = 0.0;
  afStack_128[1] = 0.0;
  FUN_00408cf0(param_1,afStack_160 + 0xe);
  fVar2 = fStack_b8;
  fVar1 = fStack_bc;
  fStack_50 = fStack_ec;
  afStack_d0[(uint)bVar7 * -2 + 0x21] = afStack_e8[(uint)bVar7 * -2];
  afStack_d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x22] =
       afStack_e8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  fStack_5c = fVar1 + fStack_50;
  fStack_58 = fVar2 + fStack_4c;
  fStack_54 = fStack_b4 + fStack_48;
  afStack_104[0] = fVar1 + fStack_50;
  afStack_118[(uint)bVar7 * -2 + 6] = afStack_d0[(uint)bVar7 * -2 + 0x1e];
  fVar1 = fStack_bc;
  afStack_118[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       afStack_d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1f];
  fStack_2c = (float)_DAT_005ecc94 / *(float *)(param_1 + 0x444);
  fStack_11c = fStack_50 * fStack_2c;
  afStack_118[0] = fStack_4c * fStack_2c;
  afStack_118[1] = fStack_48 * fStack_2c;
  afStack_118[2] = fStack_50 * fStack_2c;
  afStack_118[(uint)bVar7 * -2 + 3] = afStack_118[(uint)bVar7 * -2];
  afStack_118[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       afStack_118[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  fStack_a4 = fVar1 - afStack_118[2];
  fStack_a0 = fStack_b8 - afStack_118[3];
  fStack_9c = fStack_b4 - fStack_108;
  afStack_14c[0] = fVar1 - afStack_118[2];
  afStack_160[(uint)bVar7 * -2 + 6] = afStack_d0[(uint)bVar7 * -2 + 0xc];
  afStack_160[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       afStack_d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
  FUN_00537e00(0x01E661B8);
  FUN_00537eb0(0x01E661B8,1);
  FUN_00537e30(0x01E661B8,param_1);
  if (*(int *)(param_1 + 0x460) != 0) {
    FUN_00537e30(0x01E661B8,*(int *)(param_1 + 0x460));
  }
  iStack_20 = 0;
  do {
    fStack_14 = (float)FUN_00535ee0(0x01E661B8,afStack_160 + 5,afStack_118 + 5);
    if ((fStack_14 < 0.0) || (1.0 < fStack_14)) goto LAB_00575a8f;
    iStack_18 = FUN_0040c8f0(*(uint *)(0x01E661B8 + 0x14d144),DAT_007bdc94);
    if ((iStack_18 != 0) &&
       (iVar3 = (**(code **)(*(int *)(iStack_18 + 0x2b0) + 0x114))(iStack_18), 0 < iVar3)) {
      iStack_18 = 0;
    }
    iVar3 = FUN_0040c8f0(*(uint *)(0x01E661B8 + 0x14d144),_DAT_01cb8280);
    iVar5 = FUN_0040c8f0(*(uint *)(0x01E661B8 + 0x14d144),_DAT_02653628);
    iStack_28 = iVar5;
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
              goto LAB_00575a8f;
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
          FUN_00537e30(0x01E661B8,iStack_28);
        }
      }
      else {
        iVar5 = FUN_004c72d0(iVar3);
        if (iVar5 == 0) goto LAB_00575a8f;
        FUN_004c6d40(iVar3,0x01E661B8 + 0x14d138);
      }
    }
    else {
      iVar3 = (**(code **)(*(int *)(iStack_18 + 0x2b0) + 0xe8))(iStack_18);
      if ((iVar3 != 0) &&
         (iVar5 = FUN_0040c8f0(*(uint *)(param_1 + 0x460),_DAT_01cedf50), iVar3 = 0x01E661B8
         , iVar5 != 0)) {
        if (iStack_20 == 0) {
          *(int *)(param_1 + 0x6c4) = *(int *)(param_1 + 0x6c4) + 1;
          FUN_00537e00(iVar3);
          return 0;
        }
        goto LAB_00575a8f;
      }
      FUN_004222d0(&uStack_1c8);
      uStack_1c8 = *(uint *)(0x01E661B8 + 0x14d148);
      fStack_14 = (float)(**(code **)(*(int *)(param_1 + 0x2b0) + 0xf4))(param_1);
      uStack_1c0 = 0x3ecccccd;
      fStack_1c4 = fStack_14;
      fStack_140 = *(float *)(0x01E661B8 + 0x14d11c) - *(float *)(0x01E661B8 + 0x14d110);
      fStack_13c = *(float *)(0x01E661B8 + 0x14d120) - *(float *)(0x01E661B8 + 0x14d114);
      fStack_138 = *(float *)(0x01E661B8 + 0x14d124) - *(float *)(0x01E661B8 + 0x14d118);
      fStack_98 = fStack_140;
      afStack_d0[(uint)bVar7 * -2 + 0xf] = afStack_160[(uint)bVar7 * -2 + 9];
      afStack_d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
           afStack_160[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
      fStack_1c = (float)_DAT_005ecca4 /
                  SQRT(fStack_90 * fStack_90 + fStack_98 * fStack_98 + fStack_94 * fStack_94);
      fStack_80 = fStack_98 * fStack_1c;
      fStack_7c = fStack_94 * fStack_1c;
      fStack_78 = fStack_90 * fStack_1c;
      afStack_160[2] = fStack_98 * fStack_1c;
      afStack_160[(uint)bVar7 * -2 + 3] = afStack_d0[(uint)bVar7 * -2 + 0x15];
      afStack_160[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16];
      if (&fStack_1bc != afStack_160 + 2) {
        fStack_1bc = afStack_160[2];
        uStack_1b8 = afStack_160[3];
        uStack_1b4 = uStack_150;
      }
      FUN_00408de0(iStack_18,0x01E661B8 + 0x14d138);
      uStack_164 = uStack_b0;
      afStack_160[(uint)bVar7 * -2] = afStack_d0[(uint)bVar7 * -2 + 9];
      afStack_160[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
      if (&uStack_1ac != &uStack_164) {
        uStack_1ac = uStack_164;
        fStack_1a8 = afStack_160[0];
        uStack_1a4 = afStack_160[1];
      }
      uStack_1a0 = *(uint *)(param_1 + 0x6c8);
      uStack_198 = 0x65;
      uStack_19c = 0x3e19999a;
      iStack_194 = param_1;
      uStack_190 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x9c))(param_1);
      (**(code **)(*(int *)(iStack_18 + 0x2b0) + 0x110))(iStack_18,&uStack_1c8);
      if (*(int *)(param_1 + 0x440) == 0) goto LAB_00575a8f;
      FUN_00537e30(0x01E661B8,*(uint *)(0x01E661B8 + 0x14d144));
    }
    iStack_20 = iStack_20 + 1;
    if (3 < iStack_20) {
LAB_00575a8f:
      FUN_00537e00(0x01E661B8);
      if (*(int *)(param_1 + 0x6d0) != 0) {
        fStack_134 = fStack_bc;
        afStack_160[(uint)bVar7 * -2 + 0xc] = afStack_d0[(uint)bVar7 * -2 + 6];
        afStack_160[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
             afStack_d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
        fStack_130 = fStack_130 + _DAT_005ecc9c;
        FUN_0049d120(0x01C3DEB4,afStack_160 + 0xb,param_1 + 0x3c);
        fStack_f8 = 5.0;
        uStack_f4 = 0x40c00000;
        uStack_f0 = 0xc0c00000;
        afStack_e8[2] = (float)FUN_0040cf60(0xbec90fdb,0x3ec90fdb);
        fStack_14 = afStack_e8[2];
        afStack_e8[3] = (float)FUN_0040cf60(0xbec90fdb,0x3ec90fdb);
        uStack_d8 = 0;
        fStack_14 = afStack_e8[3];
        FUN_00449280(auStack_18c,afStack_e8 + 2);
        FUN_00449530(auStack_18c,afStack_118 + 8);
        pfVar8 = afStack_d0 + 0x11;
        afStack_8c[0] = (float)uStack_38;
        afStack_d0[(uint)bVar7 * -2 + 0x12] = afStack_d0[(uint)bVar7 * -2 + 0x27];
        afStack_d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
             afStack_d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x28];
        FUN_00408cf0(param_1,pfVar8);
        fStack_44 = (float)uStack_74;
        afStack_d0[(uint)bVar7 * -2 + 0x24] = afStack_d0[(uint)bVar7 * -2 + 0x18];
        afStack_d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x25] =
             afStack_d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19];
        if (afStack_118 + 8 != afStack_d0 + 0x23) {
          fStack_f8 = fStack_44;
          uStack_f4 = uStack_40;
          uStack_f0 = uStack_3c;
        }
        uVar4 = FUN_0044fba0("bullet.kfm");
        FUN_0049e970(0x01C3DEB4,param_1 + 0x20,param_1 + 0x30,afStack_118 + 8,uVar4);
      }
      return 1;
    }
  } while( true );
}
