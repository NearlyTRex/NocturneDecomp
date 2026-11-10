// Name: engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_0046c580
// Address: 0046c580
// Address Range: [[0046c580, 0046c61e]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_processVisiblePrimitive_FUN_0046c580(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive,int render_flags)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_processVisiblePrimitive_FUN_0046c580(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive,int render_flags)

{
  int iVar1;
  ushort local_18;
  ushort local_16;
  ushort local_14;
  ushort local_12;
  ushort local_10;
  ushort local_e;
  ushort local_c;
  ushort local_a;
  ushort local_8;
  
  if (this_ptr->plane_culling_enabled != 0) {
    iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970(&primitive->surface_normal);
    if (iVar1 == 0) {
      return;
    }
  }
  local_18 = (ushort)primitive[1].base.type;
  local_16 = *(ushort *)&primitive[1].surface_normal.B;
  local_14 = (ushort)primitive[2].base.type;
  local_12 = (ushort)((uint)primitive[1].base.count >> 8);
  local_10 = (ushort)((uint)primitive[1].surface_normal.C.i >> 8);
  local_e = (ushort)((uint)primitive[2].base.count >> 8);
  local_c = (ushort)((uint)primitive[1].surface_normal.A.i >> 8);
  local_a = (ushort)((uint)primitive[1].surface_normal.D.i >> 8);
  local_8 = (ushort)((uint)primitive[2].surface_normal.A.i >> 8);
  engine_drender_cpp_CDemonRenderer_captureFace_FUN_0046c720
            (this_ptr,(STrianglePackedIndices *)&local_18,render_flags);
  return;
}
