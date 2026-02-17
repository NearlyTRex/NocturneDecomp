// Name: core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50
// Address: 00497e50
// Address Range: [[00497e50, 00498e43]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50(CDemonRaytrace *this_ptr,float fov_or_radius,int render_mode)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50(CDemonRaytrace *this_ptr,float fov_or_radius,int render_mode)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  bool bVar7;
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
  CVector3i local_150;
  int local_144;
  int local_140;
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
            (g_CDemonRendererPtr1,&local_150);
  local_138 = local_150.x;
  local_134[(uint)bVar6 * -2] = *(int *)((int)&local_150 + (uint)bVar6 * -8 + 4);
  local_134[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       *(int *)((int)&local_150 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  fVar1 = (float)0.00390625;
  local_20 = local_134[1];
  local_15c = (float)local_138 * fVar1;
  local_158 = (float)local_134[0] * fVar1;
  local_154 = (float)local_134[1] * fVar1;
  local_138 = (int)ROUND(ROUND(((float)local_138 * fVar1 - (this_ptr->bbox_min).x) /
                               (this_ptr->cell_size).x));
  local_134[0] = (int)ROUND(ROUND(((float)local_134[0] * fVar1 - (this_ptr->bbox_min).y) /
                                  (this_ptr->cell_size).y));
  local_13c = (int)ROUND(ROUND(fov_or_radius * 256.0f));
  local_134[1] = (int)ROUND(ROUND(((float)local_134[1] * fVar1 - (this_ptr->bbox_min).z) /
                                  (this_ptr->cell_size).z));
  local_198 = ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)local_13c) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)local_13c) >> 0x20) <<
              0x10) + ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)local_13c) >> 0x10 |
                      (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)local_13c) >>
                           0x20) << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)local_13c) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)local_13c) >> 0x20) <<
              0x10);
  local_194 = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)local_13c) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)local_13c) >> 0x20) <<
              0x10) + ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)local_13c) >> 0x10 |
                      (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)local_13c) >>
                           0x20) << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)local_13c) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)local_13c) >> 0x20) <<
              0x10);
  local_190 = ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)local_13c) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)local_13c) >> 0x20) <<
              0x10) + ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)local_13c) >> 0x10 |
                      (int)((ulonglong)((longlong)g_InverseMatrix.m[1].z * (longlong)local_13c) >>
                           0x20) << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)local_13c) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)local_13c) >> 0x20) <<
              0x10);
  iVar4 = -local_13c;
  local_18c = ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar4) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar4) >> 0x20) << 0x10
              ) + ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)local_13c) >> 0x10 |
                  (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)local_13c) >> 0x20)
                  << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)local_13c) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)local_13c) >> 0x20) <<
              0x10);
  local_188 = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar4) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar4) >> 0x20) << 0x10
              ) + ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)local_13c) >> 0x10 |
                  (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)local_13c) >> 0x20)
                  << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)local_13c) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)local_13c) >> 0x20) <<
              0x10);
  local_140 = -local_13c;
  local_184 = ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar4) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar4) >> 0x20) << 0x10
              ) + ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)local_13c) >> 0x10 |
                  (int)((ulonglong)((longlong)g_InverseMatrix.m[1].z * (longlong)local_13c) >> 0x20)
                  << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)local_13c) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)local_13c) >> 0x20) <<
              0x10);
  local_180 = ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar4) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar4) >> 0x20) << 0x10
              ) + ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)local_140) >> 0x10 |
                  (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)local_140) >> 0x20)
                  << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)local_13c) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)local_13c) >> 0x20) <<
              0x10);
  local_17c = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar4) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar4) >> 0x20) << 0x10
              ) + ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)local_140) >> 0x10 |
                  (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)local_140) >> 0x20)
                  << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)local_13c) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)local_13c) >> 0x20) <<
              0x10);
  local_178 = ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar4) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar4) >> 0x20) << 0x10
              ) + ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)local_140) >> 0x10 |
                  (int)((ulonglong)((longlong)g_InverseMatrix.m[1].z * (longlong)local_140) >> 0x20)
                  << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)local_13c) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)local_13c) >> 0x20) <<
              0x10);
  local_144 = local_13c;
  local_174 = ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)local_13c) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)local_13c) >> 0x20) <<
              0x10) + ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)local_140) >> 0x10 |
                      (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)local_140) >>
                           0x20) << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)local_13c) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)local_13c) >> 0x20) <<
              0x10);
  local_170 = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)local_13c) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)local_13c) >> 0x20) <<
              0x10) + ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)local_140) >> 0x10 |
                      (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)local_140) >>
                           0x20) << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)local_13c) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)local_13c) >> 0x20) <<
              0x10);
  local_16c = ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)local_13c) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)local_13c) >> 0x20) <<
              0x10) + ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)local_140) >> 0x10 |
                      (int)((ulonglong)((longlong)g_InverseMatrix.m[1].z * (longlong)local_140) >>
                           0x20) << 0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)local_13c) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)local_13c) >> 0x20) <<
              0x10);
  local_168 = 0;
  local_164 = 0;
  local_160 = 0;
  local_108 = 999;
  local_104 = 999;
  local_100 = 999;
  iVar4 = -999;
  iVar3 = 0;
  iVar2 = -999;
  iVar5 = -999;
  do {
    local_20 = local_138;
    local_1c = local_134[0];
    local_18 = local_134[1];
    local_114 = (int)ROUND(ROUND((double)local_138 +
                                 (double)*(int *)((int)&stack0xfffffe68 + iVar3) /
                                 ((double)(this_ptr->cell_size).x * 256)));
    local_110 = (int)ROUND(ROUND((double)local_134[0] +
                                 (double)*(int *)((int)&stack0xfffffe6c + iVar3) /
                                 ((double)(this_ptr->cell_size).y * 256)));
    local_10c = (int)ROUND(ROUND((double)local_134[1] +
                                 (double)*(int *)((int)&stack0xfffffe70 + iVar3) /
                                 ((double)(this_ptr->cell_size).z * 256)));
    if (local_114 < local_108) {
      local_108 = local_114;
    }
    if (local_110 < local_104) {
      local_104 = local_110;
    }
    if (local_10c < local_100) {
      local_100 = local_10c;
    }
    if (iVar4 < local_114) {
      iVar4 = local_114;
    }
    if (iVar2 < local_110) {
      iVar2 = local_110;
    }
    if (iVar5 < local_10c) {
      iVar5 = local_10c;
    }
    iVar3 = iVar3 + 0xc;
  } while (iVar3 != 0x3c);
  (this_ptr->grid_bounds_min).x = local_108;
  (this_ptr->grid_bounds_max).x = iVar4 + 1;
  (this_ptr->grid_bounds_max).y = iVar2 + 1;
  (this_ptr->grid_bounds_max).z = iVar5 + 1;
  (this_ptr->grid_bounds_min).y = local_104;
  (this_ptr->grid_bounds_min).z = local_100;
  if ((this_ptr->grid_bounds_min).x < 0) {
    (this_ptr->grid_bounds_min).x = 0;
  }
  if ((this_ptr->grid_bounds_min).y < 0) {
    (this_ptr->grid_bounds_min).y = 0;
  }
  if ((this_ptr->grid_bounds_min).z < 0) {
    (this_ptr->grid_bounds_min).z = 0;
  }
  iVar4 = (this_ptr->grid_coord).x;
  if (iVar4 <= (this_ptr->grid_bounds_max).x) {
    (this_ptr->grid_bounds_max).x = iVar4 + -1;
  }
  iVar4 = (this_ptr->grid_coord).y;
  if (iVar4 <= (this_ptr->grid_bounds_max).y) {
    (this_ptr->grid_bounds_max).y = iVar4 + -1;
  }
  iVar4 = (this_ptr->grid_coord).z;
  if (iVar4 <= (this_ptr->grid_bounds_max).z) {
    (this_ptr->grid_bounds_max).z = iVar4 + -1;
  }
  g_RenderedTriangleCount = 0;
  engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420
            (g_CDemonRendererPtr1,&g_DebugCubeBasePoint);
  engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970(g_CDemonRendererPtr1,0xff,0xff,0xff);
  if ((4 < this_ptr->rendering_mode) || (this_ptr->rendering_mode < 0)) {
    this_ptr->rendering_mode = 1;
  }
  local_fc = (g_InverseMatrix.m[2].x ^ g_InverseMatrix.m[2].x >> 0x1f) -
             (g_InverseMatrix.m[2].x >> 0x1f);
  iVar4 = (g_InverseMatrix.m[2].y ^ g_InverseMatrix.m[2].y >> 0x1f) -
          (g_InverseMatrix.m[2].y >> 0x1f);
  iVar2 = (g_InverseMatrix.m[2].z ^ g_InverseMatrix.m[2].z >> 0x1f) -
          (g_InverseMatrix.m[2].z >> 0x1f);
  if ((local_fc < iVar4) || (local_fc < iVar2)) {
    if ((iVar4 < local_fc) || (iVar4 < iVar2)) {
      if (local_134[1] <= (this_ptr->grid_bounds_max).z) {
        local_98 = local_134[0] + -1;
        local_94 = local_138 + -1;
        local_68 = 0;
        iVar4 = local_134[1];
        do {
          local_34 = local_138;
          if (local_138 <= (this_ptr->grid_bounds_max).x) {
            local_b8 = local_68;
            local_b4 = local_68;
            do {
              iVar2 = local_134[0];
              if (local_134[0] <= (this_ptr->grid_bounds_max).y) {
                do {
                  iVar5 = iVar2 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_34,iVar2,iVar4,local_b8);
                  iVar2 = iVar5;
                } while (iVar5 <= (this_ptr->grid_bounds_max).y);
              }
              iVar2 = local_98;
              if ((this_ptr->grid_bounds_min).y <= local_98) {
                do {
                  iVar5 = iVar2 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_34,iVar2,iVar4,local_b4);
                  iVar2 = iVar5;
                } while ((this_ptr->grid_bounds_min).y <= iVar5);
              }
              local_34 = local_34 + 1;
            } while (local_34 <= (this_ptr->grid_bounds_max).x);
          }
          local_38 = local_94;
          if ((this_ptr->grid_bounds_min).x <= local_94) {
            local_b0 = local_68;
            local_ac = local_68;
            do {
              iVar2 = local_134[0];
              if (local_134[0] <= (this_ptr->grid_bounds_max).y) {
                do {
                  iVar5 = iVar2 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_38,iVar2,iVar4,local_b0);
                  iVar2 = iVar5;
                } while (iVar5 <= (this_ptr->grid_bounds_max).y);
              }
              iVar2 = local_98;
              if ((this_ptr->grid_bounds_min).y <= local_98) {
                do {
                  iVar5 = iVar2 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_38,iVar2,iVar4,local_ac);
                  iVar2 = iVar5;
                } while ((this_ptr->grid_bounds_min).y <= iVar5);
              }
              local_38 = local_38 + -1;
            } while ((this_ptr->grid_bounds_min).x <= local_38);
          }
          iVar4 = iVar4 + 1;
          local_68 = local_68 + 1;
        } while (iVar4 <= (this_ptr->grid_bounds_max).z);
      }
      iVar4 = local_134[1] + -1;
      if ((this_ptr->grid_bounds_min).z <= iVar4) {
        local_90 = local_134[0] + -1;
        local_8c = local_138 + -1;
        local_64 = local_134[1] - iVar4;
        do {
          local_3c = local_138;
          if (local_138 <= (this_ptr->grid_bounds_max).x) {
            local_a8 = local_64;
            local_a4 = local_a8;
            do {
              iVar2 = local_134[0];
              if (local_134[0] <= (this_ptr->grid_bounds_max).y) {
                do {
                  iVar5 = iVar2 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_3c,iVar2,iVar4,local_a8);
                  iVar2 = iVar5;
                } while (iVar5 <= (this_ptr->grid_bounds_max).y);
              }
              iVar2 = (this_ptr->grid_bounds_min).y;
              iVar5 = local_90 - iVar2;
              bVar7 = SBORROW4(local_90,iVar2);
              iVar2 = local_90;
              while (bVar7 == iVar5 < 0) {
                iVar3 = iVar2 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,local_3c,iVar2,iVar4,local_a4);
                iVar2 = (this_ptr->grid_bounds_min).y;
                iVar5 = iVar3 - iVar2;
                bVar7 = SBORROW4(iVar3,iVar2);
                iVar2 = iVar3;
              }
              local_3c = local_3c + 1;
            } while (local_3c <= (this_ptr->grid_bounds_max).x);
          }
          local_40 = local_8c;
          if ((this_ptr->grid_bounds_min).x <= local_8c) {
            local_a0 = local_64;
            local_9c = local_64;
            do {
              iVar2 = local_134[0];
              if (local_134[0] <= (this_ptr->grid_bounds_max).y) {
                do {
                  iVar5 = iVar2 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_40,iVar2,iVar4,local_a0);
                  iVar2 = iVar5;
                } while (iVar5 <= (this_ptr->grid_bounds_max).y);
              }
              iVar2 = local_90;
              if ((this_ptr->grid_bounds_min).y <= local_90) {
                do {
                  iVar5 = iVar2 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_40,iVar2,iVar4,local_9c);
                  iVar2 = iVar5;
                } while ((this_ptr->grid_bounds_min).y <= iVar5);
              }
              local_40 = local_40 + -1;
            } while ((this_ptr->grid_bounds_min).x <= local_40);
          }
          iVar4 = iVar4 + -1;
          local_64 = local_64 + 1;
        } while ((this_ptr->grid_bounds_min).z <= iVar4);
      }
    }
    else {
      if (local_134[0] <= (this_ptr->grid_bounds_max).y) {
        local_88 = local_134[1] + -1;
        local_84 = local_138 + -1;
        local_60 = 0;
        iVar4 = local_134[0];
        do {
          local_44 = local_138;
          if (local_138 <= (this_ptr->grid_bounds_max).x) {
            local_d8 = local_60;
            local_d4 = local_60;
            do {
              iVar2 = local_134[1];
              if (local_134[1] <= (this_ptr->grid_bounds_max).z) {
                do {
                  iVar5 = iVar2 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_44,iVar4,iVar2,local_d8);
                  iVar2 = iVar5;
                } while (iVar5 <= (this_ptr->grid_bounds_max).z);
              }
              iVar2 = local_88;
              if ((this_ptr->grid_bounds_min).z <= local_88) {
                do {
                  iVar5 = iVar2 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_44,iVar4,iVar2,local_d4);
                  iVar2 = iVar5;
                } while ((this_ptr->grid_bounds_min).z <= iVar5);
              }
              local_44 = local_44 + 1;
            } while (local_44 <= (this_ptr->grid_bounds_max).x);
          }
          local_48 = local_84;
          if ((this_ptr->grid_bounds_min).x <= local_84) {
            local_d0 = local_60;
            local_cc = local_60;
            do {
              iVar2 = local_134[1];
              if (local_134[1] <= (this_ptr->grid_bounds_max).z) {
                do {
                  iVar5 = iVar2 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_48,iVar4,iVar2,local_d0);
                  iVar2 = iVar5;
                } while (iVar5 <= (this_ptr->grid_bounds_max).z);
              }
              iVar2 = local_88;
              if ((this_ptr->grid_bounds_min).z <= local_88) {
                do {
                  iVar5 = iVar2 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_48,iVar4,iVar2,local_cc);
                  iVar2 = iVar5;
                } while ((this_ptr->grid_bounds_min).z <= iVar5);
              }
              local_48 = local_48 + -1;
            } while ((this_ptr->grid_bounds_min).x <= local_48);
          }
          iVar4 = iVar4 + 1;
          local_60 = local_60 + 1;
        } while (iVar4 <= (this_ptr->grid_bounds_max).y);
      }
      iVar4 = local_134[0] + -1;
      if ((this_ptr->grid_bounds_min).y <= iVar4) {
        local_80 = local_134[1] + -1;
        local_7c = local_138 + -1;
        local_5c = local_134[0] - iVar4;
        do {
          local_4c = local_138;
          if (local_138 <= (this_ptr->grid_bounds_max).x) {
            local_c8 = local_5c;
            local_c4 = local_c8;
            do {
              iVar2 = local_134[1];
              if (local_134[1] <= (this_ptr->grid_bounds_max).z) {
                do {
                  iVar5 = iVar2 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_4c,iVar4,iVar2,local_c8);
                  iVar2 = iVar5;
                } while (iVar5 <= (this_ptr->grid_bounds_max).z);
              }
              iVar2 = (this_ptr->grid_bounds_min).z;
              iVar5 = local_80 - iVar2;
              bVar7 = SBORROW4(local_80,iVar2);
              iVar2 = local_80;
              while (bVar7 == iVar5 < 0) {
                iVar3 = iVar2 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,local_4c,iVar4,iVar2,local_c4);
                iVar2 = (this_ptr->grid_bounds_min).z;
                iVar5 = iVar3 - iVar2;
                bVar7 = SBORROW4(iVar3,iVar2);
                iVar2 = iVar3;
              }
              local_4c = local_4c + 1;
            } while (local_4c <= (this_ptr->grid_bounds_max).x);
          }
          local_50 = local_7c;
          if ((this_ptr->grid_bounds_min).x <= local_7c) {
            local_c0 = local_5c;
            local_bc = local_5c;
            do {
              iVar2 = local_134[1];
              if (local_134[1] <= (this_ptr->grid_bounds_max).z) {
                do {
                  iVar5 = iVar2 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_50,iVar4,iVar2,local_c0);
                  iVar2 = iVar5;
                } while (iVar5 <= (this_ptr->grid_bounds_max).z);
              }
              iVar2 = local_80;
              if ((this_ptr->grid_bounds_min).z <= local_80) {
                do {
                  iVar5 = iVar2 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_50,iVar4,iVar2,local_bc);
                  iVar2 = iVar5;
                } while ((this_ptr->grid_bounds_min).z <= iVar5);
              }
              local_50 = local_50 + -1;
            } while ((this_ptr->grid_bounds_min).x <= local_50);
          }
          iVar4 = iVar4 + -1;
          local_5c = local_5c + 1;
        } while ((this_ptr->grid_bounds_min).y <= iVar4);
      }
    }
  }
  else {
    if (local_138 <= (this_ptr->grid_bounds_max).x) {
      local_78 = local_134[1] + -1;
      local_74 = local_134[0] + -1;
      local_58 = 0;
      iVar4 = local_138;
      do {
        local_24 = local_134[0];
        if (local_134[0] <= (this_ptr->grid_bounds_max).y) {
          local_f8 = local_58;
          local_f4 = local_58;
          do {
            iVar2 = local_134[1];
            if (local_134[1] <= (this_ptr->grid_bounds_max).z) {
              do {
                iVar5 = iVar2 + 1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar4,local_24,iVar2,local_f8);
                iVar2 = iVar5;
              } while (iVar5 <= (this_ptr->grid_bounds_max).z);
            }
            iVar2 = local_78;
            if ((this_ptr->grid_bounds_min).z <= local_78) {
              do {
                iVar5 = iVar2 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar4,local_24,iVar2,local_f4);
                iVar2 = iVar5;
              } while ((this_ptr->grid_bounds_min).z <= iVar5);
            }
            local_24 = local_24 + 1;
          } while (local_24 <= (this_ptr->grid_bounds_max).y);
        }
        local_28 = local_74;
        if ((this_ptr->grid_bounds_min).y <= local_74) {
          local_f0 = local_58;
          local_ec = local_58;
          do {
            iVar2 = local_134[1];
            if (local_134[1] <= (this_ptr->grid_bounds_max).z) {
              do {
                iVar5 = iVar2 + 1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar4,local_28,iVar2,local_f0);
                iVar2 = iVar5;
              } while (iVar5 <= (this_ptr->grid_bounds_max).z);
            }
            iVar2 = local_78;
            if ((this_ptr->grid_bounds_min).z <= local_78) {
              do {
                iVar5 = iVar2 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar4,local_28,iVar2,local_ec);
                iVar2 = iVar5;
              } while ((this_ptr->grid_bounds_min).z <= iVar5);
            }
            local_28 = local_28 + -1;
          } while ((this_ptr->grid_bounds_min).y <= local_28);
        }
        iVar4 = iVar4 + 1;
        local_58 = local_58 + 1;
      } while (iVar4 <= (this_ptr->grid_bounds_max).x);
    }
    iVar4 = local_138 + -1;
    if ((this_ptr->grid_bounds_min).x <= iVar4) {
      local_70 = local_134[1] + -1;
      local_6c = local_134[0] + -1;
      local_54 = local_138 - iVar4;
      do {
        local_2c = local_134[0];
        if (local_134[0] <= (this_ptr->grid_bounds_max).y) {
          local_e8 = local_54;
          local_e4 = local_54;
          do {
            iVar2 = local_134[1];
            if (local_134[1] <= (this_ptr->grid_bounds_max).z) {
              do {
                iVar5 = iVar2 + 1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar4,local_2c,iVar2,local_e8);
                iVar2 = iVar5;
              } while (iVar5 <= (this_ptr->grid_bounds_max).z);
            }
            iVar2 = local_70;
            if ((this_ptr->grid_bounds_min).z <= local_70) {
              do {
                iVar5 = iVar2 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar4,local_2c,iVar2,local_e4);
                iVar2 = iVar5;
              } while ((this_ptr->grid_bounds_min).z <= iVar5);
            }
            local_2c = local_2c + 1;
          } while (local_2c <= (this_ptr->grid_bounds_max).y);
        }
        local_30 = local_6c;
        if ((this_ptr->grid_bounds_min).y <= local_6c) {
          local_e0 = local_54;
          local_dc = local_54;
          do {
            iVar2 = local_134[1];
            if (local_134[1] <= (this_ptr->grid_bounds_max).z) {
              do {
                iVar5 = iVar2 + 1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar4,local_30,iVar2,local_e0);
                iVar2 = iVar5;
              } while (iVar5 <= (this_ptr->grid_bounds_max).z);
            }
            iVar2 = local_70;
            if ((this_ptr->grid_bounds_min).z <= local_70) {
              do {
                iVar5 = iVar2 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar4,local_30,iVar2,local_dc);
                iVar2 = iVar5;
              } while ((this_ptr->grid_bounds_min).z <= iVar5);
            }
            local_30 = local_30 + -1;
          } while ((this_ptr->grid_bounds_min).y <= local_30);
        }
        iVar4 = iVar4 + -1;
        local_54 = local_54 + 1;
      } while ((this_ptr->grid_bounds_min).x <= iVar4);
    }
  }
  g_PVSReadyFlag = 1;
  return;
}
