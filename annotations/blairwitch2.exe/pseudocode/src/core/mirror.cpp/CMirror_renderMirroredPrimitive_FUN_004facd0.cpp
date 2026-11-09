// Name: core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_004facd0
// Address: 004facd0
// Address Range: [[004facd0, 004fad54]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_CMirror_renderMirroredPrimitive_FUN_004facd0(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mirror_cpp_CMirror_renderMirroredPrimitive_FUN_004facd0(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

{
  uint uVar1;
  
  _DAT_01d182cc = *(uint *)(prim + 4);
  _DAT_01d182d0 = *(uint *)(prim + 8);
  _DAT_01d182d4 = *(uint *)(prim + 0xc);
  _DAT_01d182d8 = *(uint *)(prim + 0x10);
  _DAT_01d182dc = *(uint *)(prim + 0x14);
  _DAT_01d182e0 = *(uint *)(prim + 0x18);
  _DAT_01d182e4 = *(uint *)(prim + 0x24);
  _DAT_01d182e8 = *(uint *)(prim + 0x30);
  _DAT_01d182ec = *(uint *)(prim + 0x3c);
  uVar1 = core_mirror_cpp_FUN_004faa10(this_ptr,(SMRGLHeaderPrimitive *)0x1d182c8);
  if (uVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00469670
            (DAT_0060b280,(SMRGLHeaderPrimitive *)(this_ptr + 0xe8));
  return;
}
