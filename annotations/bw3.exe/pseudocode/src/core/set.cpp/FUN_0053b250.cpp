// Name: core_set.cpp_FUN_0053b250
// Address: 0053b250
// Address Range: [[0053b250, 0053b27f]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_FUN_0053b250(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

int __cdecl core_set_cpp_FUN_0053b250(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  
  if (*(int *)(DAT_005f2afc + 0x18) != 0) {
    iVar1 = core_mirror_cpp_FUN_004f53b0(*(CMirror **)&this_ptr->field_0x161668,prim);
    return iVar1;
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580
                    (DAT_005f2afc,prim);
  return iVar1;
}
