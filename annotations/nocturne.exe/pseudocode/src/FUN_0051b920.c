// Name: FUN_0051b920
// Address: 0051b920
// Address Range: [[0051b920, 0051c3c3]]
// Convention: unknown
// Signature: void FUN_0051b920(int param_1,int param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_0051b920(int param_1,int param_2,uint param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  byte bVar12;
  float afStackY_1a68 [120];
  float local_1870;
  uint local_186c [382];
  uint auStack_1274 [418];
  uint local_bec [400];
  int aiStack_5ac [100];
  int aiStack_41c [100];
  uint local_28c;
  uint auStack_288 [7];
  uint local_26c [4];
  uint local_25c;
  uint local_24c;
  uint local_23c [4];
  uint local_22c;
  uint auStack_228 [7];
  uint local_20c [4];
  uint local_1fc;
  uint local_1ec [4];
  uint local_1dc [4];
  uint local_1cc [4];
  uint local_1bc;
  uint local_1ac [4];
  uint local_19c;
  uint local_18c [4];
  uint local_17c [4];
  uint local_16c;
  uint local_15c;
  uint local_14c;
  uint local_13c;
  uint local_12c;
  uint local_11c [4];
  uint local_10c;
  uint auStack_108 [7];
  uint local_ec [4];
  uint local_dc [4];
  uint local_cc;
  uint local_bc [10];
  float local_94 [3];
  int local_88;
  int local_84;
  int local_80;
  int local_78;
  int local_74;
  uint local_70;
  int local_6c;
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
  
  bVar12 = 0;
  iVar6 = FUN_0051e0a0(param_1);
  FUN_004e2070(param_1,param_2,param_3,&local_84,&local_88,&stack0xffffe790);
  if (param_4 < 0) {
    local_34 = 0;
    if (0 < *(int *)(iVar6 + 0x28558)) {
      local_5c = param_1;
      local_3c = param_1;
      do {
        FUN_00517a80(iVar6,local_34,local_84,local_88,local_1870);
        iVar8 = local_3c;
        local_3c = local_3c + 4;
        puVar11 = (uint *)(local_5c + 0x6b4 + (uint)bVar12 * -8);
        *(uint *)(local_5c + 0x6b0) = local_24c;
        puVar9 = puVar11 + (uint)bVar12 * -2 + 1;
        *puVar11 = auStack_288[(uint)bVar12 * -2 + 0x10];
        *puVar9 = auStack_288[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x11];
        puVar9[(uint)bVar12 * -2 + 1] =
             (auStack_288 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x11)[(uint)bVar12 * -2 + 1];
        *(uint *)(iVar8 + 0xcf0) = *(uint *)(iVar8 + 0x514);
        local_34 = local_34 + 1;
        local_5c = local_5c + 0x10;
      } while (local_34 < *(int *)(iVar6 + 0x28558));
    }
    iVar8 = *(int *)(iVar6 + 0x29374);
    fVar1 = *(float *)(iVar8 + 4 + local_88 * 0xc);
    fVar2 = *(float *)(iVar8 + 8 + local_88 * 0xc);
    fVar5 = 1.0 - local_1870;
    local_84 = local_84 * 0xc;
    iVar6 = *(int *)(iVar6 + 0x29374);
    fVar3 = *(float *)(local_84 + 4 + iVar6);
    fVar4 = *(float *)(local_84 + 8 + iVar6);
    if ((float *)(param_1 + 0x6a4) != local_94) {
      *(float *)(param_1 + 0x6a4) =
           *(float *)(local_84 + iVar6) * fVar5 + *(float *)(iVar8 + local_88 * 0xc) * local_1870;
      *(float *)(param_1 + 0x6a8) = fVar3 * fVar5 + fVar1 * local_1870;
      *(float *)(param_1 + 0x6ac) = fVar4 * fVar5 + fVar2 * local_1870;
    }
    *(float *)(param_1 + 0x6a8) = *(float *)(param_1 + 0x50c) * *(float *)(param_1 + 0x6a8);
    *(float *)(param_1 + 0x6ac) = *(float *)(param_1 + 0x510) * *(float *)(param_1 + 0x6ac);
    *(float *)(param_1 + 0x6a4) = *(float *)(param_1 + 0x508) * *(float *)(param_1 + 0x6a4);
    return;
  }
  if (*(int *)(param_1 + 0x2250) == 1) {
    local_1c = 0;
    if (0 < *(int *)(iVar6 + 0x28558)) {
      local_54 = 0;
      local_38 = 0;
      do {
        iVar8 = FUN_00517b10(iVar6,local_1c,param_4);
        *(int *)((int)aiStack_5ac + local_38) = iVar8;
        if (-1 < iVar8) {
          FUN_00517a80(iVar6,local_1c,local_84,local_88,local_1870);
          puVar11 = (uint *)((int)local_bec + (uint)bVar12 * -8 + local_54 + 4);
          *(uint *)((int)local_bec + local_54) = local_cc;
          puVar9 = puVar11 + (uint)bVar12 * -2 + 1;
          *puVar11 = auStack_108[(uint)bVar12 * -2 + 0x10];
          *puVar9 = auStack_108[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x11];
          puVar9[(uint)bVar12 * -2 + 1] =
               (auStack_108 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x11)[(uint)bVar12 * -2 + 1];
        }
        local_1c = local_1c + 1;
        local_38 = local_38 + 4;
        local_54 = local_54 + 0x10;
      } while (local_1c < *(int *)(iVar6 + 0x28558));
    }
    iVar8 = *(int *)(iVar6 + param_4 * 0x24 + 0x2857c);
    if (-1 < iVar8) {
      FUN_00517a80(iVar6,iVar8,local_84,local_88,local_1870);
      puVar11 = local_bec + iVar8 * 4 + (uint)bVar12 * -2 + 1;
      local_bec[iVar8 * 4] = local_1bc;
      *puVar11 = auStack_228[(uint)bVar12 * -2 + 0x1c];
      puVar11[(uint)bVar12 * -2 + 1] = auStack_228[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x1d];
      (puVar11 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1] =
           (auStack_228 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x1d)[(uint)bVar12 * -2 + 1];
    }
    local_2c = 0;
    if (0 < *(int *)(iVar6 + 0x28558)) {
      local_58 = 0;
      local_74 = param_1 + 0x6b0;
      local_4c = iVar6;
      local_48 = param_1;
      do {
        if (-1 < *(int *)((int)aiStack_5ac + local_58)) {
          iVar8 = *(int *)(local_4c + 0x2857c);
          local_68 = local_2c * 0x10;
          if (iVar8 < 0) {
            puVar11 = local_bec + local_2c * 4;
          }
          else {
            local_80 = iVar8 * 0x10;
            FUN_0055d0d0(local_bec + iVar8 * 4);
            puVar11 = auStack_228 + 7;
            iVar8 = (int)local_bec + local_68;
            local_20c[0] = local_15c;
            auStack_228[(uint)bVar12 * -2 + 8] = auStack_228[(uint)bVar12 * -2 + 0x34];
            auStack_228[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 9] =
                 auStack_228[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x35];
            (auStack_228 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 9)[(uint)bVar12 * -2 + 1] =
                 (auStack_228 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x35)[(uint)bVar12 * -2 + 1]
            ;
            FUN_0055d130(iVar8,puVar11);
            iVar8 = local_74 + local_80;
            local_bc[0] = local_14c;
            auStack_108[(uint)bVar12 * -2 + 0x14] = auStack_228[(uint)bVar12 * -2 + 0x38];
            auStack_108[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x15] =
                 auStack_228[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x39];
            (auStack_108 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x15)[(uint)bVar12 * -2 + 1] =
                 (auStack_228 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x39)[(uint)bVar12 * -2 + 1]
            ;
            FUN_0055d130(auStack_108 + 0x13,iVar8);
            puVar11 = auStack_288 + 0x13;
          }
          puVar10 = (uint *)(local_48 + 0x6b4 + (uint)bVar12 * -8);
          puVar9 = puVar11 + (uint)bVar12 * -2 + 1;
          *(uint *)(local_48 + 0x6b0) = *puVar11;
          puVar11 = puVar10 + (uint)bVar12 * -2 + 1;
          *puVar10 = *puVar9;
          *puVar11 = puVar9[(uint)bVar12 * -2 + 1];
          puVar11[(uint)bVar12 * -2 + 1] = (puVar9 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
        }
        local_2c = local_2c + 1;
        local_58 = local_58 + 4;
        local_48 = local_48 + 0x10;
        local_4c = local_4c + 0x24;
      } while (local_2c < *(int *)(iVar6 + 0x28558));
    }
  }
  else if (*(int *)(param_1 + 0x2250) == 2) {
    iVar8 = FUN_0051e0a0(param_1);
    local_18 = 0;
    local_70 = *(uint *)(param_2 * 0x54c + 0x9c8 + iVar8);
    if (0 < *(int *)(iVar6 + 0x28558)) {
      local_44 = 0;
      local_40 = 0;
      do {
        iVar8 = FUN_00517b10(iVar6,local_18,param_4);
        *(int *)((int)aiStack_41c + local_40) = iVar8;
        if (-1 < iVar8) {
          puVar11 = (uint *)FUN_00517a60(iVar6,local_18,local_70);
          puVar10 = (uint *)((int)auStack_1274 + (uint)bVar12 * -8 + local_44 + 0x4c);
          puVar9 = puVar11 + (uint)bVar12 * -2 + 1;
          *(uint *)((int)auStack_1274 + local_44 + 0x48) = *puVar11;
          puVar11 = puVar10 + (uint)bVar12 * -2 + 1;
          *puVar10 = *puVar9;
          *puVar11 = puVar9[(uint)bVar12 * -2 + 1];
          puVar11[(uint)bVar12 * -2 + 1] = (puVar9 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
          FUN_00517a80(iVar6,local_18,local_84,local_88,local_1870);
          puVar11 = (uint *)((int)local_186c + (uint)bVar12 * -8 + local_44 + 4);
          *(uint *)((int)local_186c + local_44) = local_16c;
          puVar9 = puVar11 + (uint)bVar12 * -2 + 1;
          *puVar11 = auStack_228[(uint)bVar12 * -2 + 0x30];
          *puVar9 = auStack_228[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x31];
          puVar9[(uint)bVar12 * -2 + 1] =
               (auStack_228 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x31)[(uint)bVar12 * -2 + 1];
        }
        local_18 = local_18 + 1;
        local_40 = local_40 + 4;
        local_44 = local_44 + 0x10;
      } while (local_18 < *(int *)(iVar6 + 0x28558));
    }
    iVar8 = *(int *)(iVar6 + 0x2857c + param_4 * 0x24);
    local_78 = iVar8;
    if (-1 < iVar8) {
      puVar11 = (uint *)FUN_00517a60(iVar6,iVar8,local_70);
      puVar10 = auStack_1274 + iVar8 * 4 + (uint)bVar12 * -2 + 0x13;
      puVar9 = puVar11 + (uint)bVar12 * -2 + 1;
      auStack_1274[iVar8 * 4 + 0x12] = *puVar11;
      *puVar10 = *puVar9;
      puVar10[(uint)bVar12 * -2 + 1] = puVar9[(uint)bVar12 * -2 + 1];
      (puVar10 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1] =
           (puVar9 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
      local_80 = iVar8 * 0x10;
      FUN_00517a80(iVar6,local_78,local_84,local_88,local_1870);
      puVar11 = (uint *)((int)local_186c + (uint)bVar12 * -8 + local_80 + 4);
      *(uint *)((int)local_186c + local_80) = local_22c;
      puVar9 = puVar11 + (uint)bVar12 * -2 + 1;
      *puVar11 = auStack_228[(uint)bVar12 * -2];
      *puVar9 = auStack_228[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
      puVar9[(uint)bVar12 * -2 + 1] =
           (auStack_228 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
    }
    local_30 = 0;
    if (0 < *(int *)(iVar6 + 0x28558)) {
      local_64 = 0;
      local_6c = param_1 + 0x6b0;
      local_50 = iVar6;
      local_20 = param_1;
      do {
        iVar8 = local_30;
        if (-1 < *(int *)((int)aiStack_41c + local_64)) {
          local_28 = *(int *)(local_50 + 0x2857c);
          puVar11 = auStack_1274 + local_30 * 4 + (uint)bVar12 * -2 + 0x13;
          local_1cc[0] = auStack_1274[local_30 * 4 + 0x12];
          auStack_228[(uint)bVar12 * -2 + 0x18] = *puVar11;
          auStack_228[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x19] = puVar11[(uint)bVar12 * -2 + 1]
          ;
          (auStack_228 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x19)[(uint)bVar12 * -2 + 1] =
               (puVar11 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
          puVar11 = local_186c + iVar8 * 4 + (uint)bVar12 * -2 + 1;
          local_dc[0] = local_186c[iVar8 * 4];
          auStack_108[(uint)bVar12 * -2 + 0xc] = *puVar11;
          iVar8 = local_28;
          auStack_108[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd] = puVar11[(uint)bVar12 * -2 + 1];
          (auStack_108 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd)[(uint)bVar12 * -2 + 1] =
               (puVar11 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
          puVar11 = (uint *)(local_20 + 0x6b4 + (uint)bVar12 * -8);
          local_ec[0] = *(uint *)(local_20 + 0x6b0);
          puVar9 = puVar11 + (uint)bVar12 * -2 + 1;
          auStack_108[(uint)bVar12 * -2 + 8] = *puVar11;
          auStack_108[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 9] = *puVar9;
          (auStack_108 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 9)[(uint)bVar12 * -2 + 1] =
               puVar9[(uint)bVar12 * -2 + 1];
          if (-1 < iVar8) {
            local_80 = iVar8 * 0x10;
            FUN_0055d0d0(auStack_1274 + iVar8 * 4 + 0x12);
            puVar11 = auStack_228 + 0x1f;
            local_1ac[0] = auStack_108[3];
            auStack_228[(uint)bVar12 * -2 + 0x20] = auStack_108[(uint)bVar12 * -2 + 4];
            auStack_228[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x21] =
                 auStack_108[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 5];
            (auStack_228 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x21)[(uint)bVar12 * -2 + 1] =
                 (auStack_108 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 5)[(uint)bVar12 * -2 + 1];
            FUN_0055d130(auStack_228 + 0x17,puVar11);
            local_1cc[0] = local_25c;
            auStack_228[(uint)bVar12 * -2 + 0x18] = auStack_288[(uint)bVar12 * -2 + 0xc];
            auStack_228[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x19] =
                 auStack_288[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd];
            (auStack_228 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x19)[(uint)bVar12 * -2 + 1] =
                 (auStack_288 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd)[(uint)bVar12 * -2 + 1];
            FUN_0055d0d0((int)local_186c + local_80);
            puVar11 = &local_28c;
            local_28c = local_1fc;
            auStack_288[(uint)bVar12 * -2] = auStack_228[(uint)bVar12 * -2 + 0xc];
            auStack_288[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
                 auStack_228[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd];
            (auStack_288 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1] =
                 (auStack_228 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd)[(uint)bVar12 * -2 + 1];
            FUN_0055d130(auStack_108 + 0xb,puVar11);
            iVar8 = local_6c + local_80;
            local_dc[0] = local_19c;
            auStack_108[(uint)bVar12 * -2 + 0xc] = auStack_228[(uint)bVar12 * -2 + 0x24];
            auStack_108[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd] =
                 auStack_228[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x25];
            (auStack_108 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd)[(uint)bVar12 * -2 + 1] =
                 (auStack_228 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x25)[(uint)bVar12 * -2 + 1]
            ;
            FUN_0055d0d0(iVar8);
            puVar11 = auStack_228 + 0x27;
            local_18c[0] = local_10c;
            auStack_228[(uint)bVar12 * -2 + 0x28] = auStack_108[(uint)bVar12 * -2];
            auStack_228[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x29] =
                 auStack_108[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
            (auStack_228 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x29)[(uint)bVar12 * -2 + 1] =
                 (auStack_108 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
            FUN_0055d130(auStack_108 + 7,puVar11);
            local_ec[0] = local_13c;
            auStack_108[(uint)bVar12 * -2 + 8] = auStack_228[(uint)bVar12 * -2 + 0x3c];
            auStack_108[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 9] =
                 auStack_228[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x3d];
            (auStack_108 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 9)[(uint)bVar12 * -2 + 1] =
                 (auStack_228 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x3d)[(uint)bVar12 * -2 + 1]
            ;
          }
          FUN_0055d0d0(auStack_228 + 0x17);
          puVar11 = auStack_228 + 0x13;
          local_1dc[0] = local_12c;
          auStack_228[(uint)bVar12 * -2 + 0x14] = auStack_228[(uint)bVar12 * -2 + 0x40];
          auStack_228[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x15] =
               auStack_228[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x41];
          (auStack_228 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x15)[(uint)bVar12 * -2 + 1] =
               (auStack_228 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x41)[(uint)bVar12 * -2 + 1];
          FUN_0055d130(auStack_108 + 0xb,puVar11);
          puVar11 = auStack_228 + 0xf;
          local_1ec[0] = auStack_288[3];
          auStack_228[(uint)bVar12 * -2 + 0x10] = auStack_288[(uint)bVar12 * -2 + 4];
          auStack_228[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x11] =
               auStack_288[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 5];
          (auStack_228 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x11)[(uint)bVar12 * -2 + 1] =
               (auStack_288 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 5)[(uint)bVar12 * -2 + 1];
          FUN_0055d130(auStack_108 + 7,puVar11);
          iVar8 = local_28;
          local_17c[0] = local_26c[0];
          auStack_228[(uint)bVar12 * -2 + 0x2c] = auStack_288[(uint)bVar12 * -2 + 8];
          auStack_228[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x2d] =
               auStack_288[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 9];
          (auStack_228 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x2d)[(uint)bVar12 * -2 + 1] =
               (auStack_288 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 9)[(uint)bVar12 * -2 + 1];
          if (iVar8 < 0) {
            puVar11 = auStack_288 + 7;
          }
          else {
            FUN_0055d130(auStack_228 + 0x2b,iVar8 * 0x10 + local_6c);
            puVar11 = auStack_228 + 0x43;
          }
          puVar10 = (uint *)(local_20 + 0x6b4 + (uint)bVar12 * -8);
          puVar9 = puVar11 + (uint)bVar12 * -2 + 1;
          *(uint *)(local_20 + 0x6b0) = *puVar11;
          puVar11 = puVar10 + (uint)bVar12 * -2 + 1;
          *puVar10 = *puVar9;
          *puVar11 = puVar9[(uint)bVar12 * -2 + 1];
          puVar11[(uint)bVar12 * -2 + 1] = (puVar9 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
        }
        local_30 = local_30 + 1;
        local_64 = local_64 + 4;
        local_50 = local_50 + 0x24;
        local_20 = local_20 + 0x10;
      } while (local_30 < *(int *)(iVar6 + 0x28558));
    }
  }
  else {
    local_24 = 0;
    if (0 < *(int *)(iVar6 + 0x28558)) {
      local_60 = param_1;
      do {
        iVar8 = local_24;
        iVar7 = FUN_00517b10(iVar6,local_24,param_4);
        if (-1 < iVar7) {
          FUN_00517a80(iVar6,iVar8,local_84,local_88,local_1870);
          puVar11 = (uint *)(local_60 + 0x6b4 + (uint)bVar12 * -8);
          *(uint *)(local_60 + 0x6b0) = auStack_228[3];
          puVar9 = puVar11 + (uint)bVar12 * -2 + 1;
          *puVar11 = auStack_228[(uint)bVar12 * -2 + 4];
          *puVar9 = auStack_228[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 5];
          puVar9[(uint)bVar12 * -2 + 1] =
               (auStack_228 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 5)[(uint)bVar12 * -2 + 1];
        }
        local_60 = local_60 + 0x10;
        local_24 = local_24 + 1;
      } while (local_24 < *(int *)(iVar6 + 0x28558));
    }
  }
  return;
}
