// Name: core_dtri.cpp_CDemonTriangle_render_FUN_0049cbd0
// Address: 0049cbd0
// Address Range: [[0049cbd0, 0049cd1b]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_CDemonTriangle_render_FUN_0049cbd0(CDemonTriangle *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dtri_cpp_CDemonTriangle_render_FUN_0049cbd0(CDemonTriangle *this_ptr)

{
  SMRGLPrimitiveQuad SStack_78;
  CVector3i local_30;
  CVector3i local_24;
  CVector3i local_18;
  
  local_30.x = (int)ROUND((this_ptr->vertex1).x * 256.0f);
  local_30.y = (int)ROUND((this_ptr->vertex1).y * 256.0f);
  local_30.z = (int)ROUND((this_ptr->vertex1).z * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr1->vertex_buffer_ptr->projected_vertex,&local_30);
  local_18.x = (int)ROUND((this_ptr->vertex2).x * 256.0f);
  local_18.y = (int)ROUND((this_ptr->vertex2).y * 256.0f);
  local_18.z = (int)ROUND((this_ptr->vertex2).z * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr1->vertex_buffer_ptr[1].projected_vertex,&local_18);
  local_24.x = (int)ROUND((this_ptr->vertex3).x * 256.0f);
  local_24.y = (int)ROUND((this_ptr->vertex3).y * 256.0f);
  local_24.z = (int)ROUND((this_ptr->vertex3).z * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr1->vertex_buffer_ptr[2].projected_vertex,&local_24);
  SStack_78.base.base.count = 3;
  SStack_78.base.surface_normal.A.i =
       (int)ROUND(ROUND((double)(this_ptr->normal).x * -65536));
  SStack_78.base.surface_normal.B.i =
       (int)ROUND(ROUND((double)(this_ptr->normal).y * -65536));
  SStack_78.base.surface_normal.C.i =
       (int)ROUND(ROUND(-65536 * (double)(this_ptr->normal).z));
  SStack_78.vertices[0].vertex_index = 0;
  SStack_78.vertices[1].vertex_index = 1;
  SStack_78.vertices[2].vertex_index = 2;
  SStack_78.base.surface_normal.D.i =
       (int)ROUND(ROUND(this_ptr->plane_distance * (float)65536 *
                        (float)256));
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0048a8a0
            (g_CDemonRendererPtr1,(SMRGLPrimitivePoly *)&SStack_78);
  return;
}
