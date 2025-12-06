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
  int iVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  SMRGLHeaderPrimitive *pSVar6;
  int iVar7;
  CDemonRenderer *this_ptr_00;
  CDemonRenderer *this_ptr_01;
  CDemonRenderer *this_ptr_02;
  CDemonRenderer *this_ptr_03;
  CDemonRenderer *this_ptr_04;
  CDemonRenderer *this_ptr_05;
  float unaff_EBX;
  BADSPACEBASE *in_ESP;
  float10 fVar8;
  float in_stack_00000018;
  float in_stack_0000001c;
  int in_stack_00000020;
  CDemonCube *in_stack_00000024;
  int in_stack_00000028;
  CDemonCube *in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000038;
  int iStack00000040;
  int in_stack_00000050;
  int in_stack_00000058;
  int in_stack_00000060;
  SMRGLHeaderPrimitive *in_stack_ffffff50;
  SMRGLHeaderPrimitive *pSVar9;
  SMRGLHeaderPrimitive *prim;
  CVector3i local_74;
  byte local_68 [12];
  int local_5c;
  int local_58;
  CVector3i local_54;
  CVector3i local_48;
  CVector3i local_34;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar3 = grid_z;
  iVar2 = grid_x;
  g_CubesTestedCount = g_CubesTestedCount + 1;
  if ((((((this_ptr->grid_bounds_min).x <= grid_x) && ((this_ptr->grid_bounds_min).y <= grid_y)) &&
       ((this_ptr->grid_bounds_min).z <= grid_z)) &&
      ((grid_x <= (this_ptr->grid_bounds_max).x && (grid_y <= (this_ptr->grid_bounds_max).y)))) &&
     (grid_z <= (this_ptr->grid_bounds_max).z)) {
    local_34.y = (int)core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                                (this_ptr,grid_x,grid_y,grid_z);
    if (((CDemonCube *)local_34.y != (CDemonCube *)0x0) &&
       (((CDemonCube *)local_34.y)->voxel_buffer1 != (SVoxelGrid *)0x0)) {
      local_24 = (float)iVar2;
      local_14 = (float)grid_z;
      local_1c = (float)grid_z;
      local_34.z = (int)(float)iVar3;
      g_CubesWithVoxelsCount = g_CubesWithVoxelsCount + 1;
      local_68._8_4_ =
           (uint)
           ROUND((local_24 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                 256f);
      local_5c = (int)ROUND((local_1c * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                            256f);
      local_58 = (int)ROUND(((float)local_34.z * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                            256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,
                 (CVector3i *)(local_68 + 8));
      local_24 = (float)(iVar2 + 1);
      local_74.x = (int)ROUND((local_24 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                              256f);
      local_74.y = (int)ROUND((local_18 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                              256f);
      local_74.z = (int)ROUND((local_28 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                              256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_74);
      local_18 = (float)(iVar3 + 1);
      local_34.x = (int)ROUND((local_20 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                              256f);
      local_34.y = (int)ROUND((local_14 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                              256f);
      local_34.z = (int)ROUND((local_18 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                              256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_34);
      local_48.x = (int)ROUND((local_18 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                              256f);
      local_48.y = (int)ROUND(((float)iVar3 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                              256f);
      local_48.z = (int)ROUND((local_14 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                              256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_48);
      fVar4 = (float)(in_stack_00000020 + 1);
      fVar1 = (float)(int)fVar4;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[4].projected_vertex,
                 (CVector3i *)&stack0xffffff74);
      local_74.x = (int)ROUND((local_18 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                              256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[5].projected_vertex,
                 (CVector3i *)&stack0xffffff84);
      local_54.x = (int)ROUND(((float)iVar3 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                              256f);
      local_54.y = (int)ROUND((fVar4 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                              256f);
      local_54.z = (int)ROUND((fVar1 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                              256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[6].projected_vertex,&local_54);
      local_68._0_4_ =
           (uint)
           ROUND((fVar1 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                 256f);
      local_68._4_4_ =
           (uint)
           ROUND(((float)this_ptr * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                 256f);
      local_68._8_4_ =
           (uint)
           ROUND((unaff_EBX * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                 256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[7].projected_vertex,(CVector3i *)local_68);
      uVar5 = g_RenderVertexBuffer[0].projected_vertex.screen_x &
              g_RenderVertexBuffer[1].projected_vertex.screen_x &
              g_RenderVertexBuffer[2].projected_vertex.screen_x &
              g_RenderVertexBuffer[3].projected_vertex.screen_x &
              g_RenderVertexBuffer[4].projected_vertex.screen_x &
              g_RenderVertexBuffer[5].projected_vertex.screen_x &
              g_RenderVertexBuffer[6].projected_vertex.screen_x &
              g_RenderVertexBuffer[7].projected_vertex.screen_x;
      if (((uVar5 & 0x80000000) == 0) || ((char)uVar5 == '\0')) {
        g_CubesVisibleCount = g_CubesVisibleCount + 1;
        if (1 < in_stack_00000038) {
          pSVar9 = (SMRGLHeaderPrimitive *)0x0;
          grid_z = iVar3;
          crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(0xffffffff,&stack0xffffff50));
          pSVar6 = (SMRGLHeaderPrimitive *)
                   engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                             (this_ptr_00,in_stack_ffffff50);
          if (pSVar6 == (SMRGLHeaderPrimitive *)0x0) {
            in_stack_00000018 = (float)(iVar3 + 1);
            crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(6,&stack0xffffff58));
            iVar7 = engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                              (this_ptr_01,pSVar9);
            if (iVar7 == 0) {
              in_stack_00000020 = iVar2;
              pSVar9 = (SMRGLHeaderPrimitive *)0xffffffff;
              crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(3,&stack0xffffff60));
              iVar7 = engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                                (this_ptr_02,pSVar6);
              if (iVar7 == 0) {
                in_stack_00000028 = iVar2 + 1;
                prim = (SMRGLHeaderPrimitive *)&DAT_00000001;
                local_74.x = 5;
                crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(5,&stack0xffffff68));
                pSVar6 = (SMRGLHeaderPrimitive *)
                         engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                                   (this_ptr_03,pSVar9);
                if (pSVar6 == (SMRGLHeaderPrimitive *)0x0) {
                  in_stack_00000030 = in_stack_00000050 + 1;
                  local_74.x = 5;
                  local_74.y = 6;
                  local_74.z = 7;
                  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(7,&stack0xffffff70));
                  iVar7 = engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                                    (this_ptr_04,prim);
                  if (iVar7 == 0) {
                    in_stack_00000038 = in_stack_00000058;
                    fVar8 = ((float10)in_stack_00000058 * (float10)(this_ptr->cell_size).y +
                            (float10)(this_ptr->bbox_min).y) * (float10)-256;
                    local_74.y = 0;
                    local_68._0_4_ = 2;
                    local_68._4_4_ = 3;
                    crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(3,&stack0xffffff78));
                    local_74.y = (int)ROUND(fVar8);
                    local_68._0_4_ = 1;
                    iVar7 = engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                                      (this_ptr_05,pSVar6);
                    if (iVar7 == 0) {
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        grid_x = (int)((float)iVar2 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x);
        iStack00000040 = iVar3;
        grid_y = (int)((float)in_stack_00000060 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y);
        g_CubesRenderedCount = g_CubesRenderedCount + 1;
        grid_z = (int)((float)iVar3 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z);
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr,(CVector3f *)&grid_x);
        core_dcube_cpp_CDemonCube_rotateVertices_FUN_00457650
                  (in_stack_00000024,this_ptr->rendering_mode);
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr,&g_ZeroVector);
        iVar2 = g_PVSDrawnCubeCount;
        g_PVSCubePointers[g_PVSDrawnCubeCount] = in_stack_0000002c;
        if (g_PVSCubePositions + iVar2 != (CVector3f *)&render_mode) {
          g_PVSCubePositions[iVar2].x = (float)render_mode;
          g_PVSCubePositions[iVar2].y = in_stack_00000018;
          g_PVSCubePositions[iVar2].z = in_stack_0000001c;
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
