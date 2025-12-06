// Name: core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_004566e0
// Address: 004566e0
// Address Range: [[004566e0, 0045674e]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_004566e0(CVector3f * * triangle_vertex_pointers, CVector3f * vertex_buffer)

#include "nocturne.h"

void __cdecl
core_dcube_cpp_buildAndRenderTrianglePrimitive_FUN_004566e0
          (CVector3f **triangle_vertex_pointers,CVector3f *vertex_buffer)

{
  BADSPACEBASE *in_ESP;
  SMRGLHeaderPrimitive local_30;
  uint local_18;
  uint local_14;
  uint local_10;
  
  local_30.base.count = 3;
  local_30.surface_normal.D = 0;
  local_30.surface_normal.C = 0;
  local_30.surface_normal.B = 0;
  local_30.surface_normal.A = 0;
  local_18 = (uint)((int)*triangle_vertex_pointers - (int)vertex_buffer) / 0xc;
  local_14 = (uint)((int)triangle_vertex_pointers[1] - (int)vertex_buffer) / 0xc;
  local_10 = (uint)((int)triangle_vertex_pointers[2] - (int)vertex_buffer) / 0xc;
  core_set_cpp_CDemonSet_renderPrimitiveList_FUN_005708e0(g_CDemonSetPtr,&local_30,1);
  return;
}
