// Name: core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_0044ab60
// Address: 0044ab60
// Address Range: [[0044ab60, 0044abce]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_buildAndRenderTrianglePrimitive_FUN_0044ab60(CVector3f **triangle_vertex_pointers,CVector3f *vertex_buffer)

#include "nocturne.h"

void __cdecl core_dcube_cpp_buildAndRenderTrianglePrimitive_FUN_0044ab60(CVector3f **triangle_vertex_pointers,CVector3f *vertex_buffer)

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
  core_set_cpp_CDemonSet_renderPrimitiveList_FUN_0050df40(0x01E57284,&local_30,1);
  return;
}
