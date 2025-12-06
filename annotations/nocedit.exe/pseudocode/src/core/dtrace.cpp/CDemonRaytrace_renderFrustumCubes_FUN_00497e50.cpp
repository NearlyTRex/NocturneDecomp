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
  int extraout_ECX;
  int iVar2;
  uint extraout_EDX;
  BADSPACEBASE *in_ESP;
  int iVar3;
  byte *puVar4;
  byte *puVar5;
  CDemonRaytrace *pCVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  bool bVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  int aiStackY_1134 [992];
  CVector3i *in_stack_fffffe50;
  uint uStack_1ac;
  uint local_1a8;
  uint uStack_1a4;
  uint local_1a0;
  uint uVar17;
  double dVar18;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  float local_158;
  float local_154;
  float local_150;
  float fStack_14c;
  int aiStack_148 [4];
  int local_138;
  int local_134 [4];
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  int local_110;
  CDemonRaytrace *local_10c;
  int local_108;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
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
  byte *local_70;
  int local_6c;
  byte *local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  byte *local_4c;
  int local_48;
  byte *local_44;
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
  int iStack_14;
  CDemonRaytrace *pCVar19;
  
  pCVar6 = this_ptr;
  bVar9 = 0;
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
            (g_CDemonRendererPtr,in_stack_fffffe50);
  local_138 = (int)fStack_14c;
  local_134[(uint)bVar9 * -2] = aiStack_148[(uint)bVar9 * -2];
  local_134[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       aiStack_148[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  fVar11 = (float10)0.00390625;
  local_1c = local_134[2];
  local_158 = (float)((float10)local_134[0] * fVar11);
  local_154 = (float)((float10)local_134[1] * fVar11);
  local_150 = (float)((float10)local_134[2] * fVar11);
  fVar12 = ((float10)local_134[0] * fVar11 - (float10)(this_ptr->bbox_min).x) /
           (float10)(this_ptr->cell_size).x;
  fVar11 = (float10)local_154;
  dVar14 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,local_134[2]));
  local_134[1] = (int)ROUND(fVar12);
  fVar12 = (fVar11 - (float10)(this_ptr->bbox_min).y) / (float10)(this_ptr->cell_size).y;
  fVar11 = (float10)fStack_14c;
  uStack_1ac = 0x497f32;
  dVar14 = crt_math_c_round_FUN_005fe6b0(dVar14);
  local_134[3] = (int)ROUND(fVar12);
  fVar12 = (fVar11 - (float10)(this_ptr->bbox_min).z) / (float10)(this_ptr->cell_size).z;
  fVar11 = (float10)fov_or_radius * (float10)256f;
  local_1a8 = 0x497f4a;
  crt_math_c_round_FUN_005fe6b0(dVar14);
  local_134[0] = (int)ROUND(fVar11);
  uStack_1a4 = 0x497f68;
  local_134[1] = local_134[0];
  local_134[2] = local_134[0];
  dVar14 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(local_134[0],g_InverseMatrix.m[0].x));
  iStack_11c = (int)ROUND(fVar12);
  lVar1 = (longlong)SUB84 /* extract 2-byte value */(dVar14,0) * (longlong)(int)((ulonglong)dVar14 >> 0x20);
  local_184 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)local_134[1]) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)local_134[1]) >> 0x20)
              << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)local_134[1]) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)local_134[1]) >> 0x20)
              << 0x10);
  local_180 = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)local_134[1]) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)local_134[1]) >> 0x20)
              << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)local_134[1]) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)local_134[1]) >> 0x20)
              << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)local_134[1]) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)local_134[1]) >> 0x20)
              << 0x10);
  local_17c = ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)local_134[1]) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)local_134[1]) >> 0x20)
              << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)local_134[1]) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[1].z * (longlong)local_134[1]) >> 0x20)
              << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)local_134[1]) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)local_134[1]) >> 0x20)
              << 0x10);
  iVar7 = -local_134[1];
  local_178 = ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar7) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar7) >> 0x20) << 0x10
              ) + ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)local_134[2]) >> 0x10 |
                  (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)local_134[2]) >>
                       0x20) << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)local_134[3]) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)local_134[3]) >> 0x20)
              << 0x10);
  local_174 = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar7) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar7) >> 0x20) << 0x10
              ) + ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)local_134[2]) >> 0x10 |
                  (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)local_134[2]) >>
                       0x20) << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)local_134[3]) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)local_134[3]) >> 0x20)
              << 0x10);
  lVar1 = (longlong)local_134[2];
  local_134[2] = -local_134[2];
  local_170 = ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar7) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar7) >> 0x20) << 0x10
              ) + ((uint)(g_InverseMatrix.m[1].z * lVar1) >> 0x10 |
                  (int)((ulonglong)(g_InverseMatrix.m[1].z * lVar1) >> 0x20) << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)local_134[3]) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)local_134[3]) >> 0x20)
              << 0x10);
  local_16c = ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar7) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar7) >> 0x20) << 0x10
              ) + ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)local_134[2]) >> 0x10 |
                  (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)local_134[2]) >>
                       0x20) << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)local_134[3]) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)local_134[3]) >> 0x20)
              << 0x10);
  local_168 = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar7) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar7) >> 0x20) << 0x10
              ) + ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)local_134[2]) >> 0x10 |
                  (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)local_134[2]) >>
                       0x20) << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)local_134[3]) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)local_134[3]) >> 0x20)
              << 0x10);
  local_164 = ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar7) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar7) >> 0x20) << 0x10
              ) + ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)local_134[2]) >> 0x10 |
                  (int)((ulonglong)((longlong)g_InverseMatrix.m[1].z * (longlong)local_134[2]) >>
                       0x20) << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)local_134[3]) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)local_134[3]) >> 0x20)
              << 0x10);
  local_160 = ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)local_134[1]) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)local_134[1]) >> 0x20)
              << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)local_134[2]) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)local_134[2]) >> 0x20)
              << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)local_134[3]) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)local_134[3]) >> 0x20)
              << 0x10);
  local_15c = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)local_134[1]) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)local_134[1]) >> 0x20)
              << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)local_134[2]) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)local_134[2]) >> 0x20)
              << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)local_134[3]) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)local_134[3]) >> 0x20)
              << 0x10);
  local_158 = (float)(((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)local_134[1]) >> 0x10 |
                      (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)local_134[1])
                           >> 0x20) << 0x10) +
                      ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)local_134[2]) >> 0x10 |
                      (int)((ulonglong)((longlong)g_InverseMatrix.m[1].z * (longlong)local_134[2])
                           >> 0x20) << 0x10) +
                     ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)local_134[3]) >> 0x10 |
                     (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)local_134[3]) >>
                          0x20) << 0x10));
  local_154 = 0.0;
  local_150 = 0.0;
  fStack_14c = 0.0;
  dVar14 = (double)(this_ptr->cell_size).x * 256;
  dVar18 = (double)(this_ptr->cell_size).y * 256;
  dVar15 = (double)(this_ptr->cell_size).z * 256;
  local_f4 = 999;
  local_f0 = 999;
  local_ec = 999;
  iVar3 = 0;
  iVar7 = -999;
  iVar8 = -999;
  do {
    fVar11 = (float10)iStack_124 +
             (float10)*(int *)((int)&stack0xfffffe7c + iVar3) / (float10)dVar14;
    fVar12 = (float10)iStack_120 +
             (float10)*(int *)((int)&stack0xfffffe80 + iVar3) / (float10)dVar18;
    fVar13 = (float10)iStack_11c +
             (float10)*(int *)((int)&stack0xfffffe84 + iVar3) / (float10)dVar15;
    local_1a0 = 0x4982bc;
    dVar15 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar7,iStack_11c));
    uVar17 = 0x4982c3;
    dVar16 = crt_math_c_round_FUN_005fe6b0(dVar15);
    dVar15 = (double)CONCAT44 /* combine 2-byte values */(0x4982ca,uVar17);
    dVar16 = crt_math_c_round_FUN_005fe6b0(dVar16);
    iVar7 = (int)((ulonglong)dVar16 >> 0x20);
    local_f4 = (int)ROUND(fVar11);
    local_f0 = (int)ROUND(fVar12);
    local_ec = (int)ROUND(fVar13);
    if (local_f4 < local_e8) {
      local_e8 = local_f4;
    }
    if (local_f0 < local_e4) {
      local_e4 = local_f0;
    }
    if (local_ec < local_e0) {
      local_e0 = local_ec;
    }
    iVar2 = extraout_ECX;
    if (extraout_ECX < local_f4) {
      iVar2 = local_f4;
    }
    if (iVar7 < local_f0) {
      iVar7 = local_f0;
    }
    if (iVar8 < local_ec) {
      iVar8 = local_ec;
    }
    iVar3 = iVar3 + 0xc;
  } while (iVar3 != 0x3c);
  (this_ptr->grid_bounds_min).x = local_e8;
  (this_ptr->grid_bounds_max).x = iVar2 + 1;
  (this_ptr->grid_bounds_max).y = iVar7 + 1;
  (this_ptr->grid_bounds_max).z = iVar8 + 1;
  (this_ptr->grid_bounds_min).y = local_e4;
  (this_ptr->grid_bounds_min).z = local_e0;
  if ((this_ptr->grid_bounds_min).x < 0) {
    (this_ptr->grid_bounds_min).x = 0;
  }
  if ((this_ptr->grid_bounds_min).y < 0) {
    (this_ptr->grid_bounds_min).y = 0;
  }
  if ((this_ptr->grid_bounds_min).z < 0) {
    (this_ptr->grid_bounds_min).z = 0;
  }
  iVar7 = (this_ptr->grid_coord).x;
  if (iVar7 <= (this_ptr->grid_bounds_max).x) {
    (this_ptr->grid_bounds_max).x = iVar7 + -1;
  }
  iVar7 = (this_ptr->grid_coord).y;
  if (iVar7 <= (this_ptr->grid_bounds_max).y) {
    (this_ptr->grid_bounds_max).y = iVar7 + -1;
  }
  iVar7 = (this_ptr->grid_coord).z;
  if (iVar7 <= (this_ptr->grid_bounds_max).z) {
    (this_ptr->grid_bounds_max).z = iVar7 + -1;
  }
  g_RenderedTriangleCount = 0;
  engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420
            (g_CDemonRendererPtr,&g_DebugCubeBasePoint);
  local_1a0 = 0x498404;
  engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970(g_CDemonRendererPtr,0xff,0xff,0xff);
  if ((4 < this_ptr->rendering_mode) || (this_ptr->rendering_mode < 0)) {
    this_ptr->rendering_mode = 1;
  }
  local_d4 = (g_InverseMatrix.m[2].x ^ g_InverseMatrix.m[2].x >> 0x1f) -
             (g_InverseMatrix.m[2].x >> 0x1f);
  iVar7 = (g_InverseMatrix.m[2].y ^ g_InverseMatrix.m[2].y >> 0x1f) -
          (g_InverseMatrix.m[2].y >> 0x1f);
  iVar8 = (g_InverseMatrix.m[2].z ^ g_InverseMatrix.m[2].z >> 0x1f) -
          (g_InverseMatrix.m[2].z >> 0x1f);
  if ((local_d4 < iVar7) || (local_d4 < iVar8)) {
    if ((iVar7 < local_d4) || (iVar7 < iVar8)) {
      if (local_108 <= (this_ptr->grid_bounds_max).z) {
        local_70 = (byte *)((int)&local_10c[-1].grid_bounds_max.z + 3);
        local_6c = local_110 + -1;
        local_40 = 0;
        iVar7 = local_108;
        do {
          if (local_110 <= (this_ptr->grid_bounds_max).x) {
            local_90 = local_40;
            local_8c = local_40;
            iVar8 = local_110;
            do {
              pCVar6 = local_10c;
              if ((int)local_10c <= (this_ptr->grid_bounds_max).y) {
                do {
                  pCVar19 = (CDemonRaytrace *)((int)&pCVar6->rendering_mode + 1);
                  local_1a0 = 0x498b9b;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,iVar8,(int)pCVar6,iVar7,local_90);
                  pCVar6 = pCVar19;
                } while ((int)pCVar19 <= (this_ptr->grid_bounds_max).y);
              }
              puVar4 = local_70;
              if ((this_ptr->grid_bounds_min).y <= (int)local_70) {
                do {
                  puVar5 = puVar4 + -1;
                  local_1a0 = 0x498bca;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,iVar8,(int)puVar4,iVar7,local_8c);
                  puVar4 = puVar5;
                } while ((this_ptr->grid_bounds_min).y <= (int)puVar5);
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 <= (this_ptr->grid_bounds_max).x);
          }
          if ((this_ptr->grid_bounds_min).x <= local_6c) {
            local_88 = local_40;
            local_84 = local_40;
            iVar8 = local_6c;
            do {
              pCVar6 = local_10c;
              if ((int)local_10c <= (this_ptr->grid_bounds_max).y) {
                do {
                  pCVar19 = (CDemonRaytrace *)((int)&pCVar6->rendering_mode + 1);
                  local_1a0 = 0x498c3a;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,iVar8,(int)pCVar6,iVar7,local_88);
                  pCVar6 = pCVar19;
                } while ((int)pCVar19 <= (this_ptr->grid_bounds_max).y);
              }
              puVar4 = local_70;
              if ((this_ptr->grid_bounds_min).y <= (int)local_70) {
                do {
                  puVar5 = puVar4 + -1;
                  local_1a0 = 0x498c69;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,iVar8,(int)puVar4,iVar7,local_84);
                  puVar4 = puVar5;
                } while ((this_ptr->grid_bounds_min).y <= (int)puVar5);
              }
              iVar8 = iVar8 + -1;
            } while ((this_ptr->grid_bounds_min).x <= iVar8);
          }
          iVar7 = iVar7 + 1;
          local_40 = local_40 + 1;
        } while (iVar7 <= (this_ptr->grid_bounds_max).z);
      }
      iVar7 = local_108 + -1;
      if ((this_ptr->grid_bounds_min).z <= iVar7) {
        local_68 = (byte *)((int)&local_10c[-1].grid_bounds_max.z + 3);
        local_64 = local_110 + -1;
        local_3c = local_108 - iVar7;
        do {
          iStack_14 = local_110;
          if (local_110 <= (this_ptr->grid_bounds_max).x) {
            local_80 = local_3c;
            local_7c = local_80;
            do {
              pCVar6 = local_10c;
              if ((int)local_10c <= (this_ptr->grid_bounds_max).y) {
                do {
                  pCVar19 = (CDemonRaytrace *)((int)&pCVar6->rendering_mode + 1);
                  uStack_1a4 = 0x498df4;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,iStack_14,(int)pCVar6,iVar7,local_80);
                  pCVar6 = pCVar19;
                } while ((int)pCVar19 <= (this_ptr->grid_bounds_max).y);
              }
              iVar8 = (this_ptr->grid_bounds_min).y;
              iVar3 = (int)local_68 - iVar8;
              bVar10 = SBORROW /* signed borrow */4((int)local_68,iVar8);
              puVar4 = local_68;
              while (bVar10 == iVar3 < 0) {
                puVar5 = puVar4 + -1;
                local_1a0 = 0x498e23;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iStack_14,(int)puVar4,iVar7,local_7c);
                iVar8 = (this_ptr->grid_bounds_min).y;
                iVar3 = (int)puVar5 - iVar8;
                puVar4 = puVar5;
                bVar10 = SBORROW /* signed borrow */4((int)puVar5,iVar8);
              }
              iStack_14 = iStack_14 + 1;
            } while (iStack_14 <= (this_ptr->grid_bounds_max).x);
          }
          local_18 = local_64;
          if ((this_ptr->grid_bounds_min).x <= local_64) {
            local_78 = local_3c;
            local_74 = local_3c;
            do {
              pCVar6 = local_10c;
              if ((int)local_10c <= (this_ptr->grid_bounds_max).y) {
                do {
                  pCVar19 = (CDemonRaytrace *)((int)&pCVar6->rendering_mode + 1);
                  uStack_1a4 = 0x498d49;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_18,(int)pCVar6,iVar7,local_78);
                  pCVar6 = pCVar19;
                } while ((int)pCVar19 <= (this_ptr->grid_bounds_max).y);
              }
              puVar4 = local_68;
              if ((this_ptr->grid_bounds_min).y <= (int)local_68) {
                do {
                  puVar5 = puVar4 + -1;
                  local_1a0 = 0x498d78;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_18,(int)puVar4,iVar7,local_74);
                  puVar4 = puVar5;
                } while ((this_ptr->grid_bounds_min).y <= (int)puVar5);
              }
              local_18 = local_18 + -1;
            } while ((this_ptr->grid_bounds_min).x <= local_18);
          }
          iVar7 = iVar7 + -1;
          local_3c = local_3c + 1;
        } while ((this_ptr->grid_bounds_min).z <= iVar7);
      }
    }
    else {
      if ((int)local_10c <= (this_ptr->grid_bounds_max).y) {
        local_60 = local_108 + -1;
        local_5c = local_110 + -1;
        local_38 = 0;
        pCVar6 = local_10c;
        do {
          local_1c = local_110;
          if (local_110 <= (this_ptr->grid_bounds_max).x) {
            local_b0 = local_38;
            local_ac = local_38;
            do {
              iVar7 = local_108;
              if (local_108 <= (this_ptr->grid_bounds_max).z) {
                do {
                  iVar8 = iVar7 + 1;
                  local_1a0 = 0x49886a;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_1c,(int)pCVar6,iVar7,local_b0);
                  iVar7 = iVar8;
                } while (iVar8 <= (this_ptr->grid_bounds_max).z);
              }
              iVar7 = local_60;
              if ((this_ptr->grid_bounds_min).z <= local_60) {
                do {
                  iVar8 = iVar7 + -1;
                  local_1a0 = 0x498899;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_1c,(int)pCVar6,iVar7,local_ac);
                  iVar7 = iVar8;
                } while ((this_ptr->grid_bounds_min).z <= iVar8);
              }
              local_1c = local_1c + 1;
            } while (local_1c <= (this_ptr->grid_bounds_max).x);
          }
          local_20 = local_5c;
          if ((this_ptr->grid_bounds_min).x <= local_5c) {
            local_a8 = local_38;
            local_a4 = local_38;
            do {
              iVar7 = local_108;
              if (local_108 <= (this_ptr->grid_bounds_max).z) {
                do {
                  iVar8 = iVar7 + 1;
                  local_1a0 = 0x49890c;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_20,(int)pCVar6,iVar7,local_a8);
                  iVar7 = iVar8;
                } while (iVar8 <= (this_ptr->grid_bounds_max).z);
              }
              iVar7 = local_60;
              if ((this_ptr->grid_bounds_min).z <= local_60) {
                do {
                  iVar8 = iVar7 + -1;
                  local_1a0 = 0x49893b;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_20,(int)pCVar6,iVar7,local_a4);
                  iVar7 = iVar8;
                } while ((this_ptr->grid_bounds_min).z <= iVar8);
              }
              local_20 = local_20 + -1;
            } while ((this_ptr->grid_bounds_min).x <= local_20);
          }
          pCVar6 = (CDemonRaytrace *)((int)&pCVar6->rendering_mode + 1);
          local_38 = local_38 + 1;
        } while ((int)pCVar6 <= (this_ptr->grid_bounds_max).y);
      }
      puVar4 = (byte *)((int)&local_10c[-1].grid_bounds_max.z + 3);
      if ((this_ptr->grid_bounds_min).y <= (int)puVar4) {
        local_58 = local_108 + -1;
        local_54 = local_110 + -1;
        local_34 = (int)local_10c - (int)puVar4;
        do {
          local_24 = local_110;
          if (local_110 <= (this_ptr->grid_bounds_max).x) {
            local_a0 = local_34;
            local_9c = local_a0;
            do {
              iVar7 = local_108;
              if (local_108 <= (this_ptr->grid_bounds_max).z) {
                do {
                  iVar8 = iVar7 + 1;
                  uStack_1a4 = 0x498ac9;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_24,(int)puVar4,iVar7,local_a0);
                  iVar7 = iVar8;
                } while (iVar8 <= (this_ptr->grid_bounds_max).z);
              }
              iVar7 = (this_ptr->grid_bounds_min).z;
              iVar8 = local_58 - iVar7;
              bVar10 = SBORROW /* signed borrow */4(local_58,iVar7);
              iVar7 = local_58;
              while (bVar10 == iVar8 < 0) {
                iVar3 = iVar7 + -1;
                local_1a0 = 0x498af8;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,local_24,(int)puVar4,iVar7,local_9c);
                iVar7 = (this_ptr->grid_bounds_min).z;
                iVar8 = iVar3 - iVar7;
                bVar10 = SBORROW /* signed borrow */4(iVar3,iVar7);
                iVar7 = iVar3;
              }
              local_24 = local_24 + 1;
            } while (local_24 <= (this_ptr->grid_bounds_max).x);
          }
          local_28 = local_54;
          if ((this_ptr->grid_bounds_min).x <= local_54) {
            local_98 = local_34;
            local_94 = local_34;
            do {
              iVar7 = local_108;
              if (local_108 <= (this_ptr->grid_bounds_max).z) {
                do {
                  iVar8 = iVar7 + 1;
                  uStack_1a4 = 0x498a1b;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_28,(int)puVar4,iVar7,local_98);
                  iVar7 = iVar8;
                } while (iVar8 <= (this_ptr->grid_bounds_max).z);
              }
              iVar7 = local_58;
              if ((this_ptr->grid_bounds_min).z <= local_58) {
                do {
                  iVar8 = iVar7 + -1;
                  local_1a0 = 0x498a4a;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_28,(int)puVar4,iVar7,local_94);
                  iVar7 = iVar8;
                } while ((this_ptr->grid_bounds_min).z <= iVar8);
              }
              local_28 = local_28 + -1;
            } while ((this_ptr->grid_bounds_min).x <= local_28);
          }
          puVar4 = puVar4 + -1;
          local_34 = local_34 + 1;
        } while ((this_ptr->grid_bounds_min).y <= (int)puVar4);
      }
    }
  }
  else {
    if (local_110 <= (this_ptr->grid_bounds_max).x) {
      local_50 = local_108 + -1;
      local_4c = (byte *)((int)&local_10c[-1].grid_bounds_max.z + 3);
      local_30 = 0;
      iVar7 = local_110;
      do {
        this_ptr = local_10c;
        if ((int)local_10c <= (pCVar6->grid_bounds_max).y) {
          local_d0 = local_30;
          local_cc = local_30;
          do {
            iVar8 = local_108;
            if (local_108 <= (pCVar6->grid_bounds_max).z) {
              do {
                iVar3 = iVar8 + 1;
                local_1a0 = 0x4984da;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (pCVar6,iVar7,(int)this_ptr,iVar8,local_d0);
                iVar8 = iVar3;
              } while (iVar3 <= (pCVar6->grid_bounds_max).z);
            }
            iVar8 = local_50;
            if ((pCVar6->grid_bounds_min).z <= local_50) {
              do {
                iVar3 = iVar8 + -1;
                local_1a0 = 0x498509;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (pCVar6,iVar7,(int)this_ptr,iVar8,local_cc);
                iVar8 = iVar3;
              } while ((pCVar6->grid_bounds_min).z <= iVar3);
            }
            this_ptr = (CDemonRaytrace *)((int)&this_ptr->rendering_mode + 1);
          } while ((int)this_ptr <= (pCVar6->grid_bounds_max).y);
        }
        if ((pCVar6->grid_bounds_min).y <= (int)local_4c) {
          local_c8 = local_30;
          local_c4 = local_30;
          puVar4 = local_4c;
          do {
            iVar8 = local_108;
            if (local_108 <= (pCVar6->grid_bounds_max).z) {
              do {
                iVar3 = iVar8 + 1;
                local_1a0 = 0x49857c;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (pCVar6,iVar7,(int)puVar4,iVar8,local_c8);
                iVar8 = iVar3;
              } while (iVar3 <= (pCVar6->grid_bounds_max).z);
            }
            iVar8 = local_50;
            if ((pCVar6->grid_bounds_min).z <= local_50) {
              do {
                iVar3 = iVar8 + -1;
                local_1a0 = 0x4985ab;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (pCVar6,iVar7,(int)puVar4,iVar8,local_c4);
                iVar8 = iVar3;
              } while ((pCVar6->grid_bounds_min).z <= iVar3);
            }
            puVar4 = puVar4 + -1;
          } while ((pCVar6->grid_bounds_min).y <= (int)puVar4);
        }
        iVar7 = iVar7 + 1;
        local_30 = local_30 + 1;
      } while (iVar7 <= (pCVar6->grid_bounds_max).x);
    }
    iVar7 = local_110 + -1;
    if ((pCVar6->grid_bounds_min).x <= iVar7) {
      local_48 = local_108 + -1;
      local_44 = (byte *)((int)&local_10c[-1].grid_bounds_max.z + 3);
      local_2c = local_110 - iVar7;
      do {
        if ((int)local_10c <= (pCVar6->grid_bounds_max).y) {
          local_c0 = local_2c;
          local_bc = local_2c;
          pCVar19 = local_10c;
          do {
            iVar8 = local_108;
            if (local_108 <= (pCVar6->grid_bounds_max).z) {
              do {
                iVar3 = iVar8 + 1;
                local_1a0 = 0x498672;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (pCVar6,iVar7,(int)pCVar19,iVar8,local_c0);
                iVar8 = iVar3;
              } while (iVar3 <= (pCVar6->grid_bounds_max).z);
            }
            iVar8 = local_48;
            if ((pCVar6->grid_bounds_min).z <= local_48) {
              do {
                iVar3 = iVar8 + -1;
                local_1a0 = 0x4986a1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (pCVar6,iVar7,(int)pCVar19,iVar8,local_bc);
                iVar8 = iVar3;
              } while ((pCVar6->grid_bounds_min).z <= iVar3);
            }
            pCVar19 = (CDemonRaytrace *)((int)&pCVar19->rendering_mode + 1);
          } while ((int)pCVar19 <= (pCVar6->grid_bounds_max).y);
        }
        if ((pCVar6->grid_bounds_min).y <= (int)local_44) {
          local_b8 = local_2c;
          local_b4 = local_2c;
          puVar4 = local_44;
          do {
            iVar8 = local_108;
            if (local_108 <= (pCVar6->grid_bounds_max).z) {
              do {
                iVar3 = iVar8 + 1;
                uStack_1a4 = 0x498714;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (pCVar6,iVar7,(int)puVar4,iVar8,local_b8);
                iVar8 = iVar3;
              } while (iVar3 <= (pCVar6->grid_bounds_max).z);
            }
            iVar8 = local_48;
            if ((pCVar6->grid_bounds_min).z <= local_48) {
              do {
                iVar3 = iVar8 + -1;
                local_1a0 = 0x498743;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (pCVar6,iVar7,(int)puVar4,iVar8,local_b4);
                iVar8 = iVar3;
              } while ((pCVar6->grid_bounds_min).z <= iVar3);
            }
            puVar4 = puVar4 + -1;
          } while ((pCVar6->grid_bounds_min).y <= (int)puVar4);
        }
        iVar7 = iVar7 + -1;
        local_2c = local_2c + 1;
      } while ((pCVar6->grid_bounds_min).x <= iVar7);
    }
  }
  g_PVSReadyFlag = 1;
  return;
}
