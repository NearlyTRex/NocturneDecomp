// Name: core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_00519c20
// Address: 00519c20
// Address Range: [[00519c20, 00519ca4]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_CMirror_renderMirroredPrimitive_FUN_00519c20(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mirror_cpp_CMirror_renderMirroredPrimitive_FUN_00519c20(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

{
  uint uVar1;
  
  _DAT_01d2c8dc = *(uint *)(prim + 4);
  _DAT_01d2c8e0 = *(uint *)(prim + 8);
  _DAT_01d2c8e4 = *(uint *)(prim + 0xc);
  _DAT_01d2c8e8 = *(uint *)(prim + 0x10);
  _DAT_01d2c8ec = *(uint *)(prim + 0x14);
  _DAT_01d2c8f0 = *(uint *)(prim + 0x18);
  _DAT_01d2c8f4 = *(uint *)(prim + 0x24);
  _DAT_01d2c8f8 = *(uint *)(prim + 0x30);
  _DAT_01d2c8fc = *(uint *)(prim + 0x3c);
  uVar1 = core_mirror_cpp_FUN_00519960(this_ptr,(SMRGLHeaderPrimitive *)0x1d2c8d8);
  if (uVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80
            (DAT_00612560,(SMRGLHeaderPrimitive *)(this_ptr + 0xe8));
  return;
}
