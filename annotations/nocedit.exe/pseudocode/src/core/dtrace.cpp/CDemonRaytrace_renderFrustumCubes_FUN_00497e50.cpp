// Name: core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50
// Address: 00497e50
// Address Range: [[00497e50, 00498e43]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50(CDemonRaytrace * this_ptr, float fov_or_radius, int render_mode)

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50
          (CDemonRaytrace *this_ptr,float fov_or_radius,int render_mode)

{
  longlong lVar1;
  double dVar2;
  int extraout_EAX;
  int extraout_ECX;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float grid_x;
  byte bVar7;
  bool bVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  double dVar12;
  double dVar13;
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
  CVector3i local_150;
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
  
  bVar7 = 0;
  if ((g_PVSReadyFlag != 0) && (render_mode != 0)) {
    core_dtrace_cpp_CDemonRaytrace_renderPVSCubes_FUN_004990f0(this_ptr);
    return;
  }
  g_CubesTestedCount = 0;
  g_CubesWithVoxelsCount = 0;
  g_CubesVisibleCount = 0;
  g_CubesRenderedCount = 0;
  g_PVSDrawnCubeCount = 0;
  engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
            (g_CDemonRendererPtr1,&local_150);
  local_138 = local_150.x;
  local_134[(uint)bVar7 * -2] = *(int *)((int)&local_150 + (uint)bVar7 * -8 + 4);
  local_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       *(int *)((int)&local_150 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  local_154 = (float)0.00390625;
  local_15c = (float)local_138 * local_154;
  local_20 = local_134[1];
  local_158 = (float)local_134[0] * local_154;
  local_154 = (float)local_134[1] * local_154;
  fVar9 = (float10)local_158;
  dVar12 = crt_math_c_round_FUN_005fe6b0
                     ((double)((local_15c - (this_ptr->bbox_min).x) / (this_ptr->cell_size).x));
  local_13c = (int)ROUND(dVar12);
  fVar10 = (float10)local_158;
  dVar12 = crt_math_c_round_FUN_005fe6b0
                     ((double)((fVar9 - (float10)(this_ptr->bbox_min).y) /
                              (float10)(this_ptr->cell_size).y));
  local_13c = (int)ROUND(dVar12);
  fVar9 = (fVar10 - (float10)(this_ptr->bbox_min).z) / (float10)(this_ptr->cell_size).z;
  dVar12 = crt_math_c_round_FUN_005fe6b0((double)(fov_or_radius * 256.0f));
  local_150.x = (int)ROUND(dVar12);
  local_150.y = local_150.x;
  local_150.z = local_150.x;
  dVar12 = crt_math_c_round_FUN_005fe6b0((double)fVar9);
  local_140 = (int)ROUND(dVar12);
  local_1a8[0] = ((uint)((longlong)extraout_EAX * (longlong)extraout_EDX) >> 0x10 |
                 (int)((ulonglong)((longlong)extraout_EAX * (longlong)extraout_EDX) >> 0x20) << 0x10
                 ) + ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)(int)local_154) >> 0x10 |
                     (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)(int)local_154)
                          >> 0x20) << 0x10) +
                 ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)(int)local_154) >> 0x10 |
                 (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)(int)local_154) >>
                      0x20) << 0x10);
  local_1a8[1] = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)(int)local_154) >> 0x10 |
                 (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)(int)local_154) >>
                      0x20) << 0x10) +
                 ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)(int)local_154) >> 0x10 |
                 (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)(int)local_154) >>
                      0x20) << 0x10) +
                 ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)(int)local_154) >> 0x10 |
                 (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)(int)local_154) >>
                      0x20) << 0x10);
  local_1a8[2] = ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)(int)local_154) >> 0x10 |
                 (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)(int)local_154) >>
                      0x20) << 0x10) +
                 ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)(int)local_154) >> 0x10 |
                 (int)((ulonglong)((longlong)g_InverseMatrix.m[1].z * (longlong)(int)local_154) >>
                      0x20) << 0x10) +
                 ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)(int)local_154) >> 0x10 |
                 (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)(int)local_154) >>
                      0x20) << 0x10);
  iVar6 = -(int)local_154;
  local_1a8[3] = ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar6) >> 0x10 |
                 (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar6) >> 0x20) <<
                 0x10) + ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)local_150.x) >> 0x10 |
                         (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)local_150.x)
                              >> 0x20) << 0x10) +
                 ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)local_150.y) >> 0x10 |
                 (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)local_150.y) >> 0x20
                      ) << 0x10);
  local_1a8[4] = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar6) >> 0x10 |
                 (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar6) >> 0x20) <<
                 0x10) + ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)local_150.x) >> 0x10 |
                         (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)local_150.x)
                              >> 0x20) << 0x10) +
                 ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)local_150.y) >> 0x10 |
                 (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)local_150.y) >> 0x20
                      ) << 0x10);
  lVar1 = (longlong)local_150.x;
  local_150.x = -local_150.x;
  local_1a8[5] = ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar6) >> 0x10 |
                 (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar6) >> 0x20) <<
                 0x10) + ((uint)(g_InverseMatrix.m[1].z * lVar1) >> 0x10 |
                         (int)((ulonglong)(g_InverseMatrix.m[1].z * lVar1) >> 0x20) << 0x10) +
                 ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)local_150.y) >> 0x10 |
                 (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)local_150.y) >> 0x20
                      ) << 0x10);
  local_190 = ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar6) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar6) >> 0x20) << 0x10
              ) + ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)local_150.x) >> 0x10 |
                  (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)local_150.x) >>
                       0x20) << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)local_150.y) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)local_150.y) >> 0x20)
              << 0x10);
  local_18c = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar6) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar6) >> 0x20) << 0x10
              ) + ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)local_150.x) >> 0x10 |
                  (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)local_150.x) >>
                       0x20) << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)local_150.y) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)local_150.y) >> 0x20)
              << 0x10);
  local_188 = ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar6) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar6) >> 0x20) << 0x10
              ) + ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)local_150.x) >> 0x10 |
                  (int)((ulonglong)((longlong)g_InverseMatrix.m[1].z * (longlong)local_150.x) >>
                       0x20) << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)local_150.y) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)local_150.y) >> 0x20)
              << 0x10);
  local_184 = ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)(int)local_154) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)(int)local_154) >> 0x20
                   ) << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)local_150.x) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)local_150.x) >> 0x20)
              << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)local_150.y) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)local_150.y) >> 0x20)
              << 0x10);
  local_180 = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)(int)local_154) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)(int)local_154) >> 0x20
                   ) << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)local_150.x) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)local_150.x) >> 0x20)
              << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)local_150.y) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)local_150.y) >> 0x20)
              << 0x10);
  local_17c = ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)(int)local_154) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)(int)local_154) >> 0x20
                   ) << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)local_150.x) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[1].z * (longlong)local_150.x) >> 0x20)
              << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)local_150.y) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)local_150.y) >> 0x20)
              << 0x10);
  local_178 = 0;
  local_174 = 0;
  local_170 = 0;
  dVar12 = (double)(this_ptr->cell_size).x * 256;
  dVar2 = (double)(this_ptr->cell_size).y * 256;
  dStack_1c0 = (double)(this_ptr->cell_size).z * 256;
  iStack_118 = 999;
  local_114 = 999;
  local_110 = 999;
  iVar3 = 0;
  iVar6 = -999;
  do {
    local_30 = local_150.z;
    local_2c = local_144;
    local_28 = local_140;
    fVar10 = (float10)local_144 + (float10)*(int *)((int)local_1a8 + iVar3 + 4) / (float10)dVar2;
    fVar11 = (float10)local_140 +
             (float10)*(int *)((int)local_1a8 + iVar3 + 8) / (float10)dStack_1c0;
    uStack_1c4 = 0x4982bc;
    dVar13 = crt_math_c_round_FUN_005fe6b0
                       ((double)local_150.z + (double)*(int *)((int)local_1a8 + iVar3) / dVar12);
    fVar9 = (float10)dVar13;
    uStack_1c8 = 0x4982c3;
    dVar13 = crt_math_c_round_FUN_005fe6b0((double)fVar10);
    fVar10 = (float10)dVar13;
    dStack_1c0 = (double)CONCAT44 /* combine 2-byte values */(dStack_1c0._4_4_,0x4982ca);
    dVar13 = crt_math_c_round_FUN_005fe6b0((double)fVar11);
    local_134[1] = (int)ROUND(fVar9);
    local_134[2] = (int)ROUND(fVar10);
    local_134[3] = (int)ROUND(dVar13);
    if (local_134[1] < iStack_124) {
      iStack_124 = local_134[1];
    }
    if (local_134[2] < iStack_120) {
      iStack_120 = local_134[2];
    }
    if (local_134[3] < iStack_11c) {
      iStack_11c = local_134[3];
    }
    iVar4 = extraout_ECX;
    if (extraout_ECX < local_134[1]) {
      iVar4 = local_134[1];
    }
    iVar5 = extraout_EDX_00;
    if (extraout_EDX_00 < local_134[2]) {
      iVar5 = local_134[2];
    }
    if (iVar6 < local_134[3]) {
      iVar6 = local_134[3];
    }
    iVar3 = iVar3 + 0xc;
  } while (iVar3 != 0x3c);
  (this_ptr->grid_bounds_min).x = iStack_124;
  (this_ptr->grid_bounds_max).x = iVar4 + 1;
  (this_ptr->grid_bounds_max).y = iVar5 + 1;
  (this_ptr->grid_bounds_max).z = iVar6 + 1;
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
  iVar6 = (this_ptr->grid_coord).x;
  if (iVar6 <= (this_ptr->grid_bounds_max).x) {
    (this_ptr->grid_bounds_max).x = iVar6 + -1;
  }
  iVar6 = (this_ptr->grid_coord).y;
  if (iVar6 <= (this_ptr->grid_bounds_max).y) {
    (this_ptr->grid_bounds_max).y = iVar6 + -1;
  }
  iVar6 = (this_ptr->grid_coord).z;
  if (iVar6 <= (this_ptr->grid_bounds_max).z) {
    (this_ptr->grid_bounds_max).z = iVar6 + -1;
  }
  g_RenderedTriangleCount = 0;
  engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420
            (g_CDemonRendererPtr1,&g_DebugCubeBasePoint);
  engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970(g_CDemonRendererPtr1,0xff,0xff,0xff);
  if ((4 < this_ptr->rendering_mode) || (this_ptr->rendering_mode < 0)) {
    this_ptr->rendering_mode = 1;
  }
  iStack_118 = (g_InverseMatrix.m[2].x ^ g_InverseMatrix.m[2].x >> 0x1f) -
               (g_InverseMatrix.m[2].x >> 0x1f);
  iVar6 = (g_InverseMatrix.m[2].y ^ g_InverseMatrix.m[2].y >> 0x1f) -
          (g_InverseMatrix.m[2].y >> 0x1f);
  iVar3 = (g_InverseMatrix.m[2].z ^ g_InverseMatrix.m[2].z >> 0x1f) -
          (g_InverseMatrix.m[2].z >> 0x1f);
  if ((iStack_118 < iVar6) || (iStack_118 < iVar3)) {
    if ((iVar6 < iStack_118) || (iVar6 < iVar3)) {
      if (local_150.y <= (this_ptr->grid_bounds_max).z) {
        local_b4 = local_150.x + -1;
        local_b0 = (int)local_154 + -1;
        local_84 = 0;
        iVar6 = local_150.y;
        do {
          local_50 = local_154;
          if ((int)local_154 <= (this_ptr->grid_bounds_max).x) {
            local_d4 = local_84;
            local_d0 = local_84;
            do {
              iVar3 = local_150.x;
              if (local_150.x <= (this_ptr->grid_bounds_max).y) {
                do {
                  iVar4 = iVar3 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,(int)local_50,iVar3,iVar6,local_d4);
                  iVar3 = iVar4;
                } while (iVar4 <= (this_ptr->grid_bounds_max).y);
              }
              iVar3 = local_b4;
              if ((this_ptr->grid_bounds_min).y <= local_b4) {
                do {
                  iVar4 = iVar3 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,(int)local_50,iVar3,iVar6,local_d0);
                  iVar3 = iVar4;
                } while ((this_ptr->grid_bounds_min).y <= iVar4);
              }
              local_50 = (float)((int)local_50 + 1);
            } while ((int)local_50 <= (this_ptr->grid_bounds_max).x);
          }
          local_54 = local_b0;
          if ((this_ptr->grid_bounds_min).x <= local_b0) {
            local_cc = local_84;
            local_c8 = local_84;
            do {
              iVar3 = local_150.x;
              if (local_150.x <= (this_ptr->grid_bounds_max).y) {
                do {
                  iVar4 = iVar3 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_54,iVar3,iVar6,local_cc);
                  iVar3 = iVar4;
                } while (iVar4 <= (this_ptr->grid_bounds_max).y);
              }
              iVar3 = local_b4;
              if ((this_ptr->grid_bounds_min).y <= local_b4) {
                do {
                  iVar4 = iVar3 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_54,iVar3,iVar6,local_c8);
                  iVar3 = iVar4;
                } while ((this_ptr->grid_bounds_min).y <= iVar4);
              }
              local_54 = local_54 + -1;
            } while ((this_ptr->grid_bounds_min).x <= local_54);
          }
          iVar6 = iVar6 + 1;
          local_84 = local_84 + 1;
        } while (iVar6 <= (this_ptr->grid_bounds_max).z);
      }
      iVar6 = local_150.y + -1;
      if ((this_ptr->grid_bounds_min).z <= iVar6) {
        local_ac = local_150.x + -1;
        local_a8 = (int)local_154 + -1;
        local_80 = local_150.y - iVar6;
        do {
          local_58 = local_154;
          if ((int)local_154 <= (this_ptr->grid_bounds_max).x) {
            local_c4 = local_80;
            local_c0 = local_c4;
            do {
              iVar3 = local_150.x;
              if (local_150.x <= (this_ptr->grid_bounds_max).y) {
                do {
                  iVar4 = iVar3 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,(int)local_58,iVar3,iVar6,local_c4);
                  iVar3 = iVar4;
                } while (iVar4 <= (this_ptr->grid_bounds_max).y);
              }
              iVar3 = (this_ptr->grid_bounds_min).y;
              iVar4 = local_ac - iVar3;
              bVar8 = SBORROW /* signed borrow */4(local_ac,iVar3);
              iVar3 = local_ac;
              while (bVar8 == iVar4 < 0) {
                iVar5 = iVar3 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,(int)local_58,iVar3,iVar6,local_c0);
                iVar3 = (this_ptr->grid_bounds_min).y;
                iVar4 = iVar5 - iVar3;
                bVar8 = SBORROW /* signed borrow */4(iVar5,iVar3);
                iVar3 = iVar5;
              }
              local_58 = (float)((int)local_58 + 1);
            } while ((int)local_58 <= (this_ptr->grid_bounds_max).x);
          }
          local_5c = local_a8;
          if ((this_ptr->grid_bounds_min).x <= local_a8) {
            local_bc = local_80;
            local_b8 = local_80;
            do {
              iVar3 = local_150.x;
              if (local_150.x <= (this_ptr->grid_bounds_max).y) {
                do {
                  iVar4 = iVar3 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_5c,iVar3,iVar6,local_bc);
                  iVar3 = iVar4;
                } while (iVar4 <= (this_ptr->grid_bounds_max).y);
              }
              iVar3 = local_ac;
              if ((this_ptr->grid_bounds_min).y <= local_ac) {
                do {
                  iVar4 = iVar3 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_5c,iVar3,iVar6,local_b8);
                  iVar3 = iVar4;
                } while ((this_ptr->grid_bounds_min).y <= iVar4);
              }
              local_5c = local_5c + -1;
            } while ((this_ptr->grid_bounds_min).x <= local_5c);
          }
          iVar6 = iVar6 + -1;
          local_80 = local_80 + 1;
        } while ((this_ptr->grid_bounds_min).z <= iVar6);
      }
    }
    else {
      if (local_150.x <= (this_ptr->grid_bounds_max).y) {
        local_a4 = local_150.y + -1;
        local_a0 = (int)local_154 + -1;
        local_7c = 0;
        iVar6 = local_150.x;
        do {
          local_60 = local_154;
          if ((int)local_154 <= (this_ptr->grid_bounds_max).x) {
            local_f4 = local_7c;
            local_f0 = local_7c;
            do {
              iVar3 = local_150.y;
              if (local_150.y <= (this_ptr->grid_bounds_max).z) {
                do {
                  iVar4 = iVar3 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,(int)local_60,iVar6,iVar3,local_f4);
                  iVar3 = iVar4;
                } while (iVar4 <= (this_ptr->grid_bounds_max).z);
              }
              iVar3 = local_a4;
              if ((this_ptr->grid_bounds_min).z <= local_a4) {
                do {
                  iVar4 = iVar3 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,(int)local_60,iVar6,iVar3,local_f0);
                  iVar3 = iVar4;
                } while ((this_ptr->grid_bounds_min).z <= iVar4);
              }
              local_60 = (float)((int)local_60 + 1);
            } while ((int)local_60 <= (this_ptr->grid_bounds_max).x);
          }
          local_64 = local_a0;
          if ((this_ptr->grid_bounds_min).x <= local_a0) {
            local_ec = local_7c;
            local_e8 = local_7c;
            do {
              iVar3 = local_150.y;
              if (local_150.y <= (this_ptr->grid_bounds_max).z) {
                do {
                  iVar4 = iVar3 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_64,iVar6,iVar3,local_ec);
                  iVar3 = iVar4;
                } while (iVar4 <= (this_ptr->grid_bounds_max).z);
              }
              iVar3 = local_a4;
              if ((this_ptr->grid_bounds_min).z <= local_a4) {
                do {
                  iVar4 = iVar3 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_64,iVar6,iVar3,local_e8);
                  iVar3 = iVar4;
                } while ((this_ptr->grid_bounds_min).z <= iVar4);
              }
              local_64 = local_64 + -1;
            } while ((this_ptr->grid_bounds_min).x <= local_64);
          }
          iVar6 = iVar6 + 1;
          local_7c = local_7c + 1;
        } while (iVar6 <= (this_ptr->grid_bounds_max).y);
      }
      iVar6 = local_150.x + -1;
      if ((this_ptr->grid_bounds_min).y <= iVar6) {
        local_9c = local_150.y + -1;
        local_98 = (int)local_154 + -1;
        local_78 = local_150.x - iVar6;
        do {
          local_68 = local_154;
          if ((int)local_154 <= (this_ptr->grid_bounds_max).x) {
            local_e4 = local_78;
            local_e0 = local_e4;
            do {
              iVar3 = local_150.y;
              if (local_150.y <= (this_ptr->grid_bounds_max).z) {
                do {
                  iVar4 = iVar3 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,(int)local_68,iVar6,iVar3,local_e4);
                  iVar3 = iVar4;
                } while (iVar4 <= (this_ptr->grid_bounds_max).z);
              }
              iVar3 = (this_ptr->grid_bounds_min).z;
              iVar4 = local_9c - iVar3;
              bVar8 = SBORROW /* signed borrow */4(local_9c,iVar3);
              iVar3 = local_9c;
              while (bVar8 == iVar4 < 0) {
                iVar5 = iVar3 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,(int)local_68,iVar6,iVar3,local_e0);
                iVar3 = (this_ptr->grid_bounds_min).z;
                iVar4 = iVar5 - iVar3;
                bVar8 = SBORROW /* signed borrow */4(iVar5,iVar3);
                iVar3 = iVar5;
              }
              local_68 = (float)((int)local_68 + 1);
            } while ((int)local_68 <= (this_ptr->grid_bounds_max).x);
          }
          local_6c = local_98;
          if ((this_ptr->grid_bounds_min).x <= local_98) {
            local_dc = local_78;
            local_d8 = local_78;
            do {
              iVar3 = local_150.y;
              if (local_150.y <= (this_ptr->grid_bounds_max).z) {
                do {
                  iVar4 = iVar3 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_6c,iVar6,iVar3,local_dc);
                  iVar3 = iVar4;
                } while (iVar4 <= (this_ptr->grid_bounds_max).z);
              }
              iVar3 = local_9c;
              if ((this_ptr->grid_bounds_min).z <= local_9c) {
                do {
                  iVar4 = iVar3 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_6c,iVar6,iVar3,local_d8);
                  iVar3 = iVar4;
                } while ((this_ptr->grid_bounds_min).z <= iVar4);
              }
              local_6c = local_6c + -1;
            } while ((this_ptr->grid_bounds_min).x <= local_6c);
          }
          iVar6 = iVar6 + -1;
          local_78 = local_78 + 1;
        } while ((this_ptr->grid_bounds_min).y <= iVar6);
      }
    }
  }
  else {
    if ((int)local_154 <= (this_ptr->grid_bounds_max).x) {
      local_94 = local_150.y + -1;
      local_90 = local_150.x + -1;
      local_74 = 0;
      grid_x = local_154;
      do {
        local_40 = local_150.x;
        if (local_150.x <= (this_ptr->grid_bounds_max).y) {
          local_114 = local_74;
          local_110 = local_74;
          do {
            iVar6 = local_150.y;
            if (local_150.y <= (this_ptr->grid_bounds_max).z) {
              do {
                iVar3 = iVar6 + 1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,(int)grid_x,local_40,iVar6,local_114);
                iVar6 = iVar3;
              } while (iVar3 <= (this_ptr->grid_bounds_max).z);
            }
            iVar6 = local_94;
            if ((this_ptr->grid_bounds_min).z <= local_94) {
              do {
                iVar3 = iVar6 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,(int)grid_x,local_40,iVar6,local_110);
                iVar6 = iVar3;
              } while ((this_ptr->grid_bounds_min).z <= iVar3);
            }
            local_40 = local_40 + 1;
          } while (local_40 <= (this_ptr->grid_bounds_max).y);
        }
        local_44 = local_90;
        if ((this_ptr->grid_bounds_min).y <= local_90) {
          local_10c = local_74;
          local_108 = local_74;
          do {
            iVar6 = local_150.y;
            if (local_150.y <= (this_ptr->grid_bounds_max).z) {
              do {
                iVar3 = iVar6 + 1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,(int)grid_x,local_44,iVar6,local_10c);
                iVar6 = iVar3;
              } while (iVar3 <= (this_ptr->grid_bounds_max).z);
            }
            iVar6 = local_94;
            if ((this_ptr->grid_bounds_min).z <= local_94) {
              do {
                iVar3 = iVar6 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,(int)grid_x,local_44,iVar6,local_108);
                iVar6 = iVar3;
              } while ((this_ptr->grid_bounds_min).z <= iVar3);
            }
            local_44 = local_44 + -1;
          } while ((this_ptr->grid_bounds_min).y <= local_44);
        }
        grid_x = (float)((int)grid_x + 1);
        local_74 = local_74 + 1;
      } while ((int)grid_x <= (this_ptr->grid_bounds_max).x);
    }
    iVar6 = (int)local_154 + -1;
    if ((this_ptr->grid_bounds_min).x <= iVar6) {
      local_8c = local_150.y + -1;
      local_88 = local_150.x + -1;
      local_70 = (int)local_154 - iVar6;
      do {
        local_48 = local_150.x;
        if (local_150.x <= (this_ptr->grid_bounds_max).y) {
          local_104 = local_70;
          local_100 = local_70;
          do {
            iVar3 = local_150.y;
            if (local_150.y <= (this_ptr->grid_bounds_max).z) {
              do {
                iVar4 = iVar3 + 1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar6,local_48,iVar3,local_104);
                iVar3 = iVar4;
              } while (iVar4 <= (this_ptr->grid_bounds_max).z);
            }
            iVar3 = local_8c;
            if ((this_ptr->grid_bounds_min).z <= local_8c) {
              do {
                iVar4 = iVar3 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar6,local_48,iVar3,local_100);
                iVar3 = iVar4;
              } while ((this_ptr->grid_bounds_min).z <= iVar4);
            }
            local_48 = local_48 + 1;
          } while (local_48 <= (this_ptr->grid_bounds_max).y);
        }
        local_4c = local_88;
        if ((this_ptr->grid_bounds_min).y <= local_88) {
          local_fc = local_70;
          local_f8 = local_70;
          do {
            iVar3 = local_150.y;
            if (local_150.y <= (this_ptr->grid_bounds_max).z) {
              do {
                iVar4 = iVar3 + 1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar6,local_4c,iVar3,local_fc);
                iVar3 = iVar4;
              } while (iVar4 <= (this_ptr->grid_bounds_max).z);
            }
            iVar3 = local_8c;
            if ((this_ptr->grid_bounds_min).z <= local_8c) {
              do {
                iVar4 = iVar3 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar6,local_4c,iVar3,local_f8);
                iVar3 = iVar4;
              } while ((this_ptr->grid_bounds_min).z <= iVar4);
            }
            local_4c = local_4c + -1;
          } while ((this_ptr->grid_bounds_min).y <= local_4c);
        }
        iVar6 = iVar6 + -1;
        local_70 = local_70 + 1;
      } while ((this_ptr->grid_bounds_min).x <= iVar6);
    }
  }
  g_PVSReadyFlag = 1;
  return;
}
