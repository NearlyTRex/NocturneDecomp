// Name: FUN_00469ce0
// Address: 00469ce0
// Address Range: [[00469ce0, 0046acd3]]
// Convention: unknown
// Signature: void FUN_00469ce0(int *param_1,float param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00469ce0(int *param_1,float param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  byte bVar12;
  bool bVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  int aiStackY_1138 [982];
  uint uStack_1c8;
  uint uStack_1c4;
  double dStack_1c0;
  int local_1a8 [6];
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  uint local_178;
  uint local_174;
  uint local_170;
  float local_15c;
  float local_158;
  float local_154;
  int local_150;
  int aiStack_14c [4];
  int local_13c;
  int local_138;
  int local_134 [4];
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
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
  float local_68;
  int local_64;
  float local_60;
  int local_5c;
  float local_58;
  int local_54;
  float local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_30;
  int local_2c;
  int local_28;
  int local_20;
  
  bVar12 = 0;
  if ((_DAT_01b7b748 != 0) && (param_3 != 0)) {
    core_dtrace_cpp_CDemonRaytrace_renderPVSCubes_FUN_0046af70();
    return;
  }
  _DAT_01b7b734 = 0;
  _DAT_01b7b738 = 0;
  _DAT_01b7b73c = 0;
  _DAT_01b7b740 = 0;
  _DAT_01b7b744 = 0;
  FUN_00460d10();
  local_138 = local_150;
  local_134[(uint)bVar12 * -2] = aiStack_14c[(uint)bVar12 * -2];
  local_134[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
       aiStack_14c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
  fVar14 = (float10)0.00390625;
  local_20 = local_134[1];
  local_15c = (float)((float10)local_138 * fVar14);
  local_158 = (float)((float10)local_134[0] * fVar14);
  local_154 = (float)((float10)local_134[1] * fVar14);
  fVar15 = (float10)local_158;
  fVar14 = (float10)round
                              (((float10)local_138 * fVar14 - (float10)(float)param_1[4]) /
                               (float10)(float)param_1[10]);
  local_13c = (int)ROUND(fVar14);
  fVar14 = (float10)local_158;
  fVar15 = (float10)round
                              ((fVar15 - (float10)(float)param_1[5]) / (float10)(float)param_1[0xb])
  ;
  local_13c = (int)ROUND(fVar15);
  fVar11 = (float)param_1[6];
  fVar3 = (float)param_1[0xc];
  fVar15 = (float10)round((float10)param_2 * (float10)5.5951060894592141e-315._0_4_)
  ;
  iVar7 = _DAT_01cc5118;
  iVar9 = (int)ROUND(fVar15);
  local_150 = iVar9;
  aiStack_14c[0] = iVar9;
  aiStack_14c[1] = iVar9;
  fVar14 = (float10)round((fVar14 - (float10)fVar11) / (float10)fVar3);
  aiStack_14c[3] = (int)ROUND(fVar14);
  local_1a8[0] = ((uint)((longlong)iVar7 * (longlong)iVar9) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar7 * (longlong)iVar9) >> 0x20) << 0x10) +
                 ((uint)((longlong)_DAT_01cc5124 * (longlong)(int)local_154) >> 0x10 |
                 (int)((ulonglong)((longlong)_DAT_01cc5124 * (longlong)(int)local_154) >> 0x20) <<
                 0x10) + ((uint)((longlong)(int)_DAT_01cc5130 * (longlong)(int)local_154) >> 0x10 |
                         (int)((ulonglong)((longlong)(int)_DAT_01cc5130 * (longlong)(int)local_154)
                              >> 0x20) << 0x10);
  local_1a8[1] = ((uint)((longlong)_DAT_01cc511c * (longlong)(int)local_154) >> 0x10 |
                 (int)((ulonglong)((longlong)_DAT_01cc511c * (longlong)(int)local_154) >> 0x20) <<
                 0x10) + ((uint)((longlong)_DAT_01cc5128 * (longlong)(int)local_154) >> 0x10 |
                         (int)((ulonglong)((longlong)_DAT_01cc5128 * (longlong)(int)local_154) >>
                              0x20) << 0x10) +
                 ((uint)((longlong)(int)_DAT_01cc5134 * (longlong)(int)local_154) >> 0x10 |
                 (int)((ulonglong)((longlong)(int)_DAT_01cc5134 * (longlong)(int)local_154) >> 0x20)
                 << 0x10);
  local_1a8[2] = ((uint)((longlong)_DAT_01cc5120 * (longlong)(int)local_154) >> 0x10 |
                 (int)((ulonglong)((longlong)_DAT_01cc5120 * (longlong)(int)local_154) >> 0x20) <<
                 0x10) + ((uint)((longlong)_DAT_01cc512c * (longlong)(int)local_154) >> 0x10 |
                         (int)((ulonglong)((longlong)_DAT_01cc512c * (longlong)(int)local_154) >>
                              0x20) << 0x10) +
                 ((uint)((longlong)(int)_DAT_01cc5138 * (longlong)(int)local_154) >> 0x10 |
                 (int)((ulonglong)((longlong)(int)_DAT_01cc5138 * (longlong)(int)local_154) >> 0x20)
                 << 0x10);
  iVar9 = -(int)local_154;
  local_1a8[3] = ((uint)((longlong)_DAT_01cc5118 * (longlong)iVar9) >> 0x10 |
                 (int)((ulonglong)((longlong)_DAT_01cc5118 * (longlong)iVar9) >> 0x20) << 0x10) +
                 ((uint)((longlong)_DAT_01cc5124 * (longlong)local_150) >> 0x10 |
                 (int)((ulonglong)((longlong)_DAT_01cc5124 * (longlong)local_150) >> 0x20) << 0x10)
                 + ((uint)((longlong)(int)_DAT_01cc5130 * (longlong)aiStack_14c[0]) >> 0x10 |
                   (int)((ulonglong)((longlong)(int)_DAT_01cc5130 * (longlong)aiStack_14c[0]) >>
                        0x20) << 0x10);
  local_1a8[4] = ((uint)((longlong)_DAT_01cc511c * (longlong)iVar9) >> 0x10 |
                 (int)((ulonglong)((longlong)_DAT_01cc511c * (longlong)iVar9) >> 0x20) << 0x10) +
                 ((uint)((longlong)_DAT_01cc5128 * (longlong)local_150) >> 0x10 |
                 (int)((ulonglong)((longlong)_DAT_01cc5128 * (longlong)local_150) >> 0x20) << 0x10)
                 + ((uint)((longlong)(int)_DAT_01cc5134 * (longlong)aiStack_14c[0]) >> 0x10 |
                   (int)((ulonglong)((longlong)(int)_DAT_01cc5134 * (longlong)aiStack_14c[0]) >>
                        0x20) << 0x10);
  lVar4 = (longlong)local_150;
  local_150 = -local_150;
  local_1a8[5] = ((uint)((longlong)_DAT_01cc5120 * (longlong)iVar9) >> 0x10 |
                 (int)((ulonglong)((longlong)_DAT_01cc5120 * (longlong)iVar9) >> 0x20) << 0x10) +
                 ((uint)(_DAT_01cc512c * lVar4) >> 0x10 |
                 (int)((ulonglong)(_DAT_01cc512c * lVar4) >> 0x20) << 0x10) +
                 ((uint)((longlong)(int)_DAT_01cc5138 * (longlong)aiStack_14c[0]) >> 0x10 |
                 (int)((ulonglong)((longlong)(int)_DAT_01cc5138 * (longlong)aiStack_14c[0]) >> 0x20)
                 << 0x10);
  local_190 = ((uint)((longlong)_DAT_01cc5118 * (longlong)iVar9) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01cc5118 * (longlong)iVar9) >> 0x20) << 0x10) +
              ((uint)((longlong)_DAT_01cc5124 * (longlong)local_150) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01cc5124 * (longlong)local_150) >> 0x20) << 0x10) +
              ((uint)((longlong)(int)_DAT_01cc5130 * (longlong)aiStack_14c[0]) >> 0x10 |
              (int)((ulonglong)((longlong)(int)_DAT_01cc5130 * (longlong)aiStack_14c[0]) >> 0x20) <<
              0x10);
  local_18c = ((uint)((longlong)_DAT_01cc511c * (longlong)iVar9) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01cc511c * (longlong)iVar9) >> 0x20) << 0x10) +
              ((uint)((longlong)_DAT_01cc5128 * (longlong)local_150) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01cc5128 * (longlong)local_150) >> 0x20) << 0x10) +
              ((uint)((longlong)(int)_DAT_01cc5134 * (longlong)aiStack_14c[0]) >> 0x10 |
              (int)((ulonglong)((longlong)(int)_DAT_01cc5134 * (longlong)aiStack_14c[0]) >> 0x20) <<
              0x10);
  local_188 = ((uint)((longlong)_DAT_01cc5120 * (longlong)iVar9) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01cc5120 * (longlong)iVar9) >> 0x20) << 0x10) +
              ((uint)((longlong)_DAT_01cc512c * (longlong)local_150) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01cc512c * (longlong)local_150) >> 0x20) << 0x10) +
              ((uint)((longlong)(int)_DAT_01cc5138 * (longlong)aiStack_14c[0]) >> 0x10 |
              (int)((ulonglong)((longlong)(int)_DAT_01cc5138 * (longlong)aiStack_14c[0]) >> 0x20) <<
              0x10);
  local_184 = ((uint)((longlong)_DAT_01cc5118 * (longlong)(int)local_154) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01cc5118 * (longlong)(int)local_154) >> 0x20) << 0x10
              ) + ((uint)((longlong)_DAT_01cc5124 * (longlong)local_150) >> 0x10 |
                  (int)((ulonglong)((longlong)_DAT_01cc5124 * (longlong)local_150) >> 0x20) << 0x10)
              + ((uint)((longlong)(int)_DAT_01cc5130 * (longlong)aiStack_14c[0]) >> 0x10 |
                (int)((ulonglong)((longlong)(int)_DAT_01cc5130 * (longlong)aiStack_14c[0]) >> 0x20)
                << 0x10);
  local_180 = ((uint)((longlong)_DAT_01cc511c * (longlong)(int)local_154) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01cc511c * (longlong)(int)local_154) >> 0x20) << 0x10
              ) + ((uint)((longlong)_DAT_01cc5128 * (longlong)local_150) >> 0x10 |
                  (int)((ulonglong)((longlong)_DAT_01cc5128 * (longlong)local_150) >> 0x20) << 0x10)
              + ((uint)((longlong)(int)_DAT_01cc5134 * (longlong)aiStack_14c[0]) >> 0x10 |
                (int)((ulonglong)((longlong)(int)_DAT_01cc5134 * (longlong)aiStack_14c[0]) >> 0x20)
                << 0x10);
  local_17c = ((uint)((longlong)_DAT_01cc5120 * (longlong)(int)local_154) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01cc5120 * (longlong)(int)local_154) >> 0x20) << 0x10
              ) + ((uint)((longlong)_DAT_01cc512c * (longlong)local_150) >> 0x10 |
                  (int)((ulonglong)((longlong)_DAT_01cc512c * (longlong)local_150) >> 0x20) << 0x10)
              + ((uint)((longlong)(int)_DAT_01cc5138 * (longlong)aiStack_14c[0]) >> 0x10 |
                (int)((ulonglong)((longlong)(int)_DAT_01cc5138 * (longlong)aiStack_14c[0]) >> 0x20)
                << 0x10);
  local_178 = 0;
  local_174 = 0;
  local_170 = 0;
  dVar5 = (double)(float)param_1[10] * 256;
  dVar6 = (double)(float)param_1[0xb] * 256;
  dStack_1c0 = (double)(float)param_1[0xc] * 256;
  iStack_118 = 999;
  local_114 = 999;
  local_110 = 999;
  iVar9 = -999;
  iVar8 = 0;
  iVar7 = -999;
  iVar10 = -999;
  do {
    iVar1 = *(int *)((int)local_1a8 + iVar8 + 4);
    iVar2 = *(int *)((int)local_1a8 + iVar8 + 8);
    fVar14 = (float10)dStack_1c0;
    local_30 = aiStack_14c[1];
    local_2c = aiStack_14c[2];
    local_28 = aiStack_14c[3];
    fVar15 = (float10)aiStack_14c[2];
    fVar16 = (float10)aiStack_14c[3];
    uStack_1c4 = 0x46a14c;
    fVar17 = (float10)round
                                ((float10)aiStack_14c[1] +
                                 (float10)*(int *)((int)local_1a8 + iVar8) / (float10)dVar5);
    uStack_1c8 = 0x46a153;
    fVar15 = (float10)round(fVar15 + (float10)iVar1 / (float10)dVar6);
    dStack_1c0 = __BITCAST_DOUBLE(CONCAT44(dStack_1c0._4_4_,0x46a15a));
    fVar14 = (float10)round(fVar16 + (float10)iVar2 / fVar14);
    local_134[1] = (int)ROUND(fVar17);
    local_134[2] = (int)ROUND(fVar15);
    local_134[3] = (int)ROUND(fVar14);
    if (local_134[1] < iStack_124) {
      iStack_124 = local_134[1];
    }
    if (local_134[2] < iStack_120) {
      iStack_120 = local_134[2];
    }
    if (local_134[3] < iStack_11c) {
      iStack_11c = local_134[3];
    }
    if (iVar9 < local_134[1]) {
      iVar9 = local_134[1];
    }
    if (iVar7 < local_134[2]) {
      iVar7 = local_134[2];
    }
    if (iVar10 < local_134[3]) {
      iVar10 = local_134[3];
    }
    iVar8 = iVar8 + 0xc;
  } while (iVar8 != 0x3c);
  param_1[0x15] = iStack_124;
  param_1[0x18] = iVar9 + 1;
  param_1[0x19] = iVar7 + 1;
  param_1[0x1a] = iVar10 + 1;
  param_1[0x16] = iStack_120;
  param_1[0x17] = iStack_11c;
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
  engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_004609d0(0x01B4D738,0x1bc9950);
  engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_00460f20(0x01B4D738,0xff,0xff,0xff);
  if ((4 < *param_1) || (*param_1 < 0)) {
    *param_1 = 1;
  }
  iStack_118 = (_DAT_01cc5130 ^ (int)_DAT_01cc5130 >> 0x1f) - ((int)_DAT_01cc5130 >> 0x1f);
  iVar9 = (_DAT_01cc5134 ^ (int)_DAT_01cc5134 >> 0x1f) - ((int)_DAT_01cc5134 >> 0x1f);
  iVar7 = (_DAT_01cc5138 ^ (int)_DAT_01cc5138 >> 0x1f) - ((int)_DAT_01cc5138 >> 0x1f);
  if ((iStack_118 < iVar9) || (iStack_118 < iVar7)) {
    if ((iVar9 < iStack_118) || (iVar9 < iVar7)) {
      if (aiStack_14c[0] <= param_1[0x1a]) {
        local_b4 = local_150 + -1;
        local_b0 = (int)local_154 + -1;
        local_84 = 0;
        iVar9 = aiStack_14c[0];
        do {
          local_50 = local_154;
          if ((int)local_154 <= param_1[0x18]) {
            local_d4 = local_84;
            local_d0 = local_84;
            do {
              iVar7 = local_150;
              if (local_150 <= param_1[0x19]) {
                do {
                  iVar10 = iVar7 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                            (param_1,local_50,iVar7,iVar9,local_d4);
                  iVar7 = iVar10;
                } while (iVar10 <= param_1[0x19]);
              }
              iVar7 = local_b4;
              if (param_1[0x16] <= local_b4) {
                do {
                  iVar10 = iVar7 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                            (param_1,local_50,iVar7,iVar9,local_d0);
                  iVar7 = iVar10;
                } while (param_1[0x16] <= iVar10);
              }
              local_50 = (float)((int)local_50 + 1);
            } while ((int)local_50 <= param_1[0x18]);
          }
          local_54 = local_b0;
          if (param_1[0x15] <= local_b0) {
            local_cc = local_84;
            local_c8 = local_84;
            do {
              iVar7 = local_150;
              if (local_150 <= param_1[0x19]) {
                do {
                  iVar10 = iVar7 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                            (param_1,local_54,iVar7,iVar9,local_cc);
                  iVar7 = iVar10;
                } while (iVar10 <= param_1[0x19]);
              }
              iVar7 = local_b4;
              if (param_1[0x16] <= local_b4) {
                do {
                  iVar10 = iVar7 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                            (param_1,local_54,iVar7,iVar9,local_c8);
                  iVar7 = iVar10;
                } while (param_1[0x16] <= iVar10);
              }
              local_54 = local_54 + -1;
            } while (param_1[0x15] <= local_54);
          }
          iVar9 = iVar9 + 1;
          local_84 = local_84 + 1;
        } while (iVar9 <= param_1[0x1a]);
      }
      iVar9 = aiStack_14c[0] + -1;
      if (param_1[0x17] <= iVar9) {
        local_ac = local_150 + -1;
        local_a8 = (int)local_154 + -1;
        local_80 = aiStack_14c[0] - iVar9;
        do {
          local_58 = local_154;
          if ((int)local_154 <= param_1[0x18]) {
            local_c4 = local_80;
            local_c0 = local_c4;
            do {
              iVar7 = local_150;
              if (local_150 <= param_1[0x19]) {
                do {
                  iVar10 = iVar7 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                            (param_1,local_58,iVar7,iVar9,local_c4);
                  iVar7 = iVar10;
                } while (iVar10 <= param_1[0x19]);
              }
              iVar7 = local_ac - param_1[0x16];
              bVar13 = SBORROW4(local_ac,param_1[0x16]);
              iVar10 = local_ac;
              while (bVar13 == iVar7 < 0) {
                iVar8 = iVar10 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                          (param_1,local_58,iVar10,iVar9,local_c0);
                iVar7 = iVar8 - param_1[0x16];
                iVar10 = iVar8;
                bVar13 = SBORROW4(iVar8,param_1[0x16]);
              }
              local_58 = (float)((int)local_58 + 1);
            } while ((int)local_58 <= param_1[0x18]);
          }
          local_5c = local_a8;
          if (param_1[0x15] <= local_a8) {
            local_bc = local_80;
            local_b8 = local_80;
            do {
              iVar7 = local_150;
              if (local_150 <= param_1[0x19]) {
                do {
                  iVar10 = iVar7 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                            (param_1,local_5c,iVar7,iVar9,local_bc);
                  iVar7 = iVar10;
                } while (iVar10 <= param_1[0x19]);
              }
              iVar7 = local_ac;
              if (param_1[0x16] <= local_ac) {
                do {
                  iVar10 = iVar7 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                            (param_1,local_5c,iVar7,iVar9,local_b8);
                  iVar7 = iVar10;
                } while (param_1[0x16] <= iVar10);
              }
              local_5c = local_5c + -1;
            } while (param_1[0x15] <= local_5c);
          }
          iVar9 = iVar9 + -1;
          local_80 = local_80 + 1;
        } while (param_1[0x17] <= iVar9);
      }
    }
    else {
      if (local_150 <= param_1[0x19]) {
        local_a4 = aiStack_14c[0] + -1;
        local_a0 = (int)local_154 + -1;
        local_7c = 0;
        iVar9 = local_150;
        do {
          local_60 = local_154;
          if ((int)local_154 <= param_1[0x18]) {
            local_f4 = local_7c;
            local_f0 = local_7c;
            do {
              iVar7 = aiStack_14c[0];
              if (aiStack_14c[0] <= param_1[0x1a]) {
                do {
                  iVar10 = iVar7 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                            (param_1,local_60,iVar9,iVar7,local_f4);
                  iVar7 = iVar10;
                } while (iVar10 <= param_1[0x1a]);
              }
              iVar7 = local_a4;
              if (param_1[0x17] <= local_a4) {
                do {
                  iVar10 = iVar7 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                            (param_1,local_60,iVar9,iVar7,local_f0);
                  iVar7 = iVar10;
                } while (param_1[0x17] <= iVar10);
              }
              local_60 = (float)((int)local_60 + 1);
            } while ((int)local_60 <= param_1[0x18]);
          }
          local_64 = local_a0;
          if (param_1[0x15] <= local_a0) {
            local_ec = local_7c;
            local_e8 = local_7c;
            do {
              iVar7 = aiStack_14c[0];
              if (aiStack_14c[0] <= param_1[0x1a]) {
                do {
                  iVar10 = iVar7 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                            (param_1,local_64,iVar9,iVar7,local_ec);
                  iVar7 = iVar10;
                } while (iVar10 <= param_1[0x1a]);
              }
              iVar7 = local_a4;
              if (param_1[0x17] <= local_a4) {
                do {
                  iVar10 = iVar7 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                            (param_1,local_64,iVar9,iVar7,local_e8);
                  iVar7 = iVar10;
                } while (param_1[0x17] <= iVar10);
              }
              local_64 = local_64 + -1;
            } while (param_1[0x15] <= local_64);
          }
          iVar9 = iVar9 + 1;
          local_7c = local_7c + 1;
        } while (iVar9 <= param_1[0x19]);
      }
      iVar9 = local_150 + -1;
      if (param_1[0x16] <= iVar9) {
        local_9c = aiStack_14c[0] + -1;
        local_98 = (int)local_154 + -1;
        local_78 = local_150 - iVar9;
        do {
          local_68 = local_154;
          if ((int)local_154 <= param_1[0x18]) {
            local_e4 = local_78;
            local_e0 = local_e4;
            do {
              iVar7 = aiStack_14c[0];
              if (aiStack_14c[0] <= param_1[0x1a]) {
                do {
                  iVar10 = iVar7 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                            (param_1,local_68,iVar9,iVar7,local_e4);
                  iVar7 = iVar10;
                } while (iVar10 <= param_1[0x1a]);
              }
              iVar7 = local_9c - param_1[0x17];
              bVar13 = SBORROW4(local_9c,param_1[0x17]);
              iVar10 = local_9c;
              while (bVar13 == iVar7 < 0) {
                iVar8 = iVar10 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                          (param_1,local_68,iVar9,iVar10,local_e0);
                iVar7 = iVar8 - param_1[0x17];
                iVar10 = iVar8;
                bVar13 = SBORROW4(iVar8,param_1[0x17]);
              }
              local_68 = (float)((int)local_68 + 1);
            } while ((int)local_68 <= param_1[0x18]);
          }
          local_6c = local_98;
          if (param_1[0x15] <= local_98) {
            local_dc = local_78;
            local_d8 = local_78;
            do {
              iVar7 = aiStack_14c[0];
              if (aiStack_14c[0] <= param_1[0x1a]) {
                do {
                  iVar10 = iVar7 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                            (param_1,local_6c,iVar9,iVar7,local_dc);
                  iVar7 = iVar10;
                } while (iVar10 <= param_1[0x1a]);
              }
              iVar7 = local_9c;
              if (param_1[0x17] <= local_9c) {
                do {
                  iVar10 = iVar7 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                            (param_1,local_6c,iVar9,iVar7,local_d8);
                  iVar7 = iVar10;
                } while (param_1[0x17] <= iVar10);
              }
              local_6c = local_6c + -1;
            } while (param_1[0x15] <= local_6c);
          }
          iVar9 = iVar9 + -1;
          local_78 = local_78 + 1;
        } while (param_1[0x16] <= iVar9);
      }
    }
  }
  else {
    if ((int)local_154 <= param_1[0x18]) {
      local_94 = aiStack_14c[0] + -1;
      local_90 = local_150 + -1;
      local_74 = 0;
      fVar11 = local_154;
      do {
        local_40 = local_150;
        if (local_150 <= param_1[0x19]) {
          local_114 = local_74;
          local_110 = local_74;
          do {
            iVar9 = aiStack_14c[0];
            if (aiStack_14c[0] <= param_1[0x1a]) {
              do {
                iVar7 = iVar9 + 1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                          (param_1,fVar11,local_40,iVar9,local_114);
                iVar9 = iVar7;
              } while (iVar7 <= param_1[0x1a]);
            }
            iVar9 = local_94;
            if (param_1[0x17] <= local_94) {
              do {
                iVar7 = iVar9 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                          (param_1,fVar11,local_40,iVar9,local_110);
                iVar9 = iVar7;
              } while (param_1[0x17] <= iVar7);
            }
            local_40 = local_40 + 1;
          } while (local_40 <= param_1[0x19]);
        }
        local_44 = local_90;
        if (param_1[0x16] <= local_90) {
          local_10c = local_74;
          local_108 = local_74;
          do {
            iVar9 = aiStack_14c[0];
            if (aiStack_14c[0] <= param_1[0x1a]) {
              do {
                iVar7 = iVar9 + 1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                          (param_1,fVar11,local_44,iVar9,local_10c);
                iVar9 = iVar7;
              } while (iVar7 <= param_1[0x1a]);
            }
            iVar9 = local_94;
            if (param_1[0x17] <= local_94) {
              do {
                iVar7 = iVar9 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                          (param_1,fVar11,local_44,iVar9,local_108);
                iVar9 = iVar7;
              } while (param_1[0x17] <= iVar7);
            }
            local_44 = local_44 + -1;
          } while (param_1[0x16] <= local_44);
        }
        fVar11 = (float)((int)fVar11 + 1);
        local_74 = local_74 + 1;
      } while ((int)fVar11 <= param_1[0x18]);
    }
    iVar9 = (int)local_154 + -1;
    if (param_1[0x15] <= iVar9) {
      local_8c = aiStack_14c[0] + -1;
      local_88 = local_150 + -1;
      local_70 = (int)local_154 - iVar9;
      do {
        local_48 = local_150;
        if (local_150 <= param_1[0x19]) {
          local_104 = local_70;
          local_100 = local_70;
          do {
            iVar7 = aiStack_14c[0];
            if (aiStack_14c[0] <= param_1[0x1a]) {
              do {
                iVar10 = iVar7 + 1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                          (param_1,iVar9,local_48,iVar7,local_104);
                iVar7 = iVar10;
              } while (iVar10 <= param_1[0x1a]);
            }
            iVar7 = local_8c;
            if (param_1[0x17] <= local_8c) {
              do {
                iVar10 = iVar7 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                          (param_1,iVar9,local_48,iVar7,local_100);
                iVar7 = iVar10;
              } while (param_1[0x17] <= iVar10);
            }
            local_48 = local_48 + 1;
          } while (local_48 <= param_1[0x19]);
        }
        local_4c = local_88;
        if (param_1[0x16] <= local_88) {
          local_fc = local_70;
          local_f8 = local_70;
          do {
            iVar7 = aiStack_14c[0];
            if (aiStack_14c[0] <= param_1[0x1a]) {
              do {
                iVar10 = iVar7 + 1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                          (param_1,iVar9,local_4c,iVar7,local_fc);
                iVar7 = iVar10;
              } while (iVar10 <= param_1[0x1a]);
            }
            iVar7 = local_8c;
            if (param_1[0x17] <= local_8c) {
              do {
                iVar10 = iVar7 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                          (param_1,iVar9,local_4c,iVar7,local_f8);
                iVar7 = iVar10;
              } while (param_1[0x17] <= iVar10);
            }
            local_4c = local_4c + -1;
          } while (param_1[0x16] <= local_4c);
        }
        iVar9 = iVar9 + -1;
        local_70 = local_70 + 1;
      } while (param_1[0x15] <= iVar9);
    }
  }
  _DAT_01b7b748 = 1;
  return;
}
