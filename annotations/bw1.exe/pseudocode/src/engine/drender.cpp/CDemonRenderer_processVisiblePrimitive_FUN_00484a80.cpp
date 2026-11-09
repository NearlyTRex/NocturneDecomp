// Name: engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_00484a80
// Address: 00484a80
// Address Range: [[00484a80, 00484b1e]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_processVisiblePrimitive_FUN_00484a80(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive,int render_flags)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_processVisiblePrimitive_FUN_00484a80(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive,int render_flags)

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
  
  if (*(int *)(this_ptr + 0xc) != 0) {
    iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(primitive + 8);
    if (iVar1 == 0) {
      return;
    }
  }
  local_18 = *(ushort *)(primitive + 0x18);
  local_16 = *(ushort *)(primitive + 0x24);
  local_14 = *(ushort *)(primitive + 0x30);
  local_12 = (ushort)((uint)*(uint *)(primitive + 0x1c) >> 8);
  local_10 = (ushort)((uint)*(uint *)(primitive + 0x28) >> 8);
  local_e = (ushort)((uint)*(uint *)(primitive + 0x34) >> 8);
  local_c = (ushort)((uint)*(uint *)(primitive + 0x20) >> 8);
  local_a = (ushort)((uint)*(uint *)(primitive + 0x2c) >> 8);
  local_8 = (ushort)((uint)*(uint *)(primitive + 0x38) >> 8);
  engine_drender_cpp_CDemonRenderer_captureFace_FUN_00484c20
            (this_ptr,(STrianglePackedIndices *)&local_18,render_flags);
  return;
}
