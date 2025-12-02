// Name: core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50
// Address: 00497e50
// Address Range: [[00497e50, 00498e43]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50(CDemonRaytrace * this_ptr, float fov_or_radius, int render_mode)
// Cross-references:
//   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 (0056a190) at 0056a440 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00622bda = 0.00390625
//   float FLOAT_00622be2 = 256
//   double DOUBLE_00622bea = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   int g_CubesTestedCount
//   int g_CubesWithVoxelsCount
//   int g_CubesVisibleCount
//   int g_CubesRenderedCount
//   int g_PVSDrawnCubeCount
//   int g_PVSReadyFlag
//   CVector3f g_DebugCubeBasePoint
//   CMatrix3x3i g_InverseMatrix
//   undefined4 g_InverseMatrix[0][1]
//   undefined4 g_InverseMatrix[0][2]
//   undefined4 g_InverseMatrix[1][0]
//   undefined4 g_InverseMatrix[1][1]
//   undefined4 g_InverseMatrix[1][2]
//   undefined4 g_InverseMatrix[2][0]
//   undefined4 g_InverseMatrix[2][1]
//   undefined4 g_InverseMatrix[2][2]
// Function calls:
//   core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
//   core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_004990f0
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420
//   engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
//   engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50
          (CDemonRaytrace *this_ptr,float fov_or_radius,int render_mode)

{
  longlong lVar1;
  int extraout_ECX;
  int iVar2;
  undefined4 extraout_EDX;
  BADSPACEBASE *in_ESP;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
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
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uVar17;
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
  undefined1 *local_70;
  int local_6c;
  undefined1 *local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  undefined1 *local_4c;
  int local_48;
  undefined1 *local_44;
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
  fVar11 = (float10)DOUBLE_00622bda;
  local_1c = local_134[2];
  local_158 = (float)((float10)local_134[0] * fVar11);
  local_154 = (float)((float10)local_134[1] * fVar11);
  local_150 = (float)((float10)local_134[2] * fVar11);
  fVar12 = ((float10)local_134[0] * fVar11 - (float10)(this_ptr->bbox_min).x) /
           (float10)(this_ptr->cell_size).x;
  fVar11 = (float10)local_154;
  dVar14 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,local_134[2]));
  local_134[1] = (int)ROUND(fVar12);
  fVar12 = (fVar11 - (float10)(this_ptr->bbox_min).y) / (float10)(this_ptr->cell_size).y;
  fVar11 = (float10)fStack_14c;
  uStack_1ac = 0x497f32;
  dVar14 = crt_math_c_round_FUN_005fe6b0(dVar14);
  local_134[3] = (int)ROUND(fVar12);
  fVar12 = (fVar11 - (float10)(this_ptr->bbox_min).z) / (float10)(this_ptr->cell_size).z;
  fVar11 = (float10)fov_or_radius * (float10)FLOAT_00622be2;
  local_1a8 = 0x497f4a;
  crt_math_c_round_FUN_005fe6b0(dVar14);
  local_134[0] = (int)ROUND(fVar11);
  uStack_1a4 = 0x497f68;
  local_134[1] = local_134[0];
  local_134[2] = local_134[0];
  dVar14 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(local_134[0],g_InverseMatrix.m[0].x));
  iStack_11c = (int)ROUND(fVar12);
  lVar1 = (longlong)SUB84(dVar14,0) * (longlong)(int)((ulonglong)dVar14 >> 0x20);
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
  dVar14 = (double)(this_ptr->cell_size).x * DOUBLE_00622bea;
  dVar18 = (double)(this_ptr->cell_size).y * DOUBLE_00622bea;
  dVar15 = (double)(this_ptr->cell_size).z * DOUBLE_00622bea;
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
    dVar15 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar7,iStack_11c));
    uVar17 = 0x4982c3;
    dVar16 = crt_math_c_round_FUN_005fe6b0(dVar15);
    dVar15 = (double)CONCAT44(0x4982ca,uVar17);
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
        local_70 = (undefined1 *)((int)&local_10c[-1].grid_bounds_max.z + 3);
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
        local_68 = (undefined1 *)((int)&local_10c[-1].grid_bounds_max.z + 3);
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
              bVar10 = SBORROW4((int)local_68,iVar8);
              puVar4 = local_68;
              while (bVar10 == iVar3 < 0) {
                puVar5 = puVar4 + -1;
                local_1a0 = 0x498e23;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iStack_14,(int)puVar4,iVar7,local_7c);
                iVar8 = (this_ptr->grid_bounds_min).y;
                iVar3 = (int)puVar5 - iVar8;
                puVar4 = puVar5;
                bVar10 = SBORROW4((int)puVar5,iVar8);
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
      puVar4 = (undefined1 *)((int)&local_10c[-1].grid_bounds_max.z + 3);
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
              bVar10 = SBORROW4(local_58,iVar7);
              iVar7 = local_58;
              while (bVar10 == iVar8 < 0) {
                iVar3 = iVar7 + -1;
                local_1a0 = 0x498af8;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,local_24,(int)puVar4,iVar7,local_9c);
                iVar7 = (this_ptr->grid_bounds_min).z;
                iVar8 = iVar3 - iVar7;
                bVar10 = SBORROW4(iVar3,iVar7);
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
      local_4c = (undefined1 *)((int)&local_10c[-1].grid_bounds_max.z + 3);
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
      local_44 = (undefined1 *)((int)&local_10c[-1].grid_bounds_max.z + 3);
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


