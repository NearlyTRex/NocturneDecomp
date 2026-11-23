// Name: engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_0048d700
// Address: 0048d700
// MANUAL RECONSTRUCTION
// Address Range: [[0048d700, 0048d79e]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_processVisiblePrimitive_FUN_0048d700(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive,int render_flags)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_processVisiblePrimitive_FUN_0048d700(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive,int render_flags)

{
  int iVar1;
  STrianglePackedIndices local_18;
  SMRGLPrimitiveTriangle *triangle;

  if (this_ptr->plane_culling_enabled != 0) {
    iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&primitive->surface_normal);
    if (iVar1 == 0) {
      return;
    }
  }
  triangle = (SMRGLPrimitiveTriangle *)primitive;
  local_18.vertex_index_0 = (ushort)triangle->vertices[0].vertex_index;
  local_18.vertex_index_1 = (ushort)triangle->vertices[1].vertex_index;
  local_18.vertex_index_2 = (ushort)triangle->vertices[2].vertex_index;
  engine_drender_cpp_CDemonRenderer_captureFace_FUN_0048d8a0(this_ptr,&local_18,render_flags);
  return;
}
