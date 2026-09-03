// Name: core_mirror.cpp_CMirror_renderReflectedPrimitive_FUN_004d7720
// Address: 004d7720
// Address Range: [[004d7720, 004d7752]]
// Convention: __cdecl
// Signature: int __cdecl core_mirror_cpp_CMirror_renderReflectedPrimitive_FUN_004d7720(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

int __cdecl core_mirror_cpp_CMirror_renderReflectedPrimitive_FUN_004d7720(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_004d74a0(this_ptr,prim);
  if (uVar1 == 0) {
    return 0;
  }
  iVar2 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190
                    (g_CDemonRenderer_PTR_005ae704,&(this_ptr->clip_primitive).base);
  return iVar2;
}
