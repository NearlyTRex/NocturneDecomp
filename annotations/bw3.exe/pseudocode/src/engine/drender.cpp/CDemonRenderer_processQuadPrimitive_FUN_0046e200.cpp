// Name: engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0046e200
// Address: 0046e200
// Address Range: [[0046e200, 0046e2fc]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_processQuadPrimitive_FUN_0046e200(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *quad_primitive,int render_flags)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_processQuadPrimitive_FUN_0046e200(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *quad_primitive,int render_flags)

{
  int iVar1;
  ushort local_24;
  ushort local_22;
  ushort local_20;
  ushort local_1e;
  ushort local_1c;
  ushort local_1a;
  ushort local_18;
  ushort local_16;
  ushort local_14;
  
  if ((*(int *)(this_ptr + 0xc) != 0) &&
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(quad_primitive + 8), iVar1 == 0)) {
    return;
  }
  local_24 = *(ushort *)(quad_primitive + 0x18);
  local_22 = *(ushort *)(quad_primitive + 0x24);
  local_20 = *(ushort *)(quad_primitive + 0x30);
  local_1e = (ushort)((uint)*(uint *)(quad_primitive + 0x1c) >> 8);
  local_1c = (ushort)((uint)*(uint *)(quad_primitive + 0x28) >> 8);
  local_1a = (ushort)((uint)*(uint *)(quad_primitive + 0x34) >> 8);
  local_18 = (ushort)((uint)*(uint *)(quad_primitive + 0x20) >> 8);
  local_16 = (ushort)((uint)*(uint *)(quad_primitive + 0x2c) >> 8);
  local_14 = (ushort)((uint)*(uint *)(quad_primitive + 0x38) >> 8);
  engine_drender_cpp_CDemonRenderer_captureFace_FUN_0046e300
            (this_ptr,(STrianglePackedIndices *)&local_24,render_flags);
  if (*(int *)(quad_primitive + 4) < 4) {
    return;
  }
  local_22 = *(ushort *)(quad_primitive + 0x30);
  local_20 = *(ushort *)(quad_primitive + 0x3c);
  local_1c = (ushort)((uint)*(uint *)(quad_primitive + 0x34) >> 8);
  local_1a = (ushort)((uint)*(uint *)(quad_primitive + 0x40) >> 8);
  local_16 = (ushort)((uint)*(uint *)(quad_primitive + 0x38) >> 8);
  local_14 = (ushort)((uint)*(uint *)(quad_primitive + 0x44) >> 8);
  engine_drender_cpp_CDemonRenderer_captureFace_FUN_0046e300
            (this_ptr,(STrianglePackedIndices *)&local_24,render_flags);
  return;
}
