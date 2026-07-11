// Name: FUN_005384d0
// Address: 005384d0
// Address Range: [[005384d0, 005396c1]]
// Convention: unknown
// Signature: void FUN_005384d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005384d0(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar9;
  byte bVar11;
  float10 fVar12;
  uint *puVar13;
  float local_1f0c;
  float local_1f08;
  float local_1f04;
  float local_1ef8;
  float local_1ef4;
  float local_1ef0;
  float local_1ee0;
  float local_1edc;
  float fStack_1ed8;
  uint local_1ecc [2];
  uint local_1ec4;
  uint auStack_1bcc [1511];
  byte local_430 [40];
  byte local_408 [24];
  uint local_3f0;
  uint auStack_3ec [7];
  uint local_3d0;
  uint local_3c0 [4];
  uint local_3b0;
  uint auStack_3ac [7];
  uint local_390 [4];
  uint local_380;
  uint auStack_37c [7];
  uint local_360 [4];
  uint local_350;
  uint local_340;
  uint local_330 [4];
  uint local_320;
  uint local_310 [4];
  uint local_300 [4];
  uint local_2f0;
  uint auStack_2ec [7];
  uint local_2d0;
  uint local_2c0;
  uint local_2b0;
  uint local_2a0 [4];
  uint local_290 [4];
  uint auStack_280 [4];
  uint auStack_270 [4];
  uint local_260;
  uint local_250 [4];
  uint local_240;
  uint auStack_23c [7];
  uint local_220;
  uint local_210 [4];
  uint local_200;
  uint local_1f0 [4];
  uint local_1e0 [4];
  uint local_1d0;
  uint local_1c0 [4];
  uint uStack_1b0;
  uint local_1a0 [4];
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  byte local_16c [4];
  float local_168;
  float local_160;
  float local_15c;
  float local_158;
  byte local_154 [12];
  uint local_148;
  uint local_144;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float local_130;
  float local_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  uint uStack_118;
  uint uStack_114;
  byte local_10c [12];
  float local_100;
  float local_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  byte local_c4 [4];
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  byte local_a0 [12];
  float local_94;
  float local_90;
  float local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  float local_70;
  float local_6c;
  float local_68;
  byte local_64 [12];
  byte local_58 [12];
  float local_4c;
  uint local_48;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  uint local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  uint *puVar8;
  uint *puVar10;
  
  bVar11 = 0;
  local_18 = (float)FUN_004e18d0(param_1 + 0x150,0);
  local_1f08 = local_18;
  if (*(int *)(param_1 + 0x1fabc) < 0x3e19999a) {
    local_1f08 = (*(float *)(param_1 + 0x1fabc) / _DAT_0059582f) * local_18;
  }
  if (0.85 < *(float *)(param_1 + 0x1fabc)) {
    local_1f08 = ((1.0 - *(float *)(param_1 + 0x1fabc)) / 0.15) * local_1f08;
  }
  FUN_0051b8a0(param_1 + 0x150);
  if ((0.0 < local_1f08) && (-1 < *(int *)(param_1 + 0x1faec))) {
    FUN_005396d0(param_1,local_1ecc);
    local_1ecc[0] = 0;
    local_1ec4 = 0;
    FUN_0051cab0(param_1 + 0x150,local_1ecc,local_1f08,0xffffffff,&LAB_0051b650);
  }
  FUN_00539b10(param_1);
  iVar1 = param_1 + 0x150;
  pfVar5 = (float *)(param_1 + 0x1fb00);
  iVar3 = FUN_004e1660(iVar1);
  iVar3 = *(int *)(iVar3 + 0x24);
  if (iVar3 == 0x15) {
    local_160 = *pfVar5;
    local_15c = *(float *)(param_1 + 0x1fb04);
    local_158 = *(float *)(param_1 + 0x1fb08);
    FUN_0051d2a0(iVar1,&local_184,_DAT_02dc9f60);
    local_190 = local_160 - local_184;
    local_18c = local_15c - local_180;
    local_188 = local_158 - local_17c;
    FUN_0054e4a0(&local_7c,auStack_23c + 0x2b);
    local_1ee0 = *(float *)(param_1 + 0x158);
    if ((float)_DAT_0059589f <= local_1ee0) {
      local_1ee0 = 1.0 - (local_1ee0 + (float)_DAT_005958a7) * (float)_DAT_005958af;
      if (local_1ee0 < 0.0) {
        local_1ee0 = 0.0;
      }
    }
    else {
      local_1ee0 = local_1ee0 * (float)_DAT_005958af;
    }
    FUN_0055d4a0(local_7c);
    local_360[0] = local_320;
    auStack_37c[(uint)bVar11 * -2 + 8] = auStack_37c[(uint)bVar11 * -2 + 0x18];
    auStack_37c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 9] =
         auStack_37c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19];
    (auStack_37c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 9)[(uint)bVar11 * -2 + 1] =
         (auStack_37c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19)[(uint)bVar11 * -2 + 1];
    local_18 = (float)(param_1 + 0x150);
    FUN_0051d7a0(local_18,auStack_37c + 7,local_1ee0,_DAT_02dc9f94,&LAB_0051b650);
    FUN_0055d4e0(local_78);
    puVar13 = local_390;
    puVar9 = local_390;
    puVar7 = local_300;
    local_1f0c = local_1ee0;
    uVar6 = _DAT_02dc9f60;
