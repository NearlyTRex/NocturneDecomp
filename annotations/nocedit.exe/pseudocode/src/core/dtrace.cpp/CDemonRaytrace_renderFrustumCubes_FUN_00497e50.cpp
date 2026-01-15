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
  int extraout_EAX;
  int extraout_ECX;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  bool bVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int aiStackY_1134 [985];
  uint uStack_1c4;
  uint uVar14;
  double dVar15;
  CVector3i *in_stack_fffffe54;
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
  int local_134;
  int local_130 [4];
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  uint local_114;
  uint local_110;
  uint local_10c;
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
  
  bVar6 = 0;
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
            (g_CDemonRendererPtr,in_stack_fffffe54);
  local_134 = iStack_14c;
  local_130[(uint)bVar6 * -2] = aiStack_148[(uint)bVar6 * -2];
  local_130[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       aiStack_148[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  local_150 = (float)0.00390625;
  local_158 = (float)local_134 * local_150;
  local_1c = local_130[1];
  local_154 = (float)local_130[0] * local_150;
  local_150 = (float)local_130[1] * local_150;
  fVar8 = (float10)local_154;
  dVar11 = crt_math_c_round_FUN_005fe6b0
                     ((double)((local_158 - (this_ptr->bbox_min).x) / (this_ptr->cell_size).x));
  local_138 = (int)ROUND(dVar11);
  fVar9 = (float10)local_154;
  dVar11 = crt_math_c_round_FUN_005fe6b0
                     ((double)((fVar8 - (float10)(this_ptr->bbox_min).y) /
                              (float10)(this_ptr->cell_size).y));
  local_138 = (int)ROUND(dVar11);
  fVar8 = (fVar9 - (float10)(this_ptr->bbox_min).z) / (float10)(this_ptr->cell_size).z;
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)(fov_or_radius * 256f));
  iStack_14c = (int)ROUND(dVar11);
  aiStack_148[0] = iStack_14c;
  aiStack_148[1] = iStack_14c;
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)fVar8);
  aiStack_148[3] = (int)ROUND(dVar11);
  iStack_1a4 = ((uint)((longlong)extraout_EAX * (longlong)extraout_EDX) >> 0x10 |
               (int)((ulonglong)((longlong)extraout_EAX * (longlong)extraout_EDX) >> 0x20) << 0x10)
               + ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)(int)local_150) >> 0x10 |
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
  iVar5 = -(int)local_150;
  local_198 = ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar5) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar5) >> 0x20) << 0x10
              ) + ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)iStack_14c) >> 0x10 |
                  (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)iStack_14c) >> 0x20
                       ) << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)aiStack_148[0]) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)aiStack_148[0]) >> 0x20
                   ) << 0x10);
  local_194 = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar5) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar5) >> 0x20) << 0x10
              ) + ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)iStack_14c) >> 0x10 |
                  (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)iStack_14c) >> 0x20
                       ) << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)aiStack_148[0]) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)aiStack_148[0]) >> 0x20
                   ) << 0x10);
  lVar1 = (longlong)iStack_14c;
  iStack_14c = -iStack_14c;
  local_190 = ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar5) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar5) >> 0x20) << 0x10
              ) + ((uint)(g_InverseMatrix.m[1].z * lVar1) >> 0x10 |
                  (int)((ulonglong)(g_InverseMatrix.m[1].z * lVar1) >> 0x20) << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)aiStack_148[0]) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)aiStack_148[0]) >> 0x20
                   ) << 0x10);
  local_18c = ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar5) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar5) >> 0x20) << 0x10
              ) + ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)iStack_14c) >> 0x10 |
                  (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)iStack_14c) >> 0x20
                       ) << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)aiStack_148[0]) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)aiStack_148[0]) >> 0x20
                   ) << 0x10);
  local_188 = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar5) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar5) >> 0x20) << 0x10
              ) + ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)iStack_14c) >> 0x10 |
                  (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)iStack_14c) >> 0x20
                       ) << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)aiStack_148[0]) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)aiStack_148[0]) >> 0x20
                   ) << 0x10);
  local_184 = ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar5) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar5) >> 0x20) << 0x10
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
  dVar11 = (double)(this_ptr->cell_size).x * 256;
  dVar15 = (double)(this_ptr->cell_size).y * 256;
  dVar13 = (double)(this_ptr->cell_size).z * 256;
  local_114 = 999;
  local_110 = 999;
  local_10c = 999;
  iVar2 = 0;
  iVar5 = -999;
  do {
    local_2c = aiStack_148[1];
    local_28 = aiStack_148[2];
    local_24 = aiStack_148[3];
    fVar9 = (float10)aiStack_148[2] +
            (float10)*(int *)((int)&stack0xfffffe60 + iVar2) / (float10)dVar15;
    fVar10 = (float10)aiStack_148[3] +
             (float10)*(int *)((int)&stack0xfffffe64 + iVar2) / (float10)dVar13;
    dVar12 = crt_math_c_round_FUN_005fe6b0
                       ((double)aiStack_148[1] +
                        (double)*(int *)((int)&stack0xfffffe5c + iVar2) / dVar11);
    uVar14 = (uint)((ulonglong)dVar13 >> 0x20);
    fVar8 = (float10)dVar12;
    uStack_1c4 = 0x4982c3;
    dVar13 = crt_math_c_round_FUN_005fe6b0((double)fVar9);
    fVar9 = (float10)dVar13;
    dVar13 = (double)CONCAT44 /* combine 2-byte values */(uVar14,0x4982ca);
    dVar12 = crt_math_c_round_FUN_005fe6b0((double)fVar10);
    local_130[1] = (int)ROUND(fVar8);
    local_130[2] = (int)ROUND(fVar9);
    local_130[3] = (int)ROUND(dVar12);
    if (local_130[1] < iStack_120) {
      iStack_120 = local_130[1];
    }
    if (local_130[2] < iStack_11c) {
      iStack_11c = local_130[2];
    }
    if (local_130[3] < iStack_118) {
      iStack_118 = local_130[3];
    }
    iVar3 = extraout_ECX;
    if (extraout_ECX < local_130[1]) {
      iVar3 = local_130[1];
    }
    iVar4 = extraout_EDX_00;
    if (extraout_EDX_00 < local_130[2]) {
      iVar4 = local_130[2];
    }
    if (iVar5 < local_130[3]) {
      iVar5 = local_130[3];
    }
    iVar2 = iVar2 + 0xc;
  } while (iVar2 != 0x3c);
  (this_ptr->grid_bounds_min).x = iStack_120;
  (this_ptr->grid_bounds_max).x = iVar3 + 1;
  (this_ptr->grid_bounds_max).y = iVar4 + 1;
  (this_ptr->grid_bounds_max).z = iVar5 + 1;
  (this_ptr->grid_bounds_min).y = iStack_11c;
  (this_ptr->grid_bounds_min).z = iStack_118;
  if ((this_ptr->grid_bounds_min).x < 0) {
    (this_ptr->grid_bounds_min).x = 0;
  }
  if ((this_ptr->grid_bounds_min).y < 0) {
    (this_ptr->grid_bounds_min).y = 0;
  }
  if ((this_ptr->grid_bounds_min).z < 0) {
    (this_ptr->grid_bounds_min).z = 0;
  }
  iVar5 = (this_ptr->grid_coord).x;
  if (iVar5 <= (this_ptr->grid_bounds_max).x) {
    (this_ptr->grid_bounds_max).x = iVar5 + -1;
  }
  iVar5 = (this_ptr->grid_coord).y;
  if (iVar5 <= (this_ptr->grid_bounds_max).y) {
    (this_ptr->grid_bounds_max).y = iVar5 + -1;
  }
  iVar5 = (this_ptr->grid_coord).z;
  if (iVar5 <= (this_ptr->grid_bounds_max).z) {
    (this_ptr->grid_bounds_max).z = iVar5 + -1;
  }
  g_RenderedTriangleCount = 0;
  engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420
            (g_CDemonRendererPtr,&g_DebugCubeBasePoint);
  engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970(g_CDemonRendererPtr,0xff,0xff,0xff);
  if ((4 < this_ptr->rendering_mode) || (this_ptr->rendering_mode < 0)) {
    this_ptr->rendering_mode = 1;
  }
  local_f8 = (g_InverseMatrix.m[2].x ^ g_InverseMatrix.m[2].x >> 0x1f) -
             (g_InverseMatrix.m[2].x >> 0x1f);
  iVar5 = (g_InverseMatrix.m[2].y ^ g_InverseMatrix.m[2].y >> 0x1f) -
          (g_InverseMatrix.m[2].y >> 0x1f);
  iVar2 = (g_InverseMatrix.m[2].z ^ g_InverseMatrix.m[2].z >> 0x1f) -
          (g_InverseMatrix.m[2].z >> 0x1f);
  if ((local_f8 < iVar5) || (local_f8 < iVar2)) {
    if ((iVar5 < local_f8) || (iVar5 < iVar2)) {
      if (local_130[1] <= (this_ptr->grid_bounds_max).z) {
        local_94 = local_130[0] + -1;
        local_90 = local_134 + -1;
        local_64 = 0;
        iVar5 = local_130[1];
        do {
          local_30 = local_134;
          if (local_134 <= (this_ptr->grid_bounds_max).x) {
            local_b4 = local_64;
            local_b0 = local_64;
            do {
              iVar2 = local_130[0];
              if (local_130[0] <= (this_ptr->grid_bounds_max).y) {
                do {
                  iVar3 = iVar2 + 1;
                  uStack_1c4 = 0x498b9b;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_30,iVar2,iVar5,local_b4);
                  iVar2 = iVar3;
                } while (iVar3 <= (this_ptr->grid_bounds_max).y);
              }
              iVar2 = local_94;
              if ((this_ptr->grid_bounds_min).y <= local_94) {
                do {
                  iVar3 = iVar2 + -1;
                  uStack_1c4 = 0x498bca;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_30,iVar2,iVar5,local_b0);
                  iVar2 = iVar3;
                } while ((this_ptr->grid_bounds_min).y <= iVar3);
              }
              local_30 = local_30 + 1;
            } while (local_30 <= (this_ptr->grid_bounds_max).x);
          }
          local_34 = local_90;
          if ((this_ptr->grid_bounds_min).x <= local_90) {
            local_ac = local_64;
            local_a8 = local_64;
            do {
              iVar2 = local_130[0];
              if (local_130[0] <= (this_ptr->grid_bounds_max).y) {
                do {
                  iVar3 = iVar2 + 1;
                  uStack_1c4 = 0x498c3a;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_34,iVar2,iVar5,local_ac);
                  iVar2 = iVar3;
                } while (iVar3 <= (this_ptr->grid_bounds_max).y);
              }
              iVar2 = local_94;
              if ((this_ptr->grid_bounds_min).y <= local_94) {
                do {
                  iVar3 = iVar2 + -1;
                  uStack_1c4 = 0x498c69;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_34,iVar2,iVar5,local_a8);
                  iVar2 = iVar3;
                } while ((this_ptr->grid_bounds_min).y <= iVar3);
              }
              local_34 = local_34 + -1;
            } while ((this_ptr->grid_bounds_min).x <= local_34);
          }
          iVar5 = iVar5 + 1;
          local_64 = local_64 + 1;
        } while (iVar5 <= (this_ptr->grid_bounds_max).z);
      }
      iVar5 = local_130[1] + -1;
      if ((this_ptr->grid_bounds_min).z <= iVar5) {
        local_8c = local_130[0] + -1;
        local_88 = local_134 + -1;
        local_60 = local_130[1] - iVar5;
        do {
          local_38 = local_134;
          if (local_134 <= (this_ptr->grid_bounds_max).x) {
            local_a4 = local_60;
            local_a0 = local_a4;
            do {
              iVar2 = local_130[0];
              if (local_130[0] <= (this_ptr->grid_bounds_max).y) {
                do {
                  iVar3 = iVar2 + 1;
                  uStack_1c4 = 0x498df4;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_38,iVar2,iVar5,local_a4);
                  iVar2 = iVar3;
                } while (iVar3 <= (this_ptr->grid_bounds_max).y);
              }
              iVar2 = (this_ptr->grid_bounds_min).y;
              iVar3 = local_8c - iVar2;
              bVar7 = SBORROW /* signed borrow */4(local_8c,iVar2);
              iVar2 = local_8c;
              while (bVar7 == iVar3 < 0) {
                iVar4 = iVar2 + -1;
                uStack_1c4 = 0x498e23;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,local_38,iVar2,iVar5,local_a0);
                iVar2 = (this_ptr->grid_bounds_min).y;
                iVar3 = iVar4 - iVar2;
                bVar7 = SBORROW /* signed borrow */4(iVar4,iVar2);
                iVar2 = iVar4;
              }
              local_38 = local_38 + 1;
            } while (local_38 <= (this_ptr->grid_bounds_max).x);
          }
          local_3c = local_88;
          if ((this_ptr->grid_bounds_min).x <= local_88) {
            local_9c = local_60;
            local_98 = local_60;
            do {
              iVar2 = local_130[0];
              if (local_130[0] <= (this_ptr->grid_bounds_max).y) {
                do {
                  iVar3 = iVar2 + 1;
                  uStack_1c4 = 0x498d49;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_3c,iVar2,iVar5,local_9c);
                  iVar2 = iVar3;
                } while (iVar3 <= (this_ptr->grid_bounds_max).y);
              }
              iVar2 = local_8c;
              if ((this_ptr->grid_bounds_min).y <= local_8c) {
                do {
                  iVar3 = iVar2 + -1;
                  uStack_1c4 = 0x498d78;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_3c,iVar2,iVar5,local_98);
                  iVar2 = iVar3;
                } while ((this_ptr->grid_bounds_min).y <= iVar3);
              }
              local_3c = local_3c + -1;
            } while ((this_ptr->grid_bounds_min).x <= local_3c);
          }
          iVar5 = iVar5 + -1;
          local_60 = local_60 + 1;
        } while ((this_ptr->grid_bounds_min).z <= iVar5);
      }
    }
    else {
      if (local_130[0] <= (this_ptr->grid_bounds_max).y) {
        local_84 = local_130[1] + -1;
        local_80 = local_134 + -1;
        local_5c = 0;
        iVar5 = local_130[0];
        do {
          local_40 = local_134;
          if (local_134 <= (this_ptr->grid_bounds_max).x) {
            local_d4 = local_5c;
            local_d0 = local_5c;
            do {
              iVar2 = local_130[1];
              if (local_130[1] <= (this_ptr->grid_bounds_max).z) {
                do {
                  iVar3 = iVar2 + 1;
                  uStack_1c4 = 0x49886a;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_40,iVar5,iVar2,local_d4);
                  iVar2 = iVar3;
                } while (iVar3 <= (this_ptr->grid_bounds_max).z);
              }
              iVar2 = local_84;
              if ((this_ptr->grid_bounds_min).z <= local_84) {
                do {
                  iVar3 = iVar2 + -1;
                  uStack_1c4 = 0x498899;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_40,iVar5,iVar2,local_d0);
                  iVar2 = iVar3;
                } while ((this_ptr->grid_bounds_min).z <= iVar3);
              }
              local_40 = local_40 + 1;
            } while (local_40 <= (this_ptr->grid_bounds_max).x);
          }
          local_44 = local_80;
          if ((this_ptr->grid_bounds_min).x <= local_80) {
            local_cc = local_5c;
            local_c8 = local_5c;
            do {
              iVar2 = local_130[1];
              if (local_130[1] <= (this_ptr->grid_bounds_max).z) {
                do {
                  iVar3 = iVar2 + 1;
                  uStack_1c4 = 0x49890c;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_44,iVar5,iVar2,local_cc);
                  iVar2 = iVar3;
                } while (iVar3 <= (this_ptr->grid_bounds_max).z);
              }
              iVar2 = local_84;
              if ((this_ptr->grid_bounds_min).z <= local_84) {
                do {
                  iVar3 = iVar2 + -1;
                  uStack_1c4 = 0x49893b;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_44,iVar5,iVar2,local_c8);
                  iVar2 = iVar3;
                } while ((this_ptr->grid_bounds_min).z <= iVar3);
              }
              local_44 = local_44 + -1;
            } while ((this_ptr->grid_bounds_min).x <= local_44);
          }
          iVar5 = iVar5 + 1;
          local_5c = local_5c + 1;
        } while (iVar5 <= (this_ptr->grid_bounds_max).y);
      }
      iVar5 = local_130[0] + -1;
      if ((this_ptr->grid_bounds_min).y <= iVar5) {
        local_7c = local_130[1] + -1;
        local_78 = local_134 + -1;
        local_58 = local_130[0] - iVar5;
        do {
          local_48 = local_134;
          if (local_134 <= (this_ptr->grid_bounds_max).x) {
            local_c4 = local_58;
            local_c0 = local_c4;
            do {
              iVar2 = local_130[1];
              if (local_130[1] <= (this_ptr->grid_bounds_max).z) {
                do {
                  iVar3 = iVar2 + 1;
                  uStack_1c4 = 0x498ac9;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_48,iVar5,iVar2,local_c4);
                  iVar2 = iVar3;
                } while (iVar3 <= (this_ptr->grid_bounds_max).z);
              }
              iVar2 = (this_ptr->grid_bounds_min).z;
              iVar3 = local_7c - iVar2;
              bVar7 = SBORROW /* signed borrow */4(local_7c,iVar2);
              iVar2 = local_7c;
              while (bVar7 == iVar3 < 0) {
                iVar4 = iVar2 + -1;
                uStack_1c4 = 0x498af8;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,local_48,iVar5,iVar2,local_c0);
                iVar2 = (this_ptr->grid_bounds_min).z;
                iVar3 = iVar4 - iVar2;
                bVar7 = SBORROW /* signed borrow */4(iVar4,iVar2);
                iVar2 = iVar4;
              }
              local_48 = local_48 + 1;
            } while (local_48 <= (this_ptr->grid_bounds_max).x);
          }
          local_4c = local_78;
          if ((this_ptr->grid_bounds_min).x <= local_78) {
            local_bc = local_58;
            local_b8 = local_58;
            do {
              iVar2 = local_130[1];
              if (local_130[1] <= (this_ptr->grid_bounds_max).z) {
                do {
                  iVar3 = iVar2 + 1;
                  uStack_1c4 = 0x498a1b;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_4c,iVar5,iVar2,local_bc);
                  iVar2 = iVar3;
                } while (iVar3 <= (this_ptr->grid_bounds_max).z);
              }
              iVar2 = local_7c;
              if ((this_ptr->grid_bounds_min).z <= local_7c) {
                do {
                  iVar3 = iVar2 + -1;
                  uStack_1c4 = 0x498a4a;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_4c,iVar5,iVar2,local_b8);
                  iVar2 = iVar3;
                } while ((this_ptr->grid_bounds_min).z <= iVar3);
              }
              local_4c = local_4c + -1;
            } while ((this_ptr->grid_bounds_min).x <= local_4c);
          }
          iVar5 = iVar5 + -1;
          local_58 = local_58 + 1;
        } while ((this_ptr->grid_bounds_min).y <= iVar5);
      }
    }
  }
  else {
    if (local_134 <= (this_ptr->grid_bounds_max).x) {
      local_74 = local_130[1] + -1;
      local_70 = local_130[0] + -1;
      local_54 = 0;
      iVar5 = local_134;
      do {
        local_20 = local_130[0];
        if (local_130[0] <= (this_ptr->grid_bounds_max).y) {
          local_f4 = local_54;
          local_f0 = local_54;
          do {
            iVar2 = local_130[1];
            if (local_130[1] <= (this_ptr->grid_bounds_max).z) {
              do {
                iVar3 = iVar2 + 1;
                uStack_1c4 = 0x4984da;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar5,local_20,iVar2,local_f4);
                iVar2 = iVar3;
              } while (iVar3 <= (this_ptr->grid_bounds_max).z);
            }
            iVar2 = local_74;
            if ((this_ptr->grid_bounds_min).z <= local_74) {
              do {
                iVar3 = iVar2 + -1;
                uStack_1c4 = 0x498509;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar5,local_20,iVar2,local_f0);
                iVar2 = iVar3;
              } while ((this_ptr->grid_bounds_min).z <= iVar3);
            }
            local_20 = local_20 + 1;
          } while (local_20 <= (this_ptr->grid_bounds_max).y);
        }
        local_24 = local_70;
        if ((this_ptr->grid_bounds_min).y <= local_70) {
          local_ec = local_54;
          local_e8 = local_54;
          do {
            iVar2 = local_130[1];
            if (local_130[1] <= (this_ptr->grid_bounds_max).z) {
              do {
                iVar3 = iVar2 + 1;
                uStack_1c4 = 0x49857c;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar5,local_24,iVar2,local_ec);
                iVar2 = iVar3;
              } while (iVar3 <= (this_ptr->grid_bounds_max).z);
            }
            iVar2 = local_74;
            if ((this_ptr->grid_bounds_min).z <= local_74) {
              do {
                iVar3 = iVar2 + -1;
                uStack_1c4 = 0x4985ab;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar5,local_24,iVar2,local_e8);
                iVar2 = iVar3;
              } while ((this_ptr->grid_bounds_min).z <= iVar3);
            }
            local_24 = local_24 + -1;
          } while ((this_ptr->grid_bounds_min).y <= local_24);
        }
        iVar5 = iVar5 + 1;
        local_54 = local_54 + 1;
      } while (iVar5 <= (this_ptr->grid_bounds_max).x);
    }
    iVar5 = local_134 + -1;
    if ((this_ptr->grid_bounds_min).x <= iVar5) {
      local_6c = local_130[1] + -1;
      local_68 = local_130[0] + -1;
      local_50 = local_134 - iVar5;
      do {
        local_28 = local_130[0];
        if (local_130[0] <= (this_ptr->grid_bounds_max).y) {
          local_e4 = local_50;
          local_e0 = local_50;
          do {
            iVar2 = local_130[1];
            if (local_130[1] <= (this_ptr->grid_bounds_max).z) {
              do {
                iVar3 = iVar2 + 1;
                uStack_1c4 = 0x498672;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar5,local_28,iVar2,local_e4);
                iVar2 = iVar3;
              } while (iVar3 <= (this_ptr->grid_bounds_max).z);
            }
            iVar2 = local_6c;
            if ((this_ptr->grid_bounds_min).z <= local_6c) {
              do {
                iVar3 = iVar2 + -1;
                uStack_1c4 = 0x4986a1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar5,local_28,iVar2,local_e0);
                iVar2 = iVar3;
              } while ((this_ptr->grid_bounds_min).z <= iVar3);
            }
            local_28 = local_28 + 1;
          } while (local_28 <= (this_ptr->grid_bounds_max).y);
        }
        local_2c = local_68;
        if ((this_ptr->grid_bounds_min).y <= local_68) {
          local_dc = local_50;
          local_d8 = local_50;
          do {
            iVar2 = local_130[1];
            if (local_130[1] <= (this_ptr->grid_bounds_max).z) {
              do {
                iVar3 = iVar2 + 1;
                uStack_1c4 = 0x498714;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar5,local_2c,iVar2,local_dc);
                iVar2 = iVar3;
              } while (iVar3 <= (this_ptr->grid_bounds_max).z);
            }
            iVar2 = local_6c;
            if ((this_ptr->grid_bounds_min).z <= local_6c) {
              do {
                iVar3 = iVar2 + -1;
                uStack_1c4 = 0x498743;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar5,local_2c,iVar2,local_d8);
                iVar2 = iVar3;
              } while ((this_ptr->grid_bounds_min).z <= iVar3);
            }
            local_2c = local_2c + -1;
          } while ((this_ptr->grid_bounds_min).y <= local_2c);
        }
        iVar5 = iVar5 + -1;
        local_50 = local_50 + 1;
      } while ((this_ptr->grid_bounds_min).x <= iVar5);
    }
  }
  g_PVSReadyFlag = 1;
  return;
}
