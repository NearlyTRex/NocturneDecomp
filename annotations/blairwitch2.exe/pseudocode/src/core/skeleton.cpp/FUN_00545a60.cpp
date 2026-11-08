// Name: FUN_00545a60
// Address: 00545a60
// Address Range: [[00545a60, 00546187]]
// Convention: unknown
// Signature: void FUN_00545a60(int param_1,undefined4 param_2,undefined4 param_3,float param_4,int param_5,code *param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00545a60(int param_1,uint param_2,uint param_3,float param_4,int param_5,code *param_6)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  byte bVar7;
  float afStackY_1988 [1020];
  float local_980;
  float local_97c [400];
  int aiStack_33c [100];
  uint uStack_1ac;
  float afStack_1a8 [7];
  uint local_18c;
  float local_17c [4];
  uint local_16c;
  float afStack_15c [4];
  float local_14c [4];
  uint uStack_13c;
  float local_12c [4];
  float local_11c [4];
  uint local_10c;
  float afStack_108 [7];
  float local_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float local_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
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
  float fStack_78;
  float fStack_74;
  uint uStack_70;
  uint uStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  int local_5c;
  float fStack_58;
  int local_54;
  float fStack_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar7 = 0;
  if ((float)_DAT_005e72f7 < param_4) {
    FUN_00504080(param_1,param_2,param_3,&local_5c,&local_54,&local_980);
    iVar2 = FUN_00547890(param_1);
    local_1c = *(int *)(param_1 + 0x2250);
    if (local_1c == 0) {
      if (0 < *(int *)(iVar2 + 0x1d1f8)) {
        local_3c = param_1 + 0x6b0;
        local_44 = param_1;
        do {
          iVar4 = local_1c;
          iVar3 = FUN_00540fc0(iVar2,local_1c,param_5);
          if (-1 < iVar3) {
            local_18 = (*param_6)(iVar4,param_5,param_4,iVar3,param_1);
            FUN_00540f30(iVar2,iVar4,local_5c,local_54,local_980,local_18);
            iVar4 = local_3c;
            pfVar5 = afStack_1a8 + 0x13;
            afStack_15c[0] = (float)uStack_13c;
            afStack_1a8[(uint)bVar7 * -2 + 0x14] = afStack_1a8[(uint)bVar7 * -2 + 0x1c];
            afStack_1a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x15] =
                 afStack_1a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1d];
            (afStack_1a8 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x15)[(uint)bVar7 * -2 + 1] =
                 (afStack_1a8 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1d)[(uint)bVar7 * -2 + 1];
            FUN_00593df0(iVar4,pfVar5);
            pfVar5 = (float *)(local_44 + 0x6b4 + (uint)bVar7 * -8);
            *(uint *)(local_44 + 0x6b0) = uStack_1ac;
            pfVar6 = pfVar5 + (uint)bVar7 * -2 + 1;
            *pfVar5 = afStack_1a8[(uint)bVar7 * -2];
            *pfVar6 = afStack_1a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
            pfVar6[(uint)bVar7 * -2 + 1] =
                 (afStack_1a8 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
          }
          local_1c = local_1c + 1;
          local_44 = local_44 + 0x10;
          local_3c = local_3c + 0x10;
        } while (local_1c < *(int *)(iVar2 + 0x1d1f8));
      }
    }
    else if (local_1c == 1) {
      local_20 = 0;
      if (0 < *(int *)(iVar2 + 0x1d1f8)) {
        local_40 = 0;
        local_28 = 0;
        do {
          iVar4 = FUN_00540fc0(iVar2,local_20,param_5);
          *(int *)((int)aiStack_33c + local_28) = iVar4;
          if (-1 < iVar4) {
            FUN_00540f30(iVar2,local_20,local_5c,local_54,local_980);
            pfVar5 = (float *)((int)local_97c + (uint)bVar7 * -8 + local_40 + 4);
            *(float *)((int)local_97c + local_40) = afStack_1a8[3];
            pfVar6 = pfVar5 + (uint)bVar7 * -2 + 1;
            *pfVar5 = afStack_1a8[(uint)bVar7 * -2 + 4];
            *pfVar6 = afStack_1a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
            pfVar6[(uint)bVar7 * -2 + 1] =
                 (afStack_1a8 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
          }
          local_20 = local_20 + 1;
          local_28 = local_28 + 4;
          local_40 = local_40 + 0x10;
        } while (local_20 < *(int *)(iVar2 + 0x1d1f8));
      }
      iVar4 = *(int *)(iVar2 + 0x1d21c + param_5 * 0x24);
      if (-1 < iVar4) {
        FUN_00540f30(iVar2,iVar4,local_5c,local_54,local_980);
        pfVar5 = local_97c + iVar4 * 4 + (uint)bVar7 * -2 + 1;
        local_97c[iVar4 * 4] = local_16c;
        *pfVar5 = afStack_1a8[(uint)bVar7 * -2 + 0x10];
        pfVar5[(uint)bVar7 * -2 + 1] = afStack_1a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x11];
        (pfVar5 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
             (afStack_1a8 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x11)[(uint)bVar7 * -2 + 1];
      }
      local_24 = 0;
      if (0 < *(int *)(iVar2 + 0x1d1f8)) {
        local_4c = param_1 + 0x6b0;
        local_30 = 0;
        local_38 = param_1;
        local_2c = iVar2;
        local_34 = param_1 + 0x6b0;
        do {
          if (-1 < *(int *)((int)aiStack_33c + local_30)) {
            iVar4 = *(int *)(local_2c + 0x1d21c);
            local_48 = local_24 * 0x10;
            if (iVar4 < 0) {
              pfVar5 = local_97c + local_24 * 4;
            }
            else {
              local_18 = iVar4 * 0x10;
              FUN_00593c00(local_97c + iVar4 * 4);
              pfVar5 = afStack_1a8 + 0x1f;
              iVar4 = (int)local_97c + local_48;
              local_12c[0] = (float)local_10c;
              afStack_1a8[(uint)bVar7 * -2 + 0x20] = afStack_108[(uint)bVar7 * -2];
              afStack_1a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x21] =
                   afStack_108[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
              (afStack_1a8 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x21)[(uint)bVar7 * -2 + 1] =
                   (afStack_108 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
              FUN_00593c60(iVar4,pfVar5);
              iVar4 = local_4c + local_18;
              local_17c[0] = (float)local_18c;
              afStack_1a8[(uint)bVar7 * -2 + 0xc] = afStack_1a8[(uint)bVar7 * -2 + 8];
              afStack_1a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
                   afStack_1a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 9];
              (afStack_1a8 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd)[(uint)bVar7 * -2 + 1] =
                   (afStack_1a8 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 9)[(uint)bVar7 * -2 + 1];
              FUN_00593c60(afStack_1a8 + 0xb,iVar4);
              pfVar5 = afStack_1a8 + 0x23;
            }
            pfVar6 = pfVar5 + (uint)bVar7 * -2 + 1;
            local_14c[0] = *pfVar5;
            afStack_1a8[(uint)bVar7 * -2 + 0x18] = *pfVar6;
            afStack_1a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19] = pfVar6[(uint)bVar7 * -2 + 1];
            (afStack_1a8 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19)[(uint)bVar7 * -2 + 1] =
                 (pfVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
            FUN_00593df0(local_34,afStack_1a8 + 0x17,param_4);
            pfVar5 = (float *)(local_38 + 0x6b4 + (uint)bVar7 * -8);
            *(float *)(local_38 + 0x6b0) = afStack_108[3];
            pfVar6 = pfVar5 + (uint)bVar7 * -2 + 1;
            *pfVar5 = afStack_108[(uint)bVar7 * -2 + 4];
            *pfVar6 = afStack_108[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
            pfVar6[(uint)bVar7 * -2 + 1] =
                 (afStack_108 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
          }
          local_24 = local_24 + 1;
          local_30 = local_30 + 4;
          local_2c = local_2c + 0x24;
          local_38 = local_38 + 0x10;
          local_34 = local_34 + 0x10;
        } while (local_24 < *(int *)(iVar2 + 0x1d1f8));
      }
    }
    else {
      _DAT_01d046a0 = "..\\core\\skeleton.cpp";
      _DAT_01d046a4 = 0xa91;
      FUN_004e4500("Write me!");
    }
    if (param_5 < 0) {
      iVar2 = *(int *)(iVar2 + 0x1e014);
      local_bc = *(float *)(iVar2 + local_54 * 0xc) * local_980;
      local_b8 = *(float *)(iVar2 + 4 + local_54 * 0xc) * local_980;
      fStack_b4 = *(float *)(iVar2 + 8 + local_54 * 0xc) * local_980;
      local_ec = local_bc;
      afStack_108[(uint)bVar7 * -2 + 8] = afStack_108[(uint)bVar7 * -2 + 0x14];
      afStack_108[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 9] =
           afStack_108[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x15];
      fStack_58 = 1.0 - local_980;
      fStack_a4 = *(float *)(iVar2 + local_5c * 0xc) * fStack_58;
      fStack_a0 = *(float *)(iVar2 + 4 + local_5c * 0xc) * fStack_58;
      fStack_9c = *(float *)(iVar2 + 8 + local_5c * 0xc) * fStack_58;
      fStack_c8 = fStack_a4;
      afStack_108[(uint)bVar7 * -2 + 0x11] = afStack_108[(uint)bVar7 * -2 + 0x1a];
      afStack_108[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x12] =
           afStack_108[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1b];
      fStack_80 = fStack_c8 + local_ec;
      fStack_7c = fStack_c4 + fStack_e8;
      fStack_78 = fStack_c0 + fStack_e4;
      fStack_8c = fStack_c8 + local_ec;
      afStack_108[(uint)bVar7 * -2 + 0x20] = afStack_108[(uint)bVar7 * -2 + 0x23];
      afStack_108[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x21] =
           afStack_108[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x24];
      fStack_8c = fStack_8c * *(float *)(param_1 + 0x508);
      fStack_88 = fStack_88 * *(float *)(param_1 + 0x50c);
      fStack_84 = fStack_84 * *(float *)(param_1 + 0x510);
      fStack_e0 = fStack_8c * param_4;
      fVar1 = 1.0 - param_4;
      pfVar5 = (float *)(param_1 + 0x6a4);
      fStack_dc = fStack_88 * param_4;
      fStack_d8 = fStack_84 * param_4;
      fStack_68 = fStack_e0;
      afStack_108[(uint)bVar7 * -2 + 0x29] = afStack_108[(uint)bVar7 * -2 + 0xb];
      afStack_108[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x2a] =
           afStack_108[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xc];
      fStack_50 = fVar1;
      fStack_d4 = *pfVar5 * fVar1;
      fStack_d0 = *(float *)(param_1 + 0x6a8) * fVar1;
      fStack_cc = *(float *)(param_1 + 0x6ac) * fVar1;
      fStack_b0 = *pfVar5 * fVar1;
      afStack_108[(uint)bVar7 * -2 + 0x17] = afStack_108[(uint)bVar7 * -2 + 0xe];
      afStack_108[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x18] =
           afStack_108[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xf];
      fStack_98 = fStack_b0 + fStack_68;
      fStack_94 = fStack_ac + fStack_64;
      fStack_90 = fStack_a8 + fStack_60;
      fStack_74 = fStack_b0 + fStack_68;
      afStack_108[(uint)bVar7 * -2 + 0x26] = afStack_108[(uint)bVar7 * -2 + 0x1d];
      afStack_108[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x27] =
           afStack_108[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1e];
      if (pfVar5 != afStack_108 + 0x25) {
        *pfVar5 = fStack_74;
        *(uint *)(param_1 + 0x6a8) = uStack_70;
        *(uint *)(param_1 + 0x6ac) = uStack_6c;
        return;
      }
    }
  }
  return;
}
