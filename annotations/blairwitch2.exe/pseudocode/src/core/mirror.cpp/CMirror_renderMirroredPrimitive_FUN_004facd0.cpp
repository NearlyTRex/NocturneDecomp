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
  
  g_SMRGLHeaderPrimitive_01d182c8.base.count = (prim->base).count;
  g_SMRGLHeaderPrimitive_01d182c8.surface_normal.A = (prim->surface_normal).A;
  g_SMRGLHeaderPrimitive_01d182c8.surface_normal.B = (prim->surface_normal).B;
  g_SMRGLHeaderPrimitive_01d182c8.surface_normal.C = (prim->surface_normal).C;
  g_SMRGLHeaderPrimitive_01d182c8.surface_normal.D = (prim->surface_normal).D;
  _DAT_01d182e0 = prim[1].base.type;
  _DAT_01d182e4 = prim[1].surface_normal.B;
  _DAT_01d182e8 = prim[2].base.type;
  _DAT_01d182ec = prim[2].surface_normal.B;
  uVar1 = core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_004faa10
                    (this_ptr,&g_SMRGLHeaderPrimitive_01d182c8);
  if (uVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00469670
            (g_CDemonRenderer_PTR_0060b280,&(this_ptr->clip_primitive).base);
  return;
}