// Assembly code:
// 00497e50: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50
// 00497e51: PUSH ESI
// 00497e52: PUSH EDI
// 00497e53: PUSH EBP
// 00497e54: MOV EBP,ESP
// 00497e56: SUB ESP,0x19c
// 00497e5c: AND ESP,0xfffffff8
// 00497e5f: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00497e62: CMP dword ptr [0x02ca03a8],0x0
//   XREF to: 02ca03a8 (READ)
// 00497e69: JZ 0x00497e75
//   XREF to: 00497e75 (CONDITIONAL_JUMP)
// 00497e6b: CMP dword ptr [EBP + 0x1c],0x0
//   XREF to: Stack[0xc] (READ)
// 00497e6f: JNZ 0x0049878f
//   XREF to: 0049878f (CONDITIONAL_JUMP)
// 00497e75: XOR ESI,ESI
//   Label: LAB_00497e75
// 00497e77: MOV dword ptr [0x02ca0394],ESI
//   XREF to: 02ca0394 (WRITE)
// 00497e7d: MOV dword ptr [0x02ca0398],ESI
//   XREF to: 02ca0398 (WRITE)
// 00497e83: MOV dword ptr [0x02ca039c],ESI
//   XREF to: 02ca039c (WRITE)
// 00497e89: MOV dword ptr [0x02ca03a0],ESI
//   XREF to: 02ca03a0 (WRITE)
// 00497e8f: MOV dword ptr [0x02ca03a4],ESI
//   XREF to: 02ca03a4 (WRITE)
// 00497e95: MOV ESI,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 00497e9b: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 00497e9c: LEA ESI,[ESP + 0x64]
//   XREF to: Stack[-0x150] (DATA)
// 00497ea0: LEA EDI,[ESP + 0x7c]
//   XREF to: Stack[-0x138] (DATA)
// 00497ea4: CALL engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
//   XREF to: 0048c760 (UNCONDITIONAL_CALL)
// 00497ea9: LEA ESI,[ESP + 0x64]
//   XREF to: Stack[-0x150] (DATA)
// 00497ead: ADD ESP,0x4
// 00497eb0: MOVSD ES:EDI,ESI
// 00497eb1: MOVSD ES:EDI,ESI
// 00497eb2: MOVSD ES:EDI,ESI
// 00497eb3: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x138] (READ)
// 00497eb7: MOV dword ptr [ESP + 0x190],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00497ebe: FILD dword ptr [ESP + 0x190]
//   XREF to: Stack[-0x20] (READ)
// 00497ec5: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x134] (READ)
// 00497ec9: FLD double ptr [0x00622bda]
//   XREF to: 00622bda (READ)
// 00497ecf: FXCH
// 00497ed1: FMUL ST1
// 00497ed3: MOV dword ptr [ESP + 0x190],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00497eda: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x130] (READ)
// 00497ee1: FILD dword ptr [ESP + 0x190]
//   XREF to: Stack[-0x20] (READ)
// 00497ee8: MOV dword ptr [ESP + 0x190],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00497eef: FMUL ST2
// 00497ef1: FILD dword ptr [ESP + 0x190]
//   XREF to: Stack[-0x20] (READ)
// 00497ef8: FMULP ST3
// 00497efa: FXCH
// 00497efc: FST float ptr [ESP + 0x54]
//   XREF to: Stack[-0x15c] (WRITE)
// 00497f00: FXCH
// 00497f02: FSTP float ptr [ESP + 0x58]
//   XREF to: Stack[-0x158] (WRITE)
// 00497f06: FXCH
// 00497f08: FSTP float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x154] (WRITE)
// 00497f0c: FSUB float ptr [EBX + 0x10]
// 00497f0f: FDIV float ptr [EBX + 0x28]
// 00497f12: FLD float ptr [ESP + 0x58]
//   XREF to: Stack[-0x158] (READ)
// 00497f16: FXCH
// 00497f18: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00497f1d: FISTP dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x138] (WRITE)
// 00497f21: FSUB float ptr [EBX + 0x14]
// 00497f24: FDIV float ptr [EBX + 0x2c]
// 00497f27: FLD float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x154] (READ)
// 00497f2b: FXCH
// 00497f2d: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00497f32: FISTP dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x134] (WRITE)
// 00497f36: FSUB float ptr [EBX + 0x18]
// 00497f39: FDIV float ptr [EBX + 0x30]
// 00497f3c: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00497f3f: FMUL float ptr [0x00622be2]
//   XREF to: 00622be2 (READ)
// 00497f45: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00497f4a: FISTP dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x144] (WRITE)
// 00497f4e: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x144] (READ)
// 00497f52: MOV EDX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x144] (READ)
// 00497f56: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x140] (WRITE)
// 00497f5a: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x13c] (WRITE)
// 00497f5e: MOV EAX,[0x02f0d364]
//   XREF to: 02f0d364 (READ)
// 00497f63: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00497f68: FISTP dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x130] (WRITE)
// 00497f6f: IMUL EDX
// 00497f71: SHRD EAX,EDX,0x10
// 00497f75: MOV EDX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x144] (READ)
// 00497f79: MOV ECX,EAX
// 00497f7b: MOV EAX,[0x02f0d370]
//   XREF to: 02f0d370 (READ)
// 00497f80: IMUL EDX
// 00497f82: SHRD EAX,EDX,0x10
// 00497f86: MOV EDX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x144] (READ)
// 00497f8a: ADD ECX,EAX
// 00497f8c: MOV EAX,[0x02f0d37c]
//   XREF to: 02f0d37c (READ)
// 00497f91: IMUL EDX
// 00497f93: SHRD EAX,EDX,0x10
// 00497f97: MOV EDX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x144] (READ)
// 00497f9b: ADD ECX,EAX
// 00497f9d: MOV EAX,[0x02f0d368]
//   XREF to: 02f0d368 (READ)
// 00497fa2: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x198] (WRITE)
// 00497fa6: IMUL EDX
// 00497fa8: SHRD EAX,EDX,0x10
// 00497fac: MOV EDX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x144] (READ)
// 00497fb0: MOV ECX,EAX
// 00497fb2: MOV EAX,[0x02f0d374]
//   XREF to: 02f0d374 (READ)
// 00497fb7: IMUL EDX
// 00497fb9: SHRD EAX,EDX,0x10
// 00497fbd: MOV EDX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x144] (READ)
// 00497fc1: ADD ECX,EAX
// 00497fc3: MOV EAX,[0x02f0d380]
//   XREF to: 02f0d380 (READ)
// 00497fc8: IMUL EDX
// 00497fca: SHRD EAX,EDX,0x10
// 00497fce: MOV EDX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x144] (READ)
// 00497fd2: ADD ECX,EAX
// 00497fd4: MOV EAX,[0x02f0d36c]
//   XREF to: 02f0d36c (READ)
// 00497fd9: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x194] (WRITE)
// 00497fdd: IMUL EDX
// 00497fdf: SHRD EAX,EDX,0x10
// 00497fe3: MOV EDX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x144] (READ)
// 00497fe7: MOV ECX,EAX
// 00497fe9: MOV EAX,[0x02f0d378]
//   XREF to: 02f0d378 (READ)
// 00497fee: IMUL EDX
// 00497ff0: SHRD EAX,EDX,0x10
// 00497ff4: MOV EDX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x144] (READ)
// 00497ff8: ADD ECX,EAX
// 00497ffa: MOV EAX,[0x02f0d384]
//   XREF to: 02f0d384 (READ)
// 00497fff: IMUL EDX
// 00498001: SHRD EAX,EDX,0x10
// 00498005: ADD ECX,EAX
// 00498007: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[-0x190] (WRITE)
// 0049800b: MOV EDI,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x144] (READ)
// 0049800f: NEG EDI
// 00498011: MOV EAX,[0x02f0d364]
//   XREF to: 02f0d364 (READ)
// 00498016: MOV EDX,EDI
// 00498018: IMUL EDX
// 0049801a: SHRD EAX,EDX,0x10
// 0049801e: MOV EDX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x140] (READ)
// 00498022: MOV ECX,EAX
// 00498024: MOV EAX,[0x02f0d370]
//   XREF to: 02f0d370 (READ)
// 00498029: IMUL EDX
// 0049802b: SHRD EAX,EDX,0x10
// 0049802f: MOV EDX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x13c] (READ)
// 00498033: ADD ECX,EAX
// 00498035: MOV EAX,[0x02f0d37c]
//   XREF to: 02f0d37c (READ)
// 0049803a: IMUL EDX
// 0049803c: SHRD EAX,EDX,0x10
// 00498040: MOV EDX,EDI
// 00498042: ADD ECX,EAX
// 00498044: MOV EAX,[0x02f0d368]
//   XREF to: 02f0d368 (READ)
// 00498049: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[-0x18c] (WRITE)
// 0049804d: IMUL EDX
// 0049804f: SHRD EAX,EDX,0x10
// 00498053: MOV EDX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x140] (READ)
// 00498057: MOV ECX,EAX
// 00498059: MOV EAX,[0x02f0d374]
//   XREF to: 02f0d374 (READ)
// 0049805e: IMUL EDX
// 00498060: SHRD EAX,EDX,0x10
// 00498064: MOV EDX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x13c] (READ)
// 00498068: ADD ECX,EAX
// 0049806a: MOV EAX,[0x02f0d380]
//   XREF to: 02f0d380 (READ)
// 0049806f: IMUL EDX
// 00498071: SHRD EAX,EDX,0x10
// 00498075: MOV EDX,EDI
// 00498077: ADD ECX,EAX
// 00498079: MOV EAX,[0x02f0d36c]
//   XREF to: 02f0d36c (READ)
// 0049807e: MOV dword ptr [ESP + 0x28],ECX
//   XREF to: Stack[-0x188] (WRITE)
// 00498082: IMUL EDX
// 00498084: SHRD EAX,EDX,0x10
// 00498088: MOV EDX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x140] (READ)
// 0049808c: MOV ECX,EAX
// 0049808e: MOV EAX,[0x02f0d378]
//   XREF to: 02f0d378 (READ)
// 00498093: IMUL EDX
// 00498095: SHRD EAX,EDX,0x10
// 00498099: MOV EDX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x13c] (READ)
// 0049809d: ADD ECX,EAX
// 0049809f: MOV EAX,[0x02f0d384]
//   XREF to: 02f0d384 (READ)
// 004980a4: IMUL EDX
// 004980a6: SHRD EAX,EDX,0x10
// 004980aa: ADD ECX,EAX
// 004980ac: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x140] (READ)
// 004980b0: NEG EAX
// 004980b2: MOV EDX,EDI
// 004980b4: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x140] (WRITE)
// 004980b8: MOV EAX,[0x02f0d364]
//   XREF to: 02f0d364 (READ)
// 004980bd: MOV dword ptr [ESP + 0x2c],ECX
//   XREF to: Stack[-0x184] (WRITE)
// 004980c1: IMUL EDX
// 004980c3: SHRD EAX,EDX,0x10
// 004980c7: MOV EDX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x140] (READ)
// 004980cb: MOV ECX,EAX
// 004980cd: MOV EAX,[0x02f0d370]
//   XREF to: 02f0d370 (READ)
// 004980d2: IMUL EDX
// 004980d4: SHRD EAX,EDX,0x10
// 004980d8: MOV EDX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x13c] (READ)
// 004980dc: ADD ECX,EAX
// 004980de: MOV EAX,[0x02f0d37c]
//   XREF to: 02f0d37c (READ)
// 004980e3: IMUL EDX
// 004980e5: SHRD EAX,EDX,0x10
// 004980e9: ADD ECX,EAX
// 004980eb: MOV dword ptr [ESP + 0x6c],EDI
//   XREF to: Stack[-0x144] (WRITE)
// 004980ef: MOV dword ptr [ESP + 0x30],ECX
//   XREF to: Stack[-0x180] (WRITE)
// 004980f3: MOV EAX,[0x02f0d368]
//   XREF to: 02f0d368 (READ)
// 004980f8: MOV EDX,EDI
// 004980fa: IMUL EDX
// 004980fc: SHRD EAX,EDX,0x10
// 00498100: MOV EDX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x140] (READ)
// 00498104: MOV ECX,EAX
// 00498106: MOV EAX,[0x02f0d374]
//   XREF to: 02f0d374 (READ)
// 0049810b: IMUL EDX
// 0049810d: SHRD EAX,EDX,0x10
// 00498111: MOV EDX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x13c] (READ)
// 00498115: ADD ECX,EAX
// 00498117: MOV EAX,[0x02f0d380]
//   XREF to: 02f0d380 (READ)
// 0049811c: IMUL EDX
// 0049811e: SHRD EAX,EDX,0x10
// 00498122: MOV EDX,EDI
// 00498124: ADD ECX,EAX
// 00498126: MOV EAX,[0x02f0d36c]
//   XREF to: 02f0d36c (READ)
// 0049812b: MOV dword ptr [ESP + 0x34],ECX
//   XREF to: Stack[-0x17c] (WRITE)
// 0049812f: IMUL EDX
// 00498131: SHRD EAX,EDX,0x10
// 00498135: MOV EDX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x140] (READ)
// 00498139: MOV ECX,EAX
// 0049813b: MOV EAX,[0x02f0d378]
//   XREF to: 02f0d378 (READ)
// 00498140: IMUL EDX
// 00498142: SHRD EAX,EDX,0x10
// 00498146: MOV EDX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x13c] (READ)
// 0049814a: ADD ECX,EAX
// 0049814c: MOV EAX,[0x02f0d384]
//   XREF to: 02f0d384 (READ)
// 00498151: IMUL EDX
// 00498153: SHRD EAX,EDX,0x10
// 00498157: MOV EDX,EDI
// 00498159: ADD ECX,EAX
// 0049815b: MOV EAX,[0x02f0d364]
//   XREF to: 02f0d364 (READ)
// 00498160: NEG EDX
// 00498162: MOV dword ptr [ESP + 0x38],ECX
//   XREF to: Stack[-0x178] (WRITE)
// 00498166: MOV dword ptr [ESP + 0x6c],EDX
//   XREF to: Stack[-0x144] (WRITE)
// 0049816a: IMUL EDX
// 0049816c: SHRD EAX,EDX,0x10
// 00498170: MOV EDX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x140] (READ)
// 00498174: MOV ECX,EAX
// 00498176: MOV EAX,[0x02f0d370]
//   XREF to: 02f0d370 (READ)
// 0049817b: IMUL EDX
// 0049817d: SHRD EAX,EDX,0x10
// 00498181: MOV EDX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x13c] (READ)
// 00498185: ADD ECX,EAX
// 00498187: MOV EAX,[0x02f0d37c]
//   XREF to: 02f0d37c (READ)
// 0049818c: IMUL EDX
// 0049818e: SHRD EAX,EDX,0x10
// 00498192: MOV EDX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x144] (READ)
// 00498196: ADD ECX,EAX
// 00498198: MOV EAX,[0x02f0d368]
//   XREF to: 02f0d368 (READ)
// 0049819d: MOV dword ptr [ESP + 0x3c],ECX
//   XREF to: Stack[-0x174] (WRITE)
// 004981a1: IMUL EDX
// 004981a3: SHRD EAX,EDX,0x10
// 004981a7: MOV EDX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x140] (READ)
// 004981ab: MOV ECX,EAX
// 004981ad: MOV EAX,[0x02f0d374]
//   XREF to: 02f0d374 (READ)
// 004981b2: IMUL EDX
// 004981b4: SHRD EAX,EDX,0x10
// 004981b8: MOV EDX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x13c] (READ)
// 004981bc: ADD ECX,EAX
// 004981be: MOV EAX,[0x02f0d380]
//   XREF to: 02f0d380 (READ)
// 004981c3: IMUL EDX
// 004981c5: SHRD EAX,EDX,0x10
// 004981c9: ADD ECX,EAX
// 004981cb: MOV dword ptr [ESP + 0x40],ECX
//   XREF to: Stack[-0x170] (WRITE)
// 004981cf: MOV EDX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x144] (READ)
// 004981d3: MOV EAX,[0x02f0d36c]
//   XREF to: 02f0d36c (READ)
// 004981d8: IMUL EDX
// 004981da: SHRD EAX,EDX,0x10
// 004981de: MOV EDX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x140] (READ)
// 004981e2: MOV ECX,EAX
// 004981e4: MOV EAX,[0x02f0d378]
//   XREF to: 02f0d378 (READ)
// 004981e9: IMUL EDX
// 004981eb: SHRD EAX,EDX,0x10
// 004981ef: MOV EDX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x13c] (READ)
// 004981f3: ADD ECX,EAX
// 004981f5: MOV EAX,[0x02f0d384]
//   XREF to: 02f0d384 (READ)
// 004981fa: IMUL EDX
// 004981fc: SHRD EAX,EDX,0x10
// 00498200: ADD ECX,EAX
// 00498202: MOV dword ptr [ESP + 0x44],ECX
//   XREF to: Stack[-0x16c] (WRITE)
// 00498206: XOR ECX,ECX
// 00498208: MOV dword ptr [ESP + 0x48],ECX
//   XREF to: Stack[-0x168] (WRITE)
// 0049820c: MOV dword ptr [ESP + 0x4c],ECX
//   XREF to: Stack[-0x164] (WRITE)
// 00498210: MOV dword ptr [ESP + 0x50],ECX
//   XREF to: Stack[-0x160] (WRITE)
// 00498214: FLD double ptr [0x00622bea]
//   XREF to: 00622bea (READ)
// 0049821a: FLD float ptr [EBX + 0x28]
// 0049821d: FMUL ST1
// 0049821f: FLD float ptr [EBX + 0x2c]
// 00498222: FMUL ST2
// 00498224: MOV EAX,0x3e7
// 00498229: FLD float ptr [EBX + 0x30]
// 0049822c: FMULP ST3
// 0049822e: MOV dword ptr [ESP + 0xa8],EAX
//   XREF to: Stack[-0x108] (WRITE)
// 00498235: MOV dword ptr [ESP + 0xac],EAX
//   XREF to: Stack[-0x104] (WRITE)
// 0049823c: MOV ESI,EAX
// 0049823e: MOV dword ptr [ESP + 0xb0],EAX
//   XREF to: Stack[-0x100] (WRITE)
// 00498245: MOV ECX,0xfffffc19
// 0049824a: XOR ESI,EAX
// 0049824c: MOV EDX,ECX
// 0049824e: MOV EDI,ECX
// 00498250: FXCH
// 00498252: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x1a0] (WRITE)
// 00498256: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x1a8] (WRITE)
// 0049825a: FSTP double ptr [ESP]
//   XREF to: Stack[-0x1b0] (DATA)
// 0049825d: FILD dword ptr [ESP + ESI*0x1 + 0x18]
//   Label: LAB_0049825d
// 00498261: FDIV double ptr [ESP + 0x10]
//   XREF to: Stack[-0x1a0] (READ)
// 00498265: FILD dword ptr [ESP + ESI*0x1 + 0x1c]
// 00498269: FDIV double ptr [ESP + 0x8]
//   XREF to: Stack[-0x1a8] (READ)
// 0049826d: FILD dword ptr [ESP + ESI*0x1 + 0x20]
// 00498271: FDIV double ptr [ESP]
//   XREF to: Stack[-0x1b0] (DATA)
// 00498274: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x138] (READ)
// 00498278: MOV dword ptr [ESP + 0x190],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0049827f: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x134] (READ)
// 00498283: MOV dword ptr [ESP + 0x194],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0049828a: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x130] (READ)
// 00498291: MOV dword ptr [ESP + 0x198],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00498298: FILD dword ptr [ESP + 0x190]
//   XREF to: Stack[-0x20] (READ)
// 0049829f: FILD dword ptr [ESP + 0x194]
//   XREF to: Stack[-0x1c] (READ)
// 004982a6: FILD dword ptr [ESP + 0x198]
//   XREF to: Stack[-0x18] (READ)
// 004982ad: FXCH ST2
// 004982af: FADDP ST5,ST0
// 004982b1: FADDP ST3,ST0
// 004982b3: FADDP
// 004982b5: FXCH ST2
// 004982b7: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004982bc: FXCH
// 004982be: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004982c3: FXCH ST2
// 004982c5: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004982ca: FXCH
// 004982cc: FISTP dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x114] (WRITE)
// 004982d3: FXCH
// 004982d5: FISTP dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x110] (WRITE)
// 004982dc: MOV EAX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x114] (READ)
// 004982e3: FISTP dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0x10c] (WRITE)
// 004982ea: CMP EAX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x108] (READ)
// 004982f1: JGE 0x004982fa
//   XREF to: 004982fa (CONDITIONAL_JUMP)
// 004982f3: MOV dword ptr [ESP + 0xa8],EAX
//   XREF to: Stack[-0x108] (WRITE)
// 004982fa: MOV EAX,dword ptr [ESP + 0xa0]
//   Label: LAB_004982fa
//   XREF to: Stack[-0x110] (READ)
// 00498301: CMP EAX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x104] (READ)
// 00498308: JGE 0x00498311
//   XREF to: 00498311 (CONDITIONAL_JUMP)
// 0049830a: MOV dword ptr [ESP + 0xac],EAX
//   XREF to: Stack[-0x104] (WRITE)
// 00498311: MOV EAX,dword ptr [ESP + 0xa4]
//   Label: LAB_00498311
//   XREF to: Stack[-0x10c] (READ)
// 00498318: CMP EAX,dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0x100] (READ)
// 0049831f: JGE 0x00498328
//   XREF to: 00498328 (CONDITIONAL_JUMP)
// 00498321: MOV dword ptr [ESP + 0xb0],EAX
//   XREF to: Stack[-0x100] (WRITE)
// 00498328: MOV EAX,dword ptr [ESP + 0x9c]
//   Label: LAB_00498328
//   XREF to: Stack[-0x114] (READ)
// 0049832f: CMP ECX,EAX
// 00498331: JGE 0x00498335
//   XREF to: 00498335 (CONDITIONAL_JUMP)
// 00498333: MOV ECX,EAX
// 00498335: MOV EAX,dword ptr [ESP + 0xa0]
//   Label: LAB_00498335
//   XREF to: Stack[-0x110] (READ)
// 0049833c: CMP EDX,EAX
// 0049833e: JGE 0x00498342
//   XREF to: 00498342 (CONDITIONAL_JUMP)
// 00498340: MOV EDX,EAX
// 00498342: MOV EAX,dword ptr [ESP + 0xa4]
//   Label: LAB_00498342
//   XREF to: Stack[-0x10c] (READ)
// 00498349: CMP EDI,EAX
// 0049834b: JGE 0x0049834f
//   XREF to: 0049834f (CONDITIONAL_JUMP)
// 0049834d: MOV EDI,EAX
// 0049834f: ADD ESI,0xc
//   Label: LAB_0049834f
// 00498352: CMP ESI,0x3c
// 00498355: JNZ 0x0049825d
//   XREF to: 0049825d (CONDITIONAL_JUMP)
// 0049835b: MOV EAX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x108] (READ)
// 00498362: INC ECX
// 00498363: MOV dword ptr [EBX + 0x54],EAX
// 00498366: INC EDX
// 00498367: MOV dword ptr [EBX + 0x60],ECX
// 0049836a: INC EDI
// 0049836b: MOV dword ptr [EBX + 0x64],EDX
// 0049836e: MOV dword ptr [EBX + 0x68],EDI
// 00498371: MOV EAX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x104] (READ)
// 00498378: MOV dword ptr [EBX + 0x58],EAX
// 0049837b: MOV EAX,dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0x100] (READ)
// 00498382: MOV EDX,dword ptr [EBX + 0x54]
// 00498385: MOV dword ptr [EBX + 0x5c],EAX
// 00498388: TEST EDX,EDX
// 0049838a: JL 0x0049879f
//   XREF to: 0049879f (CONDITIONAL_JUMP)
// 00498390: CMP dword ptr [EBX + 0x58],0x0
//   Label: LAB_00498390
// 00498394: JL 0x004987ab
//   XREF to: 004987ab (CONDITIONAL_JUMP)
// 0049839a: CMP dword ptr [EBX + 0x5c],0x0
//   Label: LAB_0049839a
// 0049839e: JL 0x004987b7
//   XREF to: 004987b7 (CONDITIONAL_JUMP)
// 004983a4: MOV EDI,dword ptr [EBX + 0x40]
//   Label: LAB_004983a4
// 004983a7: CMP EDI,dword ptr [EBX + 0x60]
// 004983aa: JG 0x004983b2
//   XREF to: 004983b2 (CONDITIONAL_JUMP)
// 004983ac: LEA EAX,[EDI + -0x1]
// 004983af: MOV dword ptr [EBX + 0x60],EAX
// 004983b2: MOV EDX,dword ptr [EBX + 0x44]
//   Label: LAB_004983b2
// 004983b5: CMP EDX,dword ptr [EBX + 0x64]
// 004983b8: JG 0x004983c0
//   XREF to: 004983c0 (CONDITIONAL_JUMP)
// 004983ba: LEA EAX,[EDX + -0x1]
// 004983bd: MOV dword ptr [EBX + 0x64],EAX
// 004983c0: MOV ECX,dword ptr [EBX + 0x48]
//   Label: LAB_004983c0
// 004983c3: CMP ECX,dword ptr [EBX + 0x68]
// 004983c6: JG 0x004983ce
//   XREF to: 004983ce (CONDITIONAL_JUMP)
// 004983c8: LEA EAX,[ECX + -0x1]
// 004983cb: MOV dword ptr [EBX + 0x68],EAX
// 004983ce: PUSH 0x2cee5b0
//   Label: LAB_004983ce
//   XREF to: 02cee5b0 (DATA)
// 004983d3: MOV EDI,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 004983d9: XOR ESI,ESI
// 004983db: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 004983dc: MOV dword ptr [0x030e56b8],ESI
//   XREF to: 030e56b8 (WRITE)
// 004983e2: CALL engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420
//   XREF to: 0048c420 (UNCONDITIONAL_CALL)
// 004983e7: ADD ESP,0x8
// 004983ea: PUSH 0xff
// 004983ef: PUSH 0xff
// 004983f4: PUSH 0xff
// 004983f9: MOV EAX,[0x006703e8]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703e8 (READ)
// 004983fe: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004983ff: CALL engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
//   XREF to: 0048c970 (UNCONDITIONAL_CALL)
// 00498404: MOV EDX,dword ptr [EBX]
// 00498406: ADD ESP,0x10
// 00498409: CMP EDX,0x4
// 0049840c: JLE 0x004987c3
//   XREF to: 004987c3 (CONDITIONAL_JUMP)
// 00498412: MOV dword ptr [EBX],0x1
//   Label: LAB_00498412
// 00498418: MOV EAX,[0x02f0d37c]
//   Label: LAB_00498418
//   XREF to: 02f0d37c (READ)
// 0049841d: CDQ
// 0049841e: XOR EAX,EDX
// 00498420: SUB EAX,EDX
// 00498422: MOV ECX,EAX
// 00498424: MOV dword ptr [ESP + 0xb4],EAX
//   XREF to: Stack[-0xfc] (WRITE)
// 0049842b: MOV EAX,[0x02f0d380]
//   XREF to: 02f0d380 (READ)
// 00498430: CDQ
// 00498431: XOR EAX,EDX
// 00498433: SUB EAX,EDX
// 00498435: MOV ESI,EAX
// 00498437: MOV EDI,EAX
// 00498439: MOV EAX,[0x02f0d384]
//   XREF to: 02f0d384 (READ)
// 0049843e: CDQ
// 0049843f: XOR EAX,EDX
// 00498441: SUB EAX,EDX
// 00498443: MOV EDX,EAX
// 00498445: CMP ECX,ESI
// 00498447: JL 0x004987d0
//   XREF to: 004987d0 (CONDITIONAL_JUMP)
// 0049844d: CMP ECX,EAX
// 0049844f: JL 0x004987d0
//   XREF to: 004987d0 (CONDITIONAL_JUMP)
// 00498455: MOV EDI,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x138] (READ)
// 00498459: CMP EDI,dword ptr [EBX + 0x60]
// 0049845c: JG 0x004985e6
//   XREF to: 004985e6 (CONDITIONAL_JUMP)
// 00498462: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x130] (READ)
// 00498469: DEC EAX
// 0049846a: MOV dword ptr [ESP + 0x138],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 00498471: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x134] (READ)
// 00498475: DEC EAX
// 00498476: MOV dword ptr [ESP + 0x13c],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 0049847d: MOV EAX,EDI
// 0049847f: NEG EAX
// 00498481: ADD EAX,EDI
// 00498483: MOV dword ptr [ESP + 0x158],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 0049848a: MOV EAX,dword ptr [ESP + 0x7c]
//   Label: LAB_0049848a
//   XREF to: Stack[-0x134] (READ)
// 0049848e: MOV ECX,dword ptr [EBX + 0x64]
// 00498491: MOV dword ptr [ESP + 0x18c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00498498: CMP EAX,ECX
// 0049849a: JG 0x00498529
//   XREF to: 00498529 (CONDITIONAL_JUMP)
// 004984a0: MOV EAX,dword ptr [ESP + 0x158]
//   XREF to: Stack[-0x58] (READ)
// 004984a7: MOV dword ptr [ESP + 0xb8],EAX
//   XREF to: Stack[-0xf8] (WRITE)
// 004984ae: MOV dword ptr [ESP + 0xbc],EAX
//   XREF to: Stack[-0xf4] (WRITE)
// 004984b5: MOV ESI,dword ptr [ESP + 0x80]
//   Label: LAB_004984b5
//   XREF to: Stack[-0x130] (READ)
// 004984bc: CMP ESI,dword ptr [EBX + 0x68]
// 004984bf: JG 0x004984e4
//   XREF to: 004984e4 (CONDITIONAL_JUMP)
// 004984c1: MOV ECX,dword ptr [ESP + 0xb8]
//   Label: LAB_004984c1
//   XREF to: Stack[-0xf8] (READ)
// 004984c8: PUSH ECX
// 004984c9: PUSH ESI
// 004984ca: MOV EAX,dword ptr [ESP + 0x194]
//   XREF to: Stack[-0x24] (READ)
// 004984d1: PUSH EAX
// 004984d2: PUSH EDI
// 004984d3: PUSH EBX
// 004984d4: INC ESI
// 004984d5: CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
//   XREF to: 00497500 (UNCONDITIONAL_CALL)
// 004984da: MOV EDX,dword ptr [EBX + 0x68]
// 004984dd: ADD ESP,0x14
// 004984e0: CMP ESI,EDX
// 004984e2: JLE 0x004984c1
//   XREF to: 004984c1 (CONDITIONAL_JUMP)
// 004984e4: MOV ESI,dword ptr [ESP + 0x138]
//   Label: LAB_004984e4
//   XREF to: Stack[-0x78] (READ)
// 004984eb: CMP ESI,dword ptr [EBX + 0x5c]
// 004984ee: JL 0x00498513
//   XREF to: 00498513 (CONDITIONAL_JUMP)
// 004984f0: MOV EAX,dword ptr [ESP + 0xbc]
//   Label: LAB_004984f0
//   XREF to: Stack[-0xf4] (READ)
// 004984f7: PUSH EAX
// 004984f8: PUSH ESI
// 004984f9: MOV EDX,dword ptr [ESP + 0x194]
//   XREF to: Stack[-0x24] (READ)
// 00498500: PUSH EDX
// 00498501: PUSH EDI
// 00498502: PUSH EBX
// 00498503: DEC ESI
// 00498504: CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
//   XREF to: 00497500 (UNCONDITIONAL_CALL)
// 00498509: MOV ECX,dword ptr [EBX + 0x5c]
// 0049850c: ADD ESP,0x14
// 0049850f: CMP ESI,ECX
// 00498511: JGE 0x004984f0
//   XREF to: 004984f0 (CONDITIONAL_JUMP)
// 00498513: MOV ESI,dword ptr [ESP + 0x18c]
//   Label: LAB_00498513
//   XREF to: Stack[-0x24] (READ)
// 0049851a: INC ESI
// 0049851b: MOV EDX,dword ptr [EBX + 0x64]
// 0049851e: MOV dword ptr [ESP + 0x18c],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 00498525: CMP ESI,EDX
// 00498527: JLE 0x004984b5
//   XREF to: 004984b5 (CONDITIONAL_JUMP)
// 00498529: MOV EAX,dword ptr [ESP + 0x13c]
//   Label: LAB_00498529
//   XREF to: Stack[-0x74] (READ)
// 00498530: MOV ECX,dword ptr [EBX + 0x58]
// 00498533: MOV dword ptr [ESP + 0x188],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0049853a: CMP EAX,ECX
// 0049853c: JL 0x004985cb
//   XREF to: 004985cb (CONDITIONAL_JUMP)
// 00498542: MOV EAX,dword ptr [ESP + 0x158]
//   XREF to: Stack[-0x58] (READ)
// 00498549: MOV dword ptr [ESP + 0xc0],EAX
//   XREF to: Stack[-0xf0] (WRITE)
// 00498550: MOV dword ptr [ESP + 0xc4],EAX
//   XREF to: Stack[-0xec] (WRITE)
// 00498557: MOV ESI,dword ptr [ESP + 0x80]
//   Label: LAB_00498557
//   XREF to: Stack[-0x130] (READ)
// 0049855e: CMP ESI,dword ptr [EBX + 0x68]
// 00498561: JG 0x00498586
//   XREF to: 00498586 (CONDITIONAL_JUMP)
// 00498563: MOV EAX,dword ptr [ESP + 0xc0]
//   Label: LAB_00498563
//   XREF to: Stack[-0xf0] (READ)
// 0049856a: PUSH EAX
// 0049856b: PUSH ESI
// 0049856c: MOV EDX,dword ptr [ESP + 0x190]
//   XREF to: Stack[-0x28] (READ)
// 00498573: PUSH EDX
// 00498574: PUSH EDI
// 00498575: PUSH EBX
// 00498576: INC ESI
// 00498577: CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
//   XREF to: 00497500 (UNCONDITIONAL_CALL)
// 0049857c: MOV ECX,dword ptr [EBX + 0x68]
// 0049857f: ADD ESP,0x14
// 00498582: CMP ESI,ECX
// 00498584: JLE 0x00498563
//   XREF to: 00498563 (CONDITIONAL_JUMP)
// 00498586: MOV ESI,dword ptr [ESP + 0x138]
//   Label: LAB_00498586
//   XREF to: Stack[-0x78] (READ)
// 0049858d: CMP ESI,dword ptr [EBX + 0x5c]
// 00498590: JL 0x004985b5
//   XREF to: 004985b5 (CONDITIONAL_JUMP)
// 00498592: MOV ECX,dword ptr [ESP + 0xc4]
//   Label: LAB_00498592
//   XREF to: Stack[-0xec] (READ)
// 00498599: PUSH ECX
// 0049859a: PUSH ESI
// 0049859b: MOV EAX,dword ptr [ESP + 0x190]
//   XREF to: Stack[-0x28] (READ)
// 004985a2: PUSH EAX
// 004985a3: PUSH EDI
// 004985a4: PUSH EBX
// 004985a5: DEC ESI
// 004985a6: CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
//   XREF to: 00497500 (UNCONDITIONAL_CALL)
// 004985ab: MOV EDX,dword ptr [EBX + 0x5c]
// 004985ae: ADD ESP,0x14
// 004985b1: CMP ESI,EDX
// 004985b3: JGE 0x00498592
//   XREF to: 00498592 (CONDITIONAL_JUMP)
// 004985b5: MOV ESI,dword ptr [ESP + 0x188]
//   Label: LAB_004985b5
//   XREF to: Stack[-0x28] (READ)
// 004985bc: DEC ESI
// 004985bd: MOV EDX,dword ptr [EBX + 0x58]
// 004985c0: MOV dword ptr [ESP + 0x188],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 004985c7: CMP ESI,EDX
// 004985c9: JGE 0x00498557
//   XREF to: 00498557 (CONDITIONAL_JUMP)
// 004985cb: MOV ECX,dword ptr [ESP + 0x158]
//   Label: LAB_004985cb
//   XREF to: Stack[-0x58] (READ)
// 004985d2: INC EDI
// 004985d3: INC ECX
// 004985d4: MOV ESI,dword ptr [EBX + 0x60]
// 004985d7: MOV dword ptr [ESP + 0x158],ECX
//   XREF to: Stack[-0x58] (WRITE)
// 004985de: CMP EDI,ESI
// 004985e0: JLE 0x0049848a
//   XREF to: 0049848a (CONDITIONAL_JUMP)
// 004985e6: MOV EDI,dword ptr [ESP + 0x78]
//   Label: LAB_004985e6
//   XREF to: Stack[-0x138] (READ)
// 004985ea: MOV EAX,dword ptr [EBX + 0x54]
// 004985ed: DEC EDI
// 004985ee: CMP EDI,EAX
// 004985f0: JL 0x0049877e
//   XREF to: 0049877e (CONDITIONAL_JUMP)
// 004985f6: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x130] (READ)
// 004985fd: DEC EAX
// 004985fe: MOV dword ptr [ESP + 0x140],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 00498605: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x134] (READ)
// 00498609: DEC EAX
// 0049860a: MOV dword ptr [ESP + 0x144],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 00498611: MOV EAX,EDI
// 00498613: MOV EDX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x138] (READ)
// 00498617: NEG EAX
// 00498619: ADD EAX,EDX
// 0049861b: MOV dword ptr [ESP + 0x15c],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00498622: MOV EAX,dword ptr [ESP + 0x7c]
//   Label: LAB_00498622
//   XREF to: Stack[-0x134] (READ)
// 00498626: MOV ECX,dword ptr [EBX + 0x64]
// 00498629: MOV dword ptr [ESP + 0x184],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00498630: CMP EAX,ECX
// 00498632: JG 0x004986c1
//   XREF to: 004986c1 (CONDITIONAL_JUMP)
// 00498638: MOV EAX,dword ptr [ESP + 0x15c]
//   XREF to: Stack[-0x54] (READ)
// 0049863f: MOV dword ptr [ESP + 0xc8],EAX
//   XREF to: Stack[-0xe8] (WRITE)
// 00498646: MOV dword ptr [ESP + 0xcc],EAX
//   XREF to: Stack[-0xe4] (WRITE)
// 0049864d: MOV ESI,dword ptr [ESP + 0x80]
//   Label: LAB_0049864d
//   XREF to: Stack[-0x130] (READ)
// 00498654: CMP ESI,dword ptr [EBX + 0x68]
// 00498657: JG 0x0049867c
//   XREF to: 0049867c (CONDITIONAL_JUMP)
// 00498659: MOV ECX,dword ptr [ESP + 0xc8]
//   Label: LAB_00498659
//   XREF to: Stack[-0xe8] (READ)
// 00498660: PUSH ECX
// 00498661: PUSH ESI
// 00498662: MOV EAX,dword ptr [ESP + 0x18c]
//   XREF to: Stack[-0x2c] (READ)
// 00498669: PUSH EAX
// 0049866a: PUSH EDI
// 0049866b: PUSH EBX
// 0049866c: INC ESI
// 0049866d: CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
//   XREF to: 00497500 (UNCONDITIONAL_CALL)
// 00498672: MOV EDX,dword ptr [EBX + 0x68]
// 00498675: ADD ESP,0x14
// 00498678: CMP ESI,EDX
// 0049867a: JLE 0x00498659
//   XREF to: 00498659 (CONDITIONAL_JUMP)
// 0049867c: MOV ESI,dword ptr [ESP + 0x140]
//   Label: LAB_0049867c
//   XREF to: Stack[-0x70] (READ)
// 00498683: CMP ESI,dword ptr [EBX + 0x5c]
// 00498686: JL 0x004986ab
//   XREF to: 004986ab (CONDITIONAL_JUMP)
// 00498688: MOV EAX,dword ptr [ESP + 0xcc]
//   Label: LAB_00498688
//   XREF to: Stack[-0xe4] (READ)
// 0049868f: PUSH EAX
// 00498690: PUSH ESI
// 00498691: MOV EDX,dword ptr [ESP + 0x18c]
//   XREF to: Stack[-0x2c] (READ)
// 00498698: PUSH EDX
// 00498699: PUSH EDI
// 0049869a: PUSH EBX
// 0049869b: DEC ESI
// 0049869c: CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
//   XREF to: 00497500 (UNCONDITIONAL_CALL)
// 004986a1: MOV ECX,dword ptr [EBX + 0x5c]
// 004986a4: ADD ESP,0x14
// 004986a7: CMP ESI,ECX
// 004986a9: JGE 0x00498688
//   XREF to: 00498688 (CONDITIONAL_JUMP)
// 004986ab: MOV ESI,dword ptr [ESP + 0x184]
//   Label: LAB_004986ab
//   XREF to: Stack[-0x2c] (READ)
// 004986b2: INC ESI
// 004986b3: MOV EDX,dword ptr [EBX + 0x64]
// 004986b6: MOV dword ptr [ESP + 0x184],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 004986bd: CMP ESI,EDX
// 004986bf: JLE 0x0049864d
//   XREF to: 0049864d (CONDITIONAL_JUMP)
// 004986c1: MOV EAX,dword ptr [ESP + 0x144]
//   Label: LAB_004986c1
//   XREF to: Stack[-0x6c] (READ)
// 004986c8: MOV ECX,dword ptr [EBX + 0x58]
// 004986cb: MOV dword ptr [ESP + 0x180],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004986d2: CMP EAX,ECX
// 004986d4: JL 0x00498763
//   XREF to: 00498763 (CONDITIONAL_JUMP)
// 004986da: MOV EAX,dword ptr [ESP + 0x15c]
//   XREF to: Stack[-0x54] (READ)
// 004986e1: MOV dword ptr [ESP + 0xd0],EAX
//   XREF to: Stack[-0xe0] (WRITE)
// 004986e8: MOV dword ptr [ESP + 0xd4],EAX
//   XREF to: Stack[-0xdc] (WRITE)
// 004986ef: MOV ESI,dword ptr [ESP + 0x80]
//   Label: LAB_004986ef
//   XREF to: Stack[-0x130] (READ)
// 004986f6: CMP ESI,dword ptr [EBX + 0x68]
// 004986f9: JG 0x0049871e
//   XREF to: 0049871e (CONDITIONAL_JUMP)
// 004986fb: MOV EAX,dword ptr [ESP + 0xd0]
//   Label: LAB_004986fb
//   XREF to: Stack[-0xe0] (READ)
// 00498702: PUSH EAX
// 00498703: PUSH ESI
// 00498704: MOV EDX,dword ptr [ESP + 0x188]
//   XREF to: Stack[-0x30] (READ)
// 0049870b: PUSH EDX
// 0049870c: PUSH EDI
// 0049870d: PUSH EBX
// 0049870e: INC ESI
// 0049870f: CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
//   XREF to: 00497500 (UNCONDITIONAL_CALL)
// 00498714: MOV ECX,dword ptr [EBX + 0x68]
// 00498717: ADD ESP,0x14
// 0049871a: CMP ESI,ECX
// 0049871c: JLE 0x004986fb
//   XREF to: 004986fb (CONDITIONAL_JUMP)
// 0049871e: MOV ESI,dword ptr [ESP + 0x140]
//   Label: LAB_0049871e
//   XREF to: Stack[-0x70] (READ)
// 00498725: CMP ESI,dword ptr [EBX + 0x5c]
// 00498728: JL 0x0049874d
//   XREF to: 0049874d (CONDITIONAL_JUMP)
// 0049872a: MOV ECX,dword ptr [ESP + 0xd4]
//   Label: LAB_0049872a
//   XREF to: Stack[-0xdc] (READ)
// 00498731: PUSH ECX
// 00498732: PUSH ESI
// 00498733: MOV EAX,dword ptr [ESP + 0x188]
//   XREF to: Stack[-0x30] (READ)
// 0049873a: PUSH EAX
// 0049873b: PUSH EDI
// 0049873c: PUSH EBX
// 0049873d: DEC ESI
// 0049873e: CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
//   XREF to: 00497500 (UNCONDITIONAL_CALL)
// 00498743: MOV EDX,dword ptr [EBX + 0x5c]
// 00498746: ADD ESP,0x14
// 00498749: CMP ESI,EDX
// 0049874b: JGE 0x0049872a
//   XREF to: 0049872a (CONDITIONAL_JUMP)
// 0049874d: MOV ESI,dword ptr [ESP + 0x180]
//   Label: LAB_0049874d
//   XREF to: Stack[-0x30] (READ)
// 00498754: DEC ESI
// 00498755: MOV EDX,dword ptr [EBX + 0x58]
// 00498758: MOV dword ptr [ESP + 0x180],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 0049875f: CMP ESI,EDX
// 00498761: JGE 0x004986ef
//   XREF to: 004986ef (CONDITIONAL_JUMP)
// 00498763: MOV ECX,dword ptr [ESP + 0x15c]
//   Label: LAB_00498763
//   XREF to: Stack[-0x54] (READ)
// 0049876a: DEC EDI
// 0049876b: INC ECX
// 0049876c: MOV ESI,dword ptr [EBX + 0x54]
// 0049876f: MOV dword ptr [ESP + 0x15c],ECX
//   XREF to: Stack[-0x54] (WRITE)
// 00498776: CMP EDI,ESI
// 00498778: JGE 0x00498622
//   XREF to: 00498622 (CONDITIONAL_JUMP)
// 0049877e: MOV dword ptr [0x02ca03a8],0x1
//   Label: LAB_0049877e
//   XREF to: 02ca03a8 (WRITE)
// 00498788: MOV ESP,EBP
// 0049878a: POP EBP
// 0049878b: POP EDI
// 0049878c: POP ESI
// 0049878d: POP EBX
// 0049878e: RET
// 0049878f: PUSH EBX
//   Label: LAB_0049878f
// 00498790: CALL core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_004990f0
//   XREF to: 004990f0 (UNCONDITIONAL_CALL)
// 00498795: ADD ESP,0x4
// 00498798: MOV ESP,EBP
// 0049879a: POP EBP
// 0049879b: POP EDI
// 0049879c: POP ESI
// 0049879d: POP EBX
// 0049879e: RET
// 0049879f: MOV dword ptr [EBX + 0x54],0x0
//   Label: LAB_0049879f
// 004987a6: JMP 0x00498390
//   XREF to: 00498390 (UNCONDITIONAL_JUMP)
// 004987ab: MOV dword ptr [EBX + 0x58],0x0
//   Label: LAB_004987ab
// 004987b2: JMP 0x0049839a
//   XREF to: 0049839a (UNCONDITIONAL_JUMP)
// 004987b7: MOV dword ptr [EBX + 0x5c],0x0
//   Label: LAB_004987b7
// 004987be: JMP 0x004983a4
//   XREF to: 004983a4 (UNCONDITIONAL_JUMP)
// 004987c3: TEST EDX,EDX
//   Label: LAB_004987c3
// 004987c5: JGE 0x00498418
//   XREF to: 00498418 (CONDITIONAL_JUMP)
// 004987cb: JMP 0x00498412
//   XREF to: 00498412 (UNCONDITIONAL_JUMP)
// 004987d0: CMP EDI,dword ptr [ESP + 0xb4]
//   Label: LAB_004987d0
//   XREF to: Stack[-0xfc] (READ)
// 004987d7: JL 0x00498b19
//   XREF to: 00498b19 (CONDITIONAL_JUMP)
// 004987dd: CMP EDI,EDX
// 004987df: JL 0x00498b19
//   XREF to: 00498b19 (CONDITIONAL_JUMP)
// 004987e5: MOV EDI,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x134] (READ)
// 004987e9: CMP EDI,dword ptr [EBX + 0x64]
// 004987ec: JG 0x00498976
//   XREF to: 00498976 (CONDITIONAL_JUMP)
// 004987f2: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x130] (READ)
// 004987f9: DEC EAX
// 004987fa: MOV dword ptr [ESP + 0x128],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 00498801: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x138] (READ)
// 00498805: DEC EAX
// 00498806: MOV dword ptr [ESP + 0x12c],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 0049880d: MOV EAX,EDI
// 0049880f: NEG EAX
// 00498811: ADD EAX,EDI
// 00498813: MOV dword ptr [ESP + 0x150],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 0049881a: MOV EAX,dword ptr [ESP + 0x78]
//   Label: LAB_0049881a
//   XREF to: Stack[-0x138] (READ)
// 0049881e: MOV ECX,dword ptr [EBX + 0x60]
// 00498821: MOV dword ptr [ESP + 0x16c],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 00498828: CMP EAX,ECX
// 0049882a: JG 0x004988b9
//   XREF to: 004988b9 (CONDITIONAL_JUMP)
// 00498830: MOV EAX,dword ptr [ESP + 0x150]
//   XREF to: Stack[-0x60] (READ)
// 00498837: MOV dword ptr [ESP + 0xd8],EAX
//   XREF to: Stack[-0xd8] (WRITE)
// 0049883e: MOV dword ptr [ESP + 0xdc],EAX
//   XREF to: Stack[-0xd4] (WRITE)
// 00498845: MOV ESI,dword ptr [ESP + 0x80]
//   Label: LAB_00498845
//   XREF to: Stack[-0x130] (READ)
// 0049884c: CMP ESI,dword ptr [EBX + 0x68]
// 0049884f: JG 0x00498874
//   XREF to: 00498874 (CONDITIONAL_JUMP)
// 00498851: MOV ECX,dword ptr [ESP + 0xd8]
//   Label: LAB_00498851
//   XREF to: Stack[-0xd8] (READ)
// 00498858: PUSH ECX
// 00498859: PUSH ESI
// 0049885a: PUSH EDI
// 0049885b: MOV EAX,dword ptr [ESP + 0x178]
//   XREF to: Stack[-0x44] (READ)
// 00498862: PUSH EAX
// 00498863: PUSH EBX
// 00498864: INC ESI
// 00498865: CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
//   XREF to: 00497500 (UNCONDITIONAL_CALL)
// 0049886a: MOV EDX,dword ptr [EBX + 0x68]
// 0049886d: ADD ESP,0x14
// 00498870: CMP ESI,EDX
// 00498872: JLE 0x00498851
//   XREF to: 00498851 (CONDITIONAL_JUMP)
// 00498874: MOV ESI,dword ptr [ESP + 0x128]
//   Label: LAB_00498874
//   XREF to: Stack[-0x88] (READ)
// 0049887b: CMP ESI,dword ptr [EBX + 0x5c]
// 0049887e: JL 0x004988a3
//   XREF to: 004988a3 (CONDITIONAL_JUMP)
// 00498880: MOV EAX,dword ptr [ESP + 0xdc]
//   Label: LAB_00498880
//   XREF to: Stack[-0xd4] (READ)
// 00498887: PUSH EAX
// 00498888: PUSH ESI
// 00498889: PUSH EDI
// 0049888a: MOV EDX,dword ptr [ESP + 0x178]
//   XREF to: Stack[-0x44] (READ)
// 00498891: PUSH EDX
// 00498892: PUSH EBX
// 00498893: DEC ESI
// 00498894: CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
//   XREF to: 00497500 (UNCONDITIONAL_CALL)
// 00498899: MOV ECX,dword ptr [EBX + 0x5c]
// 0049889c: ADD ESP,0x14
// 0049889f: CMP ESI,ECX
// 004988a1: JGE 0x00498880
//   XREF to: 00498880 (CONDITIONAL_JUMP)
// 004988a3: MOV ESI,dword ptr [ESP + 0x16c]
//   Label: LAB_004988a3
//   XREF to: Stack[-0x44] (READ)
// 004988aa: INC ESI
// 004988ab: MOV EDX,dword ptr [EBX + 0x60]
// 004988ae: MOV dword ptr [ESP + 0x16c],ESI
//   XREF to: Stack[-0x44] (WRITE)
// 004988b5: CMP ESI,EDX
// 004988b7: JLE 0x00498845
//   XREF to: 00498845 (CONDITIONAL_JUMP)
// 004988b9: MOV EAX,dword ptr [ESP + 0x12c]
//   Label: LAB_004988b9
//   XREF to: Stack[-0x84] (READ)
// 004988c0: MOV ECX,dword ptr [EBX + 0x54]
// 004988c3: MOV dword ptr [ESP + 0x168],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 004988ca: CMP EAX,ECX
// 004988cc: JL 0x0049895b
//   XREF to: 0049895b (CONDITIONAL_JUMP)
// 004988d2: MOV EAX,dword ptr [ESP + 0x150]
//   XREF to: Stack[-0x60] (READ)
// 004988d9: MOV dword ptr [ESP + 0xe0],EAX
//   XREF to: Stack[-0xd0] (WRITE)
// 004988e0: MOV dword ptr [ESP + 0xe4],EAX
//   XREF to: Stack[-0xcc] (WRITE)
// 004988e7: MOV ESI,dword ptr [ESP + 0x80]
//   Label: LAB_004988e7
//   XREF to: Stack[-0x130] (READ)
// 004988ee: CMP ESI,dword ptr [EBX + 0x68]
// 004988f1: JG 0x00498916
//   XREF to: 00498916 (CONDITIONAL_JUMP)
// 004988f3: MOV EAX,dword ptr [ESP + 0xe0]
//   Label: LAB_004988f3
//   XREF to: Stack[-0xd0] (READ)
// 004988fa: PUSH EAX
// 004988fb: PUSH ESI
// 004988fc: PUSH EDI
// 004988fd: MOV EDX,dword ptr [ESP + 0x174]
//   XREF to: Stack[-0x48] (READ)
// 00498904: PUSH EDX
// 00498905: PUSH EBX
// 00498906: INC ESI
// 00498907: CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
//   XREF to: 00497500 (UNCONDITIONAL_CALL)
// 0049890c: MOV ECX,dword ptr [EBX + 0x68]
// 0049890f: ADD ESP,0x14
// 00498912: CMP ESI,ECX
// 00498914: JLE 0x004988f3
//   XREF to: 004988f3 (CONDITIONAL_JUMP)
// 00498916: MOV ESI,dword ptr [ESP + 0x128]
//   Label: LAB_00498916
//   XREF to: Stack[-0x88] (READ)
// 0049891d: CMP ESI,dword ptr [EBX + 0x5c]
// 00498920: JL 0x00498945
//   XREF to: 00498945 (CONDITIONAL_JUMP)
// 00498922: MOV ECX,dword ptr [ESP + 0xe4]
//   Label: LAB_00498922
//   XREF to: Stack[-0xcc] (READ)
// 00498929: PUSH ECX
// 0049892a: PUSH ESI
// 0049892b: PUSH EDI
// 0049892c: MOV EAX,dword ptr [ESP + 0x174]
//   XREF to: Stack[-0x48] (READ)
// 00498933: PUSH EAX
// 00498934: PUSH EBX
// 00498935: DEC ESI
// 00498936: CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
//   XREF to: 00497500 (UNCONDITIONAL_CALL)
// 0049893b: MOV EDX,dword ptr [EBX + 0x5c]
// 0049893e: ADD ESP,0x14
// 00498941: CMP ESI,EDX
// 00498943: JGE 0x00498922
//   XREF to: 00498922 (CONDITIONAL_JUMP)
// 00498945: MOV ESI,dword ptr [ESP + 0x168]
//   Label: LAB_00498945
//   XREF to: Stack[-0x48] (READ)
// 0049894c: DEC ESI
// 0049894d: MOV EDX,dword ptr [EBX + 0x54]
// 00498950: MOV dword ptr [ESP + 0x168],ESI
//   XREF to: Stack[-0x48] (WRITE)
// 00498957: CMP ESI,EDX
// 00498959: JGE 0x004988e7
//   XREF to: 004988e7 (CONDITIONAL_JUMP)
// 0049895b: MOV ECX,dword ptr [ESP + 0x150]
//   Label: LAB_0049895b
//   XREF to: Stack[-0x60] (READ)
// 00498962: INC EDI
// 00498963: INC ECX
// 00498964: MOV ESI,dword ptr [EBX + 0x64]
// 00498967: MOV dword ptr [ESP + 0x150],ECX
//   XREF to: Stack[-0x60] (WRITE)
// 0049896e: CMP EDI,ESI
// 00498970: JLE 0x0049881a
//   XREF to: 0049881a (CONDITIONAL_JUMP)
// 00498976: MOV EDI,dword ptr [ESP + 0x7c]
//   Label: LAB_00498976
//   XREF to: Stack[-0x134] (READ)
// 0049897a: MOV EAX,dword ptr [EBX + 0x58]
// 0049897d: DEC EDI
// 0049897e: CMP EDI,EAX
// 00498980: JL 0x0049877e
//   XREF to: 0049877e (CONDITIONAL_JUMP)
// 00498986: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x130] (READ)
// 0049898d: DEC EAX
// 0049898e: MOV dword ptr [ESP + 0x130],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 00498995: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x138] (READ)
// 00498999: DEC EAX
// 0049899a: MOV dword ptr [ESP + 0x134],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 004989a1: MOV EAX,EDI
// 004989a3: MOV EDX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x134] (READ)
// 004989a7: NEG EAX
// 004989a9: ADD EAX,EDX
// 004989ab: MOV dword ptr [ESP + 0x154],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 004989b2: MOV EAX,dword ptr [ESP + 0x78]
//   Label: LAB_004989b2
//   XREF to: Stack[-0x138] (READ)
// 004989b6: MOV ECX,dword ptr [EBX + 0x60]
// 004989b9: MOV dword ptr [ESP + 0x164],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 004989c0: CMP EAX,ECX
// 004989c2: JLE 0x00498b02
//   XREF to: 00498b02 (CONDITIONAL_JUMP)
// 004989c8: MOV EAX,dword ptr [ESP + 0x134]
//   Label: LAB_004989c8
//   XREF to: Stack[-0x7c] (READ)
// 004989cf: MOV ECX,dword ptr [EBX + 0x54]
// 004989d2: MOV dword ptr [ESP + 0x160],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 004989d9: CMP EAX,ECX
// 004989db: JL 0x00498a6a
//   XREF to: 00498a6a (CONDITIONAL_JUMP)
// 004989e1: MOV EAX,dword ptr [ESP + 0x154]
//   XREF to: Stack[-0x5c] (READ)
// 004989e8: MOV dword ptr [ESP + 0xf0],EAX
//   XREF to: Stack[-0xc0] (WRITE)
// 004989ef: MOV dword ptr [ESP + 0xf4],EAX
//   XREF to: Stack[-0xbc] (WRITE)
// 004989f6: MOV ESI,dword ptr [ESP + 0x80]
//   Label: LAB_004989f6
//   XREF to: Stack[-0x130] (READ)
// 004989fd: CMP ESI,dword ptr [EBX + 0x68]
// 00498a00: JG 0x00498a25
//   XREF to: 00498a25 (CONDITIONAL_JUMP)
// 00498a02: MOV EAX,dword ptr [ESP + 0xf0]
//   Label: LAB_00498a02
//   XREF to: Stack[-0xc0] (READ)
// 00498a09: PUSH EAX
// 00498a0a: PUSH ESI
// 00498a0b: PUSH EDI
// 00498a0c: MOV EDX,dword ptr [ESP + 0x16c]
//   XREF to: Stack[-0x50] (READ)
// 00498a13: PUSH EDX
// 00498a14: PUSH EBX
// 00498a15: INC ESI
// 00498a16: CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
//   XREF to: 00497500 (UNCONDITIONAL_CALL)
// 00498a1b: MOV ECX,dword ptr [EBX + 0x68]
// 00498a1e: ADD ESP,0x14
// 00498a21: CMP ESI,ECX
// 00498a23: JLE 0x00498a02
//   XREF to: 00498a02 (CONDITIONAL_JUMP)
// 00498a25: MOV ESI,dword ptr [ESP + 0x130]
//   Label: LAB_00498a25
//   XREF to: Stack[-0x80] (READ)
// 00498a2c: CMP ESI,dword ptr [EBX + 0x5c]
// 00498a2f: JL 0x00498a54
//   XREF to: 00498a54 (CONDITIONAL_JUMP)
// 00498a31: MOV ECX,dword ptr [ESP + 0xf4]
//   Label: LAB_00498a31
//   XREF to: Stack[-0xbc] (READ)
// 00498a38: PUSH ECX
// 00498a39: PUSH ESI
// 00498a3a: PUSH EDI
// 00498a3b: MOV EAX,dword ptr [ESP + 0x16c]
//   XREF to: Stack[-0x50] (READ)
// 00498a42: PUSH EAX
// 00498a43: PUSH EBX
// 00498a44: DEC ESI
// 00498a45: CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
//   XREF to: 00497500 (UNCONDITIONAL_CALL)
// 00498a4a: MOV EDX,dword ptr [EBX + 0x5c]
// 00498a4d: ADD ESP,0x14
// 00498a50: CMP ESI,EDX
// 00498a52: JGE 0x00498a31
//   XREF to: 00498a31 (CONDITIONAL_JUMP)
// 00498a54: MOV ESI,dword ptr [ESP + 0x160]
//   Label: LAB_00498a54
//   XREF to: Stack[-0x50] (READ)
// 00498a5b: DEC ESI
// 00498a5c: MOV EDX,dword ptr [EBX + 0x54]
// 00498a5f: MOV dword ptr [ESP + 0x160],ESI
//   XREF to: Stack[-0x50] (WRITE)
// 00498a66: CMP ESI,EDX
// 00498a68: JGE 0x004989f6
//   XREF to: 004989f6 (CONDITIONAL_JUMP)
// 00498a6a: MOV ECX,dword ptr [ESP + 0x154]
//   Label: LAB_00498a6a
//   XREF to: Stack[-0x5c] (READ)
// 00498a71: DEC EDI
// 00498a72: INC ECX
// 00498a73: MOV ESI,dword ptr [EBX + 0x58]
// 00498a76: MOV dword ptr [ESP + 0x154],ECX
//   XREF to: Stack[-0x5c] (WRITE)
// 00498a7d: CMP EDI,ESI
// 00498a7f: JL 0x0049877e
//   XREF to: 0049877e (CONDITIONAL_JUMP)
// 00498a85: JMP 0x004989b2
//   XREF to: 004989b2 (UNCONDITIONAL_JUMP)
// 00498a8a: MOV ESI,dword ptr [ESP + 0x164]
//   Label: LAB_00498a8a
//   XREF to: Stack[-0x4c] (READ)
// 00498a91: INC ESI
// 00498a92: MOV EDX,dword ptr [EBX + 0x60]
// 00498a95: MOV dword ptr [ESP + 0x164],ESI
//   XREF to: Stack[-0x4c] (WRITE)
// 00498a9c: CMP ESI,EDX
// 00498a9e: JG 0x004989c8
//   XREF to: 004989c8 (CONDITIONAL_JUMP)
// 00498aa4: MOV ESI,dword ptr [ESP + 0x80]
//   Label: LAB_00498aa4
//   XREF to: Stack[-0x130] (READ)
// 00498aab: CMP ESI,dword ptr [EBX + 0x68]
// 00498aae: JG 0x00498ad3
//   XREF to: 00498ad3 (CONDITIONAL_JUMP)
// 00498ab0: MOV ECX,dword ptr [ESP + 0xe8]
//   Label: LAB_00498ab0
//   XREF to: Stack[-0xc8] (READ)
// 00498ab7: PUSH ECX
// 00498ab8: PUSH ESI
// 00498ab9: PUSH EDI
// 00498aba: MOV EAX,dword ptr [ESP + 0x170]
//   XREF to: Stack[-0x4c] (READ)
// 00498ac1: PUSH EAX
// 00498ac2: PUSH EBX
// 00498ac3: INC ESI
// 00498ac4: CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
//   XREF to: 00497500 (UNCONDITIONAL_CALL)
// 00498ac9: MOV EDX,dword ptr [EBX + 0x68]
// 00498acc: ADD ESP,0x14
// 00498acf: CMP ESI,EDX
// 00498ad1: JLE 0x00498ab0
//   XREF to: 00498ab0 (CONDITIONAL_JUMP)
// 00498ad3: MOV ESI,dword ptr [ESP + 0x130]
//   Label: LAB_00498ad3
//   XREF to: Stack[-0x80] (READ)
// 00498ada: CMP ESI,dword ptr [EBX + 0x5c]
// 00498add: JL 0x00498a8a
//   Label: LAB_00498add
//   XREF to: 00498a8a (CONDITIONAL_JUMP)
// 00498adf: MOV EAX,dword ptr [ESP + 0xec]
//   XREF to: Stack[-0xc4] (READ)
// 00498ae6: PUSH EAX
// 00498ae7: PUSH ESI
// 00498ae8: PUSH EDI
// 00498ae9: MOV EDX,dword ptr [ESP + 0x170]
//   XREF to: Stack[-0x4c] (READ)
// 00498af0: PUSH EDX
// 00498af1: PUSH EBX
// 00498af2: DEC ESI
// 00498af3: CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
//   XREF to: 00497500 (UNCONDITIONAL_CALL)
// 00498af8: MOV ECX,dword ptr [EBX + 0x5c]
// 00498afb: ADD ESP,0x14
// 00498afe: CMP ESI,ECX
// 00498b00: JMP 0x00498add
//   XREF to: 00498add (UNCONDITIONAL_JUMP)
// 00498b02: MOV EAX,dword ptr [ESP + 0x154]
//   Label: LAB_00498b02
//   XREF to: Stack[-0x5c] (READ)
// 00498b09: MOV dword ptr [ESP + 0xe8],EAX
//   XREF to: Stack[-0xc8] (WRITE)
// 00498b10: MOV dword ptr [ESP + 0xec],EAX
//   XREF to: Stack[-0xc4] (WRITE)
// 00498b17: JMP 0x00498aa4
//   XREF to: 00498aa4 (UNCONDITIONAL_JUMP)
// 00498b19: MOV EDI,dword ptr [ESP + 0x80]
//   Label: LAB_00498b19
//   XREF to: Stack[-0x130] (READ)
// 00498b20: CMP EDI,dword ptr [EBX + 0x68]
// 00498b23: JG 0x00498ca4
//   XREF to: 00498ca4 (CONDITIONAL_JUMP)
// 00498b29: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x134] (READ)
// 00498b2d: DEC EAX
// 00498b2e: MOV dword ptr [ESP + 0x118],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 00498b35: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x138] (READ)
// 00498b39: DEC EAX
// 00498b3a: MOV dword ptr [ESP + 0x11c],EAX
//   XREF to: Stack[-0x94] (WRITE)
// 00498b41: MOV EAX,EDI
// 00498b43: NEG EAX
// 00498b45: ADD EAX,EDI
// 00498b47: MOV dword ptr [ESP + 0x148],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 00498b4e: MOV EAX,dword ptr [ESP + 0x78]
//   Label: LAB_00498b4e
//   XREF to: Stack[-0x138] (READ)
// 00498b52: MOV EDX,dword ptr [EBX + 0x60]
// 00498b55: MOV dword ptr [ESP + 0x17c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00498b5c: CMP EAX,EDX
// 00498b5e: JG 0x00498bea
//   XREF to: 00498bea (CONDITIONAL_JUMP)
// 00498b64: MOV EAX,dword ptr [ESP + 0x148]
//   XREF to: Stack[-0x68] (READ)
// 00498b6b: MOV dword ptr [ESP + 0xf8],EAX
//   XREF to: Stack[-0xb8] (WRITE)
// 00498b72: MOV dword ptr [ESP + 0xfc],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 00498b79: MOV ESI,dword ptr [ESP + 0x7c]
//   Label: LAB_00498b79
//   XREF to: Stack[-0x134] (READ)
// 00498b7d: CMP ESI,dword ptr [EBX + 0x64]
// 00498b80: JG 0x00498ba5
//   XREF to: 00498ba5 (CONDITIONAL_JUMP)
// 00498b82: MOV EAX,dword ptr [ESP + 0xf8]
//   Label: LAB_00498b82
//   XREF to: Stack[-0xb8] (READ)
// 00498b89: PUSH EAX
// 00498b8a: PUSH EDI
// 00498b8b: PUSH ESI
// 00498b8c: MOV EDX,dword ptr [ESP + 0x188]
//   XREF to: Stack[-0x34] (READ)
// 00498b93: PUSH EDX
// 00498b94: PUSH EBX
// 00498b95: INC ESI
// 00498b96: CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
//   XREF to: 00497500 (UNCONDITIONAL_CALL)
// 00498b9b: MOV ECX,dword ptr [EBX + 0x64]
// 00498b9e: ADD ESP,0x14
// 00498ba1: CMP ESI,ECX
// 00498ba3: JLE 0x00498b82
//   XREF to: 00498b82 (CONDITIONAL_JUMP)
// 00498ba5: MOV ESI,dword ptr [ESP + 0x118]
//   Label: LAB_00498ba5
//   XREF to: Stack[-0x98] (READ)
// 00498bac: CMP ESI,dword ptr [EBX + 0x58]
// 00498baf: JL 0x00498bd4
//   XREF to: 00498bd4 (CONDITIONAL_JUMP)
// 00498bb1: MOV ECX,dword ptr [ESP + 0xfc]
//   Label: LAB_00498bb1
//   XREF to: Stack[-0xb4] (READ)
// 00498bb8: PUSH ECX
// 00498bb9: PUSH EDI
// 00498bba: PUSH ESI
// 00498bbb: MOV EAX,dword ptr [ESP + 0x188]
//   XREF to: Stack[-0x34] (READ)
// 00498bc2: PUSH EAX
// 00498bc3: PUSH EBX
// 00498bc4: DEC ESI
// 00498bc5: CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
//   XREF to: 00497500 (UNCONDITIONAL_CALL)
// 00498bca: MOV EDX,dword ptr [EBX + 0x58]
// 00498bcd: ADD ESP,0x14
// 00498bd0: CMP ESI,EDX
// 00498bd2: JGE 0x00498bb1
//   XREF to: 00498bb1 (CONDITIONAL_JUMP)
// 00498bd4: MOV ECX,dword ptr [ESP + 0x17c]
//   Label: LAB_00498bd4
//   XREF to: Stack[-0x34] (READ)
// 00498bdb: INC ECX
// 00498bdc: MOV ESI,dword ptr [EBX + 0x60]
// 00498bdf: MOV dword ptr [ESP + 0x17c],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 00498be6: CMP ECX,ESI
// 00498be8: JLE 0x00498b79
//   XREF to: 00498b79 (CONDITIONAL_JUMP)
// 00498bea: MOV EAX,dword ptr [ESP + 0x11c]
//   Label: LAB_00498bea
//   XREF to: Stack[-0x94] (READ)
// 00498bf1: MOV EDX,dword ptr [EBX + 0x54]
// 00498bf4: MOV dword ptr [ESP + 0x178],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00498bfb: CMP EAX,EDX
// 00498bfd: JL 0x00498c89
//   XREF to: 00498c89 (CONDITIONAL_JUMP)
// 00498c03: MOV EAX,dword ptr [ESP + 0x148]
//   XREF to: Stack[-0x68] (READ)
// 00498c0a: MOV dword ptr [ESP + 0x100],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 00498c11: MOV dword ptr [ESP + 0x104],EAX
//   XREF to: Stack[-0xac] (WRITE)
// 00498c18: MOV ESI,dword ptr [ESP + 0x7c]
//   Label: LAB_00498c18
//   XREF to: Stack[-0x134] (READ)
// 00498c1c: CMP ESI,dword ptr [EBX + 0x64]
// 00498c1f: JG 0x00498c44
//   XREF to: 00498c44 (CONDITIONAL_JUMP)
// 00498c21: MOV ECX,dword ptr [ESP + 0x100]
//   Label: LAB_00498c21
//   XREF to: Stack[-0xb0] (READ)
// 00498c28: PUSH ECX
// 00498c29: PUSH EDI
// 00498c2a: PUSH ESI
// 00498c2b: MOV EAX,dword ptr [ESP + 0x184]
//   XREF to: Stack[-0x38] (READ)
// 00498c32: PUSH EAX
// 00498c33: PUSH EBX
// 00498c34: INC ESI
// 00498c35: CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
//   XREF to: 00497500 (UNCONDITIONAL_CALL)
// 00498c3a: MOV EDX,dword ptr [EBX + 0x64]
// 00498c3d: ADD ESP,0x14
// 00498c40: CMP ESI,EDX
// 00498c42: JLE 0x00498c21
//   XREF to: 00498c21 (CONDITIONAL_JUMP)
// 00498c44: MOV ESI,dword ptr [ESP + 0x118]
//   Label: LAB_00498c44
//   XREF to: Stack[-0x98] (READ)
// 00498c4b: CMP ESI,dword ptr [EBX + 0x58]
// 00498c4e: JL 0x00498c73
//   XREF to: 00498c73 (CONDITIONAL_JUMP)
// 00498c50: MOV EAX,dword ptr [ESP + 0x104]
//   Label: LAB_00498c50
//   XREF to: Stack[-0xac] (READ)
// 00498c57: PUSH EAX
// 00498c58: PUSH EDI
// 00498c59: PUSH ESI
// 00498c5a: MOV EDX,dword ptr [ESP + 0x184]
//   XREF to: Stack[-0x38] (READ)
// 00498c61: PUSH EDX
// 00498c62: PUSH EBX
// 00498c63: DEC ESI
// 00498c64: CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
//   XREF to: 00497500 (UNCONDITIONAL_CALL)
// 00498c69: MOV ECX,dword ptr [EBX + 0x58]
// 00498c6c: ADD ESP,0x14
// 00498c6f: CMP ESI,ECX
// 00498c71: JGE 0x00498c50
//   XREF to: 00498c50 (CONDITIONAL_JUMP)
// 00498c73: MOV ECX,dword ptr [ESP + 0x178]
//   Label: LAB_00498c73
//   XREF to: Stack[-0x38] (READ)
// 00498c7a: DEC ECX
// 00498c7b: MOV ESI,dword ptr [EBX + 0x54]
// 00498c7e: MOV dword ptr [ESP + 0x178],ECX
//   XREF to: Stack[-0x38] (WRITE)
// 00498c85: CMP ECX,ESI
// 00498c87: JGE 0x00498c18
//   XREF to: 00498c18 (CONDITIONAL_JUMP)
// 00498c89: MOV EAX,dword ptr [ESP + 0x148]
//   Label: LAB_00498c89
//   XREF to: Stack[-0x68] (READ)
// 00498c90: INC EDI
// 00498c91: INC EAX
// 00498c92: MOV EDX,dword ptr [EBX + 0x68]
// 00498c95: MOV dword ptr [ESP + 0x148],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 00498c9c: CMP EDI,EDX
// 00498c9e: JLE 0x00498b4e
//   XREF to: 00498b4e (CONDITIONAL_JUMP)
// 00498ca4: MOV EDI,dword ptr [ESP + 0x80]
//   Label: LAB_00498ca4
//   XREF to: Stack[-0x130] (READ)
// 00498cab: MOV ECX,dword ptr [EBX + 0x5c]
// 00498cae: DEC EDI
// 00498caf: CMP EDI,ECX
// 00498cb1: JL 0x0049877e
//   XREF to: 0049877e (CONDITIONAL_JUMP)
// 00498cb7: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x134] (READ)
// 00498cbb: DEC EAX
// 00498cbc: MOV dword ptr [ESP + 0x120],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 00498cc3: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x138] (READ)
// 00498cc7: DEC EAX
// 00498cc8: MOV dword ptr [ESP + 0x124],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 00498ccf: MOV EAX,EDI
// 00498cd1: MOV EDX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x130] (READ)
// 00498cd8: NEG EAX
// 00498cda: ADD EAX,EDX
// 00498cdc: MOV dword ptr [ESP + 0x14c],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 00498ce3: MOV EAX,dword ptr [ESP + 0x78]
//   Label: LAB_00498ce3
//   XREF to: Stack[-0x138] (READ)
// 00498ce7: MOV ECX,dword ptr [EBX + 0x60]
// 00498cea: MOV dword ptr [ESP + 0x174],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00498cf1: CMP EAX,ECX
// 00498cf3: JLE 0x00498e2d
//   XREF to: 00498e2d (CONDITIONAL_JUMP)
// 00498cf9: MOV EAX,dword ptr [ESP + 0x124]
//   Label: LAB_00498cf9
//   XREF to: Stack[-0x8c] (READ)
// 00498d00: MOV ECX,dword ptr [EBX + 0x54]
// 00498d03: MOV dword ptr [ESP + 0x170],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 00498d0a: CMP EAX,ECX
// 00498d0c: JL 0x00498d98
//   XREF to: 00498d98 (CONDITIONAL_JUMP)
// 00498d12: MOV EAX,dword ptr [ESP + 0x14c]
//   XREF to: Stack[-0x64] (READ)
// 00498d19: MOV dword ptr [ESP + 0x110],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 00498d20: MOV dword ptr [ESP + 0x114],EAX
//   XREF to: Stack[-0x9c] (WRITE)
// 00498d27: MOV ESI,dword ptr [ESP + 0x7c]
//   Label: LAB_00498d27
//   XREF to: Stack[-0x134] (READ)
// 00498d2b: CMP ESI,dword ptr [EBX + 0x64]
// 00498d2e: JG 0x00498d53
//   XREF to: 00498d53 (CONDITIONAL_JUMP)
// 00498d30: MOV EAX,dword ptr [ESP + 0x110]
//   Label: LAB_00498d30
//   XREF to: Stack[-0xa0] (READ)
// 00498d37: PUSH EAX
// 00498d38: PUSH EDI
// 00498d39: PUSH ESI
// 00498d3a: MOV EDX,dword ptr [ESP + 0x17c]
//   XREF to: Stack[-0x40] (READ)
// 00498d41: PUSH EDX
// 00498d42: PUSH EBX
// 00498d43: INC ESI
// 00498d44: CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
//   XREF to: 00497500 (UNCONDITIONAL_CALL)
// 00498d49: MOV ECX,dword ptr [EBX + 0x64]
// 00498d4c: ADD ESP,0x14
// 00498d4f: CMP ESI,ECX
// 00498d51: JLE 0x00498d30
//   XREF to: 00498d30 (CONDITIONAL_JUMP)
// 00498d53: MOV ESI,dword ptr [ESP + 0x120]
//   Label: LAB_00498d53
//   XREF to: Stack[-0x90] (READ)
// 00498d5a: CMP ESI,dword ptr [EBX + 0x58]
// 00498d5d: JL 0x00498d82
//   XREF to: 00498d82 (CONDITIONAL_JUMP)
// 00498d5f: MOV ECX,dword ptr [ESP + 0x114]
//   Label: LAB_00498d5f
//   XREF to: Stack[-0x9c] (READ)
// 00498d66: PUSH ECX
// 00498d67: PUSH EDI
// 00498d68: PUSH ESI
// 00498d69: MOV EAX,dword ptr [ESP + 0x17c]
//   XREF to: Stack[-0x40] (READ)
// 00498d70: PUSH EAX
// 00498d71: PUSH EBX
// 00498d72: DEC ESI
// 00498d73: CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
//   XREF to: 00497500 (UNCONDITIONAL_CALL)
// 00498d78: MOV EDX,dword ptr [EBX + 0x58]
// 00498d7b: ADD ESP,0x14
// 00498d7e: CMP ESI,EDX
// 00498d80: JGE 0x00498d5f
//   XREF to: 00498d5f (CONDITIONAL_JUMP)
// 00498d82: MOV ESI,dword ptr [ESP + 0x170]
//   Label: LAB_00498d82
//   XREF to: Stack[-0x40] (READ)
// 00498d89: DEC ESI
// 00498d8a: MOV EDX,dword ptr [EBX + 0x54]
// 00498d8d: MOV dword ptr [ESP + 0x170],ESI
//   XREF to: Stack[-0x40] (WRITE)
// 00498d94: CMP ESI,EDX
// 00498d96: JGE 0x00498d27
//   XREF to: 00498d27 (CONDITIONAL_JUMP)
// 00498d98: MOV ESI,dword ptr [ESP + 0x14c]
//   Label: LAB_00498d98
//   XREF to: Stack[-0x64] (READ)
// 00498d9f: DEC EDI
// 00498da0: INC ESI
// 00498da1: MOV EAX,dword ptr [EBX + 0x5c]
// 00498da4: MOV dword ptr [ESP + 0x14c],ESI
//   XREF to: Stack[-0x64] (WRITE)
// 00498dab: CMP EDI,EAX
// 00498dad: JL 0x0049877e
//   XREF to: 0049877e (CONDITIONAL_JUMP)
// 00498db3: JMP 0x00498ce3
//   XREF to: 00498ce3 (UNCONDITIONAL_JUMP)
// 00498db8: MOV ESI,dword ptr [ESP + 0x174]
//   Label: LAB_00498db8
//   XREF to: Stack[-0x3c] (READ)
// 00498dbf: INC ESI
// 00498dc0: MOV EDX,dword ptr [EBX + 0x60]
// 00498dc3: MOV dword ptr [ESP + 0x174],ESI
//   XREF to: Stack[-0x3c] (WRITE)
// 00498dca: CMP ESI,EDX
// 00498dcc: JG 0x00498cf9
//   XREF to: 00498cf9 (CONDITIONAL_JUMP)
// 00498dd2: MOV ESI,dword ptr [ESP + 0x7c]
//   Label: LAB_00498dd2
//   XREF to: Stack[-0x134] (READ)
// 00498dd6: CMP ESI,dword ptr [EBX + 0x64]
// 00498dd9: JG 0x00498dfe
//   XREF to: 00498dfe (CONDITIONAL_JUMP)
// 00498ddb: MOV ECX,dword ptr [ESP + 0x108]
//   Label: LAB_00498ddb
//   XREF to: Stack[-0xa8] (READ)
// 00498de2: PUSH ECX
// 00498de3: PUSH EDI
// 00498de4: PUSH ESI
// 00498de5: MOV EAX,dword ptr [ESP + 0x180]
//   XREF to: Stack[-0x3c] (READ)
// 00498dec: PUSH EAX
// 00498ded: PUSH EBX
// 00498dee: INC ESI
// 00498def: CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
//   XREF to: 00497500 (UNCONDITIONAL_CALL)
// 00498df4: MOV EDX,dword ptr [EBX + 0x64]
// 00498df7: ADD ESP,0x14
// 00498dfa: CMP ESI,EDX
// 00498dfc: JLE 0x00498ddb
//   XREF to: 00498ddb (CONDITIONAL_JUMP)
// 00498dfe: MOV ESI,dword ptr [ESP + 0x120]
//   Label: LAB_00498dfe
//   XREF to: Stack[-0x90] (READ)
// 00498e05: CMP ESI,dword ptr [EBX + 0x58]
// 00498e08: JL 0x00498db8
//   Label: LAB_00498e08
//   XREF to: 00498db8 (CONDITIONAL_JUMP)
// 00498e0a: MOV EAX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0xa4] (READ)
// 00498e11: PUSH EAX
// 00498e12: PUSH EDI
// 00498e13: PUSH ESI
// 00498e14: MOV EDX,dword ptr [ESP + 0x180]
//   XREF to: Stack[-0x3c] (READ)
// 00498e1b: PUSH EDX
// 00498e1c: PUSH EBX
// 00498e1d: DEC ESI
// 00498e1e: CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
//   XREF to: 00497500 (UNCONDITIONAL_CALL)
// 00498e23: MOV ECX,dword ptr [EBX + 0x58]
// 00498e26: ADD ESP,0x14
// 00498e29: CMP ESI,ECX
// 00498e2b: JMP 0x00498e08
//   XREF to: 00498e08 (UNCONDITIONAL_JUMP)
// 00498e2d: MOV EAX,dword ptr [ESP + 0x14c]
//   Label: LAB_00498e2d
//   XREF to: Stack[-0x64] (READ)
// 00498e34: MOV dword ptr [ESP + 0x108],EAX
//   XREF to: Stack[-0xa8] (WRITE)
// 00498e3b: MOV dword ptr [ESP + 0x10c],EAX
//   XREF to: Stack[-0xa4] (WRITE)
// 00498e42: JMP 0x00498dd2
//   XREF to: 00498dd2 (UNCONDITIONAL_JUMP)
