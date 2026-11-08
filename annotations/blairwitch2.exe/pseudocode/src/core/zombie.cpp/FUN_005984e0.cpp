// Name: FUN_005984e0
// Address: 005984e0
// Address Range: [[005984e0, 00598e3f]]
// Convention: unknown
// Signature: undefined4 FUN_005984e0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005984e0(int param_1,float param_2)

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
  uint uVar11;
  float *pfVar12;
  float fStack_238;
  float fStack_234;
  int aiStack_230 [10];
  int aiStack_208 [10];
  uint auStack_1e0 [2];
  float fStack_1d8;
  byte auStack_1d4 [12];
  float afStack_1c8 [6];
  uint auStack_1b0 [2];
  float fStack_1a8;
  byte auStack_1a4 [12];
  uint auStack_198 [6];
  uint auStack_180 [6];
  float local_168;
  float fStack_164;
  float fStack_160;
  float afStack_15c [3];
  uint uStack_150;
  float afStack_14c [5];
  float fStack_138;
  float afStack_12c [3];
  float fStack_120;
  int iStack_11c;
  int iStack_118;
  float fStack_114;
  float afStack_110 [4];
  float fStack_100;
  float afStack_fc [3];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  uint uStack_dc;
  float fStack_d8;
  float afStack_d4 [5];
  float afStack_c0 [6];
  uint uStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  uint uStack_94;
  float afStack_90 [4];
  float afStack_80 [5];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  uint uStack_60;
  float fStack_58;
  uint uStack_54;
  float afStack_48 [3];
  uint uStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  float *local_2c;
  int local_28;
  float *local_24;
  int local_20;
  int local_1c;
  uint local_18;
  
  bVar10 = 0;
  if (*(int *)(param_1 + 0x10bc4) < 0) {
    return 0;
  }
  fVar2 = *(float *)(param_1 + 0x10b00) - param_2;
  *(float *)(param_1 + 0x10b00) = fVar2;
  if (0.0 < fVar2) {
    *(int *)(param_1 + 0x10afc) = *(int *)(param_1 + 0x10afc) + 1;
    local_18 = FUN_0040cf60(0x40a00000,0x41200000);
    *(uint *)(param_1 + 0x10b00) = local_18;
  }
  if (*(int *)(param_1 + 0x2620) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x2698) != 0) {
    return 0;
  }
  if (0.0 < *(float *)(param_1 + 0x10b04)) {
    param_2 = *(float *)(param_1 + 0x10b04) - param_2;
    *(float *)(param_1 + 0x10b04) = param_2;
    if (0.0 <= param_2) {
      return 0;
    }
    *(uint *)(param_1 + 0x10b04) = 0;
    return 0;
  }
  iVar5 = *(int *)(param_1 + 0x10b08);
  if (iVar5 == 0) {
    local_24 = afStack_15c;
    local_30 = 0;
    local_28 = 0;
    local_1c = 0;
    local_2c = (float *)(param_1 + 0x20);
    for (local_20 = 0; local_20 < *(int *)(0x01E661B8 + 0x14d164); local_20 = local_20 + 1) {
      iVar5 = *(int *)(0x01E661B8 + local_28 + 0x14d168);
      iVar4 = (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x9c))(iVar5);
      if ((iVar4 == 0) &&
         (iVar4 = (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x8c))(iVar5,param_1), iVar4 == 3)) {
        (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x24))(iVar5);
        pfVar12 = local_24;
        pfVar7 = afStack_1c8;
        pfVar9 = &local_168;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pfVar9 = *pfVar7;
          pfVar7 = pfVar7 + (uint)bVar10 * -2 + 1;
          pfVar9 = pfVar9 + (uint)bVar10 * -2 + 1;
        }
        pfVar7 = afStack_80 + 2;
        fStack_f0 = *pfVar12 - local_168;
        fStack_ec = pfVar12[1] - fStack_164;
        fStack_e8 = pfVar12[2] - fStack_160;
        afStack_80[2] = *pfVar12 - local_168;
        afStack_80[(uint)bVar10 * -2 + 3] = afStack_110[(uint)bVar10 * -2 + 9];
        afStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             afStack_110[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
        iStack_34 = FUN_00595910(pfVar7);
        if (((iStack_34 != 0) && (iVar4 = FUN_00598ee0(param_1,iStack_34), iVar4 != 0)) &&
           ((iVar4 = FUN_0040c840(iVar5,"CBodyPart"), iVar4 == 0 ||
            ((*(uint *)(iVar5 + 0x6c) & 3) == (*(uint *)(param_1 + 0x10afc) & 3))))) {
          afStack_110[2] = *(float *)(iVar5 + 0x20) - *local_2c;
          afStack_110[3] = *(float *)(iVar5 + 0x24) - local_2c[1];
          fStack_100 = *(float *)(iVar5 + 0x28) - local_2c[2];
          fStack_6c = afStack_110[2];
          afStack_80[(uint)bVar10 * -2 + 6] = afStack_110[(uint)bVar10 * -2 + 3];
          afStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
               afStack_110[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
          fStack_68 = fStack_68 * fStack_68 * fStack_68 * fStack_68;
          fStack_238 = SQRT(fStack_64 * fStack_64 + fStack_6c * fStack_6c + fStack_68 * fStack_68);
          if (((float)_DAT_005ef2aa <= fStack_238) &&
             (fStack_238 <= *(float *)(param_1 + 0x10af8) * _DAT_005ef2ba)) {
            *(int *)((int)aiStack_230 + local_1c) = iVar5;
            *(int *)((int)aiStack_208 + local_1c) = iStack_34;
            local_1c = local_1c + 4;
            local_30 = local_30 + 1;
            if (0x27 < local_1c) break;
          }
        }
      }
      local_28 = local_28 + 4;
    }
    if (local_30 < 1) {
      return 0;
    }
    iVar5 = FUN_0040cfc0(0,local_30 + -1);
    *(int *)(param_1 + 0x10b08) = aiStack_230[iVar5];
    iVar5 = aiStack_208[iVar5];
    *(uint *)(param_1 + 0x10b04) = 0xc2200000;
    *(int *)(param_1 + 0x10b0c) = iVar5;
    *(int *)(param_1 + 0x10afc) = *(int *)(param_1 + 0x10afc) + 1;
    FUN_00436710(PTR_DAT_00609ed0,"%s is going to try to pick up %s\n",param_1,
                 *(uint *)(param_1 + 0x10b08));
    return 1;
  }
  iVar5 = (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x9c))(iVar5);
  if (iVar5 != 0) {
    FUN_00436710(PTR_DAT_00609ed0,"?%s can't pick up %s, sombody else beat me to it!\n" + 1,param_1,
                 *(uint *)(param_1 + 0x10b08));
    *(uint *)(param_1 + 0x10b08) = 0;
    *(uint *)(param_1 + 0x10b04) = 0;
    FUN_00599d00(param_1);
    return 0;
  }
  fVar2 = *(float *)(param_1 + 0x20) - *(float *)(*(int *)(param_1 + 0x10b08) + 0x20);
  fVar3 = *(float *)(param_1 + 0x28) - *(float *)(*(int *)(param_1 + 0x10b08) + 0x28);
  fStack_234 = (float)_DAT_005ef2aa - SQRT(fVar3 * fVar3 + fVar2 * fVar2) * (float)_DAT_005ef2a2;
  if (fStack_234 < 1.0) {
    fStack_234 = 1.0;
  }
  *(float *)(param_1 + 0x10b04) = param_2 * fStack_234 + *(float *)(param_1 + 0x10b04);
  iStack_38 = FUN_00598e40(param_1,*(uint *)(param_1 + 0x10b0c));
  iVar5 = -1;
  if ((((-1 < iStack_38) && (*(float *)(param_1 + 0x10b04) < 0.0)) &&
      (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10b08) + 0x2b0) + 0x8c))
                         (*(int *)(param_1 + 0x10b08),param_1), iVar4 == 3)) &&
     (iVar4 = FUN_00598ee0(param_1,*(uint *)(param_1 + 0x10b0c)), iVar4 != 0)) {
    uVar1 = *(uint *)(param_1 + 0x10b0c);
    if (uVar1 < 2) {
      if (uVar1 == 1) {
LAB_0059874f:
        iVar5 = *(int *)(param_1 + 0x10b08);
        (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x24))(iVar5);
        puVar6 = auStack_198;
        puVar8 = auStack_1e0;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
        }
        afStack_48[0] = 0.5;
        FUN_00417ba0(auStack_1e0,auStack_1d4,afStack_80 + 0xe);
        uStack_150 = afStack_90[3];
        afStack_14c[(uint)bVar10 * -2] = afStack_80[(uint)bVar10 * -2];
        afStack_14c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             afStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        FUN_00417b20(&uStack_150);
        pfVar12 = afStack_110 + 5;
        uStack_60 = uStack_54;
        afStack_80[(uint)bVar10 * -2 + 9] = afStack_80[(uint)bVar10 * -2 + 0xc];
        afStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
             afStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
        fStack_58 = fStack_1d8 + (float)_DAT_005ef2b2;
        afStack_fc[0] = (float)uStack_60;
        afStack_110[(uint)bVar10 * -2 + 6] = afStack_80[(uint)bVar10 * -2 + 9];
        afStack_110[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
             afStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
        FUN_00408d70(iVar5,pfVar12);
        fStack_9c = fStack_114;
        afStack_d4[(uint)bVar10 * -2 + 0xf] = afStack_110[(uint)bVar10 * -2];
        afStack_d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10] =
             afStack_110[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        if (afStack_110 + 0xb != afStack_d4 + 0xe) {
          fStack_e4 = fStack_9c;
          fStack_e0 = fStack_98;
          uStack_dc = (float)uStack_94;
        }
      }
      else {
LAB_00598ad6:
        iVar5 = *(int *)(param_1 + 0x10b08);
        if (afStack_110 + 0xb != (float *)(iVar5 + 0x20)) {
          fStack_e4 = *(float *)(iVar5 + 0x20);
          fStack_e0 = *(float *)(iVar5 + 0x24);
          uStack_dc = *(float *)(iVar5 + 0x28);
        }
      }
    }
    else {
      if (2 < uVar1) {
        if (uVar1 != 3) goto LAB_00598ad6;
        goto LAB_0059874f;
      }
      iVar5 = *(int *)(param_1 + 0x10b08);
      (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x24))(iVar5);
      puVar6 = auStack_180;
      puVar8 = auStack_1b0;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      }
      uStack_3c = 0x3f000000;
      FUN_00417ba0(auStack_1b0,auStack_1a4,&uStack_3c);
      afStack_c0[3] = afStack_d4[2];
      afStack_d4[(uint)bVar10 * -2 + 9] = afStack_d4[(uint)bVar10 * -2 + 3];
      afStack_d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
           afStack_d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
      FUN_00417b20(afStack_d4 + 8);
      pfVar12 = afStack_14c + 8;
      uStack_a8 = afStack_14c[2];
      afStack_d4[(uint)bVar10 * -2 + 0xc] = afStack_14c[(uint)bVar10 * -2 + 3];
      afStack_d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
           afStack_14c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
      fStack_a0 = fStack_1a8 + (float)_DAT_005ef2b2;
      afStack_12c[0] = (float)uStack_a8;
      afStack_14c[(uint)bVar10 * -2 + 9] = afStack_d4[(uint)bVar10 * -2 + 0xc];
      afStack_14c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
           afStack_d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
      FUN_00408d70(iVar5,pfVar12);
      fStack_d8 = fStack_138;
      afStack_d4[(uint)bVar10 * -2] = afStack_14c[(uint)bVar10 * -2 + 6];
      afStack_d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_14c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
      if (afStack_110 + 0xb != &fStack_d8) {
        fStack_e4 = fStack_d8;
        fStack_e0 = afStack_d4[0];
        uStack_dc = afStack_d4[1];
      }
    }
    iVar5 = iStack_38;
    afStack_c0[0] = (float)_DAT_0265370c;
    afStack_d4[(uint)bVar10 * -2 + 6] = *(float *)(&DAT_02653710 + (uint)bVar10 * -8);
    afStack_d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
         *(float *)(&DAT_02653714 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
    if (iVar5 == 0) {
      iStack_11c = iVar5;
      iStack_118 = iVar5;
      fStack_120 = -1.5;
      if (afStack_d4 + 5 != afStack_14c + 0xb) {
        afStack_c0[0] = -1.5;
        afStack_c0[1] = 0.0;
        afStack_c0[2] = 0.0;
      }
    }
    if (iStack_38 == 1) {
      afStack_90[1] = 0.0;
      afStack_90[2] = 0.0;
      afStack_90[0] = 1.5;
      if (afStack_d4 + 5 != afStack_d4 + 0x11) {
        afStack_c0[0] = 1.5;
        afStack_c0[1] = 0.0;
        afStack_c0[2] = 0.0;
      }
    }
    iVar5 = FUN_00423000(param_1,afStack_110 + 0xb,0,afStack_d4 + 5,0,0);
  }
  if (iVar5 < 0) {
    FUN_00436710(PTR_DAT_00609ed0,"%s can't pick up %s, giving up\n",param_1,
                 *(uint *)(param_1 + 0x10b08));
    *(uint *)(param_1 + 0x10b08) = 0;
    *(uint *)(param_1 + 0x10b04) = 0x41a00000;
    FUN_00599d00(param_1);
    return 0;
  }
  if (iVar5 < 1) {
    return 1;
  }
  FUN_00436710(PTR_DAT_00609ed0,"%s beginning to pickup %s\n",param_1,
               *(uint *)(param_1 + 0x10b08));
  uVar1 = *(uint *)(param_1 + 0x10b0c);
  if (uVar1 < 2) {
    if (uVar1 != 1) {
LAB_00598bba:
      _DAT_01d046a0 = "..\\core\\zombie.cpp";
      _DAT_01d046a4 = 0x5d1;
      FUN_004e4500("Invalid zombie object shape!");
      return 1;
    }
  }
  else {
    if (uVar1 < 3) {
      uVar11 = 0xc;
      goto LAB_00598b5c;
    }
    if (uVar1 != 3) goto LAB_00598bba;
  }
  uVar11 = 10;
LAB_00598b5c:
  FUN_00503620(param_1 + 0x2b4,uVar11,1);
  return 1;
}
