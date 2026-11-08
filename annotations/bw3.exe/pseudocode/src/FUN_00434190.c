// Name: FUN_00434190
// Address: 00434190
// Address Range: [[00434190, 0043480b]]
// Convention: unknown
// Signature: undefined4 FUN_00434190(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00434190(int param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_1128 [990];
  byte *puVar5;
  float *pfVar6;
  float fStack_198;
  float fStack_194;
  byte auStack_190 [40];
  byte auStack_168 [40];
  uint uStack_140;
  float afStack_13c [4];
  uint uStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  uint uStack_11c;
  float fStack_118;
  uint uStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float afStack_f8 [3];
  float fStack_ec;
  float afStack_e8 [5];
  float fStack_d4;
  float fStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  float afStack_bc [3];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float afStack_a4 [3];
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float afStack_74 [3];
  float fStack_68;
  float afStack_64 [5];
  uint uStack_50;
  float fStack_4c;
  uint uStack_48;
  uint uStack_44;
  float fStack_38;
  int iStack_34;
  uint uStack_30;
  float fStack_2c;
  float fStack_28;
  uint uStack_24;
  uint uStack_20;
  float *pfStack_1c;
  float *pfStack_18;
  float *pfStack_14;
  
  bVar4 = 0;
  if (0.0 <= *(float *)(param_1 + 0x3238)) {
    pfStack_14 = (float *)(param_1 + 0x20);
    iVar1 = FUN_004d22c0(pfStack_14);
    iStack_34 = iVar1;
    FUN_00408bf0(iVar1,pfStack_14);
    fStack_8c = fStack_d4;
    afStack_e8[(uint)bVar4 * -2 + 0x18] = afStack_e8[(uint)bVar4 * -2 + 6];
    afStack_e8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19] =
         afStack_e8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
    FUN_00576250(afStack_e8 + 0x17);
    uStack_140 = afStack_64[2];
    afStack_13c[(uint)bVar4 * -2] = afStack_64[(uint)bVar4 * -2 + 3];
    afStack_13c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    fStack_38 = ABS(afStack_13c[0]);
    fStack_110 = *pfStack_14 - *(float *)(iVar1 + 0x20);
    fStack_10c = pfStack_14[1] - *(float *)(iVar1 + 0x24);
    fStack_108 = pfStack_14[2] - *(float *)(iVar1 + 0x28);
    fStack_ec = fStack_110;
    afStack_e8[(uint)bVar4 * -2] = afStack_13c[(uint)bVar4 * -2 + 0xc];
    afStack_e8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_13c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
    FUN_00576250(&fStack_ec);
    afStack_e8[2] = (float)uStack_44;
    afStack_e8[(uint)bVar4 * -2 + 3] = afStack_64[(uint)bVar4 * -2 + 9];
    afStack_e8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
    fStack_2c = afStack_e8[3];
    iVar1 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x148))(iVar1);
    if ((iVar1 != 0) && (fStack_38 < _DAT_005b88e2)) {
      uStack_30 = (uint)(fStack_8c < 0.0);
      uStack_20 = 0;
      pfVar3 = (float *)(param_1 + 0x323c);
      pfStack_1c = (float *)(iStack_34 + 0x20);
      do {
        uVar2 = uStack_20;
        if (uStack_30 != 0) {
          uVar2 = uStack_20 ^ 1;
        }
        pfStack_14 = (float *)(fStack_2c + *(float *)(uVar2 * 4 + 0x5f0f30));
        uStack_50 = 0;
        uStack_48 = 0;
        fStack_4c = (float)pfStack_14;
        pfVar6 = afStack_e8 + 0x11;
        puVar5 = auStack_168;
        afStack_a4[0] = 0.0;
        afStack_e8[(uint)bVar4 * -2 + 0x12] = afStack_64[(uint)bVar4 * -2 + 6];
        afStack_e8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13] =
             afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
        FUN_0045b550(puVar5,pfVar6);
        for (fStack_194 = 6.5; (float)_DAT_005b8916 < fStack_194;
            fStack_194 = fStack_194 + _DAT_005b891e) {
          afStack_f8[0] = 0.0;
          afStack_f8[1] = 0.0;
          afStack_f8[2] = fStack_194;
          FUN_0045b800(auStack_168,afStack_13c + 0x11);
          pfVar6 = pfStack_1c;
          fStack_98 = fStack_68;
          afStack_e8[(uint)bVar4 * -2 + 0x15] = afStack_64[(uint)bVar4 * -2];
          afStack_e8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16] =
               afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
          fStack_128 = *pfVar6 + fStack_98;
          fStack_124 = pfVar6[1] + fStack_94;
          fStack_120 = pfVar6[2] + fStack_90;
          afStack_13c[2] = *pfVar6 + fStack_98;
          afStack_13c[(uint)bVar4 * -2 + 3] = afStack_13c[(uint)bVar4 * -2 + 6];
          afStack_13c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
               afStack_13c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
          if (pfVar3 != afStack_13c + 2) {
            *pfVar3 = afStack_13c[2];
            *(float *)(param_1 + 0x3240) = afStack_13c[3];
            *(uint *)(param_1 + 0x3244) = uStack_12c;
          }
          iVar1 = FUN_0042b9e0(param_1,pfVar3,0,&DAT_02cfd900,0,0);
          if (-1 < iVar1) {
            *(uint *)(param_1 + 0x3248) = 0;
            *(uint *)(param_1 + 0x3238) = 0xc0800000;
            return 2;
          }
        }
        uStack_20 = uStack_20 + 1;
      } while ((int)uStack_20 < 6);
    }
    if (((ABS(fStack_88) <= (float)_DAT_005b88ee) && (fStack_38 <= _DAT_005b88f6)) &&
       (SQRT(fStack_84 * fStack_84 + fStack_8c * fStack_8c + fStack_88 * fStack_88) <=
        (float)_DAT_005b88fe)) {
      param_2 = *(float *)(param_1 + 0x3238) + param_2;
      *(float *)(param_1 + 0x3238) = param_2;
      if (param_2 < (float)_DAT_005b8906) {
        return 0;
      }
      uStack_24 = 0;
      pfStack_18 = (float *)(iStack_34 + 0x20);
      pfVar3 = (float *)(param_1 + 0x323c);
      do {
        fStack_28 = (float)((int)uStack_24 / 2) * _DAT_005b890e * _DAT_005b8912;
        if ((uStack_24 & 1) != 0) {
          fStack_28 = -fStack_28;
        }
        pfStack_14 = (float *)(fStack_2c + fStack_28);
        uStack_11c = 0;
        fStack_118 = fStack_2c + fStack_28;
        pfVar6 = afStack_e8 + 0xb;
        uStack_114 = 0;
        puVar5 = auStack_190;
        afStack_bc[0] = 0.0;
        afStack_e8[(uint)bVar4 * -2 + 0xc] = afStack_13c[(uint)bVar4 * -2 + 9];
        afStack_e8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
             afStack_13c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
        FUN_0045b550(puVar5,pfVar6);
        for (fStack_198 = 4.5; (float)_DAT_005b8916 < fStack_198;
            fStack_198 = fStack_198 + _DAT_005b891e) {
          afStack_74[2] = fStack_198;
          afStack_74[0] = 0.0;
          afStack_74[1] = 0.0;
          FUN_0045b800(auStack_190,afStack_e8 + 0x1d);
          pfVar6 = pfStack_18;
          fStack_80 = fStack_104;
          afStack_e8[(uint)bVar4 * -2 + 0x1b] = afStack_13c[(uint)bVar4 * -2 + 0xf];
          afStack_e8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1c] =
               afStack_13c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10];
          fStack_b0 = *pfVar6 + fStack_80;
          fStack_ac = pfVar6[1] + fStack_7c;
          fStack_a8 = pfVar6[2] + fStack_78;
          fStack_c8 = *pfVar6 + fStack_80;
          afStack_e8[(uint)bVar4 * -2 + 9] = afStack_e8[(uint)bVar4 * -2 + 0xf];
          afStack_e8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
               afStack_e8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10];
          if (pfVar3 != afStack_e8 + 8) {
            *pfVar3 = fStack_c8;
            *(uint *)(param_1 + 0x3240) = uStack_c4;
            *(uint *)(param_1 + 0x3244) = uStack_c0;
          }
          iVar1 = FUN_0042b9e0(param_1,pfVar3,0,&DAT_02cfd900,0,0);
          if (-1 < iVar1) {
            *(uint *)(param_1 + 0x3248) = 0;
            *(uint *)(param_1 + 0x3238) = 0xc0a00000;
            return 1;
          }
        }
        uStack_24 = uStack_24 + 1;
        if (8 < (int)uStack_24) {
          FUN_00441ff0(PTR_DAT_005f1690,"%s was in the way, but couldn't figure out where to move!\n",param_1);
          *(uint *)(param_1 + 0x3238) = 0;
          return 0;
        }
      } while( true );
    }
  }
  else {
    param_2 = *(float *)(param_1 + 0x3238) + param_2;
    *(float *)(param_1 + 0x3238) = param_2;
    if ((param_2 < 0.0) && (*(float *)(param_1 + 0x3248) <= (float)_DAT_005b88e6)) {
      iVar1 = FUN_0042b9e0(param_1,param_1 + 0x323c,0,&DAT_02cfd900,0,0);
      if (iVar1 == 0) {
        return 1;
      }
      *(uint *)(param_1 + 0x3238) = 0;
      return 0;
    }
  }
  *(uint *)(param_1 + 0x3238) = 0;
  return 0;
}
