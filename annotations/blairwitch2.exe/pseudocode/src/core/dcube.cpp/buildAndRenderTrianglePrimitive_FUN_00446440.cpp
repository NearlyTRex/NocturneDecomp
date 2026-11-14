// Name: core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_00446440
// Address: 00446440
// Address Range: [[00446440, 004464ae]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_buildAndRenderTrianglePrimitive_FUN_00446440(CVector3f **triangle_vertex_pointers,CVector3f *vertex_buffer)

#include "nocturne.h"

void __cdecl core_dcube_cpp_buildAndRenderTrianglePrimitive_FUN_00446440(CVector3f **triangle_vertex_pointers,CVector3f *vertex_buffer)

{
  SMRGLHeaderPrimitive local_30;
  uint local_18;
  uint local_14;
  uint local_10;
  
  local_30.base.count = 3;
  local_30.surface_normal.D.i = 0;
  local_30.surface_normal.C.i = 0;
  local_30.surface_normal.B.i = 0;
  local_30.surface_normal.A.i = 0;
  local_18 = (uint)((int)*triangle_vertex_pointers - (int)vertex_buffer) / 0xc;
  local_14 = (uint)((int)triangle_vertex_pointers[1] - (int)vertex_buffer) / 0xc;
  local_10 = (uint)((int)triangle_vertex_pointers[2] - (int)vertex_buffer) / 0xc;
  core_set_cpp_CDemonSet_renderPrimitiveList_FUN_005340b0(g_CDemonSetPtr,&local_30,1);
  return;
}
