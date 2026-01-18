// Name: core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_005225e0
// Address: 005225e0
// Address Range: [[005225e0, 00522664]]
// Convention: __cdecl
// Signature: void core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_005225e0(CMirror * this_ptr, SMRGLHeaderPrimitive * prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
core_mirror_cpp_CMirror_renderMirroredPrimitive_FUN_005225e0
          (CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

{
  uint uVar1;
  
  g_MirrorTempPrimitive.base.count = (prim->base).count;
  g_MirrorTempPrimitive.surface_normal.A = (prim->surface_normal).A;
  g_MirrorTempPrimitive.surface_normal.B = (prim->surface_normal).B;
  g_MirrorTempPrimitive.surface_normal.C = (prim->surface_normal).C;
  g_MirrorTempPrimitive.surface_normal.D = (prim->surface_normal).D;
  _DAT_02f33724 = prim[1].base.type;
  _DAT_02f33728 = prim[1].surface_normal.B;
  _DAT_02f3372c = prim[2].base.type;
  _DAT_02f33730 = prim[2].surface_normal.B;
  uVar1 = core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_00522310
                    (this_ptr,&g_MirrorTempPrimitive);
  if (uVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820
            (g_CDemonRendererPtr2,(SMRGLHeaderPrimitive *)this_ptr->additional_data);
  return;
}
