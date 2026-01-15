// Name: core_dtri.cpp_CDemonTriangle_render_FUN_0049cbd0
// Address: 0049cbd0
// Address Range: [[0049cbd0, 0049cd1b]]
// Convention: __cdecl
// Signature: void core_dtri.cpp_CDemonTriangle_render_FUN_0049cbd0(CDemonTriangle * this_ptr)

#include "nocturne.h"

void __cdecl core_dtri_cpp_CDemonTriangle_render_FUN_0049cbd0(CDemonTriangle *this_ptr)

{
  float10 fVar1;
  CDemonRenderer *this_ptr_00;
  CDemonRenderer *polygon_info;
  CVector3i local_30;
  CVector3i local_24;
  CVector3i local_18;
  
  local_30.x = (int)ROUND((this_ptr->vertex1).x * 256f);
  local_30.y = (int)ROUND((this_ptr->vertex1).y * 256f);
  local_30.z = (int)ROUND((this_ptr->vertex1).z * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_30);
  local_18.x = (int)ROUND((this_ptr->vertex2).x * 256f);
  local_18.y = (int)ROUND((this_ptr->vertex2).y * 256f);
  local_18.z = (int)ROUND((this_ptr->vertex2).z * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_18);
  local_24.x = (int)ROUND((this_ptr->vertex3).x * 256f);
  local_24.y = (int)ROUND((this_ptr->vertex3).y * 256f);
  local_24.z = (int)ROUND((this_ptr->vertex3).z * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_24);
  fVar1 = (float10)-65536;
  crt_math_c_round_FUN_005fe6b0((double)((float10)(this_ptr->normal).x * fVar1));
  crt_math_c_round_FUN_005fe6b0((double)((float10)(this_ptr->normal).y * fVar1));
  crt_math_c_round_FUN_005fe6b0((double)(fVar1 * (float10)(this_ptr->normal).z));
  this_ptr_00 = (CDemonRenderer *)0x49cd09;
  polygon_info = g_CDemonRendererPtr;
  crt_math_c_round_FUN_005fe6b0
            ((double)(this_ptr->plane_distance * (float)65536 *
                     (float)256));
  engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
            (this_ptr_00,(SMRGLHeaderPrimitive *)polygon_info);
  return;
}
