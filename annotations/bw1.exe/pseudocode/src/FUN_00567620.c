// Name: FUN_00567620
// Address: 00567620
// Address Range: [[00567620, 005680fc]]
// Convention: unknown
// Signature: void FUN_00567620(int param_1,int param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_00567620(int param_1,int param_2,uint param_3,int param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int *piVar7;
  uint *puVar8;
  int *piVar9;
  int *piVar10;
  byte bVar11;
  int aiStackY_1a88 [120];
  float local_1890;
  int local_188c [382];
  int aiStack_1294 [18];
  int local_124c [1120];
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  uint local_bc;
  uint local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  int local_84;
  int local_80;
  int local_7c;
  float local_78;
  int local_74;
  int local_70;
  uint local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
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
  int local_14;
  
  bVar11 = 0;
  iVar2 = FUN_00569f30(param_1);
  FUN_00525240(param_1,param_2,param_3,&local_84,&local_80,&local_1890);
  if (param_4 < 0) {
    local_30 = 0;
    if (0 < *(int *)(iVar2 + 0x1de78)) {
      local_54 = param_1;
      local_40 = param_1;
      do {
        FUN_005635a0(iVar2,local_30,local_84,local_80,local_1890);
        iVar4 = local_40;
        local_40 = local_40 + 4;
        piVar10 = (int *)(local_54 + 0x6b4 + (uint)bVar11 * -8);
        *(int *)(local_54 + 0x6b0) = local_124c[0x444];
        piVar7 = piVar10 + (uint)bVar11 * -2 + 1;
        *piVar10 = local_124c[(uint)bVar11 * -2 + 0x445];
        *piVar7 = local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x446];
        piVar7[(uint)bVar11 * -2 + 1] =
             (local_124c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x446)[(uint)bVar11 * -2 + 1];
        local_54 = local_54 + 0x10;
        *(uint *)(iVar4 + 0xcf0) = *(uint *)(iVar4 + 0x514);
        local_30 = local_30 + 1;
      } while (local_30 < *(int *)(iVar2 + 0x1de78));
    }
    iVar2 = *(int *)(iVar2 + 0x1ec94);
    local_90 = *(float *)(iVar2 + local_80 * 0xc) * local_1890;
    fVar1 = 1.0 - local_1890;
    local_8c = *(float *)(iVar2 + 4 + local_80 * 0xc) * local_1890;
    local_88 = *(float *)(iVar2 + 8 + local_80 * 0xc) * local_1890;
    local_b4 = local_90;
    local_124c[(uint)bVar11 * -2 + 0x467] = local_124c[(uint)bVar11 * -2 + 0x470];
    local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x468] =
         local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x471];
    local_78 = fVar1;
    local_cc = *(float *)(iVar2 + local_84 * 0xc) * fVar1;
    local_c8 = *(float *)(iVar2 + 4 + local_84 * 0xc) * fVar1;
    local_c4 = *(float *)(iVar2 + 8 + local_84 * 0xc) * fVar1;
    local_a8 = local_cc;
    local_124c[(uint)bVar11 * -2 + 0x46a] = local_124c[(uint)bVar11 * -2 + 0x461];
    local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x46b] =
         local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x462];
    local_9c = local_a8 + local_b4;
    local_98 = local_a4 + local_b0;
    local_94 = local_a0 + local_ac;
    local_c0 = local_a8 + local_b4;
    local_124c[(uint)bVar11 * -2 + 0x464] = local_124c[(uint)bVar11 * -2 + 0x46d];
    local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x465] =
         local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x46e];
    if ((float *)(param_1 + 0x6a4) != &local_c0) {
      *(float *)(param_1 + 0x6a4) = local_c0;
      *(uint *)(param_1 + 0x6a8) = local_bc;
      *(uint *)(param_1 + 0x6ac) = local_b8;
    }
    *(float *)(param_1 + 0x6a8) = *(float *)(param_1 + 0x50c) * *(float *)(param_1 + 0x6a8);
    *(float *)(param_1 + 0x6ac) = *(float *)(param_1 + 0x510) * *(float *)(param_1 + 0x6ac);
    *(float *)(param_1 + 0x6a4) = *(float *)(param_1 + 0x508) * *(float *)(param_1 + 0x6a4);
    return;
  }
  if (*(int *)(param_1 + 0x2340) == 1) {
    local_18 = 0;
    if (0 < *(int *)(iVar2 + 0x1de78)) {
      local_60 = 0;
      local_44 = 0;
      do {
        iVar4 = FUN_00563630(iVar2,local_18,param_4);
        *(int *)((int)local_124c + local_44 + 0xe10) = iVar4;
        if (-1 < iVar4) {
          FUN_005635a0(iVar2,local_18,local_84,local_80,local_1890);
          piVar10 = (int *)((int)local_124c + (uint)bVar11 * -8 + local_60 + 4);
          *(int *)((int)local_124c + local_60) = local_124c[0x430];
          piVar7 = piVar10 + (uint)bVar11 * -2 + 1;
          *piVar10 = local_124c[(uint)bVar11 * -2 + 0x431];
          *piVar7 = local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x432];
          piVar7[(uint)bVar11 * -2 + 1] =
               (local_124c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x432)[(uint)bVar11 * -2 + 1];
        }
        local_18 = local_18 + 1;
        local_44 = local_44 + 4;
        local_60 = local_60 + 0x10;
      } while (local_18 < *(int *)(iVar2 + 0x1de78));
    }
    iVar4 = *(int *)(iVar2 + 0x1de9c + param_4 * 0x24);
    if (-1 < iVar4) {
      FUN_005635a0(iVar2,iVar4,local_84,local_80,local_1890);
      piVar10 = local_124c + iVar4 * 4 + (uint)bVar11 * -2 + 1;
      local_124c[iVar4 * 4] = local_124c[0x438];
      *piVar10 = local_124c[(uint)bVar11 * -2 + 0x439];
      piVar10[(uint)bVar11 * -2 + 1] = local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x43a];
      (piVar10 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1] =
           (local_124c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x43a)[(uint)bVar11 * -2 + 1];
    }
    local_28 = 0;
    if (0 < *(int *)(iVar2 + 0x1de78)) {
      local_50 = 0;
      local_70 = param_1 + 0x6b0;
      local_58 = iVar2;
      local_34 = param_1;
      do {
        if (-1 < *(int *)((int)local_124c + local_50 + 0xe10)) {
          iVar4 = *(int *)(local_58 + 0x1de9c);
          local_64 = local_28 * 0x10;
          if (iVar4 < 0) {
            piVar10 = local_124c + local_28 * 4;
          }
          else {
            local_7c = iVar4 * 0x10;
            FUN_005b7750(local_124c + iVar4 * 4);
            piVar10 = local_124c + 0x424;
            iVar4 = (int)local_124c + local_64;
            local_124c[0x424] = local_124c[0x44c];
            local_124c[(uint)bVar11 * -2 + 0x425] = local_124c[(uint)bVar11 * -2 + 0x44d];
            local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x426] =
                 local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x44e];
            (local_124c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x426)[(uint)bVar11 * -2 + 1] =
                 (local_124c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x44e)[(uint)bVar11 * -2 + 1]
            ;
            FUN_005b77b0(iVar4,piVar10);
            iVar4 = local_70 + local_7c;
            local_124c[0x440] = local_124c[0x410];
            local_124c[(uint)bVar11 * -2 + 0x441] = local_124c[(uint)bVar11 * -2 + 0x411];
            local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x442] =
                 local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x412];
            (local_124c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x442)[(uint)bVar11 * -2 + 1] =
                 (local_124c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x412)[(uint)bVar11 * -2 + 1]
            ;
            FUN_005b77b0(local_124c + 0x440,iVar4);
            piVar10 = local_124c + 0x41c;
          }
          piVar9 = (int *)(local_34 + 0x6b4 + (uint)bVar11 * -8);
          piVar7 = piVar10 + (uint)bVar11 * -2 + 1;
          *(int *)(local_34 + 0x6b0) = *piVar10;
          piVar10 = piVar9 + (uint)bVar11 * -2 + 1;
          *piVar9 = *piVar7;
          *piVar10 = piVar7[(uint)bVar11 * -2 + 1];
          piVar10[(uint)bVar11 * -2 + 1] = (piVar7 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
        }
        local_28 = local_28 + 1;
        local_50 = local_50 + 4;
        local_34 = local_34 + 0x10;
        local_58 = local_58 + 0x24;
      } while (local_28 < *(int *)(iVar2 + 0x1de78));
    }
  }
  else if (*(int *)(param_1 + 0x2340) == 2) {
    iVar4 = FUN_00569f30(param_1);
    local_14 = 0;
    local_6c = *(uint *)(iVar4 + 0x1c88 + param_2 * 0x120);
    if (0 < *(int *)(iVar2 + 0x1de78)) {
      local_3c = 0;
      local_38 = 0;
      do {
        iVar4 = local_14;
        iVar3 = FUN_00563630(iVar2,local_14,param_4);
        *(int *)((int)local_124c + local_38 + 0xc80) = iVar3;
        if (-1 < iVar3) {
          puVar5 = (uint *)FUN_00563580(iVar2,iVar4,local_6c);
          puVar8 = (uint *)((int)local_124c + (uint)bVar11 * -8 + local_3c + 0x644);
          puVar6 = puVar5 + (uint)bVar11 * -2 + 1;
          *(uint *)((int)local_124c + local_3c + 0x640) = *puVar5;
          puVar5 = puVar8 + (uint)bVar11 * -2 + 1;
          *puVar8 = *puVar6;
          *puVar5 = puVar6[(uint)bVar11 * -2 + 1];
          puVar5[(uint)bVar11 * -2 + 1] = (puVar6 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
          FUN_005635a0(iVar2,local_14,local_84,local_80,local_1890);
          piVar10 = (int *)((int)local_188c + (uint)bVar11 * -8 + local_3c + 4);
          *(int *)((int)local_188c + local_3c) = local_124c[0x45c];
          piVar7 = piVar10 + (uint)bVar11 * -2 + 1;
          *piVar10 = local_124c[(uint)bVar11 * -2 + 0x45d];
          *piVar7 = local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x45e];
          piVar7[(uint)bVar11 * -2 + 1] =
               (local_124c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x45e)[(uint)bVar11 * -2 + 1];
        }
        local_14 = local_14 + 1;
        local_38 = local_38 + 4;
        local_3c = local_3c + 0x10;
      } while (local_14 < *(int *)(iVar2 + 0x1de78));
    }
    iVar4 = *(int *)(iVar2 + 0x1de9c + param_4 * 0x24);
    local_74 = iVar4;
    if (-1 < iVar4) {
      piVar10 = (int *)FUN_00563580(iVar2,iVar4,local_6c);
      piVar9 = local_124c + iVar4 * 4 + (uint)bVar11 * -2 + 0x191;
      piVar7 = piVar10 + (uint)bVar11 * -2 + 1;
      local_124c[iVar4 * 4 + 400] = *piVar10;
      *piVar9 = *piVar7;
      piVar9[(uint)bVar11 * -2 + 1] = piVar7[(uint)bVar11 * -2 + 1];
      (piVar9 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1] =
           (piVar7 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
      local_7c = iVar4 * 0x10;
      FUN_005635a0(iVar2,local_74,local_84,local_80,local_1890);
      piVar10 = (int *)((int)local_188c + (uint)bVar11 * -8 + local_7c + 4);
      *(int *)((int)local_188c + local_7c) = local_124c[0x3ec];
      piVar7 = piVar10 + (uint)bVar11 * -2 + 1;
      *piVar10 = local_124c[(uint)bVar11 * -2 + 0x3ed];
      *piVar7 = local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x3ee];
      piVar7[(uint)bVar11 * -2 + 1] =
           (local_124c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x3ee)[(uint)bVar11 * -2 + 1];
    }
    local_2c = 0;
    if (0 < *(int *)(iVar2 + 0x1de78)) {
      local_4c = 0;
      local_68 = param_1 + 0x6b0;
      local_5c = iVar2;
      local_1c = param_1;
      do {
        iVar4 = local_2c;
        if (-1 < *(int *)((int)local_124c + local_4c + 0xc80)) {
          local_24 = *(int *)(local_5c + 0x1de9c);
          piVar10 = local_124c + local_2c * 4 + (uint)bVar11 * -2 + 0x191;
          local_124c[1000] = local_124c[local_2c * 4 + 400];
          local_124c[(uint)bVar11 * -2 + 0x3e9] = *piVar10;
          local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x3ea] = piVar10[(uint)bVar11 * -2 + 1]
          ;
          (local_124c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x3ea)[(uint)bVar11 * -2 + 1] =
               (piVar10 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
          piVar10 = local_188c + iVar4 * 4 + (uint)bVar11 * -2 + 1;
          local_124c[0x3f4] = local_188c[iVar4 * 4];
          local_124c[(uint)bVar11 * -2 + 0x3f5] = *piVar10;
          iVar4 = local_24;
          local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x3f6] = piVar10[(uint)bVar11 * -2 + 1]
          ;
          (local_124c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x3f6)[(uint)bVar11 * -2 + 1] =
               (piVar10 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
          piVar10 = (int *)(local_1c + 0x6b4 + (uint)bVar11 * -8);
          local_124c[0x3f0] = *(uint *)(local_1c + 0x6b0);
          piVar7 = piVar10 + (uint)bVar11 * -2 + 1;
          local_124c[(uint)bVar11 * -2 + 0x3f1] = *piVar10;
          local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x3f2] = *piVar7;
          (local_124c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x3f2)[(uint)bVar11 * -2 + 1] =
               piVar7[(uint)bVar11 * -2 + 1];
          if (-1 < iVar4) {
            local_7c = iVar4 * 0x10;
            FUN_005b7750(local_124c + iVar4 * 4 + 400);
            piVar10 = local_124c + 0x404;
            local_124c[0x404] = local_124c[0x400];
            local_124c[(uint)bVar11 * -2 + 0x405] = local_124c[(uint)bVar11 * -2 + 0x401];
            local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x406] =
                 local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x402];
            (local_124c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x406)[(uint)bVar11 * -2 + 1] =
                 (local_124c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x402)[(uint)bVar11 * -2 + 1]
            ;
            FUN_005b77b0(local_124c + 1000,piVar10);
            local_124c[1000] = local_124c[0x428];
            local_124c[(uint)bVar11 * -2 + 0x3e9] = local_124c[(uint)bVar11 * -2 + 0x429];
            local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x3ea] =
                 local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x42a];
            (local_124c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x3ea)[(uint)bVar11 * -2 + 1] =
                 (local_124c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x42a)[(uint)bVar11 * -2 + 1]
            ;
            FUN_005b7750((int)local_188c + local_7c);
            piVar10 = local_124c + 0x408;
            local_124c[0x408] = local_124c[0x40c];
            local_124c[(uint)bVar11 * -2 + 0x409] = local_124c[(uint)bVar11 * -2 + 0x40d];
            local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x40a] =
                 local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x40e];
            (local_124c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x40a)[(uint)bVar11 * -2 + 1] =
                 (local_124c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x40e)[(uint)bVar11 * -2 + 1]
            ;
            FUN_005b77b0(local_124c + 0x3f4,piVar10);
            iVar4 = local_68 + local_7c;
            local_124c[0x3f4] = local_124c[0x414];
            local_124c[(uint)bVar11 * -2 + 0x3f5] = local_124c[(uint)bVar11 * -2 + 0x415];
            local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x3f6] =
                 local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x416];
            (local_124c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x3f6)[(uint)bVar11 * -2 + 1] =
                 (local_124c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x416)[(uint)bVar11 * -2 + 1]
            ;
            FUN_005b7750(iVar4);
            piVar10 = local_124c + 0x3f8;
            local_124c[0x3f8] = local_124c[0x418];
            local_124c[(uint)bVar11 * -2 + 0x3f9] = local_124c[(uint)bVar11 * -2 + 0x419];
            local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x3fa] =
                 local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x41a];
            (local_124c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x3fa)[(uint)bVar11 * -2 + 1] =
                 (local_124c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x41a)[(uint)bVar11 * -2 + 1]
            ;
            FUN_005b77b0(local_124c + 0x3f0,piVar10);
            local_124c[0x3f0] = local_124c[0x420];
            local_124c[(uint)bVar11 * -2 + 0x3f1] = local_124c[(uint)bVar11 * -2 + 0x421];
            local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x3f2] =
                 local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x422];
            (local_124c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x3f2)[(uint)bVar11 * -2 + 1] =
                 (local_124c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x422)[(uint)bVar11 * -2 + 1]
            ;
          }
          FUN_005b7750(local_124c + 1000);
          piVar10 = local_124c + 0x448;
          local_124c[0x448] = local_124c[0x454];
          local_124c[(uint)bVar11 * -2 + 0x449] = local_124c[(uint)bVar11 * -2 + 0x455];
          local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x44a] =
               local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x456];
          (local_124c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x44a)[(uint)bVar11 * -2 + 1] =
               (local_124c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x456)[(uint)bVar11 * -2 + 1];
          FUN_005b77b0(local_124c + 0x3f4,piVar10);
          piVar10 = local_124c + 0x43c;
          local_124c[0x43c] = local_124c[0x450];
          local_124c[(uint)bVar11 * -2 + 0x43d] = local_124c[(uint)bVar11 * -2 + 0x451];
          local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x43e] =
               local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x452];
          (local_124c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x43e)[(uint)bVar11 * -2 + 1] =
               (local_124c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x452)[(uint)bVar11 * -2 + 1];
          FUN_005b77b0(local_124c + 0x3f0,piVar10);
          iVar4 = local_24;
          local_124c[0x42c] = local_124c[0x458];
          local_124c[(uint)bVar11 * -2 + 0x42d] = local_124c[(uint)bVar11 * -2 + 0x459];
          local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x42e] =
               local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x45a];
          (local_124c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x42e)[(uint)bVar11 * -2 + 1] =
               (local_124c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x45a)[(uint)bVar11 * -2 + 1];
          if (iVar4 < 0) {
            piVar10 = local_124c + 0x458;
          }
          else {
            FUN_005b77b0(local_124c + 0x42c,iVar4 * 0x10 + local_68);
            piVar10 = local_124c + 0x434;
          }
          piVar9 = (int *)(local_1c + 0x6b4 + (uint)bVar11 * -8);
          piVar7 = piVar10 + (uint)bVar11 * -2 + 1;
          *(int *)(local_1c + 0x6b0) = *piVar10;
          piVar10 = piVar9 + (uint)bVar11 * -2 + 1;
          *piVar9 = *piVar7;
          *piVar10 = piVar7[(uint)bVar11 * -2 + 1];
          piVar10[(uint)bVar11 * -2 + 1] = (piVar7 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
        }
        local_2c = local_2c + 1;
        local_4c = local_4c + 4;
        local_5c = local_5c + 0x24;
        local_1c = local_1c + 0x10;
      } while (local_2c < *(int *)(iVar2 + 0x1de78));
    }
  }
  else {
    local_20 = 0;
    if (0 < *(int *)(iVar2 + 0x1de78)) {
      local_48 = param_1;
      do {
        iVar4 = local_20;
        iVar3 = FUN_00563630(iVar2,local_20,param_4);
        if (-1 < iVar3) {
          FUN_005635a0(iVar2,iVar4,local_84,local_80,local_1890);
          piVar10 = (int *)(local_48 + 0x6b4 + (uint)bVar11 * -8);
          *(int *)(local_48 + 0x6b0) = local_124c[0x3fc];
          piVar7 = piVar10 + (uint)bVar11 * -2 + 1;
          *piVar10 = local_124c[(uint)bVar11 * -2 + 0x3fd];
          *piVar7 = local_124c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x3fe];
          piVar7[(uint)bVar11 * -2 + 1] =
               (local_124c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x3fe)[(uint)bVar11 * -2 + 1];
        }
        local_48 = local_48 + 0x10;
        local_20 = local_20 + 1;
      } while (local_20 < *(int *)(iVar2 + 0x1de78));
    }
  }
  return;
}
