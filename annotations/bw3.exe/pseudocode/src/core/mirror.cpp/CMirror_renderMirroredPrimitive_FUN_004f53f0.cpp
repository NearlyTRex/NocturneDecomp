// Name: core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_004f53f0
// Address: 004f53f0
// Address Range: [[004f53f0, 004f5474]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_CMirror_renderMirroredPrimitive_FUN_004f53f0(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mirror_cpp_CMirror_renderMirroredPrimitive_FUN_004f53f0(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

{
  uint uVar1;
  
  _DAT_01d8105c = *(uint *)(prim + 4);
  _DAT_01d81060 = *(uint *)(prim + 8);
  _DAT_01d81064 = *(uint *)(prim + 0xc);
  _DAT_01d81068 = *(uint *)(prim + 0x10);
  _DAT_01d8106c = *(uint *)(prim + 0x14);
  _DAT_01d81070 = *(uint *)(prim + 0x18);
  _DAT_01d81074 = *(uint *)(prim + 0x24);
  _DAT_01d81078 = *(uint *)(prim + 0x30);
  _DAT_01d8107c = *(uint *)(prim + 0x3c);
  uVar1 = core_mirror_cpp_FUN_004f5130(this_ptr,(SMRGLHeaderPrimitive *)0x1d81058);
  if (uVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
            (DAT_005f2afc,(SMRGLHeaderPrimitive *)(this_ptr + 0xe8));
  return;
}
