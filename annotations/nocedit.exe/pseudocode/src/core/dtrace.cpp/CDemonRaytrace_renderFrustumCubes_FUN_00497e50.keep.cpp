// Name: core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50
// Address: 00497e50
// MANUAL RECONSTRUCTION
// Address Range: [[00497e50, 00498e43] [0060c3df, 0060c3fd]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50(CDemonRaytrace *this_ptr,float fov_or_radius,int render_mode)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50(CDemonRaytrace *this_ptr,float fov_or_radius,int render_mode)

{
  int iVar1;
  int iVar6;
  int iVar7;
  int iVar2;
  int iVar3;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar4;
  int iVar5;
  int frustum_corners[15];
  CVector3i local_150;
  int local_108;
  int local_104;
  int local_100;
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
  float fVar1;
  float local_15c;
  float local_158;
  float local_154;
  
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
  fVar1 = (float)0.00390625;
  local_15c = (float)local_150.x * fVar1;
  local_158 = (float)local_150.y * fVar1;
  local_154 = (float)local_150.z * fVar1;
  iVar9 = (int)ROUND(ROUND(((float)local_150.x * fVar1 - (this_ptr->bbox_min).x) /
                           (this_ptr->cell_size).x));
  iVar10 = (int)ROUND(ROUND(((float)local_150.y * fVar1 - (this_ptr->bbox_min).y) /
                            (this_ptr->cell_size).y));
  iVar7 = (int)ROUND(ROUND(fov_or_radius * 256.0f));
  iVar11 = (int)ROUND(ROUND(((float)local_150.z * fVar1 - (this_ptr->bbox_min).z) /
                            (this_ptr->cell_size).z));
  frustum_corners[0] = ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar7) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar7) >> 0x20) << 0x10
              ) + ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)iVar7) >> 0x10 |
                  (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)iVar7) >> 0x20) <<
                  0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)iVar7) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)iVar7) >> 0x20) << 0x10
              );
  frustum_corners[1] = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar7) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar7) >> 0x20) << 0x10
              ) + ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)iVar7) >> 0x10 |
                  (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)iVar7) >> 0x20) <<
                  0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)iVar7) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)iVar7) >> 0x20) << 0x10
              );
  frustum_corners[2] = ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar7) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar7) >> 0x20) << 0x10
              ) + ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)iVar7) >> 0x10 |
                  (int)((ulonglong)((longlong)g_InverseMatrix.m[1].z * (longlong)iVar7) >> 0x20) <<
                  0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)iVar7) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)iVar7) >> 0x20) << 0x10
              );
  iVar4 = -iVar7;
  frustum_corners[3] = ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar4) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar4) >> 0x20) << 0x10
              ) + ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)iVar7) >> 0x10 |
                  (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)iVar7) >> 0x20) <<
                  0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)iVar7) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)iVar7) >> 0x20) << 0x10
              );
  frustum_corners[4] = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar4) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar4) >> 0x20) << 0x10
              ) + ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)iVar7) >> 0x10 |
                  (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)iVar7) >> 0x20) <<
                  0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)iVar7) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)iVar7) >> 0x20) << 0x10
              );
  iVar1 = -iVar7;
  frustum_corners[5] = ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar4) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar4) >> 0x20) << 0x10
              ) + ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)iVar7) >> 0x10 |
                  (int)((ulonglong)((longlong)g_InverseMatrix.m[1].z * (longlong)iVar7) >> 0x20) <<
                  0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)iVar7) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)iVar7) >> 0x20) << 0x10
              );
  frustum_corners[6] = ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar4) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar4) >> 0x20) << 0x10
              ) + ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)iVar1) >> 0x10 |
                  (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)iVar1) >> 0x20) <<
                  0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)iVar7) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)iVar7) >> 0x20) << 0x10
              );
  frustum_corners[7] = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar4) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar4) >> 0x20) << 0x10
              ) + ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)iVar1) >> 0x10 |
                  (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)iVar1) >> 0x20) <<
                  0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)iVar7) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)iVar7) >> 0x20) << 0x10
              );
  frustum_corners[8] = ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar4) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar4) >> 0x20) << 0x10
              ) + ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)iVar1) >> 0x10 |
                  (int)((ulonglong)((longlong)g_InverseMatrix.m[1].z * (longlong)iVar1) >> 0x20) <<
                  0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)iVar7) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)iVar7) >> 0x20) << 0x10
              );
  frustum_corners[9] = ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar7) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar7) >> 0x20) << 0x10
              ) + ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)iVar1) >> 0x10 |
                  (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)iVar1) >> 0x20) <<
                  0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)iVar7) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)iVar7) >> 0x20) << 0x10
              );
  frustum_corners[10] = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar7) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar7) >> 0x20) << 0x10
              ) + ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)iVar1) >> 0x10 |
                  (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)iVar1) >> 0x20) <<
                  0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)iVar7) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)iVar7) >> 0x20) << 0x10
              );
  frustum_corners[11] = ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar7) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar7) >> 0x20) << 0x10
              ) + ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)iVar1) >> 0x10 |
                  (int)((ulonglong)((longlong)g_InverseMatrix.m[1].z * (longlong)iVar1) >> 0x20) <<
                  0x10) +
              ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)iVar7) >> 0x10 |
              (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)iVar7) >> 0x20) << 0x10
              );
  frustum_corners[12] = 0;
  frustum_corners[13] = 0;
  frustum_corners[14] = 0;
  local_108 = 999;
  local_104 = 999;
  local_100 = 999;
  iVar7 = -999;
  iVar3 = 0;
  iVar2 = -999;
  iVar5 = -999;
  do {
    iVar1 = (int)ROUND(ROUND((double)iVar9 +
                             (double)frustum_corners[iVar3 / 4] /
                             ((double)(this_ptr->cell_size).x * 256)));
    iVar6 = (int)ROUND(ROUND((double)iVar10 +
                             (double)frustum_corners[iVar3 / 4 + 1] /
                             ((double)(this_ptr->cell_size).y * 256)));
    iVar8 = (int)ROUND(ROUND((double)iVar11 +
                             (double)frustum_corners[iVar3 / 4 + 2] /
                             ((double)(this_ptr->cell_size).z * 256)));
    if (iVar1 < local_108) {
      local_108 = iVar1;
    }
    if (iVar6 < local_104) {
      local_104 = iVar6;
    }
    if (iVar8 < local_100) {
      local_100 = iVar8;
    }
    if (iVar7 < iVar1) {
      iVar7 = iVar1;
    }
    if (iVar2 < iVar6) {
      iVar2 = iVar6;
    }
    if (iVar5 < iVar8) {
      iVar5 = iVar8;
    }
    iVar3 = iVar3 + 0xc;
  } while (iVar3 != 0x3c);
  (this_ptr->grid_bounds_min).x = local_108;
  (this_ptr->grid_bounds_max).x = iVar7 + 1;
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
            (g_CDemonRendererPtr1,&g_DebugCubeBasePoint);
  engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970(g_CDemonRendererPtr1,0xff,0xff,0xff);
  if ((4 < this_ptr->rendering_mode) || (this_ptr->rendering_mode < 0)) {
    this_ptr->rendering_mode = 1;
  }
  iVar7 = (g_InverseMatrix.m[2].x ^ g_InverseMatrix.m[2].x >> 0x1f) -
          (g_InverseMatrix.m[2].x >> 0x1f);
  iVar1 = (g_InverseMatrix.m[2].y ^ g_InverseMatrix.m[2].y >> 0x1f) -
          (g_InverseMatrix.m[2].y >> 0x1f);
  iVar6 = (g_InverseMatrix.m[2].z ^ g_InverseMatrix.m[2].z >> 0x1f) -
          (g_InverseMatrix.m[2].z >> 0x1f);
  if ((iVar7 < iVar1) || (iVar7 < iVar6)) {
    if ((iVar1 < iVar7) || (iVar1 < iVar6)) {
      if (iVar11 <= (this_ptr->grid_bounds_max).z) {
        iVar1 = iVar10 + -1;
        local_68 = 0;
        iVar7 = iVar11;
        do {
          local_34 = iVar9;
          if (iVar9 <= (this_ptr->grid_bounds_max).x) {
            do {
              iVar6 = iVar10;
              if (iVar10 <= (this_ptr->grid_bounds_max).y) {
                do {
                  iVar8 = iVar6 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_34,iVar6,iVar7,local_68);
                  iVar6 = iVar8;
                } while (iVar8 <= (this_ptr->grid_bounds_max).y);
              }
              iVar6 = iVar1;
              if ((this_ptr->grid_bounds_min).y <= iVar1) {
                do {
                  iVar8 = iVar6 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_34,iVar6,iVar7,local_68);
                  iVar6 = iVar8;
                } while ((this_ptr->grid_bounds_min).y <= iVar8);
              }
              local_34 = local_34 + 1;
            } while (local_34 <= (this_ptr->grid_bounds_max).x);
          }
          local_38 = iVar9 + -1;
          if ((this_ptr->grid_bounds_min).x <= iVar9 + -1) {
            do {
              iVar6 = iVar10;
              if (iVar10 <= (this_ptr->grid_bounds_max).y) {
                do {
                  iVar8 = iVar6 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_38,iVar6,iVar7,local_68);
                  iVar6 = iVar8;
                } while (iVar8 <= (this_ptr->grid_bounds_max).y);
              }
              iVar6 = iVar1;
              if ((this_ptr->grid_bounds_min).y <= iVar1) {
                do {
                  iVar8 = iVar6 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_38,iVar6,iVar7,local_68);
                  iVar6 = iVar8;
                } while ((this_ptr->grid_bounds_min).y <= iVar8);
              }
              local_38 = local_38 + -1;
            } while ((this_ptr->grid_bounds_min).x <= local_38);
          }
          iVar7 = iVar7 + 1;
          local_68 = local_68 + 1;
        } while (iVar7 <= (this_ptr->grid_bounds_max).z);
      }
      iVar7 = iVar11 + -1;
      if ((this_ptr->grid_bounds_min).z <= iVar7) {
        iVar1 = iVar10 + -1;
        local_64 = iVar11 - iVar7;
        do {
          local_3c = iVar9;
          if (iVar9 <= (this_ptr->grid_bounds_max).x) {
            do {
              iVar11 = iVar10;
              if (iVar10 <= (this_ptr->grid_bounds_max).y) {
                do {
                  iVar6 = iVar11 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_3c,iVar11,iVar7,local_64);
                  iVar11 = iVar6;
                } while (iVar6 <= (this_ptr->grid_bounds_max).y);
              }
              iVar11 = iVar1;
              while ((this_ptr->grid_bounds_min).y <= iVar11) {
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,local_3c,iVar11,iVar7,local_64);
                iVar11 = iVar11 + -1;
              }
              local_3c = local_3c + 1;
            } while (local_3c <= (this_ptr->grid_bounds_max).x);
          }
          local_40 = iVar9 + -1;
          if ((this_ptr->grid_bounds_min).x <= iVar9 + -1) {
            do {
              iVar11 = iVar10;
              if (iVar10 <= (this_ptr->grid_bounds_max).y) {
                do {
                  iVar6 = iVar11 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_40,iVar11,iVar7,local_64);
                  iVar11 = iVar6;
                } while (iVar6 <= (this_ptr->grid_bounds_max).y);
              }
              iVar11 = iVar1;
              if ((this_ptr->grid_bounds_min).y <= iVar1) {
                do {
                  iVar6 = iVar11 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_40,iVar11,iVar7,local_64);
                  iVar11 = iVar6;
                } while ((this_ptr->grid_bounds_min).y <= iVar6);
              }
              local_40 = local_40 + -1;
            } while ((this_ptr->grid_bounds_min).x <= local_40);
          }
          iVar7 = iVar7 + -1;
          local_64 = local_64 + 1;
        } while ((this_ptr->grid_bounds_min).z <= iVar7);
      }
    }
    else {
      if (iVar10 <= (this_ptr->grid_bounds_max).y) {
        iVar1 = iVar11 + -1;
        local_60 = 0;
        iVar7 = iVar10;
        do {
          local_44 = iVar9;
          if (iVar9 <= (this_ptr->grid_bounds_max).x) {
            do {
              iVar6 = iVar11;
              if (iVar11 <= (this_ptr->grid_bounds_max).z) {
                do {
                  iVar8 = iVar6 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_44,iVar7,iVar6,local_60);
                  iVar6 = iVar8;
                } while (iVar8 <= (this_ptr->grid_bounds_max).z);
              }
              iVar6 = iVar1;
              if ((this_ptr->grid_bounds_min).z <= iVar1) {
                do {
                  iVar8 = iVar6 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_44,iVar7,iVar6,local_60);
                  iVar6 = iVar8;
                } while ((this_ptr->grid_bounds_min).z <= iVar8);
              }
              local_44 = local_44 + 1;
            } while (local_44 <= (this_ptr->grid_bounds_max).x);
          }
          local_48 = iVar9 + -1;
          if ((this_ptr->grid_bounds_min).x <= iVar9 + -1) {
            do {
              iVar6 = iVar11;
              if (iVar11 <= (this_ptr->grid_bounds_max).z) {
                do {
                  iVar8 = iVar6 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_48,iVar7,iVar6,local_60);
                  iVar6 = iVar8;
                } while (iVar8 <= (this_ptr->grid_bounds_max).z);
              }
              iVar6 = iVar1;
              if ((this_ptr->grid_bounds_min).z <= iVar1) {
                do {
                  iVar8 = iVar6 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_48,iVar7,iVar6,local_60);
                  iVar6 = iVar8;
                } while ((this_ptr->grid_bounds_min).z <= iVar8);
              }
              local_48 = local_48 + -1;
            } while ((this_ptr->grid_bounds_min).x <= local_48);
          }
          iVar7 = iVar7 + 1;
          local_60 = local_60 + 1;
        } while (iVar7 <= (this_ptr->grid_bounds_max).y);
      }
      iVar7 = iVar10 + -1;
      if ((this_ptr->grid_bounds_min).y <= iVar7) {
        iVar1 = iVar11 + -1;
        local_5c = iVar10 - iVar7;
        do {
          local_4c = iVar9;
          if (iVar9 <= (this_ptr->grid_bounds_max).x) {
            do {
              iVar10 = iVar11;
              if (iVar11 <= (this_ptr->grid_bounds_max).z) {
                do {
                  iVar6 = iVar10 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_4c,iVar7,iVar10,local_5c);
                  iVar10 = iVar6;
                } while (iVar6 <= (this_ptr->grid_bounds_max).z);
              }
              iVar10 = iVar1;
              while ((this_ptr->grid_bounds_min).z <= iVar10) {
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,local_4c,iVar7,iVar10,local_5c);
                iVar10 = iVar10 + -1;
              }
              local_4c = local_4c + 1;
            } while (local_4c <= (this_ptr->grid_bounds_max).x);
          }
          local_50 = iVar9 + -1;
          if ((this_ptr->grid_bounds_min).x <= iVar9 + -1) {
            do {
              iVar10 = iVar11;
              if (iVar11 <= (this_ptr->grid_bounds_max).z) {
                do {
                  iVar6 = iVar10 + 1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_50,iVar7,iVar10,local_5c);
                  iVar10 = iVar6;
                } while (iVar6 <= (this_ptr->grid_bounds_max).z);
              }
              iVar10 = iVar1;
              if ((this_ptr->grid_bounds_min).z <= iVar1) {
                do {
                  iVar6 = iVar10 + -1;
                  core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                            (this_ptr,local_50,iVar7,iVar10,local_5c);
                  iVar10 = iVar6;
                } while ((this_ptr->grid_bounds_min).z <= iVar6);
              }
              local_50 = local_50 + -1;
            } while ((this_ptr->grid_bounds_min).x <= local_50);
          }
          iVar7 = iVar7 + -1;
          local_5c = local_5c + 1;
        } while ((this_ptr->grid_bounds_min).y <= iVar7);
      }
    }
  }
  else {
    if (iVar9 <= (this_ptr->grid_bounds_max).x) {
      iVar1 = iVar11 + -1;
      local_58 = 0;
      iVar7 = iVar9;
      do {
        local_24 = iVar10;
        if (iVar10 <= (this_ptr->grid_bounds_max).y) {
          do {
            iVar6 = iVar11;
            if (iVar11 <= (this_ptr->grid_bounds_max).z) {
              do {
                iVar8 = iVar6 + 1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar7,local_24,iVar6,local_58);
                iVar6 = iVar8;
              } while (iVar8 <= (this_ptr->grid_bounds_max).z);
            }
            iVar6 = iVar1;
            if ((this_ptr->grid_bounds_min).z <= iVar1) {
              do {
                iVar8 = iVar6 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar7,local_24,iVar6,local_58);
                iVar6 = iVar8;
              } while ((this_ptr->grid_bounds_min).z <= iVar8);
            }
            local_24 = local_24 + 1;
          } while (local_24 <= (this_ptr->grid_bounds_max).y);
        }
        local_28 = iVar10 + -1;
        if ((this_ptr->grid_bounds_min).y <= iVar10 + -1) {
          do {
            iVar6 = iVar11;
            if (iVar11 <= (this_ptr->grid_bounds_max).z) {
              do {
                iVar8 = iVar6 + 1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar7,local_28,iVar6,local_58);
                iVar6 = iVar8;
              } while (iVar8 <= (this_ptr->grid_bounds_max).z);
            }
            iVar6 = iVar1;
            if ((this_ptr->grid_bounds_min).z <= iVar1) {
              do {
                iVar8 = iVar6 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar7,local_28,iVar6,local_58);
                iVar6 = iVar8;
              } while ((this_ptr->grid_bounds_min).z <= iVar8);
            }
            local_28 = local_28 + -1;
          } while ((this_ptr->grid_bounds_min).y <= local_28);
        }
        iVar7 = iVar7 + 1;
        local_58 = local_58 + 1;
      } while (iVar7 <= (this_ptr->grid_bounds_max).x);
    }
    iVar7 = iVar9 + -1;
    if ((this_ptr->grid_bounds_min).x <= iVar7) {
      iVar1 = iVar11 + -1;
      local_54 = iVar9 - iVar7;
      do {
        local_2c = iVar10;
        if (iVar10 <= (this_ptr->grid_bounds_max).y) {
          do {
            iVar9 = iVar11;
            if (iVar11 <= (this_ptr->grid_bounds_max).z) {
              do {
                iVar6 = iVar9 + 1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar7,local_2c,iVar9,local_54);
                iVar9 = iVar6;
              } while (iVar6 <= (this_ptr->grid_bounds_max).z);
            }
            iVar9 = iVar1;
            if ((this_ptr->grid_bounds_min).z <= iVar1) {
              do {
                iVar6 = iVar9 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar7,local_2c,iVar9,local_54);
                iVar9 = iVar6;
              } while ((this_ptr->grid_bounds_min).z <= iVar6);
            }
            local_2c = local_2c + 1;
          } while (local_2c <= (this_ptr->grid_bounds_max).y);
        }
        local_30 = iVar10 + -1;
        if ((this_ptr->grid_bounds_min).y <= iVar10 + -1) {
          do {
            iVar9 = iVar11;
            if (iVar11 <= (this_ptr->grid_bounds_max).z) {
              do {
                iVar6 = iVar9 + 1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar7,local_30,iVar9,local_54);
                iVar9 = iVar6;
              } while (iVar6 <= (this_ptr->grid_bounds_max).z);
            }
            iVar9 = iVar1;
            if ((this_ptr->grid_bounds_min).z <= iVar1) {
              do {
                iVar6 = iVar9 + -1;
                core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
                          (this_ptr,iVar7,local_30,iVar9,local_54);
                iVar9 = iVar6;
              } while ((this_ptr->grid_bounds_min).z <= iVar6);
            }
            local_30 = local_30 + -1;
          } while ((this_ptr->grid_bounds_min).y <= local_30);
        }
        iVar7 = iVar7 + -1;
        local_54 = local_54 + 1;
      } while ((this_ptr->grid_bounds_min).x <= iVar7);
    }
  }
  g_PVSReadyFlag = 1;
  return;
}
