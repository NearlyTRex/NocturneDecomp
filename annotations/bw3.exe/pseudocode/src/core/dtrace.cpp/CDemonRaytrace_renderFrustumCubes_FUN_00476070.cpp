// Name: core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00476070
// Address: 00476070
// Address Range: [[00476070, 00477055]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_00476070(CDemonRaytrace *this_ptr,float fov_or_radius,int render_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_00476070(CDemonRaytrace *this_ptr,float fov_or_radius,int render_mode)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  float fVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  byte bVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  int aiStackY_1144 [985];
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
  CVector3i local_15c;
  float local_150;
  float local_14c;
  int local_148;
  int local_144;
  int local_140;
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
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  bVar12 = 0;
  if ((_DAT_01c0b7b8 != 0) && (render_mode != 0)) {
    core_dtrace_cpp_CDemonRaytrace_renderPVSCubes_FUN_004772f0(this_ptr);
    return;
  }
  _DAT_01c0b7a4 = 0;
  _DAT_01c0b7a8 = 0;
  _DAT_01c0b7ac = 0;
  _DAT_01c0b7b0 = 0;
  _DAT_01c0b7b4 = 0;
  engine_drender_cpp_CDemonRenderer_getCameraOriginFixed_FUN_0046d1a0(0x01BDD7E4,&local_15c);
  local_138 = local_15c.x;
  local_134[(uint)bVar12 * -2] = *(int *)((int)&local_15c + (uint)bVar12 * -8 + 4);
  local_134[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
       *(int *)((int)&local_15c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
  fVar4 = (float)_DAT_005bca79;
  local_150 = (float)local_138 * fVar4;
  local_20 = local_134[0];
  fVar11 = (float)local_134[0];
  local_14c = fVar11 * fVar4;
  dVar14 = round
                     ((double)((local_150 - (this_ptr->bbox_min).x) / (this_ptr->cell_size).x));
  local_13c = (int)ROUND(dVar14);
  local_24 = local_134[0];
  local_14c = (float)local_134[0] * fVar4;
  dVar14 = round
                     ((double)((fVar11 * fVar4 - (this_ptr->bbox_min).y) / (this_ptr->cell_size).y))
  ;
  local_13c = (int)ROUND(dVar14);
  fVar11 = (this_ptr->bbox_min).z;
  fVar8 = (this_ptr->cell_size).z;
  dVar14 = round((double)(fov_or_radius * _DAT_005bca81));
  iVar6 = _DAT_01d72644;
  iVar9 = (int)ROUND(dVar14);
  local_150 = (float)iVar9;
  local_14c = (float)iVar9;
  local_148 = iVar9;
  dVar14 = round((double)(((float)local_134[0] * fVar4 - fVar11) / fVar8));
  local_140 = (int)ROUND(dVar14);
  local_1a8[0] = ((uint)((longlong)iVar6 * (longlong)iVar9) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar6 * (longlong)iVar9) >> 0x20) << 0x10) +
                 ((uint)((longlong)_DAT_01d72650 * (longlong)local_15c.z) >> 0x10 |
                 (int)((ulonglong)((longlong)_DAT_01d72650 * (longlong)local_15c.z) >> 0x20) << 0x10
                 ) + ((uint)((longlong)(int)_DAT_01d7265c * (longlong)local_15c.z) >> 0x10 |
                     (int)((ulonglong)((longlong)(int)_DAT_01d7265c * (longlong)local_15c.z) >> 0x20
                          ) << 0x10);
  local_1a8[1] = ((uint)((longlong)_DAT_01d72648 * (longlong)local_15c.z) >> 0x10 |
                 (int)((ulonglong)((longlong)_DAT_01d72648 * (longlong)local_15c.z) >> 0x20) << 0x10
                 ) + ((uint)((longlong)_DAT_01d72654 * (longlong)local_15c.z) >> 0x10 |
                     (int)((ulonglong)((longlong)_DAT_01d72654 * (longlong)local_15c.z) >> 0x20) <<
                     0x10) +
                 ((uint)((longlong)(int)_DAT_01d72660 * (longlong)local_15c.z) >> 0x10 |
                 (int)((ulonglong)((longlong)(int)_DAT_01d72660 * (longlong)local_15c.z) >> 0x20) <<
                 0x10);
  local_1a8[2] = ((uint)((longlong)_DAT_01d7264c * (longlong)local_15c.z) >> 0x10 |
                 (int)((ulonglong)((longlong)_DAT_01d7264c * (longlong)local_15c.z) >> 0x20) << 0x10
                 ) + ((uint)((longlong)_DAT_01d72658 * (longlong)local_15c.z) >> 0x10 |
                     (int)((ulonglong)((longlong)_DAT_01d72658 * (longlong)local_15c.z) >> 0x20) <<
                     0x10) +
                 ((uint)((longlong)(int)_DAT_01d72664 * (longlong)local_15c.z) >> 0x10 |
                 (int)((ulonglong)((longlong)(int)_DAT_01d72664 * (longlong)local_15c.z) >> 0x20) <<
                 0x10);
  iVar9 = -local_15c.z;
  local_1a8[3] = ((uint)((longlong)_DAT_01d72644 * (longlong)iVar9) >> 0x10 |
                 (int)((ulonglong)((longlong)_DAT_01d72644 * (longlong)iVar9) >> 0x20) << 0x10) +
                 ((uint)((longlong)_DAT_01d72650 * (longlong)(int)local_150) >> 0x10 |
                 (int)((ulonglong)((longlong)_DAT_01d72650 * (longlong)(int)local_150) >> 0x20) <<
                 0x10) + ((uint)((longlong)(int)_DAT_01d7265c * (longlong)(int)local_14c) >> 0x10 |
                         (int)((ulonglong)((longlong)(int)_DAT_01d7265c * (longlong)(int)local_14c)
                              >> 0x20) << 0x10);
  local_1a8[4] = ((uint)((longlong)_DAT_01d72648 * (longlong)iVar9) >> 0x10 |
                 (int)((ulonglong)((longlong)_DAT_01d72648 * (longlong)iVar9) >> 0x20) << 0x10) +
                 ((uint)((longlong)_DAT_01d72654 * (longlong)(int)local_150) >> 0x10 |
                 (int)((ulonglong)((longlong)_DAT_01d72654 * (longlong)(int)local_150) >> 0x20) <<
                 0x10) + ((uint)((longlong)(int)_DAT_01d72660 * (longlong)(int)local_14c) >> 0x10 |
                         (int)((ulonglong)((longlong)(int)_DAT_01d72660 * (longlong)(int)local_14c)
                              >> 0x20) << 0x10);
  lVar2 = (longlong)(int)local_150;
  local_150 = (float)-(int)local_150;
  local_1a8[5] = ((uint)((longlong)_DAT_01d7264c * (longlong)iVar9) >> 0x10 |
                 (int)((ulonglong)((longlong)_DAT_01d7264c * (longlong)iVar9) >> 0x20) << 0x10) +
                 ((uint)(_DAT_01d72658 * lVar2) >> 0x10 |
                 (int)((ulonglong)(_DAT_01d72658 * lVar2) >> 0x20) << 0x10) +
                 ((uint)((longlong)(int)_DAT_01d72664 * (longlong)(int)local_14c) >> 0x10 |
                 (int)((ulonglong)((longlong)(int)_DAT_01d72664 * (longlong)(int)local_14c) >> 0x20)
                 << 0x10);
  local_190 = ((uint)((longlong)_DAT_01d72644 * (longlong)iVar9) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01d72644 * (longlong)iVar9) >> 0x20) << 0x10) +
              ((uint)((longlong)_DAT_01d72650 * (longlong)(int)local_150) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01d72650 * (longlong)(int)local_150) >> 0x20) << 0x10
              ) + ((uint)((longlong)(int)_DAT_01d7265c * (longlong)(int)local_14c) >> 0x10 |
                  (int)((ulonglong)((longlong)(int)_DAT_01d7265c * (longlong)(int)local_14c) >> 0x20
                       ) << 0x10);
  local_18c = ((uint)((longlong)_DAT_01d72648 * (longlong)iVar9) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01d72648 * (longlong)iVar9) >> 0x20) << 0x10) +
              ((uint)((longlong)_DAT_01d72654 * (longlong)(int)local_150) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01d72654 * (longlong)(int)local_150) >> 0x20) << 0x10
              ) + ((uint)((longlong)(int)_DAT_01d72660 * (longlong)(int)local_14c) >> 0x10 |
                  (int)((ulonglong)((longlong)(int)_DAT_01d72660 * (longlong)(int)local_14c) >> 0x20
                       ) << 0x10);
  local_188 = ((uint)((longlong)_DAT_01d7264c * (longlong)iVar9) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01d7264c * (longlong)iVar9) >> 0x20) << 0x10) +
              ((uint)((longlong)_DAT_01d72658 * (longlong)(int)local_150) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01d72658 * (longlong)(int)local_150) >> 0x20) << 0x10
              ) + ((uint)((longlong)(int)_DAT_01d72664 * (longlong)(int)local_14c) >> 0x10 |
                  (int)((ulonglong)((longlong)(int)_DAT_01d72664 * (longlong)(int)local_14c) >> 0x20
                       ) << 0x10);
  local_184 = ((uint)((longlong)_DAT_01d72644 * (longlong)local_15c.z) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01d72644 * (longlong)local_15c.z) >> 0x20) << 0x10) +
              ((uint)((longlong)_DAT_01d72650 * (longlong)(int)local_150) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01d72650 * (longlong)(int)local_150) >> 0x20) << 0x10
              ) + ((uint)((longlong)(int)_DAT_01d7265c * (longlong)(int)local_14c) >> 0x10 |
                  (int)((ulonglong)((longlong)(int)_DAT_01d7265c * (longlong)(int)local_14c) >> 0x20
                       ) << 0x10);
  local_180 = ((uint)((longlong)_DAT_01d72648 * (longlong)local_15c.z) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01d72648 * (longlong)local_15c.z) >> 0x20) << 0x10) +
              ((uint)((longlong)_DAT_01d72654 * (longlong)(int)local_150) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01d72654 * (longlong)(int)local_150) >> 0x20) << 0x10
              ) + ((uint)((longlong)(int)_DAT_01d72660 * (longlong)(int)local_14c) >> 0x10 |
                  (int)((ulonglong)((longlong)(int)_DAT_01d72660 * (longlong)(int)local_14c) >> 0x20
                       ) << 0x10);
  local_17c = ((uint)((longlong)_DAT_01d7264c * (longlong)local_15c.z) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01d7264c * (longlong)local_15c.z) >> 0x20) << 0x10) +
              ((uint)((longlong)_DAT_01d72658 * (longlong)(int)local_150) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01d72658 * (longlong)(int)local_150) >> 0x20) << 0x10
              ) + ((uint)((longlong)(int)_DAT_01d72664 * (longlong)(int)local_14c) >> 0x10 |
                  (int)((ulonglong)((longlong)(int)_DAT_01d72664 * (longlong)(int)local_14c) >> 0x20
                       ) << 0x10);
  local_178 = 0;
  local_174 = 0;
  local_170 = 0;
  dVar14 = (double)(this_ptr->cell_size).x * _DAT_005bca89;
  dVar5 = (double)(this_ptr->cell_size).y * _DAT_005bca89;
  dStack_1c0 = (double)(this_ptr->cell_size).z * _DAT_005bca89;
  iVar6 = -999;
  iVar10 = -999;
  iStack_118 = 999;
  local_114 = 999;
  local_110 = 999;
  iVar7 = 0;
  iVar9 = -999;
  do {
    iVar1 = *(int *)((int)local_1a8 + iVar7 + 4);
    dVar17 = (double)*(int *)((int)local_1a8 + iVar7 + 8) / dStack_1c0;
    local_30 = local_148;
    local_2c = local_144;
    local_28 = local_140;
    dVar16 = (double)local_144;
    dVar3 = (double)local_140;
    uStack_1c4 = 0x4764ce;
    dVar15 = round
                       ((double)local_148 + (double)*(int *)((int)local_1a8 + iVar7) / dVar14);
    uStack_1c8 = 0x4764d5;
    dVar16 = round(dVar16 + (double)iVar1 / dVar5);
    dStack_1c0 = __BITCAST_DOUBLE(CONCAT44(dStack_1c0._4_4_,0x4764dc));
    dVar17 = round(dVar3 + dVar17);
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
    if (iVar6 < local_134[1]) {
      iVar6 = local_134[1];
    }
    if (iVar9 < local_134[2]) {
      iVar9 = local_134[2];
    }
    if (iVar10 < local_134[3]) {
      iVar10 = local_134[3];
    }
    iVar7 = iVar7 + 0xc;
  } while (iVar7 != 0x3c);
  (this_ptr->grid_bounds_min).x = iStack_124;
  (this_ptr->grid_bounds_max).x = iVar6 + 1;
  (this_ptr->grid_bounds_max).y = iVar9 + 1;
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
  _DAT_01ed3198 = 0;
  engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046ce60
            (0x01BDD7E4,(CVector3i *)0x1c599c0);
  engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0046d3d0(0x01BDD7E4,0xff,0xff,0xff);
  if ((4 < this_ptr->rendering_mode) || (this_ptr->rendering_mode < 0)) {
    this_ptr->rendering_mode = 1;
  }
  iStack_118 = (_DAT_01d7265c ^ (int)_DAT_01d7265c >> 0x1f) - ((int)_DAT_01d7265c >> 0x1f);
  iVar9 = (_DAT_01d72660 ^ (int)_DAT_01d72660 >> 0x1f) - ((int)_DAT_01d72660 >> 0x1f);
  iVar6 = (_DAT_01d72664 ^ (int)_DAT_01d72664 >> 0x1f) - ((int)_DAT_01d72664 >> 0x1f);
  if ((iStack_118 < iVar9) || (iStack_118 < iVar6)) {
    if ((iVar9 < iStack_118) || (iVar9 < iVar6)) {
      if ((int)local_14c <= (this_ptr->grid_bounds_max).z) {
        local_b4 = (int)local_150 + -1;
        local_b0 = local_15c.z + -1;
        local_84 = 0;
        fVar11 = local_14c;
        do {
          local_50 = local_15c.z;
          if (local_15c.z <= (this_ptr->grid_bounds_max).x) {
            local_d4 = local_84;
            local_d0 = local_84;
            do {
              fVar8 = local_150;
              if ((int)local_150 <= (this_ptr->grid_bounds_max).y) {
                do {
                  iVar9 = (int)fVar8 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720
                            (this_ptr,local_50,(int)fVar8,(int)fVar11,local_d4);
                  fVar8 = (float)iVar9;
                } while (iVar9 <= (this_ptr->grid_bounds_max).y);
              }
              iVar9 = local_b4;
              if ((this_ptr->grid_bounds_min).y <= local_b4) {
                do {
                  iVar6 = iVar9 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720
                            (this_ptr,local_50,iVar9,(int)fVar11,local_d0);
                  iVar9 = iVar6;
                } while ((this_ptr->grid_bounds_min).y <= iVar6);
              }
              local_50 = local_50 + 1;
            } while (local_50 <= (this_ptr->grid_bounds_max).x);
          }
          local_54 = local_b0;
          if ((this_ptr->grid_bounds_min).x <= local_b0) {
            local_cc = local_84;
            local_c8 = local_84;
            do {
              fVar8 = local_150;
              if ((int)local_150 <= (this_ptr->grid_bounds_max).y) {
                do {
                  iVar9 = (int)fVar8 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720
                            (this_ptr,local_54,(int)fVar8,(int)fVar11,local_cc);
                  fVar8 = (float)iVar9;
                } while (iVar9 <= (this_ptr->grid_bounds_max).y);
              }
              iVar9 = local_b4;
              if ((this_ptr->grid_bounds_min).y <= local_b4) {
                do {
                  iVar6 = iVar9 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720
                            (this_ptr,local_54,iVar9,(int)fVar11,local_c8);
                  iVar9 = iVar6;
                } while ((this_ptr->grid_bounds_min).y <= iVar6);
              }
              local_54 = local_54 + -1;
            } while ((this_ptr->grid_bounds_min).x <= local_54);
          }
          fVar11 = (float)((int)fVar11 + 1);
          local_84 = local_84 + 1;
        } while ((int)fVar11 <= (this_ptr->grid_bounds_max).z);
      }
      iVar9 = (int)local_14c + -1;
      if ((this_ptr->grid_bounds_min).z <= iVar9) {
        local_ac = (int)local_150 + -1;
        local_a8 = local_15c.z + -1;
        local_80 = (int)local_14c - iVar9;
        do {
          local_58 = local_15c.z;
          if (local_15c.z <= (this_ptr->grid_bounds_max).x) {
            local_c4 = local_80;
            local_c0 = local_c4;
            do {
              fVar11 = local_150;
              if ((int)local_150 <= (this_ptr->grid_bounds_max).y) {
                do {
                  iVar6 = (int)fVar11 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720
                            (this_ptr,local_58,(int)fVar11,iVar9,local_c4);
                  fVar11 = (float)iVar6;
                } while (iVar6 <= (this_ptr->grid_bounds_max).y);
              }
              iVar6 = (this_ptr->grid_bounds_min).y;
              iVar10 = local_ac - iVar6;
              bVar13 = SBORROW4(local_ac,iVar6);
              iVar6 = local_ac;
              while (bVar13 == iVar10 < 0) {
                iVar7 = iVar6 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720
                          (this_ptr,local_58,iVar6,iVar9,local_c0);
                iVar6 = (this_ptr->grid_bounds_min).y;
                iVar10 = iVar7 - iVar6;
                bVar13 = SBORROW4(iVar7,iVar6);
                iVar6 = iVar7;
              }
              local_58 = local_58 + 1;
            } while (local_58 <= (this_ptr->grid_bounds_max).x);
          }
          local_5c = local_a8;
          if ((this_ptr->grid_bounds_min).x <= local_a8) {
            local_bc = local_80;
            local_b8 = local_80;
            do {
              fVar11 = local_150;
              if ((int)local_150 <= (this_ptr->grid_bounds_max).y) {
                do {
                  iVar6 = (int)fVar11 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720
                            (this_ptr,local_5c,(int)fVar11,iVar9,local_bc);
                  fVar11 = (float)iVar6;
                } while (iVar6 <= (this_ptr->grid_bounds_max).y);
              }
              iVar6 = local_ac;
              if ((this_ptr->grid_bounds_min).y <= local_ac) {
                do {
                  iVar10 = iVar6 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720
                            (this_ptr,local_5c,iVar6,iVar9,local_b8);
                  iVar6 = iVar10;
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
      if ((int)local_150 <= (this_ptr->grid_bounds_max).y) {
        local_a4 = (int)local_14c + -1;
        local_a0 = local_15c.z + -1;
        local_7c = 0;
        fVar11 = local_150;
        do {
          local_60 = local_15c.z;
          if (local_15c.z <= (this_ptr->grid_bounds_max).x) {
            local_f4 = local_7c;
            local_f0 = local_7c;
            do {
              fVar8 = local_14c;
              if ((int)local_14c <= (this_ptr->grid_bounds_max).z) {
                do {
                  iVar9 = (int)fVar8 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720
                            (this_ptr,local_60,(int)fVar11,(int)fVar8,local_f4);
                  fVar8 = (float)iVar9;
                } while (iVar9 <= (this_ptr->grid_bounds_max).z);
              }
              iVar9 = local_a4;
              if ((this_ptr->grid_bounds_min).z <= local_a4) {
                do {
                  iVar6 = iVar9 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720
                            (this_ptr,local_60,(int)fVar11,iVar9,local_f0);
                  iVar9 = iVar6;
                } while ((this_ptr->grid_bounds_min).z <= iVar6);
              }
              local_60 = local_60 + 1;
            } while (local_60 <= (this_ptr->grid_bounds_max).x);
          }
          local_64 = local_a0;
          if ((this_ptr->grid_bounds_min).x <= local_a0) {
            local_ec = local_7c;
            local_e8 = local_7c;
            do {
              fVar8 = local_14c;
              if ((int)local_14c <= (this_ptr->grid_bounds_max).z) {
                do {
                  iVar9 = (int)fVar8 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720
                            (this_ptr,local_64,(int)fVar11,(int)fVar8,local_ec);
                  fVar8 = (float)iVar9;
                } while (iVar9 <= (this_ptr->grid_bounds_max).z);
              }
              iVar9 = local_a4;
              if ((this_ptr->grid_bounds_min).z <= local_a4) {
                do {
                  iVar6 = iVar9 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720
                            (this_ptr,local_64,(int)fVar11,iVar9,local_e8);
                  iVar9 = iVar6;
                } while ((this_ptr->grid_bounds_min).z <= iVar6);
              }
              local_64 = local_64 + -1;
            } while ((this_ptr->grid_bounds_min).x <= local_64);
          }
          fVar11 = (float)((int)fVar11 + 1);
          local_7c = local_7c + 1;
        } while ((int)fVar11 <= (this_ptr->grid_bounds_max).y);
      }
      iVar9 = (int)local_150 + -1;
      if ((this_ptr->grid_bounds_min).y <= iVar9) {
        local_9c = (int)local_14c + -1;
        local_98 = local_15c.z + -1;
        local_78 = (int)local_150 - iVar9;
        do {
          local_68 = local_15c.z;
          if (local_15c.z <= (this_ptr->grid_bounds_max).x) {
            local_e4 = local_78;
            local_e0 = local_e4;
            do {
              fVar11 = local_14c;
              if ((int)local_14c <= (this_ptr->grid_bounds_max).z) {
                do {
                  iVar6 = (int)fVar11 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720
                            (this_ptr,local_68,iVar9,(int)fVar11,local_e4);
                  fVar11 = (float)iVar6;
                } while (iVar6 <= (this_ptr->grid_bounds_max).z);
              }
              iVar6 = (this_ptr->grid_bounds_min).z;
              iVar10 = local_9c - iVar6;
              bVar13 = SBORROW4(local_9c,iVar6);
              iVar6 = local_9c;
              while (bVar13 == iVar10 < 0) {
                iVar7 = iVar6 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720
                          (this_ptr,local_68,iVar9,iVar6,local_e0);
                iVar6 = (this_ptr->grid_bounds_min).z;
                iVar10 = iVar7 - iVar6;
                bVar13 = SBORROW4(iVar7,iVar6);
                iVar6 = iVar7;
              }
              local_68 = local_68 + 1;
            } while (local_68 <= (this_ptr->grid_bounds_max).x);
          }
          local_6c = local_98;
          if ((this_ptr->grid_bounds_min).x <= local_98) {
            local_dc = local_78;
            local_d8 = local_78;
            do {
              fVar11 = local_14c;
              if ((int)local_14c <= (this_ptr->grid_bounds_max).z) {
                do {
                  iVar6 = (int)fVar11 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720
                            (this_ptr,local_6c,iVar9,(int)fVar11,local_dc);
                  fVar11 = (float)iVar6;
                } while (iVar6 <= (this_ptr->grid_bounds_max).z);
              }
              iVar6 = local_9c;
              if ((this_ptr->grid_bounds_min).z <= local_9c) {
                do {
                  iVar10 = iVar6 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720
                            (this_ptr,local_6c,iVar9,iVar6,local_d8);
                  iVar6 = iVar10;
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
    if (local_15c.z <= (this_ptr->grid_bounds_max).x) {
      local_94 = (int)local_14c + -1;
      local_90 = (int)local_150 + -1;
      local_74 = 0;
      iVar9 = local_15c.z;
      do {
        local_40 = (int)local_150;
        if ((int)local_150 <= (this_ptr->grid_bounds_max).y) {
          local_114 = local_74;
          local_110 = local_74;
          do {
            fVar11 = local_14c;
            if ((int)local_14c <= (this_ptr->grid_bounds_max).z) {
              do {
                iVar6 = (int)fVar11 + 1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720
                          (this_ptr,iVar9,local_40,(int)fVar11,local_114);
                fVar11 = (float)iVar6;
              } while (iVar6 <= (this_ptr->grid_bounds_max).z);
            }
            iVar6 = local_94;
            if ((this_ptr->grid_bounds_min).z <= local_94) {
              do {
                iVar10 = iVar6 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720
                          (this_ptr,iVar9,local_40,iVar6,local_110);
                iVar6 = iVar10;
              } while ((this_ptr->grid_bounds_min).z <= iVar10);
            }
            local_40 = local_40 + 1;
          } while (local_40 <= (this_ptr->grid_bounds_max).y);
        }
        local_44 = local_90;
        if ((this_ptr->grid_bounds_min).y <= local_90) {
          local_10c = local_74;
          local_108 = local_74;
          do {
            fVar11 = local_14c;
            if ((int)local_14c <= (this_ptr->grid_bounds_max).z) {
              do {
                iVar6 = (int)fVar11 + 1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720
                          (this_ptr,iVar9,local_44,(int)fVar11,local_10c);
                fVar11 = (float)iVar6;
              } while (iVar6 <= (this_ptr->grid_bounds_max).z);
            }
            iVar6 = local_94;
            if ((this_ptr->grid_bounds_min).z <= local_94) {
              do {
                iVar10 = iVar6 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720
                          (this_ptr,iVar9,local_44,iVar6,local_108);
                iVar6 = iVar10;
              } while ((this_ptr->grid_bounds_min).z <= iVar10);
            }
            local_44 = local_44 + -1;
          } while ((this_ptr->grid_bounds_min).y <= local_44);
        }
        iVar9 = iVar9 + 1;
        local_74 = local_74 + 1;
      } while (iVar9 <= (this_ptr->grid_bounds_max).x);
    }
    iVar9 = local_15c.z + -1;
    if ((this_ptr->grid_bounds_min).x <= iVar9) {
      local_8c = (int)local_14c + -1;
      local_88 = (int)local_150 + -1;
      local_70 = local_15c.z - iVar9;
      do {
        local_48 = (int)local_150;
        if ((int)local_150 <= (this_ptr->grid_bounds_max).y) {
          local_104 = local_70;
          local_100 = local_70;
          do {
            fVar11 = local_14c;
            if ((int)local_14c <= (this_ptr->grid_bounds_max).z) {
              do {
                iVar6 = (int)fVar11 + 1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720
                          (this_ptr,iVar9,local_48,(int)fVar11,local_104);
                fVar11 = (float)iVar6;
              } while (iVar6 <= (this_ptr->grid_bounds_max).z);
            }
            iVar6 = local_8c;
            if ((this_ptr->grid_bounds_min).z <= local_8c) {
              do {
                iVar10 = iVar6 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720
                          (this_ptr,iVar9,local_48,iVar6,local_100);
                iVar6 = iVar10;
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
            fVar11 = local_14c;
            if ((int)local_14c <= (this_ptr->grid_bounds_max).z) {
              do {
                iVar6 = (int)fVar11 + 1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720
                          (this_ptr,iVar9,local_4c,(int)fVar11,local_fc);
                fVar11 = (float)iVar6;
              } while (iVar6 <= (this_ptr->grid_bounds_max).z);
            }
            iVar6 = local_8c;
            if ((this_ptr->grid_bounds_min).z <= local_8c) {
              do {
                iVar10 = iVar6 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720
                          (this_ptr,iVar9,local_4c,iVar6,local_f8);
                iVar6 = iVar10;
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
  _DAT_01c0b7b8 = 1;
  return;
}
