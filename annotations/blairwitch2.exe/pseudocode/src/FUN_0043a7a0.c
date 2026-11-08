// Name: FUN_0043a7a0
// Address: 0043a7a0
// Address Range: [[0043a7a0, 0043ae0d]]
// Convention: unknown
// Signature: undefined4 FUN_0043a7a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0043a7a0(int param_1)

{
  double dVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  float afStackY_10f8 [995];
  float *pfVar7;
  uint uStack_14c;
  float fStack_148;
  uint uStack_144;
  float fStack_140;
  uint uStack_13c;
  uint uStack_138;
  float fStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  int iStack_118;
  uint uStack_114;
  float fStack_110;
  float afStack_10c [4];
  float fStack_fc;
  float fStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float afStack_c8 [3];
  uint uStack_bc;
  float afStack_b8 [5];
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_80;
  float afStack_74 [3];
  float fStack_68;
  uint uStack_64;
  uint uStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float afStack_44 [3];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int iStack_2c;
  float fStack_28;
  int iStack_24;
  float fStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar6 = 0;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0xe8))(param_1);
  pfVar7 = afStack_b8 + 2;
  afStack_b8[2] = (float)uStack_bc;
  afStack_b8[(uint)bVar6 * -2 + 3] = afStack_b8[(uint)bVar6 * -2];
  afStack_b8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
       afStack_b8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  FUN_00408d70(param_1,pfVar7);
  fStack_110 = fStack_80;
  afStack_10c[(uint)bVar6 * -2] = afStack_b8[(uint)bVar6 * -2 + 0xf];
  iVar4 = param_1;
  afStack_10c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       afStack_b8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
  iVar4 = FUN_0058a290(iVar4);
  if (iVar4 == 0) {
    return 0;
  }
  afStack_c8[2] = *(float *)(param_1 + 0x444);
  afStack_c8[0] = 0.0;
  afStack_c8[1] = 0.0;
  FUN_00408cf0(param_1,afStack_10c + 0x11);
  fVar3 = afStack_10c[0];
  fVar2 = fStack_110;
  fStack_5c = fStack_8c;
  afStack_b8[(uint)bVar6 * -2 + 0x18] = afStack_b8[(uint)bVar6 * -2 + 0xc];
  afStack_b8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19] =
       afStack_b8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
  fStack_38 = fVar2 + fStack_5c;
  fStack_34 = fVar3 + fStack_58;
  fStack_30 = afStack_10c[1] + fStack_54;
  afStack_74[0] = fVar2 + fStack_5c;
  afStack_b8[(uint)bVar6 * -2 + 0x12] = afStack_b8[(uint)bVar6 * -2 + 0x21];
  afStack_b8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
       afStack_b8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x22];
  fVar2 = fStack_110;
  fStack_28 = (float)_DAT_005ce22e / *(float *)(param_1 + 0x444);
  fStack_ec = fStack_5c * fStack_28;
  fStack_e8 = fStack_58 * fStack_28;
  fStack_e4 = fStack_54 * fStack_28;
  fStack_50 = fStack_5c * fStack_28;
  afStack_b8[(uint)bVar6 * -2 + 0x1b] = afStack_10c[(uint)bVar6 * -2 + 9];
  afStack_b8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c] =
       afStack_10c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
  afStack_10c[2] = fVar2 - fStack_50;
  afStack_10c[3] = afStack_10c[0] - fStack_4c;
  fStack_fc = afStack_10c[1] - fStack_48;
  afStack_44[0] = fVar2 - fStack_50;
  afStack_b8[(uint)bVar6 * -2 + 0x1e] = afStack_10c[(uint)bVar6 * -2 + 3];
  afStack_b8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f] =
       afStack_10c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
  FUN_00537e00(0x01E661B8);
  FUN_00537eb0(0x01E661B8,1);
  FUN_00537e30(0x01E661B8,param_1);
  if (*(int *)(param_1 + 0x460) != 0) {
    FUN_00537e30(0x01E661B8,*(int *)(param_1 + 0x460));
  }
  iStack_2c = 0;
  do {
    fStack_18 = (float)FUN_00535ee0(0x01E661B8,afStack_b8 + 0x1d,afStack_b8 + 0x11);
    dVar1 = (double)fStack_18;
    if ((dVar1 < 0.0) || (1.0 < dVar1)) break;
    iStack_1c = FUN_0040c8f0(*(uint *)(0x01E661B8 + 0x14d144),DAT_007bdc94,dVar1,fStack_18);
    if ((iStack_1c != 0) &&
       (iVar4 = (**(code **)(*(int *)(iStack_1c + 0x2b0) + 0x114))(iStack_1c), 0 < iVar4)) {
      iStack_1c = 0;
    }
    iVar4 = FUN_0040c8f0(*(uint *)(0x01E661B8 + 0x14d144),_DAT_01cb8280);
    iVar5 = FUN_0040c8f0(*(uint *)(0x01E661B8 + 0x14d144),_DAT_02653628);
    iStack_24 = iVar5;
    if (iStack_1c == 0) {
      if (iVar4 == 0) {
        if (iVar5 == 0) {
          FUN_0049d2c0(0x01C3DEB4,0x01E661B8 + 0x14d138,param_1 + 0x30,0x01E661B8 + 0x14d128,
                       *(uint *)(0x01E661B8 + 0x14d134));
          break;
        }
        FUN_00578550(iVar5);
        iVar4 = FUN_00578570(iVar5,param_1);
        if (iVar4 != 0) {
          fStack_18 = (float)(**(code **)(*(int *)(param_1 + 0x2b0) + 0xf4))(param_1);
          FUN_005785b0(iVar5,fStack_18);
        }
        FUN_00537e30(0x01E661B8,iStack_24);
      }
      else {
        iVar5 = FUN_004c72d0(iVar4);
        if (iVar5 == 0) break;
        FUN_004c6d40(iVar4,0x01E661B8 + 0x14d138);
      }
    }
    else {
      iVar5 = (**(code **)(*(int *)(iStack_1c + 0x2b0) + 0xe8))(iStack_1c);
      iVar4 = 0x01E661B8;
      if (iVar5 != 0) {
        if (iStack_2c == 0) {
          *(int *)(param_1 + 0x6c4) = *(int *)(param_1 + 0x6c4) + 1;
          FUN_00537e00(iVar4);
          return 0;
        }
        break;
      }
      FUN_004222d0(&uStack_14c);
      uStack_14c = *(uint *)(0x01E661B8 + 0x14d148);
      fStack_18 = (float)(**(code **)(*(int *)(param_1 + 0x2b0) + 0xf4))(param_1);
      uStack_144 = 0x3ecccccd;
      fStack_148 = fStack_18;
      fStack_98 = *(float *)(0x01E661B8 + 0x14d11c) - *(float *)(0x01E661B8 + 0x14d110);
      fStack_94 = *(float *)(0x01E661B8 + 0x14d120) - *(float *)(0x01E661B8 + 0x14d114);
      fStack_90 = *(float *)(0x01E661B8 + 0x14d124) - *(float *)(0x01E661B8 + 0x14d118);
      fStack_a4 = fStack_98;
      afStack_b8[(uint)bVar6 * -2 + 6] = afStack_b8[(uint)bVar6 * -2 + 9];
      afStack_b8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
           afStack_b8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
      fStack_20 = (float)_DAT_005ce236 /
                  SQRT(fStack_9c * fStack_9c + fStack_a4 * fStack_a4 + fStack_a0 * fStack_a0);
      fStack_e0 = fStack_a4 * fStack_20;
      fStack_dc = fStack_a0 * fStack_20;
      fStack_d8 = fStack_9c * fStack_20;
      fStack_68 = fStack_a4 * fStack_20;
      afStack_b8[(uint)bVar6 * -2 + 0x15] = afStack_10c[(uint)bVar6 * -2 + 0xc];
      afStack_b8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
           afStack_10c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
      if (&fStack_140 != afStack_b8 + 0x14) {
        fStack_140 = fStack_68;
        uStack_13c = uStack_64;
        uStack_138 = uStack_60;
      }
      FUN_00408de0(iStack_1c,0x01E661B8 + 0x14d138);
      fStack_f8 = fStack_d4;
      afStack_10c[(uint)bVar6 * -2 + 6] = afStack_10c[(uint)bVar6 * -2 + 0xf];
      afStack_10c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
           afStack_10c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
      if (&fStack_130 != afStack_10c + 5) {
        fStack_130 = fStack_f8;
        uStack_12c = uStack_f4;
        uStack_128 = uStack_f0;
      }
      uStack_124 = *(uint *)(param_1 + 0x6c8);
      uStack_11c = 0x68;
      iStack_118 = param_1;
      uStack_120 = 0x3e19999a;
      uStack_114 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x9c))(param_1);
      (**(code **)(*(int *)(iStack_1c + 0x2b0) + 0x110))(iStack_1c,&uStack_14c);
      if (*(int *)(param_1 + 0x440) == 0) break;
      FUN_00537e30(0x01E661B8,*(uint *)(0x01E661B8 + 0x14d144));
    }
    iStack_2c = iStack_2c + 1;
  } while (iStack_2c < 4);
  FUN_00537e00(0x01E661B8);
  FUN_0055ae50(0x0264B290,param_1,"bow-!.wav",&fStack_110);
  *(uint *)(param_1 + 0x45c) = 0x3f2a7efa;
  return 1;
}
