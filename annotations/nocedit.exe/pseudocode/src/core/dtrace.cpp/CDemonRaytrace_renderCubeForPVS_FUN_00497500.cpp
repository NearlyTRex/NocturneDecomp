// Name: core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
// Address: 00497500
// Address Range: [[00497500, 00497e46]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500(CDemonRaytrace *this_ptr,int grid_x,int grid_y,int grid_z,int render_mode)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500(CDemonRaytrace *this_ptr,int grid_x,int grid_y,int grid_z,int render_mode)

{
  uint uVar1;
  int iVar2;
  SMRGLHeaderPrimitive SStack_d4;
  int local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  CVector3i local_a0;
  CVector3i local_94;
  CVector3i local_88;
  CVector3i local_7c;
  CVector3i local_70;
  CVector3i local_64;
  CVector3i local_58;
  CVector3f local_4c;
  CVector3i local_40;
  CDemonCube *local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  
  g_CubesTestedCount = g_CubesTestedCount + 1;
  if ((((((this_ptr->grid_bounds_min).x <= grid_x) && ((this_ptr->grid_bounds_min).y <= grid_y)) &&
       ((this_ptr->grid_bounds_min).z <= grid_z)) &&
      ((grid_x <= (this_ptr->grid_bounds_max).x && (grid_y <= (this_ptr->grid_bounds_max).y)))) &&
     (grid_z <= (this_ptr->grid_bounds_max).z)) {
    local_34 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0(this_ptr,grid_x,grid_y,grid_z);
    if ((local_34 != (CDemonCube *)0x0) && (local_34->voxel_buffer1 != (SVoxelGrid *)0x0)) {
      local_28 = (float)grid_x;
      local_18 = grid_y;
      local_14 = grid_z;
      local_20 = (float)grid_y;
      local_ac = local_28 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
      local_30 = (float)grid_z;
      local_a8 = local_20 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
      g_CubesWithVoxelsCount = g_CubesWithVoxelsCount + 1;
      local_a4 = local_30 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
      local_64.x = (int)ROUND(local_ac * 256.0f);
      local_64.y = (int)ROUND(local_a8 * 256.0f);
      local_64.z = (int)ROUND(local_a4 * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr1->vertex_buffer_ptr->projected_vertex,&local_64);
      local_14 = grid_x + 1;
      local_2c = (float)local_14;
      local_ac = local_2c * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
      local_a8 = local_20 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
      local_a4 = local_30 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
      local_7c.x = (int)ROUND(local_ac * 256.0f);
      local_7c.y = (int)ROUND(local_a8 * 256.0f);
      local_7c.z = (int)ROUND(local_a4 * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr1->vertex_buffer_ptr[1].projected_vertex,&local_7c);
      local_14 = grid_z + 1;
      local_ac = local_2c * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
      local_24 = (float)local_14;
      local_a8 = local_20 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
      local_a4 = local_24 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
      local_40.x = (int)ROUND(local_ac * 256.0f);
      local_40.y = (int)ROUND(local_a8 * 256.0f);
      local_40.z = (int)ROUND(local_a4 * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr1->vertex_buffer_ptr[2].projected_vertex,&local_40);
      local_ac = local_28 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
      local_a8 = local_20 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
      local_a4 = local_24 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
      local_58.x = (int)ROUND(local_ac * 256.0f);
      local_58.y = (int)ROUND(local_a8 * 256.0f);
      local_58.z = (int)ROUND(local_a4 * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr1->vertex_buffer_ptr[3].projected_vertex,&local_58);
      local_14 = grid_y + 1;
      local_ac = local_28 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
      local_1c = (float)local_14;
      local_a8 = local_1c * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
      local_a4 = local_30 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
      local_a0.x = (int)ROUND(local_ac * 256.0f);
      local_a0.y = (int)ROUND(local_a8 * 256.0f);
      local_a0.z = (int)ROUND(local_a4 * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr1->vertex_buffer_ptr[4].projected_vertex,&local_a0);
      local_ac = local_2c * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
      local_a8 = local_1c * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
      local_a4 = local_30 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
      local_94.x = (int)ROUND(local_ac * 256.0f);
      local_94.y = (int)ROUND(local_a8 * 256.0f);
      local_94.z = (int)ROUND(local_a4 * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr1->vertex_buffer_ptr[5].projected_vertex,&local_94);
      local_ac = local_2c * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
      local_a8 = local_1c * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
      local_a4 = local_24 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
      local_70.x = (int)ROUND(local_ac * 256.0f);
      local_70.y = (int)ROUND(local_a8 * 256.0f);
      local_70.z = (int)ROUND(local_a4 * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr1->vertex_buffer_ptr[6].projected_vertex,&local_70);
      local_ac = local_28 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
      local_a8 = local_1c * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
      local_a4 = local_24 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
      local_88.x = (int)ROUND(local_ac * 256.0f);
      local_88.y = (int)ROUND(local_a8 * 256.0f);
      local_88.z = (int)ROUND(local_a4 * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr1->vertex_buffer_ptr[7].projected_vertex,&local_88);
      uVar1 = g_RenderVertexBuffer[0].projected_vertex.screen_x &
              g_RenderVertexBuffer[1].projected_vertex.screen_x &
              g_RenderVertexBuffer[2].projected_vertex.screen_x &
              g_RenderVertexBuffer[3].projected_vertex.screen_x &
              g_RenderVertexBuffer[4].projected_vertex.screen_x &
              g_RenderVertexBuffer[5].projected_vertex.screen_x &
              g_RenderVertexBuffer[6].projected_vertex.screen_x &
              g_RenderVertexBuffer[7].projected_vertex.screen_x;
      if (((uVar1 & 0x80000000) == 0) || ((char)uVar1 == '\0')) {
        g_CubesVisibleCount = g_CubesVisibleCount + 1;
        if (1 < render_mode) {
          local_14 = grid_z;
          SStack_d4.base.count = 4;
          SStack_d4.surface_normal.A = 0;
          SStack_d4.surface_normal.B = 0;
          SStack_d4.surface_normal.C = -1;
          local_bc = 0;
          local_b4 = 5;
          local_b0 = 4;
          SStack_d4.surface_normal.D =
               (int)ROUND(ROUND(((float)grid_z * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                                (float)-256));
          local_b8 = 1;
          iVar2 = engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                            (g_CDemonRendererPtr1,&SStack_d4);
          if (iVar2 == 0) {
            local_14 = grid_z + 1;
            SStack_d4.surface_normal.C = 1;
            local_bc = 2;
            local_b8 = 3;
            local_b4 = 7;
            local_b0 = 6;
            SStack_d4.surface_normal.D =
                 (int)ROUND(ROUND(((float)local_14 * (this_ptr->cell_size).z +
                                  (this_ptr->bbox_min).z) * (float)256));
            SStack_d4.surface_normal.A = iVar2;
            SStack_d4.surface_normal.B = iVar2;
            iVar2 = engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                              (g_CDemonRendererPtr1,&SStack_d4);
            if (iVar2 == 0) {
              local_14 = grid_x;
              SStack_d4.surface_normal.A = -1;
              local_b8 = 4;
              local_b4 = 7;
              local_b0 = 3;
              SStack_d4.surface_normal.D =
                   (int)ROUND(ROUND(((float)grid_x * (this_ptr->cell_size).x +
                                    (this_ptr->bbox_min).x) * (float)-256));
              SStack_d4.surface_normal.B = iVar2;
              SStack_d4.surface_normal.C = iVar2;
              local_bc = iVar2;
              iVar2 = engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                                (g_CDemonRendererPtr1,&SStack_d4);
              if (iVar2 == 0) {
                local_14 = grid_x + 1;
                SStack_d4.surface_normal.A = 1;
                local_bc = 1;
                local_b4 = 6;
                local_b0 = 5;
                SStack_d4.surface_normal.D =
                     (int)ROUND(ROUND(((float)local_14 * (this_ptr->cell_size).x +
                                      (this_ptr->bbox_min).x) * (float)256));
                local_b8 = 2;
                SStack_d4.surface_normal.B = iVar2;
                SStack_d4.surface_normal.C = iVar2;
                iVar2 = engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                                  (g_CDemonRendererPtr1,&SStack_d4);
                if (iVar2 == 0) {
                  SStack_d4.surface_normal.B = 1;
                  local_14 = grid_y + 1;
                  SStack_d4.surface_normal.C = 0;
                  local_bc = 4;
                  local_b8 = 5;
                  local_b4 = 6;
                  local_b0 = 7;
                  SStack_d4.surface_normal.D =
                       (int)ROUND(ROUND(((float)local_14 * (this_ptr->cell_size).y +
                                        (this_ptr->bbox_min).y) * (float)256));
                  SStack_d4.surface_normal.A = iVar2;
                  iVar2 = engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                                    (g_CDemonRendererPtr1,&SStack_d4);
                  if (iVar2 == 0) {
                    SStack_d4.surface_normal.B = -1;
                    local_14 = grid_y;
                    SStack_d4.surface_normal.C = 0;
                    local_bc = 0;
                    local_b4 = 2;
                    local_b0 = 3;
                    SStack_d4.surface_normal.D =
                         (int)ROUND(ROUND(((float)grid_y * (this_ptr->cell_size).y +
                                          (this_ptr->bbox_min).y) * (float)-256));
                    local_b8 = 1;
                    SStack_d4.surface_normal.A = iVar2;
                    iVar2 = engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                                      (g_CDemonRendererPtr1,&SStack_d4);
                    if (iVar2 == 0) {
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        local_4c.x = (float)grid_x * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
        local_14 = grid_z;
        local_4c.y = (float)grid_y * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
        g_CubesRenderedCount = g_CubesRenderedCount + 1;
        local_4c.z = (float)grid_z * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr2,&local_4c);
        core_dcube_cpp_CDemonCube_rotateVertices_FUN_00457650(local_34,this_ptr->rendering_mode);
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr2,&g_ZeroVector.f);
        iVar2 = g_PVSDrawnCubeCount;
        g_PVSCubePointers[g_PVSDrawnCubeCount] = local_34;
        if (g_PVSCubePositions + iVar2 != &local_4c) {
          g_PVSCubePositions[iVar2].x = local_4c.x;
          g_PVSCubePositions[iVar2].y = local_4c.y;
          g_PVSCubePositions[iVar2].z = local_4c.z;
        }
        g_PVSDrawnCubeCount = g_PVSDrawnCubeCount + 1;
        if (19999 < g_PVSDrawnCubeCount) {
          g_CurrentFilename = "..\\core\\dtrace.cpp";
          g_CurrentLineNumber = 0x792;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Too many drawn cubes.  Need to recompile.");
          return;
        }
      }
    }
  }
  return;
}
