// Name: core_mirror.cpp_CMirror_renderReflectedPrimitive_FUN_00519be0
// Address: 00519be0
// Address Range: [[00519be0, 00519c12]]
// Convention: __cdecl
// Signature: int __cdecl core_mirror_cpp_CMirror_renderReflectedPrimitive_FUN_00519be0(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

int __cdecl core_mirror_cpp_CMirror_renderReflectedPrimitive_FUN_00519be0(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_00519960(this_ptr,prim);
  if (uVar1 == 0) {
    return 0;
  }
  iVar2 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0
                    (DAT_00612560,&(this_ptr->clip_primitive).base);
  return iVar2;
}
