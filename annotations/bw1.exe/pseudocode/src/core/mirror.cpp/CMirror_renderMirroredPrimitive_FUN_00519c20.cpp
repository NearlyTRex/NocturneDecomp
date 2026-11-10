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
  
  _DAT_01d2c8dc = (prim->base).count;
  _DAT_01d2c8e0 = (prim->surface_normal).A;
  _DAT_01d2c8e4 = (prim->surface_normal).B;
  _DAT_01d2c8e8 = (prim->surface_normal).C;
  _DAT_01d2c8ec = (prim->surface_normal).D;
  _DAT_01d2c8f0 = prim[1].base.type;
  _DAT_01d2c8f4 = prim[1].surface_normal.B;
  _DAT_01d2c8f8 = prim[2].base.type;
  _DAT_01d2c8fc = prim[2].surface_normal.B;
  uVar1 = core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_00519960
                    (this_ptr,(SMRGLHeaderPrimitive *)0x1d2c8d8);
  if (uVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80
            (DAT_00612560,&(this_ptr->clip_primitive).base);
  return;
}