LAB_00538745:
    puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
    puVar8 = puVar7 + (uint)bVar11 * -2 + 1;
    *puVar9 = *puVar7;
    *puVar10 = *puVar8;
    puVar10[(uint)bVar11 * -2 + 1] = puVar8[(uint)bVar11 * -2 + 1];
    (puVar10 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1] =
         (puVar8 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
  }
  else if (iVar3 == 0x13) {
    local_e8 = *pfVar5;
    local_e4 = *(float *)(param_1 + 0x1fb04);
    local_e0 = *(float *)(param_1 + 0x1fb08);
    FUN_0051d2a0(iVar1,&local_b8,_DAT_02dc9f60);
    local_70 = local_e8 - local_b8;
    local_6c = local_e4 - local_b4;
    local_68 = local_e0 - local_b0;
    FUN_0054e4a0(&local_4c,&local_70);
    local_1ef4 = *(float *)(param_1 + 0x158);
    if ((float)_DAT_00595887 <= local_1ef4) {
      local_1ef4 = 1.0 - (local_1ef4 + (float)_DAT_0059588f) * (float)_DAT_00595857;
      if (local_1ef4 < 0.0) {
        local_1ef4 = 0.0;
      }
    }
    else {
      local_1ef4 = local_1ef4 * (float)_DAT_00595897;
    }
    FUN_0055d4a0(-local_4c);
    auStack_23c[3] = local_2c0;
    auStack_23c[(uint)bVar11 * -2 + 4] = auStack_2ec[(uint)bVar11 * -2 + 0xc];
    auStack_23c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 5] =
         auStack_2ec[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
    (auStack_23c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 5)[(uint)bVar11 * -2 + 1] =
         (auStack_2ec + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd)[(uint)bVar11 * -2 + 1];
    local_18 = (float)(param_1 + 0x150);
    FUN_0051d7a0(param_1 + 0x150,auStack_23c + 3,local_1ef4,_DAT_02dc9f60,&LAB_0051b650);
    FUN_0055d4e0(local_48);
    local_1e0[0] = local_240;
    auStack_23c[(uint)bVar11 * -2 + 0x18] = auStack_23c[(uint)bVar11 * -2];
    auStack_23c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19] =
         auStack_23c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    (auStack_23c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19)[(uint)bVar11 * -2 + 1] =
         (auStack_23c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
    puVar13 = auStack_23c + 0x17;
    local_1f0c = local_1ef4;
    uVar6 = _DAT_02dc9f60;
  }
  else {
    if (iVar3 != 0x16) {
      if (iVar3 == 0x1f) {
        if (*(int *)(param_1 + 0x1fa10) == 0) {
          uVar6 = FUN_004c6640(_DAT_02dc9f2c,local_10c);
          pfVar4 = (float *)FUN_0040a290(param_1,local_154,uVar6);
          if (pfVar5 != pfVar4) {
            *pfVar5 = *pfVar4;
            *(float *)(param_1 + 0x1fb04) = pfVar4[1];
            *(float *)(param_1 + 0x1fb08) = pfVar4[2];
          }
        }
        else {
          uVar6 = FUN_004c6640(*(int *)(param_1 + 0x1fa10),local_58);
          pfVar4 = (float *)FUN_0040a290(param_1,local_a0,uVar6);
          if (pfVar5 != pfVar4) {
            *pfVar5 = *pfVar4;
            *(float *)(param_1 + 0x1fb04) = pfVar4[1];
            *(float *)(param_1 + 0x1fb08) = pfVar4[2];
          }
          _DAT_02dc9f2c = *(uint *)(param_1 + 0x1fa10);
        }
        local_100 = *(float *)(param_1 + 0x1fb00);
        local_fc = *(float *)(param_1 + 0x1fb04);
        local_f8 = *(float *)(param_1 + 0x1fb08);
        FUN_0051d2a0(param_1 + 0x150,&local_94,_DAT_02dc9f60);
        local_130 = local_100 - local_94;
        local_12c = local_fc - local_90;
        local_128 = local_f8 - local_8c;
        local_ac = local_130;
        local_a8 = local_12c;
        local_a4 = local_128;
        FUN_0054e4a0(&local_148,&local_ac);
        local_1f04 = *(float *)(param_1 + 0x158);
        if ((float)_DAT_0059584f <= local_1f04) {
          if (_DAT_00595837 <= (double)local_1f04) {
            local_1f04 = 1.0 - (local_1f04 + (float)_DAT_0059583f) * (float)_DAT_00595847;
            if (local_1f04 < 0.0) {
              local_1f04 = 0.0;
            }
          }
          else {
            local_1f04 = 1.0;
          }
        }
        else {
          local_1f04 = local_1f04 * (float)_DAT_00595857;
        }
        local_24 = SQRT(local_128 * local_128 + local_130 * local_130 + local_12c * local_12c);
        if (local_24 < _DAT_005a2738) {
          fVar12 = (float10)local_24 / (float10)_DAT_005a2738;
          FUN_00565ca4();
          local_1c = (float)fVar12;
          FUN_0055d4e0(local_1c);
          local_2a0[0] = local_2d0;
          auStack_2ec[(uint)bVar11 * -2 + 0x14] = auStack_2ec[(uint)bVar11 * -2 + 8];
          auStack_2ec[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x15] =
               auStack_2ec[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 9];
          (auStack_2ec + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x15)[(uint)bVar11 * -2 + 1] =
               (auStack_2ec + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 9)[(uint)bVar11 * -2 + 1];
          local_18 = (float)(param_1 + 0x150);
          FUN_0051d7a0(param_1 + 0x150,auStack_2ec + 0x13,local_1f04,_DAT_02dc9f60,&LAB_0051b650);
          FUN_0055d4e0(-local_1c);
          local_1c0[0] = local_2b0;
          auStack_23c[(uint)bVar11 * -2 + 0x20] = auStack_2ec[(uint)bVar11 * -2 + 0x10];
          auStack_23c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x21] =
               auStack_2ec[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x11];
          (auStack_23c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x21)[(uint)bVar11 * -2 + 1] =
               (auStack_2ec + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x11)[(uint)bVar11 * -2 + 1];
          FUN_0051d7a0(local_18,auStack_23c + 0x1f,local_1f04,_DAT_02dc9f68,&LAB_0051b650);
        }
        FUN_0055d4a0(local_148);
        local_3b0 = local_1d0;
        auStack_3ac[(uint)bVar11 * -2] = auStack_23c[(uint)bVar11 * -2 + 0x1c];
        auStack_3ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             auStack_23c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1d];
        (auStack_3ac + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1] =
             (auStack_23c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1d)[(uint)bVar11 * -2 + 1];
        local_18 = (float)(param_1 + 0x150);
        FUN_0051d7a0(local_18,&local_3b0,local_1f04,_DAT_02dc9f60,&LAB_0051b650);
        FUN_0055d4e0(local_144);
        puVar13 = auStack_2ec + 0x27;
        puVar9 = auStack_2ec + 0x27;
        puVar7 = auStack_3ac + 3;
        local_1f0c = local_1f04;
        uVar6 = _DAT_02dc9f60;
      }
      else if (iVar3 == 0x17) {
        local_1ef8 = *(float *)(param_1 + 0x158) * (float)_DAT_00595847;
        if (1.0 < local_1ef8) {
          local_1ef8 = 1.0;
        }
        fVar12 = (float10)fpatan((float10)*(float *)(param_1 + 0x1fb18) / (float10)_DAT_005a2738,
                                 (float10)1);
        local_38 = (float)fVar12;
        FUN_0055d4e0(local_38);
        local_330[0] = local_3f0;
        auStack_37c[(uint)bVar11 * -2 + 0x14] = auStack_3ec[(uint)bVar11 * -2];
        auStack_37c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x15] =
             auStack_3ec[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        (auStack_37c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x15)[(uint)bVar11 * -2 + 1] =
             (auStack_3ec + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
        local_18 = (float)(param_1 + 0x150);
        FUN_0051d7a0(local_18,auStack_37c + 0x13,local_1ef8,_DAT_02dc9f60,&LAB_0051b650);
        FUN_0055d4e0(-local_38);
        puVar13 = auStack_37c + 0x13;
        puVar9 = auStack_37c + 0x13;
        puVar7 = auStack_37c + 0x1b;
        local_1f0c = local_1ef8;
        uVar6 = _DAT_02dc9f5c;
      }
      else {
        if (iVar3 != 0x18) {
          if (iVar3 == 0x19) {
            local_1f0c = 1.0 - (*(float *)(param_1 + 0x158) + (float)_DAT_0059583f) *
                               (float)_DAT_00595847;
            if (local_1f0c < 0.0) {
              local_1f0c = 0.0;
            }
            if (1.0 < local_1f0c) {
              local_1f0c = 1.0;
            }
            fVar12 = (float10)fpatan((float10)*(float *)(param_1 + 0x1fb18) / (float10)_DAT_005a2738
                                     ,(float10)1);
            local_34 = (float)fVar12;
            FUN_0055d4e0(local_34);
            local_1f0[0] = local_260;
            auStack_23c[(uint)bVar11 * -2 + 0x14] = auStack_2ec[(uint)bVar11 * -2 + 0x24];
            auStack_23c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x15] =
                 auStack_2ec[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x25];
            (auStack_23c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x15)[(uint)bVar11 * -2 + 1] =
                 (auStack_2ec + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x25)[(uint)bVar11 * -2 + 1]
            ;
            local_18 = (float)(param_1 + 0x150);
            FUN_0051d7a0(param_1 + 0x150,auStack_23c + 0x13,local_1f0c,_DAT_02dc9f60,&LAB_0051b650);
            FUN_0055d4e0(-local_34);
            local_1f0[0] = local_220;
            auStack_23c[(uint)bVar11 * -2 + 0x14] = auStack_23c[(uint)bVar11 * -2 + 8];
            auStack_23c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x15] =
                 auStack_23c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 9];
            (auStack_23c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x15)[(uint)bVar11 * -2 + 1] =
                 (auStack_23c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 9)[(uint)bVar11 * -2 + 1];
            puVar13 = auStack_23c + 0x13;
            uVar6 = _DAT_02dc9f5c;
          }
          else {
            if (iVar3 != 0x1a) goto LAB_00538751;
            local_1ef0 = *(float *)(param_1 + 0x158);
            if (local_1ef0 < (float)_DAT_00595837) {
              local_1ef0 = local_1ef0 * (float)_DAT_00595847;
            }
            else {
              local_1ef0 = 1.0 - (local_1ef0 + (float)_DAT_0059583f) * (float)_DAT_00595847;
            }
            if (1.0 < local_1ef0) {
              local_1ef0 = 1.0;
            }
            if (local_1ef0 < 0.0) {
              local_1ef0 = 0.0;
            }
            local_18 = (float)(param_1 + 0x150);
            FUN_0051d2a0(local_18,local_16c,_DAT_02dc9f60);
            fVar12 = (float10)local_168 - (float10)*(float *)(param_1 + 0x1fb04);
            FUN_00566c81();
            FUN_0055d4a0((float)fVar12);
            fVar2 = local_18;
            auStack_3ec[3] = local_340;
            auStack_3ec[(uint)bVar11 * -2 + 4] = auStack_37c[(uint)bVar11 * -2 + 0x10];
            auStack_3ec[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 5] =
                 auStack_37c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x11];
            (auStack_3ec + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 5)[(uint)bVar11 * -2 + 1] =
                 (auStack_37c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x11)[(uint)bVar11 * -2 + 1]
            ;
            FUN_0051d7a0(fVar2,auStack_3ec + 3,local_1ef0,_DAT_02dc9f60,&LAB_0051b650);
            FUN_0051d7a0(local_18,auStack_3ec + 3,local_1ef0,_DAT_02dc9f5c,&LAB_0051b650);
            fVar12 = (float10)fpatan((float10)*(float *)(param_1 + 0x1fb18) / (float10)_DAT_005a2738
                                     ,(float10)1);
            local_2c = (float)fVar12;
            FUN_0055d4e0(local_2c);
            fVar2 = local_18;
            local_210[0] = local_200;
            auStack_23c[(uint)bVar11 * -2 + 0xc] = auStack_23c[(uint)bVar11 * -2 + 0x10];
            auStack_23c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
                 auStack_23c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x11];
            (auStack_23c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd)[(uint)bVar11 * -2 + 1] =
                 (auStack_23c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x11)[(uint)bVar11 * -2 + 1]
            ;
            FUN_0051d7a0(fVar2,auStack_23c + 0xb,local_1ef0,_DAT_02dc9f60,&LAB_0051b650);
            FUN_0055d4e0(-local_2c);
            puVar13 = auStack_23c + 0xb;
            local_210[0] = local_350;
            auStack_23c[(uint)bVar11 * -2 + 0xc] = auStack_37c[(uint)bVar11 * -2 + 0xc];
            auStack_23c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
                 auStack_37c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
            (auStack_23c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd)[(uint)bVar11 * -2 + 1] =
                 (auStack_37c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd)[(uint)bVar11 * -2 + 1];
            local_1f0c = local_1ef0;
            uVar6 = _DAT_02dc9f5c;
          }
          goto LAB_00538749;
        }
        local_1edc = *(float *)(param_1 + 0x158);
        if ((float)_DAT_00595837 <= local_1edc) {
          local_1edc = 1.0 - (local_1edc + (float)_DAT_0059583f) * (float)_DAT_00595847;
        }
        else {
          local_1edc = local_1edc * (float)_DAT_00595847;
        }
        if (1.0 < local_1edc) {
          local_1edc = 1.0;
        }
        if (local_1edc < 0.0) {
          local_1edc = 0.0;
        }
        FUN_0051d2a0(param_1 + 0x150,local_c4,_DAT_02dc9f60);
        local_20 = (*(float *)(param_1 + 0x1fb04) + *(float *)(param_1 + 0x1fb1c)) -
                   *(float *)(param_1 + 0x1fb10);
        if (*(int *)(param_1 + 0x1fa08) != 0) {
          _DAT_02dc9fe8 = (float)FUN_00534fc0(*(int *)(param_1 + 0x1fa08));
          local_18 = _DAT_02dc9fe8;
        }
        local_20 = local_20 - _DAT_02dc9fe8;
        fVar12 = (float10)local_c0 - (float10)local_20;
        FUN_00566c81();
        FUN_0055d4a0((float)fVar12);
        local_290[0] = local_380;
        auStack_2ec[(uint)bVar11 * -2 + 0x18] = auStack_37c[(uint)bVar11 * -2];
        auStack_2ec[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19] =
             auStack_37c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        (auStack_2ec + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19)[(uint)bVar11 * -2 + 1] =
             (auStack_37c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
        local_18 = (float)(param_1 + 0x150);
        FUN_0051d7a0(param_1 + 0x150,auStack_2ec + 0x17,local_1edc,_DAT_02dc9f60,&LAB_0051b650);
        FUN_0051d7a0(local_18,auStack_2ec + 0x17,local_1edc,_DAT_02dc9f5c,&LAB_0051b650);
        fVar12 = (float10)fpatan((float10)*(float *)(param_1 + 0x1fb18) / (float10)_DAT_005a2738,
                                 (float10)1);
        local_30 = (float)fVar12;
        FUN_0055d4e0(local_30);
        local_1a0[0] = local_2f0;
        auStack_23c[(uint)bVar11 * -2 + 0x28] = auStack_2ec[(uint)bVar11 * -2];
        auStack_23c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x29] =
             auStack_2ec[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        (auStack_23c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x29)[(uint)bVar11 * -2 + 1] =
             (auStack_2ec + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
        FUN_0051d7a0(local_18,auStack_23c + 0x27,local_1edc,_DAT_02dc9f60,&LAB_0051b650);
        FUN_0055d4e0(-local_30);
        puVar13 = auStack_23c + 0x27;
        puVar9 = auStack_23c + 0x27;
        puVar7 = auStack_3ec + 0xb;
        local_1f0c = local_1edc;
        uVar6 = _DAT_02dc9f5c;
      }
      goto LAB_00538745;
    }
    FUN_0044d7a0(local_430,param_1 + 0x1fa2c);
    if ((DAT_02dc9f30 & 1) == 0) {
      DAT_02dc9f30 = DAT_02dc9f30 | 1;
    }
    iVar1 = *(int *)(param_1 + 0x1fa1c);
    if (iVar1 != 0) {
      pfVar5 = (float *)(**(code **)(*(int *)(iVar1 + 0x14c) + 0x14))(iVar1,local_408);
      fStack_d0 = *pfVar5 + pfVar5[3];
      fStack_cc = pfVar5[1] + pfVar5[4];
      fStack_178 = fStack_d0 * _DAT_0059585f;
      fStack_c8 = pfVar5[2] + pfVar5[5];
      fStack_174 = fStack_cc * _DAT_0059585f;
      fStack_170 = fStack_c8 * _DAT_0059585f;
      if (&stack0x00000000 != &DAT_02dca098) {
        _DAT_02dc9f20 = fStack_178;
        _DAT_02dc9f24 = fStack_174;
        _DAT_02dc9f28 = fStack_170;
      }
    }
    pfVar5 = (float *)FUN_0044da40(local_430,local_64,&DAT_02dc9f20);
    fStack_13c = *(float *)(param_1 + 0x1fa20) + *pfVar5;
    fStack_138 = *(float *)(param_1 + 0x1fa24) + pfVar5[1];
    fStack_134 = *(float *)(param_1 + 0x1fa28) + pfVar5[2];
    FUN_0040a290(param_1,&fStack_124,&fStack_13c);
    FUN_0051d2a0(param_1 + 0x150,&fStack_dc,_DAT_02dc9f60);
    fStack_f4 = fStack_124 - fStack_dc;
    fStack_f0 = fStack_120 - fStack_d8;
    fStack_ec = fStack_11c - fStack_d4;
    FUN_0054e4a0(&uStack_118,&fStack_f4);
    fStack_1ed8 = *(float *)(param_1 + 0x158);
    if ((float)_DAT_00595867 <= fStack_1ed8) {
      fStack_1ed8 = 1.0 - (fStack_1ed8 + (float)_DAT_0059586f) * (float)_DAT_00595877;
      if (fStack_1ed8 < 0.0) {
        fStack_1ed8 = 0.0;
      }
    }
    else {
      fStack_1ed8 = fStack_1ed8 * (float)_DAT_0059587f;
    }
    FUN_0055d4a0(uStack_118);
    auStack_280[0] = uStack_1b0;
    auStack_2ec[(uint)bVar11 * -2 + 0x1c] = auStack_23c[(uint)bVar11 * -2 + 0x24];
    auStack_2ec[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1d] =
         auStack_23c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x25];
    (auStack_2ec + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1d)[(uint)bVar11 * -2 + 1] =
         (auStack_23c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x25)[(uint)bVar11 * -2 + 1];
    local_18 = (float)(param_1 + 0x150);
    FUN_0051d7a0(param_1 + 0x150,auStack_2ec + 0x1b,fStack_1ed8,_DAT_02dc9f94,&LAB_0051b650);
    FUN_0055d4e0(uStack_114);
    auStack_270[0] = auStack_37c[3];
    auStack_2ec[(uint)bVar11 * -2 + 0x20] = auStack_37c[(uint)bVar11 * -2 + 4];
    auStack_2ec[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x21] =
         auStack_37c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 5];
    (auStack_2ec + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x21)[(uint)bVar11 * -2 + 1] =
         (auStack_37c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 5)[(uint)bVar11 * -2 + 1];
    puVar13 = auStack_2ec + 0x1f;
    local_1f0c = fStack_1ed8;
    uVar6 = _DAT_02dc9f60;
  }
