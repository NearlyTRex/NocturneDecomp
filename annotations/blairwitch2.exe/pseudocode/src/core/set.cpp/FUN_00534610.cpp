// Name: core_set.cpp_FUN_00534610
// Address: 00534610
// Address Range: [[00534610, 0053463f]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_FUN_00534610(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

int __cdecl core_set_cpp_FUN_00534610(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  
  if (*(int *)(DAT_0060b280 + 0x18) != 0) {
    iVar1 = core_mirror_cpp_FUN_004fac90(*(CMirror **)&this_ptr->field_0x161664,prim);
    return iVar1;
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0
                    (DAT_0060b280,prim);
  return iVar1;
}
