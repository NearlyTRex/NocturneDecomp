// Name: core_mirror.cpp_CMirror_renderMirrorQuad_FUN_00522670
// Address: 00522670
// Address Range: [[00522670, 005227f9]]
// Convention: __cdecl
// Signature: int __cdecl core_mirror_cpp_CMirror_renderMirrorQuad_FUN_00522670(CMirror *this_ptr)

#include "nocturne.h"

int __cdecl core_mirror_cpp_CMirror_renderMirrorQuad_FUN_00522670(CMirror *this_ptr)

{
  int iVar1;
  SMRGLPrimitiveQuadIndex local_64;
  CVector3i local_3c;
  CVector3i local_30;
  CVector3i local_24;
  CVector3i local_18;
  
  local_24.x = (int)ROUND((this_ptr->reflection).corner1.x * 256.0f);
  local_24.y = (int)ROUND((this_ptr->reflection).corner1.y * 256.0f);
  local_24.z = (int)ROUND((this_ptr->reflection).corner1.z * 256.0f);
  engine_special_cpp_transformPoint_FUN_005b5a25
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_24);
  local_30.x = (int)ROUND((this_ptr->reflection).corner2.x * 256.0f);
  local_30.y = (int)ROUND((this_ptr->reflection).corner2.y * 256.0f);
  local_30.z = (int)ROUND((this_ptr->reflection).corner2.z * 256.0f);
  engine_special_cpp_transformPoint_FUN_005b5a25
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_30);
  local_3c.x = (int)ROUND((this_ptr->reflection).corner3.x * 256.0f);
  local_3c.y = (int)ROUND((this_ptr->reflection).corner3.y * 256.0f);
  local_3c.z = (int)ROUND((this_ptr->reflection).corner3.z * 256.0f);
  engine_special_cpp_transformPoint_FUN_005b5a25
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_3c);
  local_18.x = (int)ROUND((this_ptr->reflection).corner4.x * 256.0f);
  local_18.y = (int)ROUND((this_ptr->reflection).corner4.y * 256.0f);
  local_18.z = (int)ROUND((this_ptr->reflection).corner4.z * 256.0f);
  engine_special_cpp_transformPoint_FUN_005b5a25
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_18);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,1);
  local_64.base.base.count = 4;
  local_64.base.surface_normal.D.i = 0;
  local_64.base.surface_normal.C.i = 0;
  local_64.base.surface_normal.B.i = 0;
  local_64.base.surface_normal.A.i = 0;
  local_64.vertices[0] = 0;
  local_64.vertices[1] = 1;
  local_64.vertices[2] = 2;
  local_64.vertices[3] = 3;
  iVar1 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0048ab50
                    (g_CDemonRendererPtr2,&local_64.base);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,1);
  return iVar1;
}
