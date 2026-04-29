// Name: engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_0048d700
// Address: 0048d700
// Address Range: [[0048d700, 0048d79e]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_processVisiblePrimitive_FUN_0048d700(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive,int render_flags)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_processVisiblePrimitive_FUN_0048d700(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive,int render_flags)

{
  int iVar1;
  STrianglePackedIndices local_18;
  
  if (this_ptr->plane_culling_enabled != 0) {
    iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&primitive->surface_normal);
    if (iVar1 == 0) {
      return;
    }
  }
  local_18.vertex_index_0 = (ushort)primitive[1].base.type;
  local_18.vertex_index_1 = *(ushort *)&primitive[1].surface_normal.B;
  local_18.vertex_index_2 = (ushort)primitive[2].base.type;
  engine_drender_cpp_CDemonRenderer_captureFace_FUN_0048d8a0(this_ptr,&local_18,render_flags);
  return;
}
