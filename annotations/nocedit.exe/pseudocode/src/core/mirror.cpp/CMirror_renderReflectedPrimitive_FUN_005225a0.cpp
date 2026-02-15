// Name: core_mirror.cpp_CMirror_renderReflectedPrimitive_FUN_005225a0
// Address: 005225a0
// Address Range: [[005225a0, 005225d2]]
// Convention: __cdecl
// Signature: int __cdecl core_mirror_cpp_CMirror_renderReflectedPrimitive_FUN_005225a0(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

int __cdecl core_mirror_cpp_CMirror_renderReflectedPrimitive_FUN_005225a0(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_00522310(this_ptr,prim);
  if (uVar1 == 0) {
    return 0;
  }
  iVar2 = engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                    (g_CDemonRendererPtr2,&(this_ptr->clip_primitive).base);
  return iVar2;
}
