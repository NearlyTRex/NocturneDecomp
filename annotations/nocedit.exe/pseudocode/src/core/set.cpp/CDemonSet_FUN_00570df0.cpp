// Name: core_set.cpp_CDemonSet_FUN_00570df0
// Address: 00570df0
// Address Range: [[00570df0, 00570e1f]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_FUN_00570df0(CDemonSet *this_ptr,SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_FUN_00570df0(CDemonSet *this_ptr,SMRGLHeaderPrimitive *primitive)

{
  int iVar1;
  
  if (g_CDemonRendererPtr2->advanced_culling_enabled != 0) {
    iVar1 = core_mirror_cpp_CMirror_renderReflectedPrimitive_FUN_005225a0
                      (this_ptr->active_mirror,primitive);
    return iVar1;
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                    (g_CDemonRendererPtr2,primitive);
  return iVar1;
}
