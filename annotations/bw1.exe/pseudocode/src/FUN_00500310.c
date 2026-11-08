// Name: FUN_00500310
// Address: 00500310
// Address Range: [[00500310, 00500d1b]]
// Convention: unknown
// Signature: undefined4 FUN_00500310(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00500310(int param_1)

{
  bool bVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  uint *puVar8;
  uint *puVar9;
  float *pfVar10;
  byte bVar11;
  float afStackY_111c [956];
  byte auStack_20c [4];
  float fStack_208;
  uint uStack_1dc;
  byte auStack_1d0 [4];
  float fStack_1cc;
  uint uStack_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  uint uStack_1a0;
  int iStack_19c;
  uint uStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float afStack_188 [3];
  float afStack_17c [6];
  uint auStack_164 [3];
  byte auStack_158 [12];
  uint auStack_14c [6];
  float fStack_134;
  float afStack_130 [4];
  float fStack_120;
  float afStack_11c [3];
  uint uStack_110;
  uint uStack_104;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_e0;
  float afStack_dc [4];
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float afStack_bc [2];
  float fStack_b4;
  uint uStack_b0;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float afStack_98 [3];
  uint uStack_8c;
  float afStack_88 [5];
  float afStack_74 [3];
  float afStack_68 [3];
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float afStack_44 [3];
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  float *pfStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  float *pfStack_18;
  float fStack_14;
  
  bVar11 = 0;
  iVar4 = FUN_005adde0(param_1);
  if (iVar4 == 0) {
    FUN_0057d8a0(0x02C82A60,param_1,"shotgun-noammo.wav",
                 *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x20);
  }
  else if (_DAT_00603010 <= *(float *)(param_1 + 0x580)) {
    *(uint *)(param_1 + 0x580) = 0;
    *(uint *)(param_1 + 0x594) = *(uint *)(param_1 + 0x2e8);
    (**(code **)(*(int *)(param_1 + 0x154) + 0xe0))(param_1);
    afStack_bc[0] = (float)uStack_110;
    afStack_dc[(uint)bVar11 * -2 + 9] = afStack_130[(uint)bVar11 * -2 + 9];
    afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
         afStack_130[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
    fStack_b4 = fStack_b4 + _DAT_005e6eca;
    FUN_00408b40(param_1,afStack_dc + 8);
    fStack_a4 = fStack_134;
    afStack_dc[(uint)bVar11 * -2 + 0xf] = afStack_130[(uint)bVar11 * -2];
    afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10] =
         afStack_130[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    afStack_98[2] = *(float *)(param_1 + 0x2e8);
    afStack_98[0] = 0.0;
    afStack_98[1] = 0.0;
    uStack_38 = afStack_98[2];
    FUN_00408ac0(param_1,afStack_dc + 0x11);
    fVar2 = fStack_a4;
    fStack_f8 = afStack_88[2];
    afStack_130[(uint)bVar11 * -2 + 0xf] = afStack_88[(uint)bVar11 * -2 + 3];
    afStack_130[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10] =
         afStack_88[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    fStack_e0 = fVar2 + fStack_f8;
    afStack_dc[0] = fStack_a0 + fStack_f4;
    afStack_dc[1] = fStack_9c + fStack_f0;
    afStack_74[0] = fVar2 + fStack_f8;
    afStack_88[(uint)bVar11 * -2 + 6] = afStack_dc[(uint)bVar11 * -2];
    afStack_88[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
         afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    afStack_11c[0] = fStack_a4;
    afStack_130[(uint)bVar11 * -2 + 6] = afStack_dc[(uint)bVar11 * -2 + 0xf];
    iVar4 = 0x01E82168;
    afStack_130[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
         afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
    FUN_00559220(iVar4);
    FUN_00559310(0x01E82168,1,0xff,0xff,0xff);
    FUN_00559210(0x01E82168);
    FUN_00559250(0x01E82168,param_1);
    if (*(int *)(param_1 + 0x304) != 0) {
      FUN_00559250(0x01E82168,*(int *)(param_1 + 0x304));
    }
    FUN_00558eb0(0x01E82168);
    iVar4 = 0;
    do {
      fStack_14 = (float)FUN_00557300(0x01E82168,afStack_130 + 5,afStack_88 + 5);
      uVar3 = DAT_007c637c;
      if ((fStack_14 < 0.0) || (1.0 < fStack_14)) break;
      *(float *)(param_1 + 0x594) = *(float *)(param_1 + 0x2e8) * fStack_14;
      iStack_20 = FUN_0040c600(*(uint *)(0x01E82168 + 0x14d144),uVar3);
      if ((iStack_20 != 0) &&
         (iVar5 = (**(code **)(*(int *)(iStack_20 + 0x154) + 0x10c))(iStack_20), 0 < iVar5)) {
        iStack_20 = 0;
      }
      iVar5 = FUN_0040c600(*(uint *)(0x01E82168 + 0x14d144),_DAT_01cd0dfc);
      iVar6 = FUN_0040c600(*(uint *)(0x01E82168 + 0x14d144),_DAT_02c8ae44);
      iStack_30 = iVar6;
      if (iStack_20 != 0) {
        iVar6 = (**(code **)(*(int *)(iStack_20 + 0x154) + 0xe0))(iStack_20);
        iVar5 = 0x01E82168;
        if ((iVar6 != 0) && (iVar4 == 0)) {
          *(float *)(param_1 + 0x580) = _DAT_00603010;
          FUN_00559060(iVar5);
          FUN_00559220(0x01E82168);
          return 0;
        }
        break;
      }
      if (iVar5 == 0) {
        if (iVar6 != 0) {
          FUN_0059bdd0(iVar6);
          iVar4 = FUN_0059bdf0(iVar6,param_1);
          if (iVar4 != 0) {
            fStack_14 = (float)(**(code **)(*(int *)(param_1 + 0x154) + 0xec))(param_1);
            FUN_0059be30(iVar6,fStack_14);
          }
          FUN_00559250(0x01E82168,iStack_30);
          break;
        }
      }
      else {
        FUN_00559250(0x01E82168,iVar5);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 1);
    FUN_00559060(0x01E82168);
    FUN_00500090(param_1);
    iStack_24 = 0;
    pfStack_2c = afStack_188;
    iStack_28 = 0;
    do {
      if (*(int *)(0x01E82168 + 0x14f0a8) <= iStack_24) {
        FUN_00559220(0x01E82168);
        FUN_0057d8a0(0x02C82A60,param_1,"cre-fire.wav",afStack_dc + 0xe);
        FUN_00573950(*(uint *)(param_1 + 0x57c),0x40000000);
        fVar2 = _DAT_00603010;
        *(uint *)(param_1 + 0x578) = 1;
        *(uint *)(param_1 + 0x588) = 1;
        *(float *)(param_1 + 0x300) = fVar2;
        return 1;
      }
      iStack_34 = *(int *)(0x01E82168 + iStack_28 + 0x14f0ac);
      iVar5 = (**(code **)(*(int *)(iStack_34 + 0x154) + 0xe0))(iStack_34);
      iVar4 = iStack_34;
      if (((iVar5 == 0) &&
          ((((iVar5 = FUN_0040c550(iStack_34,"CGhoul"), iVar5 != 0 ||
             (iVar5 = FUN_0040c550(iVar4,"CTVBat"), iVar5 != 0)) ||
            (iVar5 = FUN_0040c550(iVar4,"CBatCreature"), iVar5 != 0)) ||
           ((iVar5 = FUN_0040c550(iVar4,"CWerewolf"), iVar5 != 0 ||
            (iVar4 = FUN_0040c550(iVar4,"CSvetlana"), iVar4 != 0)))))) ||
         (iVar4 = FUN_004fff70(iStack_34), iVar4 != 0)) {
        iVar4 = iStack_34;
        (**(code **)(*(int *)(iStack_34 + 0x154) + 0x1c))(iStack_34);
        pfVar7 = (float *)(iVar4 + 0x20);
        puVar8 = auStack_14c;
        puVar9 = auStack_164;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
          puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
        }
        iVar5 = FUN_00452de0(0x1ccc3e4,pfVar7,iVar4 + 0x30,auStack_164,auStack_158);
        if (iVar5 != 0) {
          FUN_00445430(PTR_DAT_00611100,"%s in volume\n",iStack_34);
          iVar5 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
          fStack_c8 = *(float *)(iVar5 + 0x20) - *pfVar7;
          fStack_c4 = *(float *)(iVar5 + 0x24) - *(float *)(iVar4 + 0x24);
          fStack_c0 = *(float *)(iVar5 + 0x28) - *(float *)(iVar4 + 0x28);
          fStack_50 = fStack_c8;
          afStack_88[(uint)bVar11 * -2 + 0xf] = afStack_dc[(uint)bVar11 * -2 + 6];
          afStack_88[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10] =
               afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
          if (SQRT(fStack_48 * fStack_48 + fStack_50 * fStack_50 + fStack_4c * fStack_4c) <
              (float)_DAT_005e6ed2) {
            FUN_00408bb0(iVar5,pfVar7);
            uStack_8c = uStack_104;
            afStack_88[(uint)bVar11 * -2] = afStack_130[(uint)bVar11 * -2 + 0xc];
            afStack_88[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
                 afStack_130[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
            afStack_88[0] = 0.0;
            FUN_005a7520(&uStack_8c);
            FUN_0042c010(auStack_20c);
            fStack_208 = (float)(**(code **)(*(int *)(param_1 + 0x154) + 0xec))(param_1);
            uStack_1dc = 0x6c;
            fStack_14 = fStack_208;
            (**(code **)(*(int *)(iStack_34 + 0x154) + 0x108))(iStack_34,auStack_20c);
          }
          pfStack_18 = afStack_130 + 5;
          iStack_1c = iStack_34;
          FUN_00558eb0(0x01E82168);
          (**(code **)(*(int *)(iStack_34 + 0x154) + 0x1c))(iStack_34);
          pfVar7 = afStack_17c;
          pfVar10 = &fStack_194;
          for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
            *pfVar10 = *pfVar7;
            pfVar7 = pfVar7 + (uint)bVar11 * -2 + 1;
            pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
          }
          FUN_0040cfe0(afStack_130 + 2);
          afStack_130[2] = fStack_194 + *pfStack_2c;
          afStack_130[3] = fStack_190 + pfStack_2c[1];
          pfVar7 = afStack_dc + 2;
          fStack_120 = fStack_18c + pfStack_2c[2];
          fStack_5c = fStack_194 + *pfStack_2c;
          afStack_88[(uint)bVar11 * -2 + 0xc] = afStack_130[(uint)bVar11 * -2 + 3];
          afStack_88[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
               afStack_130[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
          FUN_0040cfe0(pfVar7);
          iVar4 = iStack_34;
          pfVar7 = afStack_88 + 8;
          afStack_dc[2] = fStack_5c * _DAT_005e6ece;
          afStack_dc[3] = fStack_58 * _DAT_005e6ece;
          fStack_cc = fStack_54 * _DAT_005e6ece;
          afStack_68[0] = fStack_5c * _DAT_005e6ece;
          afStack_88[(uint)bVar11 * -2 + 9] = afStack_dc[(uint)bVar11 * -2 + 3];
          afStack_88[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
               afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
          FUN_00408b40(iVar4,pfVar7);
          afStack_44[0] = (float)uStack_b0;
          afStack_88[(uint)bVar11 * -2 + 0x12] = afStack_dc[(uint)bVar11 * -2 + 0xc];
          afStack_88[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13] =
               afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
          iVar4 = 0;
          bVar1 = false;
          do {
            FUN_00557300(0x01E82168,pfStack_18,afStack_88 + 0x11);
            iVar5 = *(int *)(0x01E82168 + 0x14d144);
            if (iVar5 == 0) break;
            if (iVar5 == iStack_1c) {
              bVar1 = true;
              break;
            }
            iVar5 = FUN_0040c550(iVar5,"CTrigger || CGlass");
            if (iVar5 == 0) break;
            iVar4 = iVar4 + 1;
            FUN_00559250(0x01E82168,*(uint *)(0x01E82168 + 0x14d144));
          } while (iVar4 < 3);
          FUN_00559060(0x01E82168);
          if (bVar1) {
            FUN_0042c010(auStack_1d0);
            iVar4 = FUN_004fff70(iStack_34);
            if (iVar4 == 0) {
              fStack_1cc = 0.1;
            }
            else {
              fStack_1cc = (float)(**(code **)(*(int *)(param_1 + 0x154) + 0xec))(param_1);
              fStack_14 = fStack_1cc;
            }
            uStack_1a0 = 0x6c;
            uStack_1c8 = 0;
            uStack_1bc = 0;
            uStack_1c0 = 0;
            uStack_1c4 = 0;
            iStack_19c = param_1;
            uStack_198 = (**(code **)(*(int *)(param_1 + 0x154) + 0x94))(param_1);
            (**(code **)(*(int *)(iStack_34 + 0x154) + 0x108))(iStack_34,auStack_1d0);
          }
        }
      }
      iStack_24 = iStack_24 + 1;
      iStack_28 = iStack_28 + 4;
    } while( true );
  }
  return 0;
}
