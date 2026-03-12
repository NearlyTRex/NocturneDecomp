// Name: engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0
// Address: 0048d7a0
// Address Range: [[0048d7a0, 0048d89c]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *quad_primitive,int render_flags)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *quad_primitive,int render_flags)

{
  int iVar1;
  STrianglePackedIndices local_24;
  
  if ((this_ptr->plane_culling_enabled != 0) &&
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&quad_primitive->surface_normal), iVar1 == 0))
  {
    return;
  }
  local_24.vertex_index_0 = (ushort)quad_primitive[1].base.type;
  local_24.vertex_index_1 = (ushort)quad_primitive[1].surface_normal.B;
  local_24.vertex_index_2 = (ushort)quad_primitive[2].base.type;
  engine_drender_cpp_CDemonRenderer_captureFace_FUN_0048d8a0(this_ptr,&local_24,render_flags);
  if ((quad_primitive->base).count < 4) {
    return;
  }
  local_24.vertex_index_1 = (ushort)quad_primitive[2].base.type;
  local_24.vertex_index_2 = (ushort)quad_primitive[2].surface_normal.B;
  engine_drender_cpp_CDemonRenderer_captureFace_FUN_0048d8a0(this_ptr,&local_24,render_flags);
  return;
}
