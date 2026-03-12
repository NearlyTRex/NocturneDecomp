// Name: core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_004566e0
// Address: 004566e0
// Address Range: [[004566e0, 0045674e]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_buildAndRenderTrianglePrimitive_FUN_004566e0(CVector3f **triangle_vertex_pointers,CVector3f *vertex_buffer)

#include "nocturne.h"

void __cdecl core_dcube_cpp_buildAndRenderTrianglePrimitive_FUN_004566e0(CVector3f **triangle_vertex_pointers,CVector3f *vertex_buffer)

{
  SMRGLHeaderPrimitive local_30;
  uint local_18;
  uint local_14;
  uint local_10;
  
  local_30.base.count = 3;
  local_30.surface_normal.D = 0;
  local_30.surface_normal.C = 0;
  local_30.surface_normal.B = 0;
  local_30.surface_normal.A = 0;
  core_set_cpp_CDemonSet_renderPrimitiveList_FUN_005708e0(g_CDemonSetPtr,&local_30,1);
  return;
}
