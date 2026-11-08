// Name: FUN_004e2e70
// Address: 004e2e70
// Address Range: [[004e2e70, 004e38cc]]
// Convention: unknown
// Signature: undefined4 FUN_004e2e70(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004e2e70(int param_1)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  float *pfVar9;
  byte bVar10;
  float afStackY_1110 [953];
  byte auStack_20c [4];
  float fStack_208;
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
  uint auStack_17c [3];
  byte auStack_170 [12];
  uint auStack_164 [6];
  float afStack_14c [6];
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  float afStack_124 [5];
  float afStack_110 [3];
  float afStack_104 [3];
  float afStack_f8 [3];
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  uint uStack_d4;
  uint uStack_bc;
  float afStack_b8 [5];
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float afStack_98 [2];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  uint uStack_44;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  float *pfStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  float *pfStack_1c;
  float fStack_18;
  
  bVar10 = 0;
  if (*(float *)(param_1 + 0x6dc) < _DAT_005f95d0) {
    return 0;
  }
  *(uint *)(param_1 + 0x6dc) = 0;
  *(uint *)(param_1 + 0x6f0) = *(uint *)(param_1 + 0x444);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0xe8))(param_1);
  afStack_98[0] = (float)uStack_128;
  afStack_b8[(uint)bVar10 * -2 + 9] = afStack_124[(uint)bVar10 * -2];
  afStack_b8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
       afStack_124[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  fStack_90 = fStack_90 + _DAT_005dc0a6;
  FUN_00408d70(param_1,afStack_b8 + 8);
  fStack_ec = afStack_124[2];
  afStack_124[(uint)bVar10 * -2 + 0xf] = afStack_124[(uint)bVar10 * -2 + 3];
  afStack_124[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10] =
       afStack_124[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
  uStack_12c = *(uint *)(param_1 + 0x444);
  uStack_134 = 0;
  uStack_130 = 0;
  FUN_00408cf0(param_1,&uStack_134);
  fVar2 = fStack_ec;
  fStack_68 = fStack_74;
  afStack_b8[(uint)bVar10 * -2 + 0x15] = afStack_b8[(uint)bVar10 * -2 + 0x12];
  afStack_b8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16] =
       afStack_b8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13];
  fStack_80 = fVar2 + fStack_68;
  fStack_7c = fStack_e8 + fStack_64;
  fStack_78 = fStack_e4 + fStack_60;
  afStack_110[0] = fVar2 + fStack_68;
  afStack_124[(uint)bVar10 * -2 + 6] = afStack_b8[(uint)bVar10 * -2 + 0xf];
  afStack_124[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
       afStack_b8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
  afStack_f8[0] = fStack_ec;
  afStack_124[(uint)bVar10 * -2 + 0xc] = afStack_124[(uint)bVar10 * -2 + 0xf];
  iVar7 = 0x01E661B8;
  afStack_124[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
       afStack_124[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
  FUN_00537e00(iVar7);
  FUN_00537ef0(0x01E661B8,1,0xff,0xff,0xff);
  FUN_00537df0(0x01E661B8);
  FUN_00537e30(0x01E661B8,param_1);
  if (*(int *)(param_1 + 0x460) != 0) {
    FUN_00537e30(0x01E661B8,*(int *)(param_1 + 0x460));
  }
  iVar7 = 0;
  FUN_00537a90(0x01E661B8);
  do {
    fStack_18 = (float)FUN_00535ee0(0x01E661B8,afStack_124 + 0xb,afStack_124 + 5);
    if ((fStack_18 < 0.0) || (1.0 < fStack_18)) break;
    *(float *)(param_1 + 0x6f0) = *(float *)(param_1 + 0x444) * fStack_18;
    iStack_24 = FUN_0040c8f0(*(uint *)(0x01E661B8 + 0x14d144),DAT_007bdc94);
    if ((iStack_24 != 0) &&
       (iVar3 = (**(code **)(*(int *)(iStack_24 + 0x2b0) + 0x114))(iStack_24), 0 < iVar3)) {
      iStack_24 = 0;
    }
    iVar3 = FUN_0040c8f0(*(uint *)(0x01E661B8 + 0x14d144),_DAT_01cb8280);
    iVar4 = FUN_0040c8f0(*(uint *)(0x01E661B8 + 0x14d144),_DAT_02653628);
    iStack_34 = iVar4;
    if (iStack_24 != 0) {
      iVar4 = (**(code **)(*(int *)(iStack_24 + 0x2b0) + 0xe8))(iStack_24);
      iVar3 = 0x01E661B8;
      if ((iVar4 != 0) && (iVar7 == 0)) {
        *(float *)(param_1 + 0x6dc) = _DAT_005f95d0;
        FUN_00537c40(iVar3);
        FUN_00537e00(0x01E661B8);
        return 0;
      }
      break;
    }
    if (iVar3 == 0) {
      if (iVar4 != 0) {
        FUN_00578550(iVar4);
        iVar7 = FUN_00578570(iVar4,param_1);
        if (iVar7 != 0) {
          fStack_18 = (float)(**(code **)(*(int *)(param_1 + 0x2b0) + 0xf4))(param_1);
          FUN_005785b0(iVar4,fStack_18);
        }
        FUN_00537e30(0x01E661B8,iStack_34);
        break;
      }
    }
    else {
      FUN_00537e30(0x01E661B8,iVar3);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 1);
  FUN_00537c40(0x01E661B8);
  FUN_004e2bf0(param_1);
  iStack_28 = 0;
  pfStack_2c = afStack_188;
  iStack_30 = 0;
  do {
    if (*(int *)(0x01E661B8 + 0x14f0a8) <= iStack_28) {
      FUN_00537e00(0x01E661B8);
      FUN_0055ae50(0x0264B290,param_1,"cre-fire.wav",afStack_124 + 0xe);
      FUN_00550f20(*(uint *)(param_1 + 0x6d8),0x40000000);
      *(uint *)(param_1 + 0x6d4) = 1;
      *(uint *)(param_1 + 0x6e4) = 1;
      FUN_0058a290(param_1);
      return 1;
    }
    iVar7 = *(int *)(0x01E661B8 + iStack_30 + 0x14f0ac);
    iStack_38 = iVar7;
    iVar3 = (**(code **)(*(int *)(iVar7 + 0x2b0) + 0xe8))(iVar7);
    if (((iVar3 == 0) &&
        ((((iVar3 = FUN_0040c840(iVar7,"CGhoul"), iVar3 != 0 ||
           (iVar3 = FUN_0040c840(iVar7,"CTVBat"), iVar3 != 0)) ||
          (iVar3 = FUN_0040c840(iVar7,"CBatCreature"), iVar3 != 0)) ||
         ((iVar3 = FUN_0040c840(iVar7,"CWerewolf"), iVar3 != 0 ||
          (iVar7 = FUN_0040c840(iVar7,"CSvetlana"), iVar7 != 0)))))) ||
       ((((iVar7 = iStack_38, iVar3 = FUN_0040c840(iStack_38,"CDraculaBride"), iVar3 != 0
          || ((iVar3 = FUN_0040c840(iVar7,"CBatman"), iVar3 != 0 ||
              (iVar3 = FUN_0040c840(iVar7,"CBatCreature"), iVar3 != 0)))) ||
         (iVar3 = FUN_0040c840(iVar7,"CBride"), iVar3 != 0)) ||
        (iVar7 = FUN_0040c840(iVar7,"CShadow"), iVar7 != 0)))) {
      iVar7 = iStack_38;
      (**(code **)(*(int *)(iStack_38 + 0x2b0) + 0x24))(iStack_38);
      pfVar5 = (float *)(iVar7 + 0x20);
      puVar6 = auStack_164;
      puVar8 = auStack_17c;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      }
      iVar3 = FUN_00441720(0x1cb3950,pfVar5,iVar7 + 0x30,auStack_17c,auStack_170);
      if (iVar3 != 0) {
        FUN_00436710(PTR_DAT_00609ed0,"?%s in volume\n" + 1,iStack_38);
        iVar3 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
        fStack_8c = *(float *)(iVar3 + 0x20) - *pfVar5;
        fStack_88 = *(float *)(iVar3 + 0x24) - *(float *)(iVar7 + 0x24);
        fStack_84 = *(float *)(iVar3 + 0x28) - *(float *)(iVar7 + 0x28);
        fStack_5c = fStack_8c;
        afStack_b8[(uint)bVar10 * -2 + 0x18] = afStack_b8[(uint)bVar10 * -2 + 0xc];
        afStack_b8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19] =
             afStack_b8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
        if (SQRT(fStack_54 * fStack_54 + fStack_5c * fStack_5c + fStack_58 * fStack_58) <
            (float)_DAT_005dc0b2) {
          FUN_00408de0(iVar3,pfVar5);
          afStack_b8[2] = (float)uStack_d4;
          afStack_b8[(uint)bVar10 * -2 + 3] = afStack_124[(uint)bVar10 * -2 + 0x15];
          afStack_b8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
               afStack_124[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16];
          afStack_b8[3] = 0.0;
          FUN_005838f0(afStack_b8 + 2);
          FUN_004222d0(auStack_20c);
          fStack_208 = (float)(**(code **)(*(int *)(param_1 + 0x2b0) + 0xf4))(param_1);
          fStack_18 = fStack_208;
          (**(code **)(*(int *)(iStack_38 + 0x2b0) + 0x110))(iStack_38,auStack_20c);
        }
        pfStack_1c = afStack_124 + 0xb;
        iStack_20 = iStack_38;
        FUN_00537a90(0x01E661B8);
        (**(code **)(*(int *)(iStack_38 + 0x2b0) + 0x24))(iStack_38);
        pfVar5 = afStack_14c;
        pfVar9 = &fStack_194;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pfVar9 = *pfVar5;
          pfVar5 = pfVar5 + (uint)bVar10 * -2 + 1;
          pfVar9 = pfVar9 + (uint)bVar10 * -2 + 1;
        }
        FUN_0040d340(afStack_b8 + 0x1a);
        fStack_50 = fStack_194 + *pfStack_2c;
        fStack_4c = fStack_190 + pfStack_2c[1];
        pfVar5 = afStack_b8 + 5;
        fStack_48 = fStack_18c + pfStack_2c[2];
        fStack_e0 = fStack_194 + *pfStack_2c;
        afStack_124[(uint)bVar10 * -2 + 0x12] = afStack_b8[(uint)bVar10 * -2 + 0x1b];
        afStack_124[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13] =
             afStack_b8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1c];
        FUN_0040d340(pfVar5);
        fStack_a4 = fStack_e0 * _DAT_005dc0aa;
        fStack_a0 = fStack_dc * _DAT_005dc0aa;
        fStack_9c = fStack_d8 * _DAT_005dc0aa;
        afStack_104[0] = fStack_e0 * _DAT_005dc0aa;
        afStack_124[(uint)bVar10 * -2 + 9] = afStack_b8[(uint)bVar10 * -2 + 6];
        afStack_124[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
             afStack_b8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
        FUN_00408d70(iStack_38,afStack_124 + 8);
        uStack_bc = uStack_44;
        afStack_b8[(uint)bVar10 * -2] = afStack_b8[(uint)bVar10 * -2 + 0x1e];
        afStack_b8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             afStack_b8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1f];
        iVar7 = 0;
        bVar1 = false;
        do {
          FUN_00535ee0(0x01E661B8,pfStack_1c,&uStack_bc);
          iVar3 = *(int *)(0x01E661B8 + 0x14d144);
          if (iVar3 == 0) break;
          if (iVar3 == iStack_20) {
            bVar1 = true;
            break;
          }
          iVar3 = FUN_0040c840(iVar3,"CTrigger || CGlass");
          if (iVar3 == 0) break;
          iVar7 = iVar7 + 1;
          FUN_00537e30(0x01E661B8,*(uint *)(0x01E661B8 + 0x14d144));
        } while (iVar7 < 3);
        FUN_00537c40(0x01E661B8);
        if (bVar1) {
          FUN_004222d0(auStack_1d0);
          iVar7 = iStack_38;
          iVar3 = FUN_0040c840(iStack_38,"CDraculaBride");
          if ((((iVar3 == 0) && (iVar3 = FUN_0040c840(iVar7,"CBatman"), iVar3 == 0)) &&
              (iVar3 = FUN_0040c840(iVar7,"CBatCreature"), iVar3 == 0)) &&
             ((iVar3 = FUN_0040c840(iVar7,"CBride"), iVar3 == 0 &&
              (iVar7 = FUN_0040c840(iVar7,"CShadow"), iVar7 == 0)))) {
            fStack_1cc = 0.1;
          }
          else {
            fStack_1cc = (float)(**(code **)(*(int *)(param_1 + 0x2b0) + 0xf4))(param_1);
            fStack_18 = fStack_1cc;
          }
          uStack_1c8 = 0;
          uStack_1bc = 0;
          uStack_1c0 = 0;
          uStack_1c4 = 0;
          uStack_1a0 = 0x6c;
          iStack_19c = param_1;
          uStack_198 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x9c))(param_1);
          (**(code **)(*(int *)(iStack_38 + 0x2b0) + 0x110))(iStack_38,auStack_1d0);
        }
      }
    }
    iStack_28 = iStack_28 + 1;
    iStack_30 = iStack_30 + 4;
  } while( true );
}
