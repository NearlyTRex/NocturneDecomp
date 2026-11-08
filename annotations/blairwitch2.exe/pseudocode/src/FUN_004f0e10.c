// Name: FUN_004f0e10
// Address: 004f0e10
// Address Range: [[004f0e10, 004f1795]]
// Convention: unknown
// Signature: void FUN_004f0e10(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f0e10(int param_1,float param_2)

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
  FUN_005469a0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2b4,0);
  pfVar5 = local_18c + 8;
  uVar10 = *(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  local_16c[0] = (float)local_ac;
  local_18c[(uint)bVar9 * -2 + 9] = afStack_c0[(uint)bVar9 * -2 + 6];
  local_18c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
       afStack_c0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
  FUN_00408d70(uVar10,pfVar5);
  iVar1 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  afStack_1ec[2] = (float)local_1f0;
  afStack_1ec[(uint)bVar9 * -2 + 3] = afStack_1ec[(uint)bVar9 * -2];
  afStack_1ec[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
       afStack_1ec[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  afStack_1ec[3] = *(float *)(iVar1 + 0x24);
  FUN_00408de0(param_1,afStack_1ec + 2);
  afStack_1c8[2] = local_10c;
  afStack_1c8[(uint)bVar9 * -2 + 3] = afStack_120[(uint)bVar9 * -2 + 6];
  afStack_1c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
       afStack_120[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
  local_d0 = afStack_1c8[2];
  local_cc = 0.0;
  local_c8 = local_1b8;
  local_20 = param_1 + 0x2b4;
  local_24 = -1.0;
  iVar1 = FUN_005035c0(local_20);
  uVar2 = *(uint *)(iVar1 + 0x24);
  if (uVar2 < 2) {
    if (uVar2 == 0) {
      iVar1 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
      iVar1 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x114))(iVar1);
      if (((iVar1 == 0) && (*(int *)(0x01CB6900 + 0x1f0) == 0)) &&
         (ABS(*(float *)(param_1 + 0x24) -
              *(float *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x24)) <= (float)_DAT_005dd959))
      {
        FUN_005838f0(afStack_f0 + 8);
        afStack_1b0[2] = (float)local_88;
        afStack_1b0[(uint)bVar9 * -2 + 3] = afStack_c0[(uint)bVar9 * -2 + 0xf];
        afStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
             afStack_c0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
        local_14 = (float)FUN_0040d0c0(afStack_1b0[3]);
        if (SQRT(local_c8 * local_c8 + local_d0 * local_d0 + local_cc * local_cc) <
            (1.0 - ABS(local_14) * (float)_DAT_005dd961) * (float)_DAT_005dd969 +
            (float)_DAT_005dd971) {
          FUN_00546790(local_20,_DAT_01d097c4);
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
          FUN_00591530(&local_100,local_280);
          pfVar5 = local_18c + 0x17;
          local_130[0] = local_18c[2];
          local_18c[(uint)bVar9 * -2 + 0x18] = local_18c[(uint)bVar9 * -2 + 3];
          local_18c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19] =
               local_18c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
          FUN_00408d70(param_1,pfVar5);
          pfVar5 = afStack_1ec + 2;
          pfVar7 = afStack_120 + 2;
          afStack_120[2] = (float)local_a0;
          afStack_120[(uint)bVar9 * -2 + 3] = afStack_c0[(uint)bVar9 * -2 + 9];
          uVar10 = 0x01E661B8;
          afStack_120[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
               afStack_c0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
          iVar1 = FUN_00535ec0(uVar10,pfVar7,pfVar5);
          if (iVar1 == 0) {
            FUN_00503620(local_20,2,1);
            (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"gh-alrt[1,4].wav");
          }
        }
      }
      goto LAB_004f0f3f;
    }
LAB_004f0f08:
    iVar1 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    iVar1 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x114))(iVar1);
    if ((iVar1 != 0) || (*(int *)(0x01CB6900 + 0x1f0) != 0)) {
      uVar10 = 0;
      goto LAB_004f0f30;
    }
    FUN_00408de0(*(uint *)(param_1 + 0x4b6f4),param_1 + 0x20);
    local_148 = local_160;
    local_18c[(uint)bVar9 * -2 + 0x12] = local_18c[(uint)bVar9 * -2 + 0xc];
    local_18c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13] =
         local_18c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
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
      iVar1 = param_1 + 0x2b4;
      local_14 = (float)FUN_005038a0(iVar1,1);
      *(float *)(param_1 + 0x2594) = local_14 * _DAT_005dd949;
      local_14 = (float)FUN_005038a0(iVar1,2);
      *(float *)(param_1 + 0x2594) = local_14 * _DAT_005dd94d + *(float *)(param_1 + 0x2594);
      *(float *)(param_1 + 0x2594) =
           *(float *)(param_1 + 0x10a60) * param_2 * *(float *)(param_1 + 0x2594);
      FUN_0042b2a0(param_1,param_2 * *(float *)(param_1 + 0x10a60));
      afStack_60[4] = 0x40200000;
      iVar3 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
      afStack_60[2] = 0.0;
      afStack_60[3] = 0.0;
      iVar3 = FUN_00423000(param_1,iVar3 + 0x20,iVar3 + 0x10a9c,afStack_60 + 2,0x3f800000,0x3e32b8c2
                          );
      if (iVar3 < 0) {
        uVar10 = 0;
      }
      else {
        if (0 < iVar3) {
          FUN_004f1d70(param_1);
          goto LAB_004f0f3f;
        }
        if (ABS(*(float *)(param_1 + 0x2578)) / (param_2 * *(float *)(param_1 + 0x10a60)) <=
            (float)_DAT_005dd951) {
          uVar10 = 2;
        }
        else {
          uVar10 = 1;
        }
      }
      goto LAB_004f0f37;
    }
    FUN_004f1d70(param_1);
  }
  else {
    if (uVar2 < 3) goto LAB_004f0f08;
    if (0xb < uVar2) {
      if (0xc < uVar2) {
        if (uVar2 != 0x13) goto LAB_004f150c;
        if (*(int *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x276c) == 0) {
          local_28 = (float)FUN_00503e60(local_20);
          iVar1 = local_20;
          local_40 = (double)local_28;
          local_14 = local_28;
          if (local_28 <= (float)_DAT_005dd941) {
            local_24 = 0x40200000;
            if (1.0 <= local_40) {
              local_34 = (float)FUN_0040cf60(0x40e00000,0x41700000);
              local_14 = local_34;
              FUN_00546a90(iVar1,_DAT_01d097e4);
              local_64 = local_7c;
              afStack_60[(uint)bVar9 * -2] = afStack_78[(uint)bVar9 * -2];
              afStack_60[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
                   afStack_78[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
              local_64 = local_64 ^ 0x80000000;
              FUN_004222d0(local_2bc);
              local_2b8 = local_34;
              local_288 = param_1;
              local_284 = param_1;
              FUN_00408d70(param_1,&local_64,0x3e4ccccd,local_2bc);
              pfVar5 = afStack_c0 + 0xb;
              local_94[0] = (float)local_13c;
              afStack_c0[(uint)bVar9 * -2 + 0xc] = local_18c[(uint)bVar9 * -2 + 0x15];
              iVar1 = param_1;
              afStack_c0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
                   local_18c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16];
              iVar1 = FUN_00488110(iVar1,pfVar5);
              if (iVar1 != 0) {
                (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"gh-hits[1,4].wav");
              }
            }
          }
          goto LAB_004f0f3f;
        }
        uVar10 = 0;
        iVar1 = local_20;
        goto LAB_004f0f37;
      }
      if ((*(int *)(param_1 + 0x10a64) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        FUN_005469a0(local_20,0);
        pfVar5 = afStack_f0 + 2;
        afStack_f0[2] = (float)local_dc;
        afStack_f0[(uint)bVar9 * -2 + 3] = afStack_f0[(uint)bVar9 * -2 + 6];
        afStack_f0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
             afStack_f0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
        FUN_00408d70(param_1,pfVar5);
        uVar10 = 0;
        local_f4 = local_c4;
        afStack_f0[(uint)bVar9 * -2] = afStack_c0[(uint)bVar9 * -2];
        afStack_f0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             afStack_c0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        FUN_004c9ad0(0x01CB8284,&local_f4,uVar10);
        *(uint *)(param_1 + 0x10a64) = 1;
      }
      goto LAB_004f0f3f;
    }
LAB_004f150c:
    uVar10 = 2;
LAB_004f0f30:
    iVar1 = param_1 + 0x2b4;
LAB_004f0f37:
    FUN_00503620(iVar1,uVar10,1);
  }
LAB_004f0f3f:
  if (0.0 <= local_24) {
    *(float *)(param_1 + 0x2594) = *(float *)(param_1 + 0x10a60) * param_2;
    FUN_0042b2a0(param_1,param_2 * *(float *)(param_1 + 0x10a60));
    local_44 = local_24;
    iVar1 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    local_4c = 0;
    local_48 = 0;
    iVar1 = FUN_00423000(param_1,iVar1 + 0x20,iVar1 + 0x10a9c,&local_4c,0x40400000,0x3f060a92);
    if (iVar1 != 1) {
      FUN_00503620(param_1 + 0x2b4,2,1);
    }
  }
  local_18 = param_1 + 0x2b4;
  local_2c = param_2 * *(float *)(param_1 + 0x10a60);
  while (iVar1 = local_18, 0.0 < local_2c) {
    uVar2 = FUN_005030c0(local_18,&local_2c);
    if (uVar2 != 0) {
      if (uVar2 < 2) {
        if (*(int *)(param_1 + 0x2570) != 0) {
          FUN_005469a0(local_18,_DAT_01d097e0);
          local_124 = local_1cc;
          afStack_120[(uint)bVar9 * -2] = afStack_1c8[(uint)bVar9 * -2];
          afStack_120[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
               afStack_1c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
          local_124 = local_124 ^ 0x80000000;
          (**(code **)(*(int *)(param_1 + 0x2b0) + 0x2c))(param_1,&local_124,0x3f800000);
        }
      }
      else if ((uVar2 == 7) && (*(int *)(param_1 + 0x2570) != 0)) {
        FUN_005469a0(iVar1,_DAT_01d097e4);
        local_1b4 = local_19c;
        afStack_1b0[(uint)bVar9 * -2] = afStack_1b0[(uint)bVar9 * -2 + 6];
        afStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             afStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
        local_1b4 = local_1b4 ^ 0x80000000;
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x2c))(param_1,&local_1b4,0x3f800000);
      }
    }
  }
  FUN_00424470(param_1);
  iVar1 = FUN_005035c0(local_18);
  local_1c = *(uint *)(iVar1 + 0x24);
  if (((local_1c == 0xc) || (local_1c == 0)) && (*(int *)(param_1 + 0xdc) == 0)) goto LAB_004f171f;
  FUN_00423a10(param_1,param_2);
  local_190 = *(float *)(param_1 + 0x2588) * param_2;
  local_18c[0] = *(float *)(param_1 + 0x258c) * param_2;
  local_18c[1] = *(float *)(param_1 + 0x2590) * param_2;
  afStack_78[2] = local_190;
  afStack_78[(uint)bVar9 * -2 + 3] = local_18c[(uint)bVar9 * -2];
  afStack_78[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
       local_18c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  local_1d8 = afStack_78[2] + *(float *)(param_1 + 0x257c);
  local_1d4 = afStack_78[3] + *(float *)(param_1 + 0x2580);
  local_1d0 = local_68 + *(float *)(param_1 + 0x2584);
  local_178 = local_1d8;
  local_18c[(uint)bVar9 * -2 + 6] = afStack_1ec[(uint)bVar9 * -2 + 6];
  local_18c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
       afStack_1ec[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
  if (local_1c < 3) {
    if (local_1c == 0) {
      bVar8 = true;
LAB_004f16d7:
      if (!bVar8) {
LAB_004f16d9:
        local_178 = local_178 + *(float *)(param_1 + 0x2508);
        local_174 = local_174 + *(float *)(param_1 + 0x250c);
        local_170 = local_170 + *(float *)(param_1 + 0x2510);
      }
    }
  }
  else if (3 < local_1c) {
    if (local_1c < 0x11) {
      bVar8 = local_1c == 0x10;
      goto LAB_004f16d7;
    }
    if (0x11 < local_1c) {
      if (local_1c < 0x14) goto LAB_004f16d9;
      if (0x14 < local_1c) {
        bVar8 = local_1c == 0x15;
        goto LAB_004f16d7;
      }
    }
  }
  FUN_00423a60(param_1,local_18c + 5);
LAB_004f171f:
  iVar1 = param_1 + 0x2b4;
  FUN_00544f00(iVar1);
  FUN_00546ae0(iVar1);
  FUN_005afdf0(param_1 + 0x10bc0,param_1 + 0x20,param_1 + 0x30,param_2,
               *(uint *)(param_1 + 0x2574),iVar1);
  return;
}
