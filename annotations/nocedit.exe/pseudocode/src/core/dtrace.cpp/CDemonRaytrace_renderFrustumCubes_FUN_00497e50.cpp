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
  float fVar1;
  float fVar2;
  longlong lVar3;
  double dVar4;
  float fVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  int iVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  bool bVar11;
  float10 fVar12;
  float10 fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  int aiStackY_1134 [987];
  double dVar17;
  ulonglong in_stack_fffffe4c;
  double dVar18;
  int iStack_1a4;
  int local_1a0;
  int iStack_19c;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  float local_158;
  float local_154;
  float local_150;
  int iStack_14c;
  int aiStack_148 [4];
  int local_138;
  int local_134 [5];
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  int local_114;
  int local_110;
  int local_10c;
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
  int local_1c;
  
  bVar10 = 0;
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
            (g_CDemonRendererPtr,(CVector3i *)((ulonglong)in_stack_fffffe4c >> 0x20));
  local_138 = iStack_14c;
  local_134[(uint)bVar10 * -2] = aiStack_148[(uint)bVar10 * -2];
  local_134[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
       aiStack_148[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  fVar1 = (float)0.00390625;
  local_158 = (float)local_134[0] * fVar1;
  local_1c = local_134[2];
  local_150 = (float)local_134[2] * fVar1;
  local_154 = (float)local_134[1] * fVar1;
  dVar14 = crt_math_c_round_FUN_005fe6b0
                     ((double)((local_158 - (this_ptr->bbox_min).x) / (this_ptr->cell_size).x));
  fVar5 = local_154;
  local_138 = (int)ROUND(dVar14);
  dVar14 = crt_math_c_round_FUN_005fe6b0
                     ((double)(((float)local_134[1] * fVar1 - (this_ptr->bbox_min).y) /
                              (this_ptr->cell_size).y));
  local_138 = (int)ROUND(dVar14);
  fVar1 = (this_ptr->bbox_min).z;
  fVar2 = (this_ptr->cell_size).z;
  dVar14 = crt_math_c_round_FUN_005fe6b0((double)(fov_or_radius * 256f));
  iVar6 = g_InverseMatrix.m[0].x;
  iVar8 = (int)ROUND(dVar14);
  iStack_14c = iVar8;
  aiStack_148[0] = iVar8;
  aiStack_148[1] = iVar8;
  dVar14 = crt_math_c_round_FUN_005fe6b0((double)((fVar5 - fVar1) / fVar2));
  aiStack_148[3] = (int)ROUND(dVar14);
  iStack_1a4 = ((uint)((longlong)iVar6 * (longlong)iVar8) >> 0x10 |
               (int)((ulonglong)((longlong)iVar6 * (longlong)iVar8) >> 0x20) << 0x10) +
               ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)(int)local_150) >> 0x10 |
               (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)(int)local_150) >>
                    0x20) << 0x10) +
               ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)(int)local_150) >> 0x10 |
               (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)(int)local_150) >>
                    0x20) << 0x10);
  local_1a0 = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)(int)local_150) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)(int)local_150) >> 0x20
                   ) << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)(int)local_150) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)(int)local_150) >> 0x20
                   ) << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)(int)local_150) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)(int)local_150) >> 0x20
                   ) << 0x10);
  iStack_19c = ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)(int)local_150) >> 0x10 |
               (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)(int)local_150) >>
                    0x20) << 0x10) +
               ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)(int)local_150) >> 0x10 |
               (int)((ulonglong)((longlong)g_InverseMatrix.m[1].z * (longlong)(int)local_150) >>
                    0x20) << 0x10) +
               ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)(int)local_150) >> 0x10 |
               (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)(int)local_150) >>
                    0x20) << 0x10);
  iVar8 = -(int)local_150;
  local_198 = ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar8) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar8) >> 0x20) << 0x10
              ) + ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)iStack_14c) >> 0x10 |
                  (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)iStack_14c) >> 0x20
                       ) << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)aiStack_148[0]) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)aiStack_148[0]) >> 0x20
                   ) << 0x10);
  local_194 = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar8) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar8) >> 0x20) << 0x10
              ) + ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)iStack_14c) >> 0x10 |
                  (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)iStack_14c) >> 0x20
                       ) << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)aiStack_148[0]) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)aiStack_148[0]) >> 0x20
                   ) << 0x10);
  lVar3 = (longlong)iStack_14c;
  iStack_14c = -iStack_14c;
  local_190 = ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar8) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar8) >> 0x20) << 0x10
              ) + ((uint)(g_InverseMatrix.m[1].z * lVar3) >> 0x10 |
                  (int)((ulonglong)(g_InverseMatrix.m[1].z * lVar3) >> 0x20) << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)aiStack_148[0]) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)aiStack_148[0]) >> 0x20
                   ) << 0x10);
  local_18c = ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar8) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar8) >> 0x20) << 0x10
              ) + ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)iStack_14c) >> 0x10 |
                  (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)iStack_14c) >> 0x20
                       ) << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)aiStack_148[0]) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)aiStack_148[0]) >> 0x20
                   ) << 0x10);
  local_188 = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar8) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar8) >> 0x20) << 0x10
              ) + ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)iStack_14c) >> 0x10 |
                  (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)iStack_14c) >> 0x20
                       ) << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)aiStack_148[0]) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)aiStack_148[0]) >> 0x20
                   ) << 0x10);
  local_184 = ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar8) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar8) >> 0x20) << 0x10
              ) + ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)iStack_14c) >> 0x10 |
                  (int)((ulonglong)((longlong)g_InverseMatrix.m[1].z * (longlong)iStack_14c) >> 0x20
                       ) << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)aiStack_148[0]) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)aiStack_148[0]) >> 0x20
                   ) << 0x10);
  local_180 = ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)(int)local_150) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)(int)local_150) >> 0x20
                   ) << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)iStack_14c) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)iStack_14c) >> 0x20) <<
              0x10) + ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)aiStack_148[0]) >> 0x10 |
                      (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)aiStack_148[0])
                           >> 0x20) << 0x10);
  local_17c = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)(int)local_150) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)(int)local_150) >> 0x20
                   ) << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)iStack_14c) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)iStack_14c) >> 0x20) <<
              0x10) + ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)aiStack_148[0]) >> 0x10 |
                      (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)aiStack_148[0])
                           >> 0x20) << 0x10);
  local_178 = ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)(int)local_150) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)(int)local_150) >> 0x20
                   ) << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)iStack_14c) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[1].z * (longlong)iStack_14c) >> 0x20) <<
              0x10) + ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)aiStack_148[0]) >> 0x10 |
                      (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)aiStack_148[0])
                           >> 0x20) << 0x10);
  local_174 = 0;
  local_170 = 0;
  local_16c = 0;
  dVar14 = (double)(this_ptr->cell_size).x * 256;
  dVar18 = (double)(this_ptr->cell_size).y * 256;
  dVar17 = (double)(this_ptr->cell_size).z * 256;
  local_114 = 999;
  local_110 = 999;
  local_10c = 999;
  iVar8 = -999;
  iVar7 = 0;
  iVar6 = -999;
  iVar9 = -999;
  do {
    dVar16 = (double)*(int *)((int)&stack0xfffffe60 + iVar7) / dVar18;
    local_2c = aiStack_148[1];
    local_28 = aiStack_148[2];
    local_24 = aiStack_148[3];
    dVar4 = (double)aiStack_148[2];
    fVar13 = (float10)aiStack_148[3] +
             (float10)*(int *)((int)&stack0xfffffe64 + iVar7) / (float10)dVar17;
    dVar15 = crt_math_c_round_FUN_005fe6b0
                       ((double)aiStack_148[1] +
                        (double)*(int *)((int)&stack0xfffffe5c + iVar7) / dVar14);
    dVar16 = crt_math_c_round_FUN_005fe6b0(dVar4 + dVar16);
    fVar12 = (float10)dVar16;
    dVar16 = crt_math_c_round_FUN_005fe6b0((double)fVar13);
    iStack_120 = (int)ROUND(dVar15);
    iStack_11c = (int)ROUND(fVar12);
    iStack_118 = (int)ROUND(dVar16);
    if (iStack_120 < local_114) {
      local_114 = iStack_120;
    }
    if (iStack_11c < local_110) {
      local_110 = iStack_11c;
    }
    if (iStack_118 < local_10c) {
      local_10c = iStack_118;
    }
    if (iVar8 < iStack_120) {
      iVar8 = iStack_120;
    }
    if (iVar6 < iStack_11c) {
      iVar6 = iStack_11c;
    }
    if (iVar9 < iStack_118) {
      iVar9 = iStack_118;
    }
    iVar7 = iVar7 + 0xc;
  } while (iVar7 != 0x3c);
  (this_ptr->grid_bounds_min).x = local_114;
  (this_ptr->grid_bounds_max).x = iVar8 + 1;
  (this_ptr->grid_bounds_max).y = iVar6 + 1;
  (this_ptr->grid_bounds_max).z = iVar9 + 1;
  (this_ptr->grid_bounds_min).y = local_110;
  (this_ptr->grid_bounds_min).z = local_10c;
  if ((this_ptr->grid_bounds_min).x < 0) {
    (this_ptr->grid_bounds_min).x = 0;
  }
  if ((this_ptr->grid_bounds_min).y < 0) {
    (this_ptr->grid_bounds_min).y = 0;
  }
  if ((this_ptr->grid_bounds_min).z < 0) {
    (this_ptr->grid_bounds_min).z = 0;
  }
  iVar8 = (this_ptr->grid_coord).x;
  if (iVar8 <= (this_ptr->grid_bounds_max).x) {
    (this_ptr->grid_bounds_max).x = iVar8 + -1;
  }
  iVar8 = (this_ptr->grid_coord).y;
  if (iVar8 <= (this_ptr->grid_bounds_max).y) {
    (this_ptr->grid_bounds_max).y = iVar8 + -1;
  }
  iVar8 = (this_ptr->grid_coord).z;
  if (iVar8 <= (this_ptr->grid_bounds_max).z) {
    (this_ptr->grid_bounds_max).z = iVar8 + -1;
  }
  g_RenderedTriangleCount = 0;
  engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420
            (g_CDemonRendererPtr,&g_DebugCubeBasePoint);
  engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970(g_CDemonRendererPtr,0xff,0xff,0xff);
  if ((4 < this_ptr->rendering_mode) || (this_ptr->rendering_mode < 0)) {
    this_ptr->rendering_mode = 1;
  }
  local_100 = (g_InverseMatrix.m[2].x ^ g_InverseMatrix.m[2].x >> 0x1f) -
              (g_InverseMatrix.m[2].x >> 0x1f);
  iVar8 = (g_InverseMatrix.m[2].y ^ g_InverseMatrix.m[2].y >> 0x1f) -
          (g_InverseMatrix.m[2].y >> 0x1f);
  iVar6 = (g_InverseMatrix.m[2].z ^ g_InverseMatrix.m[2].z >> 0x1f) -
          (g_InverseMatrix.m[2].z >> 0x1f);
  if ((local_100 < iVar8) || (local_100 < iVar6)) {
    if ((iVar8 < local_100) || (iVar8 < iVar6)) {
      if (local_134[0] <= (this_ptr->grid_bounds_max).z) {
        local_9c = local_138 + -1;
        local_98 = aiStack_148[3] + -1;
        local_6c = 0;
        iVar8 = local_134[0];
        do {
          local_38 = aiStack_148[3];
          if (aiStack_148[3] <= (this_ptr->grid_bounds_max).x) {
            local_bc = local_6c;
            local_b8 = local_6c;
            do {
              iVar6 = local_138;
              if (local_138 <= (this_ptr->grid_bounds_max).y) {
                do {
                  iVar9 = iVar6 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_38,iVar6,iVar8,local_bc);
                  iVar6 = iVar9;
                } while (iVar9 <= (this_ptr->grid_bounds_max).y);
              }
              iVar6 = local_9c;
              if ((this_ptr->grid_bounds_min).y <= local_9c) {
                do {
                  iVar9 = iVar6 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_38,iVar6,iVar8,local_b8);
                  iVar6 = iVar9;
                } while ((this_ptr->grid_bounds_min).y <= iVar9);
              }
              local_38 = local_38 + 1;
            } while (local_38 <= (this_ptr->grid_bounds_max).x);
          }
          local_3c = local_98;
          if ((this_ptr->grid_bounds_min).x <= local_98) {
            local_b4 = local_6c;
            local_b0 = local_6c;
            do {
              iVar6 = local_138;
              if (local_138 <= (this_ptr->grid_bounds_max).y) {
                do {
                  iVar9 = iVar6 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_3c,iVar6,iVar8,local_b4);
                  iVar6 = iVar9;
                } while (iVar9 <= (this_ptr->grid_bounds_max).y);
              }
              iVar6 = local_9c;
              if ((this_ptr->grid_bounds_min).y <= local_9c) {
                do {
                  iVar9 = iVar6 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_3c,iVar6,iVar8,local_b0);
                  iVar6 = iVar9;
                } while ((this_ptr->grid_bounds_min).y <= iVar9);
              }
              local_3c = local_3c + -1;
            } while ((this_ptr->grid_bounds_min).x <= local_3c);
          }
          iVar8 = iVar8 + 1;
          local_6c = local_6c + 1;
        } while (iVar8 <= (this_ptr->grid_bounds_max).z);
      }
      iVar8 = local_134[0] + -1;
      if ((this_ptr->grid_bounds_min).z <= iVar8) {
        local_94 = local_138 + -1;
        local_90 = aiStack_148[3] + -1;
        local_68 = local_134[0] - iVar8;
        do {
          local_40 = aiStack_148[3];
          if (aiStack_148[3] <= (this_ptr->grid_bounds_max).x) {
            local_ac = local_68;
            local_a8 = local_ac;
            do {
              iVar6 = local_138;
              if (local_138 <= (this_ptr->grid_bounds_max).y) {
                do {
                  iVar9 = iVar6 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_40,iVar6,iVar8,local_ac);
                  iVar6 = iVar9;
                } while (iVar9 <= (this_ptr->grid_bounds_max).y);
              }
              iVar6 = (this_ptr->grid_bounds_min).y;
              iVar9 = local_94 - iVar6;
              bVar11 = SBORROW /* signed borrow */4(local_94,iVar6);
              iVar6 = local_94;
              while (bVar11 == iVar9 < 0) {
                iVar7 = iVar6 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,local_40,iVar6,iVar8,local_a8);
                iVar6 = (this_ptr->grid_bounds_min).y;
                iVar9 = iVar7 - iVar6;
                bVar11 = SBORROW /* signed borrow */4(iVar7,iVar6);
                iVar6 = iVar7;
              }
              local_40 = local_40 + 1;
            } while (local_40 <= (this_ptr->grid_bounds_max).x);
          }
          local_44 = local_90;
          if ((this_ptr->grid_bounds_min).x <= local_90) {
            local_a4 = local_68;
            local_a0 = local_68;
            do {
              iVar6 = local_138;
              if (local_138 <= (this_ptr->grid_bounds_max).y) {
                do {
                  iVar9 = iVar6 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_44,iVar6,iVar8,local_a4);
                  iVar6 = iVar9;
                } while (iVar9 <= (this_ptr->grid_bounds_max).y);
              }
              iVar6 = local_94;
              if ((this_ptr->grid_bounds_min).y <= local_94) {
                do {
                  iVar9 = iVar6 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_44,iVar6,iVar8,local_a0);
                  iVar6 = iVar9;
                } while ((this_ptr->grid_bounds_min).y <= iVar9);
              }
              local_44 = local_44 + -1;
            } while ((this_ptr->grid_bounds_min).x <= local_44);
          }
          iVar8 = iVar8 + -1;
          local_68 = local_68 + 1;
        } while ((this_ptr->grid_bounds_min).z <= iVar8);
      }
    }
    else {
      if (local_138 <= (this_ptr->grid_bounds_max).y) {
        local_8c = local_134[0] + -1;
        local_88 = aiStack_148[3] + -1;
        local_64 = 0;
        iVar8 = local_138;
        do {
          local_48 = aiStack_148[3];
          if (aiStack_148[3] <= (this_ptr->grid_bounds_max).x) {
            local_dc = local_64;
            local_d8 = local_64;
            do {
              iVar6 = local_134[0];
              if (local_134[0] <= (this_ptr->grid_bounds_max).z) {
                do {
                  iVar9 = iVar6 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_48,iVar8,iVar6,local_dc);
                  iVar6 = iVar9;
                } while (iVar9 <= (this_ptr->grid_bounds_max).z);
              }
              iVar6 = local_8c;
              if ((this_ptr->grid_bounds_min).z <= local_8c) {
                do {
                  iVar9 = iVar6 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_48,iVar8,iVar6,local_d8);
                  iVar6 = iVar9;
                } while ((this_ptr->grid_bounds_min).z <= iVar9);
              }
              local_48 = local_48 + 1;
            } while (local_48 <= (this_ptr->grid_bounds_max).x);
          }
          local_4c = local_88;
          if ((this_ptr->grid_bounds_min).x <= local_88) {
            local_d4 = local_64;
            local_d0 = local_64;
            do {
              iVar6 = local_134[0];
              if (local_134[0] <= (this_ptr->grid_bounds_max).z) {
                do {
                  iVar9 = iVar6 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_4c,iVar8,iVar6,local_d4);
                  iVar6 = iVar9;
                } while (iVar9 <= (this_ptr->grid_bounds_max).z);
              }
              iVar6 = local_8c;
              if ((this_ptr->grid_bounds_min).z <= local_8c) {
                do {
                  iVar9 = iVar6 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_4c,iVar8,iVar6,local_d0);
                  iVar6 = iVar9;
                } while ((this_ptr->grid_bounds_min).z <= iVar9);
              }
              local_4c = local_4c + -1;
            } while ((this_ptr->grid_bounds_min).x <= local_4c);
          }
          iVar8 = iVar8 + 1;
          local_64 = local_64 + 1;
        } while (iVar8 <= (this_ptr->grid_bounds_max).y);
      }
      iVar8 = local_138 + -1;
      if ((this_ptr->grid_bounds_min).y <= iVar8) {
        local_84 = local_134[0] + -1;
        local_80 = aiStack_148[3] + -1;
        local_60 = local_138 - iVar8;
        do {
          local_50 = aiStack_148[3];
          if (aiStack_148[3] <= (this_ptr->grid_bounds_max).x) {
            local_cc = local_60;
            local_c8 = local_cc;
            do {
              iVar6 = local_134[0];
              if (local_134[0] <= (this_ptr->grid_bounds_max).z) {
                do {
                  iVar9 = iVar6 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_50,iVar8,iVar6,local_cc);
                  iVar6 = iVar9;
                } while (iVar9 <= (this_ptr->grid_bounds_max).z);
              }
              iVar6 = (this_ptr->grid_bounds_min).z;
              iVar9 = local_84 - iVar6;
              bVar11 = SBORROW /* signed borrow */4(local_84,iVar6);
              iVar6 = local_84;
              while (bVar11 == iVar9 < 0) {
                iVar7 = iVar6 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,local_50,iVar8,iVar6,local_c8);
                iVar6 = (this_ptr->grid_bounds_min).z;
                iVar9 = iVar7 - iVar6;
                bVar11 = SBORROW /* signed borrow */4(iVar7,iVar6);
                iVar6 = iVar7;
              }
              local_50 = local_50 + 1;
            } while (local_50 <= (this_ptr->grid_bounds_max).x);
          }
          local_54 = local_80;
          if ((this_ptr->grid_bounds_min).x <= local_80) {
            local_c4 = local_60;
            local_c0 = local_60;
            do {
              iVar6 = local_134[0];
              if (local_134[0] <= (this_ptr->grid_bounds_max).z) {
                do {
                  iVar9 = iVar6 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_54,iVar8,iVar6,local_c4);
                  iVar6 = iVar9;
                } while (iVar9 <= (this_ptr->grid_bounds_max).z);
              }
              iVar6 = local_84;
              if ((this_ptr->grid_bounds_min).z <= local_84) {
                do {
                  iVar9 = iVar6 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_54,iVar8,iVar6,local_c0);
                  iVar6 = iVar9;
                } while ((this_ptr->grid_bounds_min).z <= iVar9);
              }
              local_54 = local_54 + -1;
            } while ((this_ptr->grid_bounds_min).x <= local_54);
          }
          iVar8 = iVar8 + -1;
          local_60 = local_60 + 1;
        } while ((this_ptr->grid_bounds_min).y <= iVar8);
      }
    }
  }
  else {
    if (aiStack_148[3] <= (this_ptr->grid_bounds_max).x) {
      local_7c = local_134[0] + -1;
      local_78 = local_138 + -1;
      local_5c = 0;
      iVar8 = aiStack_148[3];
      do {
        local_28 = local_138;
        if (local_138 <= (this_ptr->grid_bounds_max).y) {
          local_fc = local_5c;
          local_f8 = local_5c;
          do {
            iVar6 = local_134[0];
            if (local_134[0] <= (this_ptr->grid_bounds_max).z) {
              do {
                iVar9 = iVar6 + 1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar8,local_28,iVar6,local_fc);
                iVar6 = iVar9;
              } while (iVar9 <= (this_ptr->grid_bounds_max).z);
            }
            iVar6 = local_7c;
            if ((this_ptr->grid_bounds_min).z <= local_7c) {
              do {
                iVar9 = iVar6 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar8,local_28,iVar6,local_f8);
                iVar6 = iVar9;
              } while ((this_ptr->grid_bounds_min).z <= iVar9);
            }
            local_28 = local_28 + 1;
          } while (local_28 <= (this_ptr->grid_bounds_max).y);
        }
        local_2c = local_78;
        if ((this_ptr->grid_bounds_min).y <= local_78) {
          local_f4 = local_5c;
          local_f0 = local_5c;
          do {
            iVar6 = local_134[0];
            if (local_134[0] <= (this_ptr->grid_bounds_max).z) {
              do {
                iVar9 = iVar6 + 1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar8,local_2c,iVar6,local_f4);
                iVar6 = iVar9;
              } while (iVar9 <= (this_ptr->grid_bounds_max).z);
            }
            iVar6 = local_7c;
            if ((this_ptr->grid_bounds_min).z <= local_7c) {
              do {
                iVar9 = iVar6 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar8,local_2c,iVar6,local_f0);
                iVar6 = iVar9;
              } while ((this_ptr->grid_bounds_min).z <= iVar9);
            }
            local_2c = local_2c + -1;
          } while ((this_ptr->grid_bounds_min).y <= local_2c);
        }
        iVar8 = iVar8 + 1;
        local_5c = local_5c + 1;
      } while (iVar8 <= (this_ptr->grid_bounds_max).x);
    }
    iVar8 = aiStack_148[3] + -1;
    if ((this_ptr->grid_bounds_min).x <= iVar8) {
      local_74 = local_134[0] + -1;
      local_70 = local_138 + -1;
      local_58 = aiStack_148[3] - iVar8;
      do {
        local_30 = local_138;
        if (local_138 <= (this_ptr->grid_bounds_max).y) {
          local_ec = local_58;
          local_e8 = local_58;
          do {
            iVar6 = local_134[0];
            if (local_134[0] <= (this_ptr->grid_bounds_max).z) {
              do {
                iVar9 = iVar6 + 1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar8,local_30,iVar6,local_ec);
                iVar6 = iVar9;
              } while (iVar9 <= (this_ptr->grid_bounds_max).z);
            }
            iVar6 = local_74;
            if ((this_ptr->grid_bounds_min).z <= local_74) {
              do {
                iVar9 = iVar6 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar8,local_30,iVar6,local_e8);
                iVar6 = iVar9;
              } while ((this_ptr->grid_bounds_min).z <= iVar9);
            }
            local_30 = local_30 + 1;
          } while (local_30 <= (this_ptr->grid_bounds_max).y);
        }
        local_34 = local_70;
        if ((this_ptr->grid_bounds_min).y <= local_70) {
          local_e4 = local_58;
          local_e0 = local_58;
          do {
            iVar6 = local_134[0];
            if (local_134[0] <= (this_ptr->grid_bounds_max).z) {
              do {
                iVar9 = iVar6 + 1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar8,local_34,iVar6,local_e4);
                iVar6 = iVar9;
              } while (iVar9 <= (this_ptr->grid_bounds_max).z);
            }
            iVar6 = local_74;
            if ((this_ptr->grid_bounds_min).z <= local_74) {
              do {
                iVar9 = iVar6 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar8,local_34,iVar6,local_e0);
                iVar6 = iVar9;
              } while ((this_ptr->grid_bounds_min).z <= iVar9);
            }
            local_34 = local_34 + -1;
          } while ((this_ptr->grid_bounds_min).y <= local_34);
        }
        iVar8 = iVar8 + -1;
        local_58 = local_58 + 1;
      } while ((this_ptr->grid_bounds_min).x <= iVar8);
    }
  }
  g_PVSReadyFlag = 1;
  return;
}
