// Name: core_mirror.cpp_CMirror_renderReflectedPrimitive_FUN_004f53b0
// Address: 004f53b0
// Address Range: [[004f53b0, 004f53e2]]
// Convention: __cdecl
// Signature: int __cdecl core_mirror_cpp_CMirror_renderReflectedPrimitive_FUN_004f53b0(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

int __cdecl core_mirror_cpp_CMirror_renderReflectedPrimitive_FUN_004f53b0(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_004f5130(this_ptr,prim);
  if (uVar1 == 0) {
    return 0;
  }
  iVar2 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580
                    (DAT_005f2afc,&(this_ptr->clip_primitive).base);
  return iVar2;
}
