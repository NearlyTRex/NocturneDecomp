// Name: core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
// Address: 00497500
// MANUAL RECONSTRUCTION
// Address Range: [[00497500, 00497e46]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500(CDemonRaytrace *this_ptr,int grid_x,int grid_y,int grid_z,int render_mode)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500(CDemonRaytrace *this_ptr,int grid_x,int grid_y,int grid_z,int render_mode)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CDemonCube *this_ptr_00;
  uint uVar1;
  int iVar2;
  UIntegerFloat UVar6;
  int iVar7;
  SMRGLPrimitiveQuadIndex SStack_d4;
  CVector3i local_a0;
  CVector3i local_94;
  CVector3i local_88;
  CVector3i local_7c;
  CVector3i local_70;
  CVector3i local_64;
  CVector3i local_58;
  CVector3f local_4c;
  CVector3i local_40;
  
  g_CubesTestedCount = g_CubesTestedCount + 1;
  if ((((((this_ptr->grid_bounds_min).x <= grid_x) && ((this_ptr->grid_bounds_min).y <= grid_y)) &&
       ((this_ptr->grid_bounds_min).z <= grid_z)) &&
      ((grid_x <= (this_ptr->grid_bounds_max).x && (grid_y <= (this_ptr->grid_bounds_max).y)))) &&
     (grid_z <= (this_ptr->grid_bounds_max).z)) {
    this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                            (this_ptr,grid_x,grid_y,grid_z);
    if ((this_ptr_00 != (CDemonCube *)0x0) && (this_ptr_00->voxel_buffer1 != (SVoxelGrid *)0x0)) {
      fVar1 = (float)grid_x;
      fVar2 = (float)grid_y;
      fVar3 = (float)grid_z;
      g_CubesWithVoxelsCount = g_CubesWithVoxelsCount + 1;
      local_64.x = (int)ROUND((fVar1 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                              256.0f);
      local_64.y = (int)ROUND((fVar2 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                              256.0f);
      local_64.z = (int)ROUND((fVar3 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                              256.0f);
      engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr1->vertex_buffer_ptr->projected_vertex,&local_64);
      fVar4 = (float)(grid_x + 1);
      local_7c.x = (int)ROUND((fVar4 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                              256.0f);
      local_7c.y = (int)ROUND((fVar2 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                              256.0f);
      local_7c.z = (int)ROUND((fVar3 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                              256.0f);
      engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr1->vertex_buffer_ptr[1].projected_vertex,&local_7c);
      fVar5 = (float)(grid_z + 1);
      local_40.x = (int)ROUND((fVar4 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                              256.0f);
      local_40.y = (int)ROUND((fVar2 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                              256.0f);
      local_40.z = (int)ROUND((fVar5 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                              256.0f);
      engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr1->vertex_buffer_ptr[2].projected_vertex,&local_40);
      local_58.x = (int)ROUND((fVar1 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                              256.0f);
      local_58.y = (int)ROUND((fVar2 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                              256.0f);
      local_58.z = (int)ROUND((fVar5 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                              256.0f);
      engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr1->vertex_buffer_ptr[3].projected_vertex,&local_58);
      fVar2 = (float)(grid_y + 1);
      local_a0.x = (int)ROUND((fVar1 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                              256.0f);
      local_a0.y = (int)ROUND((fVar2 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                              256.0f);
      local_a0.z = (int)ROUND((fVar3 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                              256.0f);
      engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr1->vertex_buffer_ptr[4].projected_vertex,&local_a0);
      local_94.x = (int)ROUND((fVar4 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                              256.0f);
      local_94.y = (int)ROUND((fVar2 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                              256.0f);
      local_94.z = (int)ROUND((fVar3 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                              256.0f);
      engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr1->vertex_buffer_ptr[5].projected_vertex,&local_94);
      local_70.x = (int)ROUND((fVar4 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                              256.0f);
      local_70.y = (int)ROUND((fVar2 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                              256.0f);
      local_70.z = (int)ROUND((fVar5 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                              256.0f);
      engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr1->vertex_buffer_ptr[6].projected_vertex,&local_70);
      local_88.x = (int)ROUND((fVar1 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                              256.0f);
      local_88.y = (int)ROUND((fVar2 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                              256.0f);
      local_88.z = (int)ROUND((fVar5 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                              256.0f);
      engine_special_cpp_transformAndProjectPoint_FUN_005b575c
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
          SStack_d4.base.base.count = 4;
          SStack_d4.base.surface_normal.A.i = 0;
          SStack_d4.base.surface_normal.B.i = 0;
          SStack_d4.base.surface_normal.C.i = -1;
          SStack_d4.vertices[0] = 0;
          SStack_d4.vertices[2] = 5;
          SStack_d4.vertices[3] = 4;
          SStack_d4.base.surface_normal.D.i =
               (int)ROUND(ROUND(((float)grid_z * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                                (float)-256));
          SStack_d4.vertices[1] = 1;
          iVar2 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0048ab50
                            (g_CDemonRendererPtr1,&SStack_d4.base);
          if (iVar2 == 0) {
            SStack_d4.base.surface_normal.C.i = 1;
            SStack_d4.vertices[0] = 2;
            SStack_d4.vertices[1] = 3;
            SStack_d4.vertices[2] = 7;
            SStack_d4.vertices[3] = 6;
            SStack_d4.base.surface_normal.D.i =
                 (int)ROUND(ROUND(((float)(grid_z + 1) * (this_ptr->cell_size).z +
                                  (this_ptr->bbox_min).z) * (float)256));
            SStack_d4.base.surface_normal.A.i = iVar2;
            SStack_d4.base.surface_normal.B.i = iVar2;
            UVar6.i = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0048ab50
                                (g_CDemonRendererPtr1,&SStack_d4.base);
            if (UVar6.i == 0) {
              SStack_d4.base.surface_normal.A.i = -1;
              SStack_d4.vertices[1] = 4;
              SStack_d4.vertices[2] = 7;
              SStack_d4.vertices[3] = 3;
              SStack_d4.base.surface_normal.D.i =
                   (int)ROUND(ROUND(((float)grid_x * (this_ptr->cell_size).x +
                                    (this_ptr->bbox_min).x) * (float)-256));
              SStack_d4.base.surface_normal.B.i = UVar6.i;
              SStack_d4.base.surface_normal.C.i = UVar6.i;
              SStack_d4.vertices[0] = UVar6.i;
              UVar6.i = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0048ab50
                                  (g_CDemonRendererPtr1,&SStack_d4.base);
              if (UVar6.i == 0) {
                SStack_d4.base.surface_normal.A.i = 1;
                SStack_d4.vertices[0] = 1;
                SStack_d4.vertices[2] = 6;
                SStack_d4.vertices[3] = 5;
                SStack_d4.base.surface_normal.D.i =
                     (int)ROUND(ROUND(((float)(grid_x + 1) * (this_ptr->cell_size).x +
                                      (this_ptr->bbox_min).x) * (float)256));
                SStack_d4.vertices[1] = 2;
                SStack_d4.base.surface_normal.B.i = UVar6.i;
                SStack_d4.base.surface_normal.C.i = UVar6.i;
                UVar6.i = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0048ab50
                                    (g_CDemonRendererPtr1,&SStack_d4.base);
                if (UVar6.i == 0) {
                  SStack_d4.base.surface_normal.B.i = 1;
                  SStack_d4.base.surface_normal.C.i = 0;
                  SStack_d4.vertices[0] = 4;
                  SStack_d4.vertices[1] = 5;
                  SStack_d4.vertices[2] = 6;
                  SStack_d4.vertices[3] = 7;
                  SStack_d4.base.surface_normal.D.i =
                       (int)ROUND(ROUND(((float)(grid_y + 1) * (this_ptr->cell_size).y +
                                        (this_ptr->bbox_min).y) * (float)256));
                  SStack_d4.base.surface_normal.A.i = UVar6.i;
                  UVar6.i = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0048ab50
                                      (g_CDemonRendererPtr1,&SStack_d4.base);
                  if (UVar6.i == 0) {
                    SStack_d4.base.surface_normal.B.i = -1;
                    SStack_d4.base.surface_normal.C.i = 0;
                    SStack_d4.vertices[0] = 0;
                    SStack_d4.vertices[2] = 2;
                    SStack_d4.vertices[3] = 3;
                    SStack_d4.base.surface_normal.D.i =
                         (int)ROUND(ROUND(((float)grid_y * (this_ptr->cell_size).y +
                                          (this_ptr->bbox_min).y) * (float)-256));
                    SStack_d4.vertices[1] = 1;
                    SStack_d4.base.surface_normal.A.i = UVar6.i;
                    iVar7 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0048ab50
                                      (g_CDemonRendererPtr1,&SStack_d4.base);
                    if (iVar7 == 0) {
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        local_4c.x = (float)grid_x * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
        local_4c.y = (float)grid_y * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
        g_CubesRenderedCount = g_CubesRenderedCount + 1;
        local_4c.z = (float)grid_z * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr2,&local_4c);
        core_dcube_cpp_CDemonCube_rotateVertices_FUN_00457650(this_ptr_00,this_ptr->rendering_mode);
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr2,&g_ZeroVector.f);
        iVar7 = g_PVSDrawnCubeCount;
        g_PVSCubePointers[g_PVSDrawnCubeCount] = this_ptr_00;
        if (g_PVSCubePositions + iVar7 != &local_4c) {
          g_PVSCubePositions[iVar7] = local_4c;
        }
        g_PVSDrawnCubeCount = g_PVSDrawnCubeCount + 1;
        if (19999 < g_PVSDrawnCubeCount) {
          g_CurrentFilename = "..\\core\\dtrace.cpp";
          g_CurrentLineNumber = 1938;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Too many drawn cubes.  Need to recompile.");
          return;
        }
      }
    }
  }
  return;
}
