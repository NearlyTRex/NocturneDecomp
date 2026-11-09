// Name: core_mirror.cpp_FUN_004fac90
// Address: 004fac90
// Address Range: [[004fac90, 004facc2]]
// Convention: __cdecl
// Signature: int __cdecl core_mirror_cpp_FUN_004fac90(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

int __cdecl core_mirror_cpp_FUN_004fac90(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = core_mirror_cpp_FUN_004faa10(this_ptr,prim);
  if (uVar1 == 0) {
    return 0;
  }
  iVar2 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0
                    (DAT_0060b280,(SMRGLHeaderPrimitive *)(this_ptr + 0xe8));
  return iVar2;
}
