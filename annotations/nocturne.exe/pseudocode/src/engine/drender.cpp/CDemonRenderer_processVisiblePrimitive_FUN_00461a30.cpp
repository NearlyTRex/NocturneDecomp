// Name: engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_00461a30
// Address: 00461a30
// Address Range: [[00461a30, 00461ace]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_processVisiblePrimitive_FUN_00461a30(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive,int render_flags)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_processVisiblePrimitive_FUN_00461a30(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive,int render_flags)

{
  int iVar1;
  STrianglePackedIndices local_18;
  ushort local_12;
  ushort local_10;
  ushort local_e;
  ushort local_c;
  ushort local_a;
  ushort local_8;
  
  if (this_ptr->plane_culling_enabled != 0) {
    iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(&primitive->surface_normal);
    if (iVar1 == 0) {
      return;
    }
  }
  local_18.vertex_index_0 = (ushort)primitive[1].base.type;
  local_18.vertex_index_1 = *(ushort *)&primitive[1].surface_normal.B;
  local_18.vertex_index_2 = (ushort)primitive[2].base.type;
  local_12 = (ushort)((uint)primitive[1].base.count >> 8);
  local_10 = (ushort)((uint)primitive[1].surface_normal.C.i >> 8);
  local_e = (ushort)((uint)primitive[2].base.count >> 8);
  local_c = (ushort)((uint)primitive[1].surface_normal.A.i >> 8);
  local_a = (ushort)((uint)primitive[1].surface_normal.D.i >> 8);
  local_8 = (ushort)((uint)primitive[2].surface_normal.A.i >> 8);
  engine_drender_cpp_CDemonRenderer_captureFace_FUN_00461bd0(this_ptr,&local_18,render_flags);
  return;
}
