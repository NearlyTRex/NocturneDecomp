// Name: core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_004d7760
// Address: 004d7760
// Address Range: [[004d7760, 004d77e4]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_CMirror_renderMirroredPrimitive_FUN_004d7760(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mirror_cpp_CMirror_renderMirroredPrimitive_FUN_004d7760(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

{
  uint uVar1;
  
  _DAT_01cc942c = (prim->base).count;
  _DAT_01cc9430 = (prim->surface_normal).A;
  _DAT_01cc9434 = (prim->surface_normal).B;
  _DAT_01cc9438 = (prim->surface_normal).C;
  _DAT_01cc943c = (prim->surface_normal).D;
  _DAT_01cc9440 = prim[1].base.type;
  _DAT_01cc9444 = prim[1].surface_normal.B;
  _DAT_01cc9448 = prim[2].base.type;
  _DAT_01cc944c = prim[2].surface_normal.B;
  uVar1 = core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_004d74a0
                    (this_ptr,(SMRGLHeaderPrimitive *)0x1cc9428);
  if (uVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
            (DAT_005ae704,&(this_ptr->clip_primitive).base);
  return;
}
