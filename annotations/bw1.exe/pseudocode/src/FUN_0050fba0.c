// Name: FUN_0050fba0
// Address: 0050fba0
// Address Range: [[0050fba0, 00510525]]
// Convention: unknown
// Signature: void FUN_0050fba0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050fba0(int param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  float *pfVar5;
  uint *puVar6;
  float *pfVar7;
  bool bVar8;
  byte bVar9;
  float afStackY_11d8 [961];
  uint uVar10;
  byte local_2bc [4];
  float local_2b8;
  int local_288;
  int local_284;
  uint local_280 [12];
  uint local_250 [12];
  float local_220 [6];
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  uint local_1f0;
  float afStack_1ec [5];
  float local_1d8;
  float local_1d4;
  float local_1d0;
  uint local_1cc;
  float afStack_1c8 [4];
  float local_1b8;
  uint local_1b4;
  float afStack_1b0 [5];
  uint local_19c;
  float local_190;
  float local_18c [5];
  float local_178;
  float local_174;
  float local_170;
  float local_16c [3];
  uint local_160;
  float local_154;
  uint local_150;
  float local_14c;
  uint local_148;
  float local_140;
  uint local_13c;
  float local_130 [3];
  uint local_124;
  float afStack_120 [5];
  float local_10c;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  float afStack_f0 [5];
  uint local_dc;
  float local_d0;
  float local_cc;
  float local_c8;
  uint local_c4;
  float afStack_c0 [4];
  float local_b0;
  uint local_ac;
  uint local_a0;
  float local_94 [3];
  uint local_88;
  uint local_7c;
  float afStack_78 [4];
  float local_68;
  uint local_64;
  float afStack_60 [5];
  uint local_4c;
  uint local_48;
  float local_44;
  double local_40;
  float local_34;
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  uint local_1c;
  int local_18;
  float local_14;
  
  bVar9 = 0;
  FUN_00569040(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x158,0);
  pfVar5 = local_18c + 8;
  uVar10 = *(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  local_16c[0] = (float)local_ac;
  local_18c[(uint)bVar9 * -2 + 9] = afStack_c0[(uint)bVar9 * -2 + 6];
  local_18c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
       afStack_c0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
  FUN_00408b40(uVar10,pfVar5);
  iVar1 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  afStack_1ec[2] = (float)local_1f0;
  afStack_1ec[(uint)bVar9 * -2 + 3] = afStack_1ec[(uint)bVar9 * -2];
  afStack_1ec[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
       afStack_1ec[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  afStack_1ec[3] = *(float *)(iVar1 + 0x24);
  FUN_00408bb0(param_1,afStack_1ec + 2);
  afStack_1c8[2] = local_10c;
  afStack_1c8[(uint)bVar9 * -2 + 3] = afStack_120[(uint)bVar9 * -2 + 6];
  afStack_1c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
       afStack_120[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
  local_d0 = afStack_1c8[2];
  local_cc = 0.0;
  local_c8 = local_1b8;
  local_20 = param_1 + 0x158;
  local_24 = -1.0;
  iVar1 = FUN_00524770(local_20);
  uVar2 = *(uint *)(iVar1 + 0x24);
  if (uVar2 < 2) {
    if (uVar2 == 0) {
      iVar1 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      iVar1 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x10c))(iVar1);
      if (((iVar1 == 0) && (*(int *)(0x01CCF390 + 0x1f0) == 0)) &&
         (ABS(*(float *)(param_1 + 0x24) -
              *(float *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x24)) <= (float)_DAT_005e89e0))
      {
        FUN_005a7520(afStack_f0 + 8);
        afStack_1b0[2] = (float)local_88;
        afStack_1b0[(uint)bVar9 * -2 + 3] = afStack_c0[(uint)bVar9 * -2 + 0xf];
        afStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
             afStack_c0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
        local_14 = (float)FUN_0040cd60(afStack_1b0[3]);
        if (SQRT(local_c8 * local_c8 + local_d0 * local_d0 + local_cc * local_cc) <
            (1.0 - ABS(local_14) * (float)_DAT_005e89e8) * (float)_DAT_005e89f0 +
            (float)_DAT_005e89f8) {
          FUN_00568e30(local_20,_DAT_01d22424);
          local_f8 = 0x3e99999a;
          puVar4 = local_250;
          puVar6 = local_280;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + (uint)bVar9 * -2 + 1;
            puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
          }
          local_fc = 0x3f333333;
          local_100 = 0;
          FUN_005b5080(&local_100,local_280);
          pfVar5 = local_18c + 0x17;
          local_130[0] = local_18c[2];
          local_18c[(uint)bVar9 * -2 + 0x18] = local_18c[(uint)bVar9 * -2 + 3];
          local_18c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19] =
               local_18c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
          FUN_00408b40(param_1,pfVar5);
          pfVar5 = afStack_1ec + 2;
          pfVar7 = afStack_120 + 2;
          afStack_120[2] = (float)local_a0;
          afStack_120[(uint)bVar9 * -2 + 3] = afStack_c0[(uint)bVar9 * -2 + 9];
          uVar10 = 0x01E82168;
          afStack_120[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
               afStack_c0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
          iVar1 = FUN_005572e0(uVar10,pfVar7,pfVar5);
          if (iVar1 == 0) {
            FUN_005247c0(local_20,2,1);
            (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"gh-alrt[1,4].wav");
          }
        }
      }
      goto LAB_0050fccf;
    }
LAB_0050fc98:
    iVar1 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    iVar1 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x10c))(iVar1);
    if ((iVar1 != 0) || (*(int *)(0x01CCF390 + 0x1f0) != 0)) {
      uVar10 = 0;
      goto LAB_0050fcc0;
    }
    FUN_00408bb0(*(uint *)(param_1 + 0x46e64),param_1 + 0x20);
    local_148 = local_160;
    local_18c[(uint)bVar9 * -2 + 0x12] = local_18c[(uint)bVar9 * -2 + 0xc];
    local_18c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13] =
         local_18c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
    pfVar5 = local_220;
    pfVar7 = &local_208;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar7 = *pfVar5;
      pfVar5 = pfVar5 + (uint)bVar9 * -2 + 1;
      pfVar7 = pfVar7 + (uint)bVar9 * -2 + 1;
    }
    afStack_c0[2] = local_1fc - local_208;
    afStack_c0[3] = local_1f8 - local_204;
    local_b0 = local_1f4 - local_200;
    local_154 = local_1fc - local_208;
    local_18c[(uint)bVar9 * -2 + 0xf] = afStack_c0[(uint)bVar9 * -2 + 3];
    local_18c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
         afStack_c0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    local_150 = 0;
    if (-local_140 <= SQRT(local_14c * local_14c + local_154 * local_154)) {
      iVar1 = param_1 + 0x158;
      local_14 = (float)FUN_00524a40(iVar1,1);
      *(float *)(param_1 + 0x2524) = local_14 * _DAT_005e89d0;
      local_14 = (float)FUN_00524a40(iVar1,2);
      *(float *)(param_1 + 0x2524) = local_14 * _DAT_005e89d4 + *(float *)(param_1 + 0x2524);
      *(float *)(param_1 + 0x2524) =
           *(float *)(param_1 + 0xc1d0) * param_2 * *(float *)(param_1 + 0x2524);
      FUN_00435320(param_1,param_2 * *(float *)(param_1 + 0xc1d0));
      afStack_60[4] = 0x40200000;
      iVar3 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      afStack_60[2] = 0.0;
      afStack_60[3] = 0.0;
      iVar3 = FUN_0042ccf0(param_1,iVar3 + 0x20,iVar3 + 0xc208,afStack_60 + 2,0x3f800000,0x3e32b8c2)
      ;
      if (iVar3 < 0) {
        uVar10 = 0;
      }
      else {
        if (0 < iVar3) {
          FUN_00510b00(param_1);
          goto LAB_0050fccf;
        }
        if (ABS(*(float *)(param_1 + 0x2508)) / (param_2 * *(float *)(param_1 + 0xc1d0)) <=
            (float)_DAT_005e89d8) {
          uVar10 = 2;
        }
        else {
          uVar10 = 1;
        }
      }
      goto LAB_0050fcc7;
    }
    FUN_00510b00(param_1);
  }
  else {
    if (uVar2 < 3) goto LAB_0050fc98;
    if (0xb < uVar2) {
      if (0xc < uVar2) {
        if (uVar2 != 0x13) goto LAB_0051029c;
        if (*(int *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x26fc) == 0) {
          local_28 = (float)FUN_00525020(local_20);
          iVar1 = local_20;
          local_40 = (double)local_28;
          local_14 = local_28;
          if (local_28 <= (float)_DAT_005e89c8) {
            local_24 = 0x40200000;
            if (1.0 <= local_40) {
              local_34 = (float)FUN_0040cc00(0x40e00000,0x41700000);
              local_14 = local_34;
              FUN_00569130(iVar1,_DAT_01d22444);
              local_64 = local_7c;
              afStack_60[(uint)bVar9 * -2] = afStack_78[(uint)bVar9 * -2];
              afStack_60[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
                   afStack_78[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
              local_64 = local_64 ^ 0x80000000;
              FUN_0042c010(local_2bc);
              local_2b8 = local_34;
              local_288 = param_1;
              local_284 = param_1;
              FUN_00408b40(param_1,&local_64,0x3e4ccccd,local_2bc);
              pfVar5 = afStack_c0 + 0xb;
              local_94[0] = (float)local_13c;
              afStack_c0[(uint)bVar9 * -2 + 0xc] = local_18c[(uint)bVar9 * -2 + 0x15];
              iVar1 = param_1;
              afStack_c0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
                   local_18c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16];
              iVar1 = FUN_004a0770(iVar1,pfVar5);
              if (iVar1 != 0) {
                (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"gh-hits[1,4].wav");
              }
            }
          }
          goto LAB_0050fccf;
        }
        uVar10 = 0;
        iVar1 = local_20;
        goto LAB_0050fcc7;
      }
      if ((*(int *)(param_1 + 0xc1d4) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        FUN_00569040(local_20,0);
        pfVar5 = afStack_f0 + 2;
        afStack_f0[2] = (float)local_dc;
        afStack_f0[(uint)bVar9 * -2 + 3] = afStack_f0[(uint)bVar9 * -2 + 6];
        afStack_f0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
             afStack_f0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
        FUN_00408b40(param_1,pfVar5);
        uVar10 = 0;
        local_f4 = local_c4;
        afStack_f0[(uint)bVar9 * -2] = afStack_c0[(uint)bVar9 * -2];
        afStack_f0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             afStack_c0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        FUN_004e62e0(0x01CD0E3C,&local_f4,uVar10);
        *(uint *)(param_1 + 0xc1d4) = 1;
      }
      goto LAB_0050fccf;
    }
LAB_0051029c:
    uVar10 = 2;
LAB_0050fcc0:
    iVar1 = param_1 + 0x158;
LAB_0050fcc7:
    FUN_005247c0(iVar1,uVar10,1);
  }
LAB_0050fccf:
  if (0.0 <= local_24) {
    *(float *)(param_1 + 0x2524) = *(float *)(param_1 + 0xc1d0) * param_2;
    FUN_00435320(param_1,param_2 * *(float *)(param_1 + 0xc1d0));
    local_44 = local_24;
    iVar1 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    local_4c = 0;
    local_48 = 0;
    iVar1 = FUN_0042ccf0(param_1,iVar1 + 0x20,iVar1 + 0xc208,&local_4c,0x40400000,0x3f060a92);
    if (iVar1 != 1) {
      FUN_005247c0(param_1 + 0x158,2,1);
    }
  }
  local_18 = param_1 + 0x158;
  local_2c = param_2 * *(float *)(param_1 + 0xc1d0);
  while (iVar1 = local_18, 0.0 < local_2c) {
    uVar2 = FUN_00524270(local_18,&local_2c);
    if (uVar2 != 0) {
      if (uVar2 < 2) {
        if (*(int *)(param_1 + 0x2500) != 0) {
          FUN_00569040(local_18,_DAT_01d22440);
          local_124 = local_1cc;
          afStack_120[(uint)bVar9 * -2] = afStack_1c8[(uint)bVar9 * -2];
          afStack_120[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
               afStack_1c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
          local_124 = local_124 ^ 0x80000000;
          (**(code **)(*(int *)(param_1 + 0x154) + 0x24))(param_1,&local_124,0x3f800000);
        }
      }
      else if ((uVar2 == 7) && (*(int *)(param_1 + 0x2500) != 0)) {
        FUN_00569040(iVar1,_DAT_01d22444);
        local_1b4 = local_19c;
        afStack_1b0[(uint)bVar9 * -2] = afStack_1b0[(uint)bVar9 * -2 + 6];
        afStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             afStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
        local_1b4 = local_1b4 ^ 0x80000000;
        (**(code **)(*(int *)(param_1 + 0x154) + 0x24))(param_1,&local_1b4,0x3f800000);
      }
    }
  }
  FUN_0042e160(param_1);
  iVar1 = FUN_00524770(local_18);
  local_1c = *(uint *)(iVar1 + 0x24);
  if (((local_1c == 0xc) || (local_1c == 0)) && (*(int *)(param_1 + 0xdc) == 0)) goto LAB_005104af;
  FUN_0042d700(param_1,param_2);
  local_190 = *(float *)(param_1 + 0x2518) * param_2;
  local_18c[0] = *(float *)(param_1 + 0x251c) * param_2;
  local_18c[1] = *(float *)(param_1 + 0x2520) * param_2;
  afStack_78[2] = local_190;
  afStack_78[(uint)bVar9 * -2 + 3] = local_18c[(uint)bVar9 * -2];
  afStack_78[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
       local_18c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  local_1d8 = afStack_78[2] + *(float *)(param_1 + 0x250c);
  local_1d4 = afStack_78[3] + *(float *)(param_1 + 0x2510);
  local_1d0 = local_68 + *(float *)(param_1 + 0x2514);
  local_178 = local_1d8;
  local_18c[(uint)bVar9 * -2 + 6] = afStack_1ec[(uint)bVar9 * -2 + 6];
  local_18c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
       afStack_1ec[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
  if (local_1c < 3) {
    if (local_1c == 0) {
      bVar8 = true;
LAB_00510467:
      if (!bVar8) {
LAB_00510469:
        local_178 = local_178 + *(float *)(param_1 + 0x249c);
        local_174 = local_174 + *(float *)(param_1 + 0x24a0);
        local_170 = local_170 + *(float *)(param_1 + 0x24a4);
      }
    }
  }
  else if (3 < local_1c) {
    if (local_1c < 0x11) {
      bVar8 = local_1c == 0x10;
      goto LAB_00510467;
    }
    if (0x11 < local_1c) {
      if (local_1c < 0x14) goto LAB_00510469;
      if (0x14 < local_1c) {
        bVar8 = local_1c == 0x15;
        goto LAB_00510467;
      }
    }
  }
  FUN_0042d750(param_1,local_18c + 5);
LAB_005104af:
  iVar1 = param_1 + 0x158;
  FUN_005675a0(iVar1);
  FUN_00569180(iVar1);
  FUN_00440610(param_1 + 0xc330,param_1 + 0x20,param_1 + 0x30,param_2,
               *(uint *)(param_1 + 0x2504),iVar1);
  return;
}