LAB_00538749:
  FUN_0051d7a0(local_18,puVar13,local_1f0c,uVar6,&LAB_0051b650);
LAB_00538751:
  if (*(int *)(0x01C775EC + 0x240) != 0) {
    local_84 = 0;
    local_80 = 0;
    local_88 = 0;
    if ((*(int *)(param_1 + 0x1fa3c) != 0) && (*(int *)(param_1 + 0x1fa94) != 0)) {
      local_88 = *(uint *)(param_1 + 0x1fa58);
    }
    FUN_0055d610(&local_88,0x3f800000,_DAT_02dc9f50,&LAB_0051b650);
    auStack_2ec[3] = local_3d0;
    auStack_2ec[(uint)bVar11 * -2 + 4] = auStack_3ec[(uint)bVar11 * -2 + 8];
    auStack_2ec[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 5] =
         auStack_3ec[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 9];
    (auStack_2ec + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 5)[(uint)bVar11 * -2 + 1] =
         (auStack_3ec + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 9)[(uint)bVar11 * -2 + 1];
    FUN_0051cfd0(param_1 + 0x150,auStack_2ec + 3);
  }
  if (*(float *)(param_1 + 0x1faac) <= 0.0) {
    return;
  }
  iVar1 = param_1 + 0x150;
  uVar6 = FUN_0051e0a0(iVar1,"?draw_holsters2aimPistols" + 1,1);
  uVar6 = FUN_004e1010(uVar6);
  local_28 = FUN_004e1f50(iVar1,uVar6,0x3f800000);
  local_18 = (float)local_28;
  FUN_0051c3d0(iVar1,uVar6,local_28,*(uint *)(param_1 + 0x1faac),_DAT_02dc9f90,&LAB_0051b650);
  return;
}
