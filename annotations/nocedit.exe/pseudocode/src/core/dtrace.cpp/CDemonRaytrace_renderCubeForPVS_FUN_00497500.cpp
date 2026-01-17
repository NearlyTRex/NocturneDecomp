// Name: core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
// Address: 00497500
// Address Range: [[00497500, 00497e46]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, int render_mode)

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
          (CDemonRaytrace *this_ptr,int grid_x,int grid_y,int grid_z,int render_mode)

{
  uint uVar1;
  int iVar2;
  CDemonRenderer *this_ptr_00;
  CDemonRenderer *this_ptr_01;
  CDemonRenderer *this_ptr_02;
  CDemonRenderer *this_ptr_03;
  CDemonRenderer *this_ptr_04;
  CDemonRenderer *this_ptr_05;
  int unaff_EBX;
  float unaff_ESI;
  int unaff_EDI;
  SMRGLHeaderPrimitive *pSVar3;
  CVector3i local_a0;
  CVector3i local_94;
  CVector3i local_88;
  CVector3i local_7c;
  CVector3i local_70;
  CVector3f local_64;
  CVector3i local_58;
  CDemonCube *local_4c;
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
      local_30 = (float)grid_z;
      g_CubesWithVoxelsCount = g_CubesWithVoxelsCount + 1;
      local_64.x = (float)(int)ROUND((local_28 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                                     256.0f);
      local_64.y = (float)(int)ROUND((local_20 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                                     256.0f);
      local_64.z = (float)(int)ROUND((local_30 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                                     256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)&local_64);
      local_14 = grid_x + 1;
      local_2c = (float)local_14;
      local_7c.x = (int)ROUND((local_2c * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                              256.0f);
      local_7c.y = (int)ROUND((local_20 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                              256.0f);
      local_7c.z = (int)ROUND((local_30 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                              256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_7c);
      local_14 = grid_z + 1;
      local_24 = (float)local_14;
      local_40.x = (int)ROUND((local_2c * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                              256.0f);
      local_40.y = (int)ROUND((local_20 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                              256.0f);
      local_40.z = (int)ROUND((local_24 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                              256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_40);
      local_58.x = (int)ROUND((local_28 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                              256.0f);
      local_58.y = (int)ROUND((local_20 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                              256.0f);
      local_58.z = (int)ROUND((local_24 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                              256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_58);
      local_14 = grid_y + 1;
      local_1c = (float)local_14;
      local_a0.x = (int)ROUND((local_28 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                              256.0f);
      local_a0.y = (int)ROUND((local_1c * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                              256.0f);
      local_a0.z = (int)ROUND((local_30 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                              256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[4].projected_vertex,&local_a0);
      local_94.x = (int)ROUND((local_2c * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                              256.0f);
      local_94.y = (int)ROUND((local_1c * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                              256.0f);
      local_94.z = (int)ROUND((local_30 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                              256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[5].projected_vertex,&local_94);
      local_70.x = (int)ROUND((local_2c * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                              256.0f);
      local_70.y = (int)ROUND((local_1c * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                              256.0f);
      local_70.z = (int)ROUND((local_24 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                              256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[6].projected_vertex,&local_70);
      local_88.x = (int)ROUND((local_28 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                              256.0f);
      local_88.y = (int)ROUND((local_1c * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                              256.0f);
      local_88.z = (int)ROUND((local_24 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                              256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[7].projected_vertex,&local_88);
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
          pSVar3 = (SMRGLHeaderPrimitive *)0x497be4;
          crt_math_c_round_FUN_005fe6b0
                    ((double)(((float)grid_z * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                             (float)-256));
          iVar2 = engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                            (this_ptr_00,pSVar3);
          if (iVar2 == 0) {
            local_18 = grid_z + 1;
            pSVar3 = (SMRGLHeaderPrimitive *)0x497c58;
            crt_math_c_round_FUN_005fe6b0
                      ((double)(((float)local_18 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z)
                               * (float)256));
            iVar2 = engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                              (this_ptr_01,pSVar3);
            if (iVar2 == 0) {
              local_1c = (float)grid_x;
              pSVar3 = (SMRGLHeaderPrimitive *)0x497cc5;
              crt_math_c_round_FUN_005fe6b0
                        ((double)(((float)grid_x * (this_ptr->cell_size).x + (this_ptr->bbox_min).x)
                                 * (float)-256));
              iVar2 = engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                                (this_ptr_02,pSVar3);
              if (iVar2 == 0) {
                local_20 = (float)(grid_x + 1);
                pSVar3 = (SMRGLHeaderPrimitive *)0x497d31;
                crt_math_c_round_FUN_005fe6b0
                          ((double)(((float)(int)local_20 * (this_ptr->cell_size).x +
                                    (this_ptr->bbox_min).x) * (float)256));
                iVar2 = engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                                  (this_ptr_03,pSVar3);
                if (iVar2 == 0) {
                  local_24 = (float)(unaff_EBX + 1);
                  pSVar3 = (SMRGLHeaderPrimitive *)0x497db0;
                  crt_math_c_round_FUN_005fe6b0
                            ((double)(((float)(int)local_24 * (this_ptr->cell_size).y +
                                      (this_ptr->bbox_min).y) * (float)256));
                  iVar2 = engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                                    (this_ptr_04,pSVar3);
                  if (iVar2 == 0) {
                    pSVar3 = (SMRGLHeaderPrimitive *)0x497e23;
                    local_28 = unaff_ESI;
                    crt_math_c_round_FUN_005fe6b0
                              ((double)(((float)(int)unaff_ESI * (this_ptr->cell_size).y +
                                        (this_ptr->bbox_min).y) * (float)-256));
                    iVar2 = engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                                      (this_ptr_05,pSVar3);
                    if (iVar2 == 0) {
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        local_64.x = (float)grid_x * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
        local_2c = (float)grid_z;
        local_64.y = (float)unaff_EDI * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
        g_CubesRenderedCount = g_CubesRenderedCount + 1;
        local_64.z = (float)grid_z * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr,&local_64);
        core_dcube_cpp_CDemonCube_rotateVertices_FUN_00457650(local_4c,this_ptr->rendering_mode);
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr,&g_ZeroVector);
        iVar2 = g_PVSDrawnCubeCount;
        g_PVSCubePointers[g_PVSDrawnCubeCount] = local_4c;
        if (g_PVSCubePositions + iVar2 != &local_64) {
          g_PVSCubePositions[iVar2].x = local_64.x;
          g_PVSCubePositions[iVar2].y = local_64.y;
          g_PVSCubePositions[iVar2].z = local_64.z;
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
