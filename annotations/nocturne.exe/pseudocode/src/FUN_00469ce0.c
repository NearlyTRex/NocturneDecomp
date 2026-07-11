// Name: FUN_00469ce0
// Address: 00469ce0
// Address Range: [[00469ce0, 0046acd3]]
// Convention: unknown
// Signature: void FUN_00469ce0(int *param_1,float param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00469ce0(int *param_1,float param_2,int param_3)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int extraout_ECX;
  int extraout_EDX;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  bool bVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  ulonglong uVar14;
  int aiStackY_1138 [989];
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  uint local_168;
  uint local_164;
  uint local_160;
  float local_15c;
  float local_158;
  float local_154;
  int local_150;
  int aiStack_14c [4];
  int local_13c;
  int local_138;
  int local_134 [8];
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
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
  
  bVar9 = 0;
  if ((_DAT_01b7b748 != 0) && (param_3 != 0)) {
    FUN_0046af70(param_1);
    return;
  }
  _DAT_01b7b734 = 0;
  _DAT_01b7b738 = 0;
  _DAT_01b7b73c = 0;
  _DAT_01b7b740 = 0;
  _DAT_01b7b744 = 0;
  FUN_00460d10(0x01B4D738);
  local_138 = local_150;
  local_134[(uint)bVar9 * -2] = aiStack_14c[(uint)bVar9 * -2];
  local_134[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       aiStack_14c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  fVar11 = (float10)_DAT_0057e24e;
  local_20 = local_134[1];
  local_15c = (float)((float10)local_138 * fVar11);
  local_158 = (float)((float10)local_134[0] * fVar11);
  local_154 = (float)((float10)local_134[1] * fVar11);
  fVar12 = ((float10)local_138 * fVar11 - (float10)(float)param_1[4]) / (float10)(float)param_1[10];
  fVar11 = (float10)local_158;
  FUN_00563a30();
  local_138 = (int)ROUND(fVar12);
  fVar12 = (fVar11 - (float10)(float)param_1[5]) / (float10)(float)param_1[0xb];
  fVar11 = (float10)local_154;
  FUN_00563a30();
  local_134[0] = (int)ROUND(fVar12);
  fVar12 = (fVar11 - (float10)(float)param_1[6]) / (float10)(float)param_1[0xc];
  fVar11 = (float10)param_2 * (float10)_DAT_0057e256;
  FUN_00563a30();
  aiStack_14c[2] = (int)ROUND(fVar11);
  aiStack_14c[3] = aiStack_14c[2];
  local_13c = aiStack_14c[2];
  uVar14 = FUN_00563a30();
  local_134[1] = (int)ROUND(fVar12);
  lVar1 = (longlong)(int)uVar14 * (longlong)(int)((ulonglong)uVar14 >> 0x20);
  local_198 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
              ((uint)((longlong)_DAT_01cc5124 * (longlong)aiStack_14c[2]) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01cc5124 * (longlong)aiStack_14c[2]) >> 0x20) << 0x10
              ) + ((uint)((longlong)(int)_DAT_01cc5130 * (longlong)aiStack_14c[2]) >> 0x10 |
                  (int)((ulonglong)((longlong)(int)_DAT_01cc5130 * (longlong)aiStack_14c[2]) >> 0x20
                       ) << 0x10);
  local_194 = ((uint)((longlong)_DAT_01cc511c * (longlong)aiStack_14c[2]) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01cc511c * (longlong)aiStack_14c[2]) >> 0x20) << 0x10
              ) + ((uint)((longlong)_DAT_01cc5128 * (longlong)aiStack_14c[2]) >> 0x10 |
                  (int)((ulonglong)((longlong)_DAT_01cc5128 * (longlong)aiStack_14c[2]) >> 0x20) <<
                  0x10) +
              ((uint)((longlong)(int)_DAT_01cc5134 * (longlong)aiStack_14c[2]) >> 0x10 |
              (int)((ulonglong)((longlong)(int)_DAT_01cc5134 * (longlong)aiStack_14c[2]) >> 0x20) <<
              0x10);
  local_190 = ((uint)((longlong)_DAT_01cc5120 * (longlong)aiStack_14c[2]) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01cc5120 * (longlong)aiStack_14c[2]) >> 0x20) << 0x10
              ) + ((uint)((longlong)_DAT_01cc512c * (longlong)aiStack_14c[2]) >> 0x10 |
                  (int)((ulonglong)((longlong)_DAT_01cc512c * (longlong)aiStack_14c[2]) >> 0x20) <<
                  0x10) +
              ((uint)((longlong)(int)_DAT_01cc5138 * (longlong)aiStack_14c[2]) >> 0x10 |
              (int)((ulonglong)((longlong)(int)_DAT_01cc5138 * (longlong)aiStack_14c[2]) >> 0x20) <<
              0x10);
  iVar8 = -aiStack_14c[2];
  local_18c = ((uint)((longlong)_DAT_01cc5118 * (longlong)iVar8) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01cc5118 * (longlong)iVar8) >> 0x20) << 0x10) +
              ((uint)((longlong)_DAT_01cc5124 * (longlong)aiStack_14c[3]) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01cc5124 * (longlong)aiStack_14c[3]) >> 0x20) << 0x10
              ) + ((uint)((longlong)(int)_DAT_01cc5130 * (longlong)local_13c) >> 0x10 |
                  (int)((ulonglong)((longlong)(int)_DAT_01cc5130 * (longlong)local_13c) >> 0x20) <<
                  0x10);
  local_188 = ((uint)((longlong)_DAT_01cc511c * (longlong)iVar8) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01cc511c * (longlong)iVar8) >> 0x20) << 0x10) +
              ((uint)((longlong)_DAT_01cc5128 * (longlong)aiStack_14c[3]) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01cc5128 * (longlong)aiStack_14c[3]) >> 0x20) << 0x10
              ) + ((uint)((longlong)(int)_DAT_01cc5134 * (longlong)local_13c) >> 0x10 |
                  (int)((ulonglong)((longlong)(int)_DAT_01cc5134 * (longlong)local_13c) >> 0x20) <<
                  0x10);
  lVar1 = (longlong)aiStack_14c[3];
  aiStack_14c[3] = -aiStack_14c[3];
  local_184 = ((uint)((longlong)_DAT_01cc5120 * (longlong)iVar8) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01cc5120 * (longlong)iVar8) >> 0x20) << 0x10) +
              ((uint)(_DAT_01cc512c * lVar1) >> 0x10 |
              (int)((ulonglong)(_DAT_01cc512c * lVar1) >> 0x20) << 0x10) +
              ((uint)((longlong)(int)_DAT_01cc5138 * (longlong)local_13c) >> 0x10 |
              (int)((ulonglong)((longlong)(int)_DAT_01cc5138 * (longlong)local_13c) >> 0x20) << 0x10
              );
  local_180 = ((uint)((longlong)_DAT_01cc5118 * (longlong)iVar8) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01cc5118 * (longlong)iVar8) >> 0x20) << 0x10) +
              ((uint)((longlong)_DAT_01cc5124 * (longlong)aiStack_14c[3]) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01cc5124 * (longlong)aiStack_14c[3]) >> 0x20) << 0x10
              ) + ((uint)((longlong)(int)_DAT_01cc5130 * (longlong)local_13c) >> 0x10 |
                  (int)((ulonglong)((longlong)(int)_DAT_01cc5130 * (longlong)local_13c) >> 0x20) <<
                  0x10);
  local_17c = ((uint)((longlong)_DAT_01cc511c * (longlong)iVar8) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01cc511c * (longlong)iVar8) >> 0x20) << 0x10) +
              ((uint)((longlong)_DAT_01cc5128 * (longlong)aiStack_14c[3]) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01cc5128 * (longlong)aiStack_14c[3]) >> 0x20) << 0x10
              ) + ((uint)((longlong)(int)_DAT_01cc5134 * (longlong)local_13c) >> 0x10 |
                  (int)((ulonglong)((longlong)(int)_DAT_01cc5134 * (longlong)local_13c) >> 0x20) <<
                  0x10);
  local_178 = ((uint)((longlong)_DAT_01cc5120 * (longlong)iVar8) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01cc5120 * (longlong)iVar8) >> 0x20) << 0x10) +
              ((uint)((longlong)_DAT_01cc512c * (longlong)aiStack_14c[3]) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01cc512c * (longlong)aiStack_14c[3]) >> 0x20) << 0x10
              ) + ((uint)((longlong)(int)_DAT_01cc5138 * (longlong)local_13c) >> 0x10 |
                  (int)((ulonglong)((longlong)(int)_DAT_01cc5138 * (longlong)local_13c) >> 0x20) <<
                  0x10);
  local_174 = ((uint)((longlong)_DAT_01cc5118 * (longlong)aiStack_14c[2]) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01cc5118 * (longlong)aiStack_14c[2]) >> 0x20) << 0x10
              ) + ((uint)((longlong)_DAT_01cc5124 * (longlong)aiStack_14c[3]) >> 0x10 |
                  (int)((ulonglong)((longlong)_DAT_01cc5124 * (longlong)aiStack_14c[3]) >> 0x20) <<
                  0x10) +
              ((uint)((longlong)(int)_DAT_01cc5130 * (longlong)local_13c) >> 0x10 |
              (int)((ulonglong)((longlong)(int)_DAT_01cc5130 * (longlong)local_13c) >> 0x20) << 0x10
              );
  local_170 = ((uint)((longlong)_DAT_01cc511c * (longlong)aiStack_14c[2]) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01cc511c * (longlong)aiStack_14c[2]) >> 0x20) << 0x10
              ) + ((uint)((longlong)_DAT_01cc5128 * (longlong)aiStack_14c[3]) >> 0x10 |
                  (int)((ulonglong)((longlong)_DAT_01cc5128 * (longlong)aiStack_14c[3]) >> 0x20) <<
                  0x10) +
              ((uint)((longlong)(int)_DAT_01cc5134 * (longlong)local_13c) >> 0x10 |
              (int)((ulonglong)((longlong)(int)_DAT_01cc5134 * (longlong)local_13c) >> 0x20) << 0x10
              );
  local_16c = ((uint)((longlong)_DAT_01cc5120 * (longlong)aiStack_14c[2]) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01cc5120 * (longlong)aiStack_14c[2]) >> 0x20) << 0x10
              ) + ((uint)((longlong)_DAT_01cc512c * (longlong)aiStack_14c[3]) >> 0x10 |
                  (int)((ulonglong)((longlong)_DAT_01cc512c * (longlong)aiStack_14c[3]) >> 0x20) <<
                  0x10) +
              ((uint)((longlong)(int)_DAT_01cc5138 * (longlong)local_13c) >> 0x10 |
              (int)((ulonglong)((longlong)(int)_DAT_01cc5138 * (longlong)local_13c) >> 0x20) << 0x10
              );
  local_168 = 0;
  local_164 = 0;
  local_160 = 0;
  dVar2 = (double)(float)param_1[10] * _DAT_0057e25e;
  dVar3 = (double)(float)param_1[0xb] * _DAT_0057e25e;
  dVar4 = (double)(float)param_1[0xc] * _DAT_0057e25e;
  local_108 = 999;
  local_104 = 999;
  local_100 = 999;
  iVar5 = 0;
  iVar8 = -999;
  do {
    local_20 = local_138;
    local_1c = local_134[0];
    local_18 = local_134[1];
    fVar11 = (float10)local_138 + (float10)*(int *)((int)&stack0xfffffe68 + iVar5) / (float10)dVar2;
    fVar12 = (float10)local_134[0] +
             (float10)*(int *)((int)&stack0xfffffe6c + iVar5) / (float10)dVar3;
    fVar13 = (float10)local_134[1] +
             (float10)*(int *)((int)&stack0xfffffe70 + iVar5) / (float10)dVar4;
    FUN_00563a30();
    FUN_00563a30();
    FUN_00563a30();
    local_114 = (int)ROUND(fVar11);
    local_110 = (int)ROUND(fVar12);
    local_10c = (int)ROUND(fVar13);
    if (local_114 < local_108) {
      local_108 = local_114;
    }
    if (local_110 < local_104) {
      local_104 = local_110;
    }
    if (local_10c < local_100) {
      local_100 = local_10c;
    }
    iVar6 = extraout_ECX;
    if (extraout_ECX < local_114) {
      iVar6 = local_114;
    }
    iVar7 = extraout_EDX;
    if (extraout_EDX < local_110) {
      iVar7 = local_110;
    }
    if (iVar8 < local_10c) {
      iVar8 = local_10c;
    }
    iVar5 = iVar5 + 0xc;
  } while (iVar5 != 0x3c);
  param_1[0x15] = local_108;
  param_1[0x18] = iVar6 + 1;
  param_1[0x19] = iVar7 + 1;
  param_1[0x1a] = iVar8 + 1;
  param_1[0x16] = local_104;
  param_1[0x17] = local_100;
  if (param_1[0x15] < 0) {
    param_1[0x15] = 0;
  }
  if (param_1[0x16] < 0) {
    param_1[0x16] = 0;
  }
  if (param_1[0x17] < 0) {
    param_1[0x17] = 0;
  }
  if (param_1[0x10] <= param_1[0x18]) {
    param_1[0x18] = param_1[0x10] + -1;
  }
  if (param_1[0x11] <= param_1[0x19]) {
    param_1[0x19] = param_1[0x11] + -1;
  }
  if (param_1[0x12] <= param_1[0x1a]) {
    param_1[0x1a] = param_1[0x12] + -1;
  }
  _DAT_01e52ef8 = 0;
  FUN_004609d0(0x01B4D738,0x1bc9950);
  FUN_00460f20(0x01B4D738,0xff,0xff,0xff);
  if ((4 < *param_1) || (*param_1 < 0)) {
    *param_1 = 1;
  }
  local_fc = (_DAT_01cc5130 ^ (int)_DAT_01cc5130 >> 0x1f) - ((int)_DAT_01cc5130 >> 0x1f);
  iVar8 = (_DAT_01cc5134 ^ (int)_DAT_01cc5134 >> 0x1f) - ((int)_DAT_01cc5134 >> 0x1f);
  iVar5 = (_DAT_01cc5138 ^ (int)_DAT_01cc5138 >> 0x1f) - ((int)_DAT_01cc5138 >> 0x1f);
  if ((local_fc < iVar8) || (local_fc < iVar5)) {
    if ((iVar8 < local_fc) || (iVar8 < iVar5)) {
      if (local_134[1] <= param_1[0x1a]) {
        local_98 = local_134[0] + -1;
        local_94 = local_138 + -1;
        local_68 = 0;
        iVar8 = local_134[1];
        do {
          local_34 = local_138;
          if (local_138 <= param_1[0x18]) {
            local_b8 = local_68;
            local_b4 = local_68;
            do {
              iVar5 = local_134[0];
              if (local_134[0] <= param_1[0x19]) {
                do {
                  iVar6 = iVar5 + 1;
                  FUN_00469390(param_1,local_34,iVar5,iVar8,local_b8);
                  iVar5 = iVar6;
                } while (iVar6 <= param_1[0x19]);
              }
              iVar5 = local_98;
              if (param_1[0x16] <= local_98) {
                do {
                  iVar6 = iVar5 + -1;
                  FUN_00469390(param_1,local_34,iVar5,iVar8,local_b4);
                  iVar5 = iVar6;
                } while (param_1[0x16] <= iVar6);
              }
              local_34 = local_34 + 1;
            } while (local_34 <= param_1[0x18]);
          }
          local_38 = local_94;
          if (param_1[0x15] <= local_94) {
            local_b0 = local_68;
            local_ac = local_68;
            do {
              iVar5 = local_134[0];
              if (local_134[0] <= param_1[0x19]) {
                do {
                  iVar6 = iVar5 + 1;
                  FUN_00469390(param_1,local_38,iVar5,iVar8,local_b0);
                  iVar5 = iVar6;
                } while (iVar6 <= param_1[0x19]);
              }
              iVar5 = local_98;
              if (param_1[0x16] <= local_98) {
                do {
                  iVar6 = iVar5 + -1;
                  FUN_00469390(param_1,local_38,iVar5,iVar8,local_ac);
                  iVar5 = iVar6;
                } while (param_1[0x16] <= iVar6);
              }
              local_38 = local_38 + -1;
            } while (param_1[0x15] <= local_38);
          }
          iVar8 = iVar8 + 1;
          local_68 = local_68 + 1;
        } while (iVar8 <= param_1[0x1a]);
      }
      iVar8 = local_134[1] + -1;
      if (param_1[0x17] <= iVar8) {
        local_90 = local_134[0] + -1;
        local_8c = local_138 + -1;
        local_64 = local_134[1] - iVar8;
        do {
          local_3c = local_138;
          if (local_138 <= param_1[0x18]) {
            local_a8 = local_64;
            local_a4 = local_a8;
            do {
              iVar5 = local_134[0];
              if (local_134[0] <= param_1[0x19]) {
                do {
                  iVar6 = iVar5 + 1;
                  FUN_00469390(param_1,local_3c,iVar5,iVar8,local_a8);
                  iVar5 = iVar6;
                } while (iVar6 <= param_1[0x19]);
              }
              iVar5 = local_90 - param_1[0x16];
              bVar10 = SBORROW4(local_90,param_1[0x16]);
              iVar6 = local_90;
              while (bVar10 == iVar5 < 0) {
                iVar7 = iVar6 + -1;
                FUN_00469390(param_1,local_3c,iVar6,iVar8,local_a4);
                iVar5 = iVar7 - param_1[0x16];
                iVar6 = iVar7;
                bVar10 = SBORROW4(iVar7,param_1[0x16]);
              }
              local_3c = local_3c + 1;
            } while (local_3c <= param_1[0x18]);
          }
          local_40 = local_8c;
          if (param_1[0x15] <= local_8c) {
            local_a0 = local_64;
            local_9c = local_64;
            do {
              iVar5 = local_134[0];
              if (local_134[0] <= param_1[0x19]) {
                do {
                  iVar6 = iVar5 + 1;
                  FUN_00469390(param_1,local_40,iVar5,iVar8,local_a0);
                  iVar5 = iVar6;
                } while (iVar6 <= param_1[0x19]);
              }
              iVar5 = local_90;
              if (param_1[0x16] <= local_90) {
                do {
                  iVar6 = iVar5 + -1;
                  FUN_00469390(param_1,local_40,iVar5,iVar8,local_9c);
                  iVar5 = iVar6;
                } while (param_1[0x16] <= iVar6);
              }
              local_40 = local_40 + -1;
            } while (param_1[0x15] <= local_40);
          }
          iVar8 = iVar8 + -1;
          local_64 = local_64 + 1;
        } while (param_1[0x17] <= iVar8);
      }
    }
    else {
      if (local_134[0] <= param_1[0x19]) {
        local_88 = local_134[1] + -1;
        local_84 = local_138 + -1;
        local_60 = 0;
        iVar8 = local_134[0];
        do {
          local_44 = local_138;
          if (local_138 <= param_1[0x18]) {
            local_d8 = local_60;
            local_d4 = local_60;
            do {
              iVar5 = local_134[1];
              if (local_134[1] <= param_1[0x1a]) {
                do {
                  iVar6 = iVar5 + 1;
                  FUN_00469390(param_1,local_44,iVar8,iVar5,local_d8);
                  iVar5 = iVar6;
                } while (iVar6 <= param_1[0x1a]);
              }
              iVar5 = local_88;
              if (param_1[0x17] <= local_88) {
                do {
                  iVar6 = iVar5 + -1;
                  FUN_00469390(param_1,local_44,iVar8,iVar5,local_d4);
                  iVar5 = iVar6;
                } while (param_1[0x17] <= iVar6);
              }
              local_44 = local_44 + 1;
            } while (local_44 <= param_1[0x18]);
          }
          local_48 = local_84;
          if (param_1[0x15] <= local_84) {
            local_d0 = local_60;
            local_cc = local_60;
            do {
              iVar5 = local_134[1];
              if (local_134[1] <= param_1[0x1a]) {
                do {
                  iVar6 = iVar5 + 1;
                  FUN_00469390(param_1,local_48,iVar8,iVar5,local_d0);
                  iVar5 = iVar6;
                } while (iVar6 <= param_1[0x1a]);
              }
              iVar5 = local_88;
              if (param_1[0x17] <= local_88) {
                do {
                  iVar6 = iVar5 + -1;
                  FUN_00469390(param_1,local_48,iVar8,iVar5,local_cc);
                  iVar5 = iVar6;
                } while (param_1[0x17] <= iVar6);
              }
              local_48 = local_48 + -1;
            } while (param_1[0x15] <= local_48);
          }
          iVar8 = iVar8 + 1;
          local_60 = local_60 + 1;
        } while (iVar8 <= param_1[0x19]);
      }
      iVar8 = local_134[0] + -1;
      if (param_1[0x16] <= iVar8) {
        local_80 = local_134[1] + -1;
        local_7c = local_138 + -1;
        local_5c = local_134[0] - iVar8;
        do {
          local_4c = local_138;
          if (local_138 <= param_1[0x18]) {
            local_c8 = local_5c;
            local_c4 = local_c8;
            do {
              iVar5 = local_134[1];
              if (local_134[1] <= param_1[0x1a]) {
                do {
                  iVar6 = iVar5 + 1;
                  FUN_00469390(param_1,local_4c,iVar8,iVar5,local_c8);
                  iVar5 = iVar6;
                } while (iVar6 <= param_1[0x1a]);
              }
              iVar5 = local_80 - param_1[0x17];
              bVar10 = SBORROW4(local_80,param_1[0x17]);
              iVar6 = local_80;
              while (bVar10 == iVar5 < 0) {
                iVar7 = iVar6 + -1;
                FUN_00469390(param_1,local_4c,iVar8,iVar6,local_c4);
                iVar5 = iVar7 - param_1[0x17];
                iVar6 = iVar7;
                bVar10 = SBORROW4(iVar7,param_1[0x17]);
              }
              local_4c = local_4c + 1;
            } while (local_4c <= param_1[0x18]);
          }
          local_50 = local_7c;
          if (param_1[0x15] <= local_7c) {
            local_c0 = local_5c;
            local_bc = local_5c;
            do {
              iVar5 = local_134[1];
              if (local_134[1] <= param_1[0x1a]) {
                do {
                  iVar6 = iVar5 + 1;
                  FUN_00469390(param_1,local_50,iVar8,iVar5,local_c0);
                  iVar5 = iVar6;
                } while (iVar6 <= param_1[0x1a]);
              }
              iVar5 = local_80;
              if (param_1[0x17] <= local_80) {
                do {
                  iVar6 = iVar5 + -1;
                  FUN_00469390(param_1,local_50,iVar8,iVar5,local_bc);
                  iVar5 = iVar6;
                } while (param_1[0x17] <= iVar6);
              }
              local_50 = local_50 + -1;
            } while (param_1[0x15] <= local_50);
          }
          iVar8 = iVar8 + -1;
          local_5c = local_5c + 1;
        } while (param_1[0x16] <= iVar8);
      }
    }
  }
  else {
    if (local_138 <= param_1[0x18]) {
      local_78 = local_134[1] + -1;
      local_74 = local_134[0] + -1;
      local_58 = 0;
      iVar8 = local_138;
      do {
        local_24 = local_134[0];
        if (local_134[0] <= param_1[0x19]) {
          local_f8 = local_58;
          local_f4 = local_58;
          do {
            iVar5 = local_134[1];
            if (local_134[1] <= param_1[0x1a]) {
              do {
                iVar6 = iVar5 + 1;
                FUN_00469390(param_1,iVar8,local_24,iVar5,local_f8);
                iVar5 = iVar6;
              } while (iVar6 <= param_1[0x1a]);
            }
            iVar5 = local_78;
            if (param_1[0x17] <= local_78) {
              do {
                iVar6 = iVar5 + -1;
                FUN_00469390(param_1,iVar8,local_24,iVar5,local_f4);
                iVar5 = iVar6;
              } while (param_1[0x17] <= iVar6);
            }
            local_24 = local_24 + 1;
          } while (local_24 <= param_1[0x19]);
        }
        local_28 = local_74;
        if (param_1[0x16] <= local_74) {
          local_f0 = local_58;
          local_ec = local_58;
          do {
            iVar5 = local_134[1];
            if (local_134[1] <= param_1[0x1a]) {
              do {
                iVar6 = iVar5 + 1;
                FUN_00469390(param_1,iVar8,local_28,iVar5,local_f0);
                iVar5 = iVar6;
              } while (iVar6 <= param_1[0x1a]);
            }
            iVar5 = local_78;
            if (param_1[0x17] <= local_78) {
              do {
                iVar6 = iVar5 + -1;
                FUN_00469390(param_1,iVar8,local_28,iVar5,local_ec);
                iVar5 = iVar6;
              } while (param_1[0x17] <= iVar6);
            }
            local_28 = local_28 + -1;
          } while (param_1[0x16] <= local_28);
        }
        iVar8 = iVar8 + 1;
        local_58 = local_58 + 1;
      } while (iVar8 <= param_1[0x18]);
    }
    iVar8 = local_138 + -1;
    if (param_1[0x15] <= iVar8) {
      local_70 = local_134[1] + -1;
      local_6c = local_134[0] + -1;
      local_54 = local_138 - iVar8;
      do {
        local_2c = local_134[0];
        if (local_134[0] <= param_1[0x19]) {
          local_e8 = local_54;
          local_e4 = local_54;
          do {
            iVar5 = local_134[1];
            if (local_134[1] <= param_1[0x1a]) {
              do {
                iVar6 = iVar5 + 1;
                FUN_00469390(param_1,iVar8,local_2c,iVar5,local_e8);
                iVar5 = iVar6;
              } while (iVar6 <= param_1[0x1a]);
            }
            iVar5 = local_70;
            if (param_1[0x17] <= local_70) {
              do {
                iVar6 = iVar5 + -1;
                FUN_00469390(param_1,iVar8,local_2c,iVar5,local_e4);
                iVar5 = iVar6;
              } while (param_1[0x17] <= iVar6);
            }
            local_2c = local_2c + 1;
          } while (local_2c <= param_1[0x19]);
        }
        local_30 = local_6c;
        if (param_1[0x16] <= local_6c) {
          local_e0 = local_54;
          local_dc = local_54;
          do {
            iVar5 = local_134[1];
            if (local_134[1] <= param_1[0x1a]) {
              do {
                iVar6 = iVar5 + 1;
                FUN_00469390(param_1,iVar8,local_30,iVar5,local_e0);
                iVar5 = iVar6;
              } while (iVar6 <= param_1[0x1a]);
            }
            iVar5 = local_70;
            if (param_1[0x17] <= local_70) {
              do {
                iVar6 = iVar5 + -1;
                FUN_00469390(param_1,iVar8,local_30,iVar5,local_dc);
                iVar5 = iVar6;
              } while (param_1[0x17] <= iVar6);
            }
            local_30 = local_30 + -1;
          } while (param_1[0x16] <= local_30);
        }
        iVar8 = iVar8 + -1;
        local_54 = local_54 + 1;
      } while (param_1[0x15] <= iVar8);
    }
  }
  _DAT_01b7b748 = 1;
  return;
}
