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
  
  _DAT_01d182cc = (prim->base).count;
  _DAT_01d182d0 = (prim->surface_normal).A;
  _DAT_01d182d4 = (prim->surface_normal).B;
  _DAT_01d182d8 = (prim->surface_normal).C;
  _DAT_01d182dc = (prim->surface_normal).D;
  _DAT_01d182e0 = prim[1].base.type;
  _DAT_01d182e4 = prim[1].surface_normal.B;
  _DAT_01d182e8 = prim[2].base.type;
  _DAT_01d182ec = prim[2].surface_normal.B;
  uVar1 = core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_004faa10
                    (this_ptr,(SMRGLHeaderPrimitive *)0x1d182c8);
  if (uVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00469670
            (DAT_0060b280,&(this_ptr->clip_primitive).base);
  return;
}
