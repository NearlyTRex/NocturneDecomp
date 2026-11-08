// Name: FUN_0042a930
// Address: 0042a930
// Address Range: [[0042a930, 0042b284]]
// Convention: unknown
// Signature: undefined4 FUN_0042a930(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0042a930(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  float *pfVar7;
  uint *puVar8;
  float *pfVar9;
  byte bVar10;
  float afStackY_1138 [954];
  float *pfVar11;
  float fStack_238;
  float fStack_234;
  int aiStack_230 [10];
  int aiStack_208 [10];
  float afStack_1e0 [6];
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float afStack_1bc [3];
  uint auStack_1b0 [2];
  float fStack_1a8;
  byte auStack_1a4 [12];
  uint auStack_198 [2];
  float fStack_190;
  byte auStack_18c [12];
  uint auStack_180 [6];
  uint auStack_168 [6];
  float fStack_150;
  float afStack_14c [5];
  float afStack_138 [3];
  uint uStack_12c;
  float afStack_120 [5];
  float fStack_10c;
  float fStack_108;
  int iStack_104;
  int iStack_100;
  float fStack_fc;
  float afStack_f8 [4];
  float fStack_e8;
  float afStack_e4 [4];
  float afStack_d4 [5];
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float afStack_b4 [3];
  float afStack_a8 [3];
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float afStack_90 [3];
  uint uStack_84;
  float fStack_78;
  float fStack_74;
  uint uStack_70;
  float afStack_6c [3];
  float fStack_60;
  float fStack_5c;
  uint uStack_58;
  uint uStack_54;
  float afStack_50 [6];
  int iStack_38;
  int iStack_34;
  int local_30;
  float *local_2c;
  float *local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  
  bVar10 = 0;
  if (*(int *)(param_1 + 0xc2c8) < 0) {
    return 0;
  }
  fVar2 = *(float *)(param_1 + 0xc270) - param_2;
  *(float *)(param_1 + 0xc270) = fVar2;
  if (0.0 < fVar2) {
    *(int *)(param_1 + 0xc26c) = *(int *)(param_1 + 0xc26c) + 1;
    local_18 = FUN_0040cc00(0x40a00000,0x41200000);
    *(uint *)(param_1 + 0xc270) = local_18;
  }
  if (*(int *)(param_1 + 0x25b0) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x2628) != 0) {
    return 0;
  }
  if (0.0 < *(float *)(param_1 + 0xc274)) {
    param_2 = *(float *)(param_1 + 0xc274) - param_2;
    *(float *)(param_1 + 0xc274) = param_2;
    if (0.0 <= param_2) {
      return 0;
    }
    *(uint *)(param_1 + 0xc274) = 0;
    return 0;
  }
  iVar5 = *(int *)(param_1 + 0xc278);
  if (iVar5 == 0) {
    local_28 = afStack_1bc;
    local_30 = 0;
    local_24 = 0;
    local_1c = 0;
    local_2c = (float *)(param_1 + 0x20);
    for (local_20 = 0; local_20 < *(int *)(0x01E82168 + 0x14d164); local_20 = local_20 + 1) {
      iVar5 = *(int *)(0x01E82168 + local_24 + 0x14d168);
      iVar4 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x94))(iVar5);
      if ((iVar4 == 0) &&
         (iVar4 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x84))(iVar5,param_1), iVar4 == 3)) {
        (**(code **)(*(int *)(iVar5 + 0x154) + 0x1c))(iVar5);
        pfVar11 = local_28;
        pfVar7 = afStack_1e0;
        pfVar9 = &local_1c8;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pfVar9 = *pfVar7;
          pfVar7 = pfVar7 + (uint)bVar10 * -2 + 1;
          pfVar9 = pfVar9 + (uint)bVar10 * -2 + 1;
        }
        pfVar7 = afStack_d4 + 8;
        fStack_c0 = *pfVar11 - local_1c8;
        fStack_bc = pfVar11[1] - fStack_1c4;
        fStack_b8 = pfVar11[2] - fStack_1c0;
        afStack_b4[0] = *pfVar11 - local_1c8;
        afStack_d4[(uint)bVar10 * -2 + 9] = afStack_d4[(uint)bVar10 * -2 + 6];
        afStack_d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
             afStack_d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
        iStack_34 = FUN_00428550(pfVar7);
        if (((iStack_34 != 0) && (iVar4 = FUN_0042b330(param_1,iStack_34), iVar4 != 0)) &&
           ((iVar4 = FUN_0040c550(iVar5,"CBodyPart"), iVar4 == 0 ||
            ((*(uint *)(iVar5 + 0x6c) & 3) == (*(uint *)(param_1 + 0xc26c) & 3))))) {
          fStack_9c = *(float *)(iVar5 + 0x20) - *local_2c;
          fStack_98 = *(float *)(iVar5 + 0x24) - local_2c[1];
          fStack_94 = *(float *)(iVar5 + 0x28) - local_2c[2];
          fStack_150 = fStack_9c;
          afStack_14c[(uint)bVar10 * -2] = afStack_d4[(uint)bVar10 * -2 + 0xf];
          afStack_14c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
               afStack_d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
          afStack_14c[0] = afStack_14c[0] * afStack_14c[0] * afStack_14c[0] * afStack_14c[0];
          fStack_238 = SQRT(afStack_14c[1] * afStack_14c[1] +
                            fStack_150 * fStack_150 + afStack_14c[0] * afStack_14c[0]);
          if (((float)_DAT_005d55cd <= fStack_238) &&
             (fStack_238 <= *(float *)(param_1 + 0xc268) * _DAT_005d55dd)) {
            *(int *)((int)aiStack_208 + local_1c) = iVar5;
            *(int *)((int)aiStack_230 + local_1c) = iStack_34;
            local_1c = local_1c + 4;
            local_30 = local_30 + 1;
            if (0x27 < local_1c) break;
          }
        }
      }
      local_24 = local_24 + 4;
    }
    if (local_30 < 1) {
      return 0;
    }
    iVar5 = FUN_0040cc60(0,local_30 + -1);
    *(int *)(param_1 + 0xc278) = aiStack_208[iVar5];
    iVar5 = aiStack_230[iVar5];
    *(uint *)(param_1 + 0xc274) = 0xc2200000;
    *(int *)(param_1 + 0xc27c) = iVar5;
    *(int *)(param_1 + 0xc26c) = *(int *)(param_1 + 0xc26c) + 1;
    FUN_00445430(PTR_DAT_00611100,"%s is going to try to pick up %s\n",param_1,
                 *(uint *)(param_1 + 0xc278));
    return 1;
  }
  iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x94))(iVar5);
  if (iVar5 != 0) {
    FUN_00445430(PTR_DAT_00611100,"?%s can't pick up %s, sombody else beat me to it!\n" + 1,param_1,
                 *(uint *)(param_1 + 0xc278));
    *(uint *)(param_1 + 0xc278) = 0;
    *(uint *)(param_1 + 0xc274) = 0;
    FUN_0042be20(param_1);
    return 0;
  }
  fVar2 = *(float *)(param_1 + 0x20) - *(float *)(*(int *)(param_1 + 0xc278) + 0x20);
  fVar3 = *(float *)(param_1 + 0x28) - *(float *)(*(int *)(param_1 + 0xc278) + 0x28);
  fStack_234 = (float)_DAT_005d55cd - SQRT(fVar3 * fVar3 + fVar2 * fVar2) * (float)_DAT_005d55c5;
  if (fStack_234 < 1.0) {
    fStack_234 = 1.0;
  }
  *(float *)(param_1 + 0xc274) = param_2 * fStack_234 + *(float *)(param_1 + 0xc274);
  iStack_38 = FUN_0042b290(param_1,*(uint *)(param_1 + 0xc27c));
  iVar5 = -1;
  if ((((-1 < iStack_38) && (*(float *)(param_1 + 0xc274) < 0.0)) &&
      (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc278) + 0x154) + 0x84))
                         (*(int *)(param_1 + 0xc278),param_1), iVar4 == 3)) &&
     (iVar4 = FUN_0042b330(param_1,*(uint *)(param_1 + 0xc27c)), iVar4 != 0)) {
    uVar1 = *(uint *)(param_1 + 0xc27c);
    if (uVar1 < 2) {
      if (uVar1 == 1) {
LAB_0042ab9c:
        iVar5 = *(int *)(param_1 + 0xc278);
        (**(code **)(*(int *)(iVar5 + 0x154) + 0x1c))(iVar5);
        puVar6 = auStack_180;
        puVar8 = auStack_1b0;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
        }
        afStack_50[4] = 0.5;
        FUN_0041b020(auStack_1b0,auStack_1a4,afStack_50 + 4);
        afStack_a8[0] = (float)uStack_84;
        afStack_d4[(uint)bVar10 * -2 + 0xc] = afStack_d4[(uint)bVar10 * -2 + 0x15];
        afStack_d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
             afStack_d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16];
        FUN_0041afa0(afStack_d4 + 0xb);
        pfVar11 = afStack_d4 + 0x1a;
        afStack_f8[2] = (float)uStack_54;
        afStack_f8[(uint)bVar10 * -2 + 3] = afStack_50[(uint)bVar10 * -2];
        afStack_f8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             afStack_50[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        fStack_e8 = fStack_1a8 + (float)_DAT_005d55d5;
        afStack_6c[0] = afStack_f8[2];
        afStack_d4[(uint)bVar10 * -2 + 0x1b] = afStack_f8[(uint)bVar10 * -2 + 3];
        afStack_d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1c] =
             afStack_f8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
        FUN_00408b40(iVar5,pfVar11);
        fStack_78 = afStack_14c[2];
        afStack_d4[(uint)bVar10 * -2 + 0x18] = afStack_14c[(uint)bVar10 * -2 + 3];
        afStack_d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19] =
             afStack_14c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
        if (afStack_d4 + 0x1d != afStack_d4 + 0x17) {
          fStack_60 = fStack_78;
          fStack_5c = fStack_74;
          uStack_58 = (float)uStack_70;
        }
      }
      else {
LAB_0042af2f:
        iVar5 = *(int *)(param_1 + 0xc278);
        if (afStack_d4 + 0x1d != (float *)(iVar5 + 0x20)) {
          fStack_60 = *(float *)(iVar5 + 0x20);
          fStack_5c = *(float *)(iVar5 + 0x24);
          uStack_58 = *(float *)(iVar5 + 0x28);
        }
      }
    }
    else {
      if (2 < uVar1) {
        if (uVar1 != 3) goto LAB_0042af2f;
        goto LAB_0042ab9c;
      }
      iVar5 = *(int *)(param_1 + 0xc278);
      (**(code **)(*(int *)(iVar5 + 0x154) + 0x1c))(iVar5);
      puVar6 = auStack_168;
      puVar8 = auStack_198;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      }
      afStack_50[3] = 0.5;
      FUN_0041b020(auStack_198,auStack_18c,afStack_50 + 3);
      afStack_90[0] = afStack_d4[2];
      afStack_d4[(uint)bVar10 * -2 + 0x12] = afStack_d4[(uint)bVar10 * -2 + 3];
      afStack_d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13] =
           afStack_d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
      FUN_0041afa0(afStack_d4 + 0x11);
      pfVar11 = afStack_14c + 5;
      afStack_120[3] = (float)uStack_12c;
      afStack_14c[(uint)bVar10 * -2 + 0xf] = afStack_14c[(uint)bVar10 * -2 + 9];
      afStack_14c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10] =
           afStack_14c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
      fStack_10c = fStack_190 + (float)_DAT_005d55d5;
      afStack_138[0] = afStack_120[3];
      afStack_14c[(uint)bVar10 * -2 + 6] = afStack_14c[(uint)bVar10 * -2 + 0xf];
      afStack_14c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
           afStack_14c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
      FUN_00408b40(iVar5,pfVar11);
      afStack_e4[3] = fStack_fc;
      afStack_d4[(uint)bVar10 * -2] = afStack_f8[(uint)bVar10 * -2];
      afStack_d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_f8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      if (afStack_d4 + 0x1d != afStack_f8 + 8) {
        fStack_60 = afStack_e4[3];
        fStack_5c = afStack_d4[0];
        uStack_58 = afStack_d4[1];
      }
    }
    iVar5 = iStack_38;
    afStack_120[0] = (float)_DAT_02c8af28;
    afStack_14c[(uint)bVar10 * -2 + 0xc] = *(float *)(&DAT_02c8af2c + (uint)bVar10 * -8);
    afStack_14c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
         *(float *)(&DAT_02c8af30 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
    if (iVar5 == 0) {
      iStack_104 = iVar5;
      iStack_100 = iVar5;
      fStack_108 = -1.5;
      if (afStack_14c + 0xb != afStack_14c + 0x11) {
        afStack_120[0] = -1.5;
        afStack_120[1] = 0.0;
        afStack_120[2] = 0.0;
      }
    }
    if (iStack_38 == 1) {
      afStack_e4[1] = 0.0;
      afStack_e4[2] = 0.0;
      afStack_e4[0] = 1.5;
      if (afStack_14c + 0xb != afStack_f8 + 5) {
        afStack_120[0] = 1.5;
        afStack_120[1] = 0.0;
        afStack_120[2] = 0.0;
      }
    }
    iVar5 = FUN_0042ccf0(param_1,afStack_d4 + 0x1d,0,afStack_14c + 0xb,0,0);
  }
  if (iVar5 < 0) {
    FUN_00445430(PTR_DAT_00611100,"%s can't pick up %s, giving up\n",param_1,
                 *(uint *)(param_1 + 0xc278));
    *(uint *)(param_1 + 0xc278) = 0;
    *(uint *)(param_1 + 0xc274) = 0x41a00000;
    FUN_0042be20(param_1);
    return 0;
  }
  if (iVar5 < 1) {
    return 1;
  }
  FUN_00445430(PTR_DAT_00611100,"%s beginning to pickup %s\n",param_1,
               *(uint *)(param_1 + 0xc278));
  uVar1 = *(uint *)(param_1 + 0xc27c);
  if (uVar1 < 2) {
    if (uVar1 != 1) {
LAB_0042b00b:
      _DAT_01d1d400 = "..\\core\\carved.cpp";
      _DAT_01d1d404 = 0x4d7;
      FUN_005030e0("Invalid demon townsfolk object shape!");
      return 1;
    }
  }
  else {
    if (uVar1 < 3) {
      return 1;
    }
    if (uVar1 != 3) goto LAB_0042b00b;
  }
  FUN_005247c0(param_1 + 0x158,0x19,1);
  return 1;
}
