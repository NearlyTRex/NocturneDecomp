// Name: core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00469ce0
// Address: 00469ce0
// Address Range: [[00469ce0, 0046acd3]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_00469ce0(CDemonRaytrace *this_ptr,float fov_or_radius,int render_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_00469ce0(CDemonRaytrace *this_ptr,float fov_or_radius,int render_mode)

{
  int iVar1;
  float fVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  byte bVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
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
  if ((_DAT_01b7b748 != 0) && (render_mode != 0)) {
    core_dtrace_cpp_CDemonRaytrace_renderPVSCubes_FUN_0046af70(this_ptr);
    return;
  }
  _DAT_01b7b734 = 0;
  _DAT_01b7b738 = 0;
  _DAT_01b7b73c = 0;
  _DAT_01b7b740 = 0;
  _DAT_01b7b744 = 0;
  engine_drender_cpp_FUN_00460d10();
  local_138 = local_150;
  local_134[(uint)bVar12 * -2] = aiStack_14c[(uint)bVar12 * -2];
  local_134[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
       aiStack_14c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
  fVar11 = (float)0.00390625;
  local_15c = (float)local_138 * fVar11;
  local_20 = local_134[1];
  local_154 = (float)local_134[1] * fVar11;
  local_158 = (float)local_134[0] * fVar11;
  dVar14 = round
                     ((double)((local_15c - (this_ptr->bbox_min).x) / (this_ptr->cell_size).x));
  fVar6 = local_158;
  local_13c = (int)ROUND(dVar14);
  dVar14 = round
                     ((double)(((float)local_134[0] * fVar11 - (this_ptr->bbox_min).y) /
                              (this_ptr->cell_size).y));
  local_13c = (int)ROUND(dVar14);
  fVar11 = (this_ptr->bbox_min).z;
  fVar2 = (this_ptr->cell_size).z;
  dVar14 = round((double)(fov_or_radius * 5.5951060894592141e-315._0_4_));
  iVar7 = _DAT_01cc5118;
  iVar9 = (int)ROUND(dVar14);
  local_150 = iVar9;
  aiStack_14c[0] = iVar9;
  aiStack_14c[1] = iVar9;
  dVar14 = round((double)((fVar6 - fVar11) / fVar2));
  aiStack_14c[3] = (int)ROUND(dVar14);
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
  lVar3 = (longlong)local_150;
  local_150 = -local_150;
  local_1a8[5] = ((uint)((longlong)_DAT_01cc5120 * (longlong)iVar9) >> 0x10 |
                 (int)((ulonglong)((longlong)_DAT_01cc5120 * (longlong)iVar9) >> 0x20) << 0x10) +
                 ((uint)(_DAT_01cc512c * lVar3) >> 0x10 |
                 (int)((ulonglong)(_DAT_01cc512c * lVar3) >> 0x20) << 0x10) +
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
  dVar14 = (double)(this_ptr->cell_size).x * 256;
  dVar5 = (double)(this_ptr->cell_size).y * 256;
  dStack_1c0 = (double)(this_ptr->cell_size).z * 256;
  iStack_118 = 999;
  local_114 = 999;
  local_110 = 999;
  iVar9 = -999;
  iVar8 = 0;
  iVar7 = -999;
  iVar10 = -999;
  do {
    iVar1 = *(int *)((int)local_1a8 + iVar8 + 4);
    dVar17 = (double)*(int *)((int)local_1a8 + iVar8 + 8) / dStack_1c0;
    local_30 = aiStack_14c[1];
    local_2c = aiStack_14c[2];
    local_28 = aiStack_14c[3];
    dVar16 = (double)aiStack_14c[2];
    dVar4 = (double)aiStack_14c[3];
    uStack_1c4 = 0x46a14c;
    dVar15 = round
                       ((double)aiStack_14c[1] + (double)*(int *)((int)local_1a8 + iVar8) / dVar14);
    uStack_1c8 = 0x46a153;
    dVar16 = round(dVar16 + (double)iVar1 / dVar5);
    dStack_1c0 = __BITCAST_DOUBLE(CONCAT44(dStack_1c0._4_4_,0x46a15a));
    dVar17 = round(dVar4 + dVar17);
    local_134[1] = (int)ROUND(dVar15);
    local_134[2] = (int)ROUND(dVar16);
    local_134[3] = (int)ROUND(dVar17);
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
  (this_ptr->grid_bounds_min).x = iStack_124;
  (this_ptr->grid_bounds_max).x = iVar9 + 1;
  (this_ptr->grid_bounds_max).y = iVar7 + 1;
  (this_ptr->grid_bounds_max).z = iVar10 + 1;
  (this_ptr->grid_bounds_min).y = iStack_120;
  (this_ptr->grid_bounds_min).z = iStack_11c;
  if ((this_ptr->grid_bounds_min).x < 0) {
    (this_ptr->grid_bounds_min).x = 0;
  }
  if ((this_ptr->grid_bounds_min).y < 0) {
    (this_ptr->grid_bounds_min).y = 0;
  }
  if ((this_ptr->grid_bounds_min).z < 0) {
    (this_ptr->grid_bounds_min).z = 0;
  }
  iVar9 = (this_ptr->grid_coord).x;
  if (iVar9 <= (this_ptr->grid_bounds_max).x) {
    (this_ptr->grid_bounds_max).x = iVar9 + -1;
  }
  iVar9 = (this_ptr->grid_coord).y;
  if (iVar9 <= (this_ptr->grid_bounds_max).y) {
    (this_ptr->grid_bounds_max).y = iVar9 + -1;
  }
  iVar9 = (this_ptr->grid_coord).z;
  if (iVar9 <= (this_ptr->grid_bounds_max).z) {
    (this_ptr->grid_bounds_max).z = iVar9 + -1;
  }
  _DAT_01e52ef8 = 0;
  engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_004609d0
            ((CDemonRenderer *)PTR_DAT_005ae700,(CVector3f *)0x1bc9950);
  engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_00460f20
            ((CDemonRenderer *)PTR_DAT_005ae700,0xff,0xff,0xff);
  if ((4 < this_ptr->rendering_mode) || (this_ptr->rendering_mode < 0)) {
    this_ptr->rendering_mode = 1;
  }
  iStack_118 = (_DAT_01cc5130 ^ (int)_DAT_01cc5130 >> 0x1f) - ((int)_DAT_01cc5130 >> 0x1f);
  iVar9 = (_DAT_01cc5134 ^ (int)_DAT_01cc5134 >> 0x1f) - ((int)_DAT_01cc5134 >> 0x1f);
  iVar7 = (_DAT_01cc5138 ^ (int)_DAT_01cc5138 >> 0x1f) - ((int)_DAT_01cc5138 >> 0x1f);
  if ((iStack_118 < iVar9) || (iStack_118 < iVar7)) {
    if ((iVar9 < iStack_118) || (iVar9 < iVar7)) {
      if (aiStack_14c[0] <= (this_ptr->grid_bounds_max).z) {
        local_b4 = local_150 + -1;
        local_b0 = (int)local_154 + -1;
        local_84 = 0;
        iVar9 = aiStack_14c[0];
        do {
          local_50 = local_154;
          if ((int)local_154 <= (this_ptr->grid_bounds_max).x) {
            local_d4 = local_84;
            local_d0 = local_84;
            do {
              iVar7 = local_150;
              if (local_150 <= (this_ptr->grid_bounds_max).y) {
                do {
                  iVar10 = iVar7 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                            (this_ptr,(int)local_50,iVar7,iVar9,local_d4);
                  iVar7 = iVar10;
                } while (iVar10 <= (this_ptr->grid_bounds_max).y);
              }
              iVar7 = local_b4;
              if ((this_ptr->grid_bounds_min).y <= local_b4) {
                do {
                  iVar10 = iVar7 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                            (this_ptr,(int)local_50,iVar7,iVar9,local_d0);
                  iVar7 = iVar10;
                } while ((this_ptr->grid_bounds_min).y <= iVar10);
              }
              local_50 = (float)((int)local_50 + 1);
            } while ((int)local_50 <= (this_ptr->grid_bounds_max).x);
          }
          local_54 = local_b0;
          if ((this_ptr->grid_bounds_min).x <= local_b0) {
            local_cc = local_84;
            local_c8 = local_84;
            do {
              iVar7 = local_150;
              if (local_150 <= (this_ptr->grid_bounds_max).y) {
                do {
                  iVar10 = iVar7 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                            (this_ptr,local_54,iVar7,iVar9,local_cc);
                  iVar7 = iVar10;
                } while (iVar10 <= (this_ptr->grid_bounds_max).y);
              }
              iVar7 = local_b4;
              if ((this_ptr->grid_bounds_min).y <= local_b4) {
                do {
                  iVar10 = iVar7 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                            (this_ptr,local_54,iVar7,iVar9,local_c8);
                  iVar7 = iVar10;
                } while ((this_ptr->grid_bounds_min).y <= iVar10);
              }
              local_54 = local_54 + -1;
            } while ((this_ptr->grid_bounds_min).x <= local_54);
          }
          iVar9 = iVar9 + 1;
          local_84 = local_84 + 1;
        } while (iVar9 <= (this_ptr->grid_bounds_max).z);
      }
      iVar9 = aiStack_14c[0] + -1;
      if ((this_ptr->grid_bounds_min).z <= iVar9) {
        local_ac = local_150 + -1;
        local_a8 = (int)local_154 + -1;
        local_80 = aiStack_14c[0] - iVar9;
        do {
          local_58 = local_154;
          if ((int)local_154 <= (this_ptr->grid_bounds_max).x) {
            local_c4 = local_80;
            local_c0 = local_c4;
            do {
              iVar7 = local_150;
              if (local_150 <= (this_ptr->grid_bounds_max).y) {
                do {
                  iVar10 = iVar7 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                            (this_ptr,(int)local_58,iVar7,iVar9,local_c4);
                  iVar7 = iVar10;
                } while (iVar10 <= (this_ptr->grid_bounds_max).y);
              }
              iVar7 = (this_ptr->grid_bounds_min).y;
              iVar10 = local_ac - iVar7;
              bVar13 = SBORROW4(local_ac,iVar7);
              iVar7 = local_ac;
              while (bVar13 == iVar10 < 0) {
                iVar8 = iVar7 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                          (this_ptr,(int)local_58,iVar7,iVar9,local_c0);
                iVar7 = (this_ptr->grid_bounds_min).y;
                iVar10 = iVar8 - iVar7;
                bVar13 = SBORROW4(iVar8,iVar7);
                iVar7 = iVar8;
              }
              local_58 = (float)((int)local_58 + 1);
            } while ((int)local_58 <= (this_ptr->grid_bounds_max).x);
          }
          local_5c = local_a8;
          if ((this_ptr->grid_bounds_min).x <= local_a8) {
            local_bc = local_80;
            local_b8 = local_80;
            do {
              iVar7 = local_150;
              if (local_150 <= (this_ptr->grid_bounds_max).y) {
                do {
                  iVar10 = iVar7 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                            (this_ptr,local_5c,iVar7,iVar9,local_bc);
                  iVar7 = iVar10;
                } while (iVar10 <= (this_ptr->grid_bounds_max).y);
              }
              iVar7 = local_ac;
              if ((this_ptr->grid_bounds_min).y <= local_ac) {
                do {
                  iVar10 = iVar7 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                            (this_ptr,local_5c,iVar7,iVar9,local_b8);
                  iVar7 = iVar10;
                } while ((this_ptr->grid_bounds_min).y <= iVar10);
              }
              local_5c = local_5c + -1;
            } while ((this_ptr->grid_bounds_min).x <= local_5c);
          }
          iVar9 = iVar9 + -1;
          local_80 = local_80 + 1;
        } while ((this_ptr->grid_bounds_min).z <= iVar9);
      }
    }
    else {
      if (local_150 <= (this_ptr->grid_bounds_max).y) {
        local_a4 = aiStack_14c[0] + -1;
        local_a0 = (int)local_154 + -1;
        local_7c = 0;
        iVar9 = local_150;
        do {
          local_60 = local_154;
          if ((int)local_154 <= (this_ptr->grid_bounds_max).x) {
            local_f4 = local_7c;
            local_f0 = local_7c;
            do {
              iVar7 = aiStack_14c[0];
              if (aiStack_14c[0] <= (this_ptr->grid_bounds_max).z) {
                do {
                  iVar10 = iVar7 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                            (this_ptr,(int)local_60,iVar9,iVar7,local_f4);
                  iVar7 = iVar10;
                } while (iVar10 <= (this_ptr->grid_bounds_max).z);
              }
              iVar7 = local_a4;
              if ((this_ptr->grid_bounds_min).z <= local_a4) {
                do {
                  iVar10 = iVar7 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                            (this_ptr,(int)local_60,iVar9,iVar7,local_f0);
                  iVar7 = iVar10;
                } while ((this_ptr->grid_bounds_min).z <= iVar10);
              }
              local_60 = (float)((int)local_60 + 1);
            } while ((int)local_60 <= (this_ptr->grid_bounds_max).x);
          }
          local_64 = local_a0;
          if ((this_ptr->grid_bounds_min).x <= local_a0) {
            local_ec = local_7c;
            local_e8 = local_7c;
            do {
              iVar7 = aiStack_14c[0];
              if (aiStack_14c[0] <= (this_ptr->grid_bounds_max).z) {
                do {
                  iVar10 = iVar7 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                            (this_ptr,local_64,iVar9,iVar7,local_ec);
                  iVar7 = iVar10;
                } while (iVar10 <= (this_ptr->grid_bounds_max).z);
              }
              iVar7 = local_a4;
              if ((this_ptr->grid_bounds_min).z <= local_a4) {
                do {
                  iVar10 = iVar7 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                            (this_ptr,local_64,iVar9,iVar7,local_e8);
                  iVar7 = iVar10;
                } while ((this_ptr->grid_bounds_min).z <= iVar10);
              }
              local_64 = local_64 + -1;
            } while ((this_ptr->grid_bounds_min).x <= local_64);
          }
          iVar9 = iVar9 + 1;
          local_7c = local_7c + 1;
        } while (iVar9 <= (this_ptr->grid_bounds_max).y);
      }
      iVar9 = local_150 + -1;
      if ((this_ptr->grid_bounds_min).y <= iVar9) {
        local_9c = aiStack_14c[0] + -1;
        local_98 = (int)local_154 + -1;
        local_78 = local_150 - iVar9;
        do {
          local_68 = local_154;
          if ((int)local_154 <= (this_ptr->grid_bounds_max).x) {
            local_e4 = local_78;
            local_e0 = local_e4;
            do {
              iVar7 = aiStack_14c[0];
              if (aiStack_14c[0] <= (this_ptr->grid_bounds_max).z) {
                do {
                  iVar10 = iVar7 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                            (this_ptr,(int)local_68,iVar9,iVar7,local_e4);
                  iVar7 = iVar10;
                } while (iVar10 <= (this_ptr->grid_bounds_max).z);
              }
              iVar7 = (this_ptr->grid_bounds_min).z;
              iVar10 = local_9c - iVar7;
              bVar13 = SBORROW4(local_9c,iVar7);
              iVar7 = local_9c;
              while (bVar13 == iVar10 < 0) {
                iVar8 = iVar7 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                          (this_ptr,(int)local_68,iVar9,iVar7,local_e0);
                iVar7 = (this_ptr->grid_bounds_min).z;
                iVar10 = iVar8 - iVar7;
                bVar13 = SBORROW4(iVar8,iVar7);
                iVar7 = iVar8;
              }
              local_68 = (float)((int)local_68 + 1);
            } while ((int)local_68 <= (this_ptr->grid_bounds_max).x);
          }
          local_6c = local_98;
          if ((this_ptr->grid_bounds_min).x <= local_98) {
            local_dc = local_78;
            local_d8 = local_78;
            do {
              iVar7 = aiStack_14c[0];
              if (aiStack_14c[0] <= (this_ptr->grid_bounds_max).z) {
                do {
                  iVar10 = iVar7 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                            (this_ptr,local_6c,iVar9,iVar7,local_dc);
                  iVar7 = iVar10;
                } while (iVar10 <= (this_ptr->grid_bounds_max).z);
              }
              iVar7 = local_9c;
              if ((this_ptr->grid_bounds_min).z <= local_9c) {
                do {
                  iVar10 = iVar7 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                            (this_ptr,local_6c,iVar9,iVar7,local_d8);
                  iVar7 = iVar10;
                } while ((this_ptr->grid_bounds_min).z <= iVar10);
              }
              local_6c = local_6c + -1;
            } while ((this_ptr->grid_bounds_min).x <= local_6c);
          }
          iVar9 = iVar9 + -1;
          local_78 = local_78 + 1;
        } while ((this_ptr->grid_bounds_min).y <= iVar9);
      }
    }
  }
  else {
    if ((int)local_154 <= (this_ptr->grid_bounds_max).x) {
      local_94 = aiStack_14c[0] + -1;
      local_90 = local_150 + -1;
      local_74 = 0;
      fVar11 = local_154;
      do {
        local_40 = local_150;
        if (local_150 <= (this_ptr->grid_bounds_max).y) {
          local_114 = local_74;
          local_110 = local_74;
          do {
            iVar9 = aiStack_14c[0];
            if (aiStack_14c[0] <= (this_ptr->grid_bounds_max).z) {
              do {
                iVar7 = iVar9 + 1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                          (this_ptr,(int)fVar11,local_40,iVar9,local_114);
                iVar9 = iVar7;
              } while (iVar7 <= (this_ptr->grid_bounds_max).z);
            }
            iVar9 = local_94;
            if ((this_ptr->grid_bounds_min).z <= local_94) {
              do {
                iVar7 = iVar9 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                          (this_ptr,(int)fVar11,local_40,iVar9,local_110);
                iVar9 = iVar7;
              } while ((this_ptr->grid_bounds_min).z <= iVar7);
            }
            local_40 = local_40 + 1;
          } while (local_40 <= (this_ptr->grid_bounds_max).y);
        }
        local_44 = local_90;
        if ((this_ptr->grid_bounds_min).y <= local_90) {
          local_10c = local_74;
          local_108 = local_74;
          do {
            iVar9 = aiStack_14c[0];
            if (aiStack_14c[0] <= (this_ptr->grid_bounds_max).z) {
              do {
                iVar7 = iVar9 + 1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                          (this_ptr,(int)fVar11,local_44,iVar9,local_10c);
                iVar9 = iVar7;
              } while (iVar7 <= (this_ptr->grid_bounds_max).z);
            }
            iVar9 = local_94;
            if ((this_ptr->grid_bounds_min).z <= local_94) {
              do {
                iVar7 = iVar9 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                          (this_ptr,(int)fVar11,local_44,iVar9,local_108);
                iVar9 = iVar7;
              } while ((this_ptr->grid_bounds_min).z <= iVar7);
            }
            local_44 = local_44 + -1;
          } while ((this_ptr->grid_bounds_min).y <= local_44);
        }
        fVar11 = (float)((int)fVar11 + 1);
        local_74 = local_74 + 1;
      } while ((int)fVar11 <= (this_ptr->grid_bounds_max).x);
    }
    iVar9 = (int)local_154 + -1;
    if ((this_ptr->grid_bounds_min).x <= iVar9) {
      local_8c = aiStack_14c[0] + -1;
      local_88 = local_150 + -1;
      local_70 = (int)local_154 - iVar9;
      do {
        local_48 = local_150;
        if (local_150 <= (this_ptr->grid_bounds_max).y) {
          local_104 = local_70;
          local_100 = local_70;
          do {
            iVar7 = aiStack_14c[0];
            if (aiStack_14c[0] <= (this_ptr->grid_bounds_max).z) {
              do {
                iVar10 = iVar7 + 1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                          (this_ptr,iVar9,local_48,iVar7,local_104);
                iVar7 = iVar10;
              } while (iVar10 <= (this_ptr->grid_bounds_max).z);
            }
            iVar7 = local_8c;
            if ((this_ptr->grid_bounds_min).z <= local_8c) {
              do {
                iVar10 = iVar7 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                          (this_ptr,iVar9,local_48,iVar7,local_100);
                iVar7 = iVar10;
              } while ((this_ptr->grid_bounds_min).z <= iVar10);
            }
            local_48 = local_48 + 1;
          } while (local_48 <= (this_ptr->grid_bounds_max).y);
        }
        local_4c = local_88;
        if ((this_ptr->grid_bounds_min).y <= local_88) {
          local_fc = local_70;
          local_f8 = local_70;
          do {
            iVar7 = aiStack_14c[0];
            if (aiStack_14c[0] <= (this_ptr->grid_bounds_max).z) {
              do {
                iVar10 = iVar7 + 1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                          (this_ptr,iVar9,local_4c,iVar7,local_fc);
                iVar7 = iVar10;
              } while (iVar10 <= (this_ptr->grid_bounds_max).z);
            }
            iVar7 = local_8c;
            if ((this_ptr->grid_bounds_min).z <= local_8c) {
              do {
                iVar10 = iVar7 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
                          (this_ptr,iVar9,local_4c,iVar7,local_f8);
                iVar7 = iVar10;
              } while ((this_ptr->grid_bounds_min).z <= iVar10);
            }
            local_4c = local_4c + -1;
          } while ((this_ptr->grid_bounds_min).y <= local_4c);
        }
        iVar9 = iVar9 + -1;
        local_70 = local_70 + 1;
      } while ((this_ptr->grid_bounds_min).x <= iVar9);
    }
  }
  _DAT_01b7b748 = 1;
  return;
}
