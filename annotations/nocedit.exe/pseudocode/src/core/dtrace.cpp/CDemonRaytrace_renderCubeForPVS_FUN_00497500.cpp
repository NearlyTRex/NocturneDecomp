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
  float fVar1;
  CDemonRenderer *pCVar2;
  uint uVar3;
  int iVar4;
  CDemonCube *unaff_EBX;
  BADSPACEBASE *in_ESP;
  int in_stack_00000020;
  int in_stack_00000030;
  int in_stack_00000038;
  SMRGLHeaderPrimitive *pSVar5;
  CVector3i local_8c;
  byte local_7c [12];
  int local_70;
  int local_6c;
  byte local_68 [12];
  int local_5c;
  int local_58;
  CVector3i local_54;
  CVector3i local_48;
  CVector3i local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  g_CubesTestedCount = g_CubesTestedCount + 1;
  if ((((((this_ptr->grid_bounds_min).x <= grid_x) && ((this_ptr->grid_bounds_min).y <= grid_y)) &&
       ((this_ptr->grid_bounds_min).z <= grid_z)) &&
      ((grid_x <= (this_ptr->grid_bounds_max).x && (grid_y <= (this_ptr->grid_bounds_max).y)))) &&
     (grid_z <= (this_ptr->grid_bounds_max).z)) {
    local_34.y = (int)core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                                (this_ptr,grid_x,grid_y,grid_z);
    if (((CDemonCube *)local_34.y != (CDemonCube *)0x0) &&
       (((CDemonCube *)local_34.y)->voxel_buffer1 != (SVoxelGrid *)0x0)) {
      local_28.y = (float)grid_x;
      local_1c.z = (float)grid_z;
      local_1c.x = (float)grid_z;
      local_34.z = (int)(float)grid_z;
      g_CubesWithVoxelsCount = g_CubesWithVoxelsCount + 1;
      local_68._8_4_ =
           (uint)
           ROUND((local_28.y * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                 256f);
      local_5c = (int)ROUND((local_1c.x * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                            256f);
      local_58 = (int)ROUND(((float)local_34.z * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                            256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,
                 (CVector3i *)(local_68 + 8));
      local_28.y = (float)(grid_x + 1);
      local_7c._8_4_ =
           (uint)
           ROUND((local_28.y * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                 256f);
      local_70 = (int)ROUND((local_1c.y * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                            256f);
      local_6c = (int)ROUND((local_28.x * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                            256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
                 (CVector3i *)(local_7c + 8));
      local_1c.y = (float)(grid_z + 1);
      local_34.x = (int)ROUND((local_28.z * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                              256f);
      local_34.y = (int)ROUND((local_1c.z * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                              256f);
      local_34.z = (int)ROUND((local_1c.y * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                              256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_34);
      local_48.x = (int)ROUND((local_1c.y * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                              256f);
      local_48.y = (int)ROUND(((float)grid_z * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                              256f);
      local_48.z = (int)ROUND((local_1c.z * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                              256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_48);
      fVar1 = (float)(in_stack_00000020 + 1);
      local_8c.x = (int)ROUND((local_1c.z * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                              256f);
      local_8c.y = (int)ROUND((fVar1 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                              256f);
      local_8c.z = (int)ROUND((local_1c.x * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                              256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[4].projected_vertex,&local_8c);
      local_8c.x = (int)(local_1c.y * (this_ptr->cell_size).z + (this_ptr->bbox_min).z);
      local_7c._0_4_ =
           (uint)
           ROUND((local_1c.z * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                 256f);
      local_7c._4_4_ =
           (uint)
           ROUND(((float)unaff_EBX * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                 256f);
      local_7c._8_4_ = (uint)ROUND((float)local_8c.x * 256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[5].projected_vertex,(CVector3i *)local_7c);
      local_8c.x = (int)((float)(in_stack_00000020 + 1) * (this_ptr->cell_size).y +
                        (this_ptr->bbox_min).y);
      local_8c.y = (int)(fVar1 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z);
      local_54.x = (int)ROUND(((float)grid_z * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                              256f);
      local_54.y = (int)ROUND((float)local_8c.x * 256f);
      local_54.z = (int)ROUND((float)local_8c.y * 256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[6].projected_vertex,&local_54);
      local_8c.x = (int)(fVar1 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x);
      local_8c.y = (int)((float)this_ptr * (this_ptr->cell_size).y + (this_ptr->bbox_min).y);
      local_8c.z = (int)((float)unaff_EBX * (this_ptr->cell_size).z + (this_ptr->bbox_min).z);
      local_68._0_4_ = (uint)ROUND((float)local_8c.x * 256f);
      local_68._4_4_ = (uint)ROUND((float)local_8c.y * 256f);
      local_68._8_4_ = (uint)ROUND((float)local_8c.z * 256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[7].projected_vertex,(CVector3i *)local_68);
      pCVar2 = g_CDemonRendererPtr;
      uVar3 = g_RenderVertexBuffer[0].projected_vertex.screen_x &
              g_RenderVertexBuffer[1].projected_vertex.screen_x &
              g_RenderVertexBuffer[2].projected_vertex.screen_x &
              g_RenderVertexBuffer[3].projected_vertex.screen_x &
              g_RenderVertexBuffer[4].projected_vertex.screen_x &
              g_RenderVertexBuffer[5].projected_vertex.screen_x &
              g_RenderVertexBuffer[6].projected_vertex.screen_x &
              g_RenderVertexBuffer[7].projected_vertex.screen_x;
      if (((uVar3 & 0x80000000) == 0) || ((char)uVar3 == '\0')) {
        g_CubesVisibleCount = g_CubesVisibleCount + 1;
        if (1 < in_stack_00000038) {
          local_8c.x = 4;
          pSVar5 = (SMRGLHeaderPrimitive *)0x497be4;
          crt_math_c_round_FUN_005fe6b0
                    ((double)(((float)grid_z * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                             (float)-256));
          iVar4 = engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50(pCVar2,pSVar5);
          pCVar2 = g_CDemonRendererPtr;
          if (iVar4 == 0) {
            local_8c.x = 6;
            pSVar5 = (SMRGLHeaderPrimitive *)0x497c58;
            crt_math_c_round_FUN_005fe6b0
                      ((double)(((float)(grid_z + 1) * (this_ptr->cell_size).z +
                                (this_ptr->bbox_min).z) * (float)256));
            iVar4 = engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                              (pCVar2,pSVar5);
            pCVar2 = g_CDemonRendererPtr;
            if (iVar4 == 0) {
              local_8c.x = 3;
              pSVar5 = (SMRGLHeaderPrimitive *)0x497cc5;
              crt_math_c_round_FUN_005fe6b0
                        ((double)(((float)grid_x * (this_ptr->cell_size).x + (this_ptr->bbox_min).x)
                                 * (float)-256));
              iVar4 = engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                                (pCVar2,pSVar5);
              pCVar2 = g_CDemonRendererPtr;
              if (iVar4 == 0) {
                local_8c.x = 5;
                pSVar5 = (SMRGLHeaderPrimitive *)0x497d31;
                crt_math_c_round_FUN_005fe6b0
                          ((double)(((float)(grid_x + 1) * (this_ptr->cell_size).x +
                                    (this_ptr->bbox_min).x) * (float)256));
                iVar4 = engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                                  (pCVar2,pSVar5);
                pCVar2 = g_CDemonRendererPtr;
                if (iVar4 == 0) {
                  local_8c.x = 7;
                  pSVar5 = (SMRGLHeaderPrimitive *)0x497db0;
                  crt_math_c_round_FUN_005fe6b0
                            ((double)(((float)(in_stack_00000030 + 1) * (this_ptr->cell_size).y +
                                      (this_ptr->bbox_min).y) * (float)256));
                  iVar4 = engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                                    (pCVar2,pSVar5);
                  pCVar2 = g_CDemonRendererPtr;
                  if (iVar4 == 0) {
                    local_8c.x = 3;
                    pSVar5 = (SMRGLHeaderPrimitive *)0x497e23;
                    crt_math_c_round_FUN_005fe6b0
                              ((double)(((float)in_stack_00000030 * (this_ptr->cell_size).y +
                                        (this_ptr->bbox_min).y) * (float)-256));
                    iVar4 = engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                                      (pCVar2,pSVar5);
                    if (iVar4 == 0) {
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        local_28.x = (float)grid_x * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
        local_28.y = (float)in_stack_00000030 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
        g_CubesRenderedCount = g_CubesRenderedCount + 1;
        local_28.z = (float)grid_z * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr,&local_28);
        core_dcube_cpp_CDemonCube_rotateVertices_FUN_00457650
                  ((CDemonCube *)(grid_x + 1),this_ptr->rendering_mode);
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr,&g_ZeroVector);
        iVar4 = g_PVSDrawnCubeCount;
        g_PVSCubePointers[g_PVSDrawnCubeCount] = unaff_EBX;
        if (g_PVSCubePositions + iVar4 != &local_1c) {
          g_PVSCubePositions[iVar4].x = local_1c.x;
          g_PVSCubePositions[iVar4].y = local_1c.y;
          g_PVSCubePositions[iVar4].z = local_1c.z;
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
