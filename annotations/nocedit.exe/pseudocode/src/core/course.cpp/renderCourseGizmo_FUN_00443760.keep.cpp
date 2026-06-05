// Name: core_course.cpp_renderCourseGizmo_FUN_00443760
// Address: 00443760
// MANUAL RECONSTRUCTION
// Address Range: [[00443760, 00443bb7]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_renderCourseGizmo_FUN_00443760(CVector3f *position)

#include "nocturne.h"

void __cdecl core_course_cpp_renderCourseGizmo_FUN_00443760(CVector3f *position)

{
  SRenderVertex *pSVar2;
  UIntegerFloat UVar3;
  int iVar6;
  int iVar4;
  int iVar5;
  SLineStrip2Index SStack_a0;
  CVector3i local_84;
  CVector3i local_78;
  CVector3i local_6c;
  CVector3i local_60;
  CVector3f local_48;
  CVector3i local_3c;
  SMRGLHeaderPrimitive local_30;
  CDemonRenderer *this_ptr;
  SRenderVertex *pSVar1;
  
  if (&local_48 != position) {
    local_48 = *position;
  }
  position->x = (float)(((int)ROUND(ROUND(position->x)) / 0x10) << 4);
  position->y = (float)(((int)ROUND(ROUND(position->y)) / 0x10) << 4);
  this_ptr = g_CDemonRendererPtr1;
  local_30.surface_normal.D.i = ((int)ROUND(ROUND(position->z)) / 0x10) << 4;
  position->z = (float)local_30.surface_normal.D.i;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(this_ptr,position);
  local_30.surface_normal.A.i = -0x80;
  do {
    local_30.surface_normal.B.i = -0x80;
    local_30.surface_normal.C = local_30.surface_normal.A;
    do {
      UVar3 = local_30.surface_normal.B;
      iVar5 = -0x80;
      do {
        local_30.surface_normal.D = local_30.surface_normal.C;
        local_3c.x = (int)ROUND(((float)local_30.surface_normal.C.i + position->x) * 256.0f)
        ;
        local_3c.y = (int)ROUND(((float)UVar3.i + position->y) * 256.0f);
        local_3c.z = (int)ROUND(((float)iVar5 + position->z) * 256.0f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr1->vertex_buffer_ptr->projected_vertex,&local_3c);
        pSVar1 = g_CDemonRendererPtr1->vertex_buffer_ptr;
        if ((int)((pSVar1->projected_vertex).screen_x & -0x80000000) == 0) {
          iVar6 = (pSVar1->projected_vertex).transformed_z;
          iVar4 = 0xff - (iVar6 / 0x80);
          if (iVar4 < 0) {
            iVar4 = 0;
          }
          else if (0xff < iVar4) {
            iVar4 = 0xff;
          }
          g_ActiveRenderColor =
               (int)g_ColorCubeLookup[(iVar4 / 8) * 0x421];
          engine_prim_c_replaceWWithDepth_FUN_00552110(pSVar1,1);
          engine_2d_c_plotPixelWithDepth_FUN_00401290
                    ((pSVar1->projected_vertex).screen_x >> 0x10,
                     (pSVar1->projected_vertex).screen_y >> 0x10,
                     (pSVar1->projected_vertex).transformed_z);
        }
        iVar5 = iVar5 + 0x10;
      } while (iVar5 != 0x90);
      local_30.surface_normal.B.i = local_30.surface_normal.B.i + 0x10;
    } while (local_30.surface_normal.B.i != 0x90);
    local_30.surface_normal.A.i = local_30.surface_normal.A.i + 0x10;
  } while (local_30.surface_normal.A.i != 0x90);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr1,&local_48);
  local_84.x = (int)ROUND(256.0f * 0.0);
  local_84.y = (int)ROUND(256.0f * 0.0);
  local_84.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr1->vertex_buffer_ptr->projected_vertex,&local_84);
  local_60.x = (int)ROUND(256.0f * 3.0);
  local_60.y = (int)ROUND(256.0f * 0.0);
  local_60.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr1->vertex_buffer_ptr[1].projected_vertex,&local_60);
  local_78.x = (int)ROUND(256.0f * 0.0);
  local_78.y = (int)ROUND(256.0f * 3.0);
  local_78.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr1->vertex_buffer_ptr[2].projected_vertex,&local_78);
  local_6c.x = (int)ROUND(256.0f * 0.0);
  local_6c.y = (int)ROUND(256.0f * 0.0);
  local_6c.z = (int)ROUND(256.0f * 3.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr1->vertex_buffer_ptr[3].projected_vertex,&local_6c);
  local_30.base.count = -7;
  SStack_a0.base.vertex_count = 2;
  SStack_a0.vertices[0] = 0;
  SStack_a0.vertices[1] = 1;
  engine_3d_c_processPolygonColor_FUN_00403e30(&local_30);
  engine_3d_c_drawLineStrip2D_FUN_00404570(&SStack_a0.base);
  SStack_a0.vertices[1] = 2;
  engine_3d_c_drawLineStrip2D_FUN_00404570(&SStack_a0.base);
  SStack_a0.vertices[1] = 3;
  engine_3d_c_drawLineStrip2D_FUN_00404570(&SStack_a0.base);
  iVar6 = 4;
  pSVar2 = g_CDemonRendererPtr1->vertex_buffer_ptr;
  do {
    if ((int)(pSVar2[1].projected_vertex.screen_x & -0x80000000) == 0) {
      engine_2d_c_drawText_FUN_00401fd0
                (g_CourseAxisLabels[iVar6 / 4],
                 pSVar2[1].projected_vertex.screen_x >> 0x10,
                 pSVar2[1].projected_vertex.screen_y >> 0x10);
    }
    iVar6 = iVar6 + 4;
    pSVar2 = pSVar2 + 1;
  } while (iVar6 != 0x10);
  return;
}
