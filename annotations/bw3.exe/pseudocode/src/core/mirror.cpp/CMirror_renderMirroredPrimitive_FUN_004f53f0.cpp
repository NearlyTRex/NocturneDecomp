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
  
  _DAT_01d8105c = (prim->base).count;
  _DAT_01d81060 = (prim->surface_normal).A;
  _DAT_01d81064 = (prim->surface_normal).B;
  _DAT_01d81068 = (prim->surface_normal).C;
  _DAT_01d8106c = (prim->surface_normal).D;
  _DAT_01d81070 = prim[1].base.type;
  _DAT_01d81074 = prim[1].surface_normal.B;
  _DAT_01d81078 = prim[2].base.type;
  _DAT_01d8107c = prim[2].surface_normal.B;
  uVar1 = core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_004f5130
                    (this_ptr,(SMRGLHeaderPrimitive *)0x1d81058);
  if (uVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
            (DAT_005f2afc,&(this_ptr->clip_primitive).base);
  return;
}
