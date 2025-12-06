// Name: core_dtri.cpp_CDemonTriangle_render_FUN_0049cbd0
// Address: 0049cbd0
// Address Range: [[0049cbd0, 0049cd1b]]
// Convention: __cdecl
// Signature: void core_dtri.cpp_CDemonTriangle_render_FUN_0049cbd0(CDemonTriangle * this_ptr)

#include "nocturne.h"

void __cdecl core_dtri_cpp_CDemonTriangle_render_FUN_0049cbd0(CDemonTriangle *this_ptr)

{
  uint extraout_EAX;
  BADSPACEBASE *in_ESP;
  float10 fVar1;
  double dVar2;
  CDemonRenderer *this_ptr_00;
  SRenderVertex *polygon_info;
  CVector3i local_30;
  CVector3i local_1c;
  int local_10;
  
  local_30.x = (int)ROUND((this_ptr->vertex1).x * 256f);
  local_30.y = (int)ROUND((this_ptr->vertex1).y * 256f);
  local_30.z = (int)ROUND((this_ptr->vertex1).z * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_30);
  local_1c.z = (int)ROUND((this_ptr->vertex2).x * 256f);
  local_10 = (int)ROUND((this_ptr->vertex2).y * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)&local_1c.z);
  local_1c.x = (int)ROUND((this_ptr->vertex3).x * 256f);
  local_1c.y = (int)ROUND((this_ptr->vertex3).y * 256f);
  local_1c.z = (int)ROUND((this_ptr->vertex3).z * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_1c);
  fVar1 = (float10)(this_ptr->normal).x * (float10)-65536;
  dVar2 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(3,extraout_EAX));
  polygon_info = (SRenderVertex *)(int)ROUND(fVar1);
  dVar2 = crt_math_c_round_FUN_005fe6b0(dVar2);
  dVar2 = crt_math_c_round_FUN_005fe6b0(dVar2);
  this_ptr_00 = (CDemonRenderer *)&stack0xffffffa0;
  local_30.x = 2;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar2 >> 0x20),&stack0xffffffa0));
  engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
            (this_ptr_00,(SMRGLHeaderPrimitive *)polygon_info);
  return;
}
