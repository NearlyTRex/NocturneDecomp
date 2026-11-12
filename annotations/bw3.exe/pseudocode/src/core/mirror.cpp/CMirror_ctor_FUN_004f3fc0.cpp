// Name: core_mirror.cpp_CMirror_ctor_FUN_004f3fc0
// Address: 004f3fc0
// Address Range: [[004f3fc0, 004f3fde]]
// Convention: __cdecl
// Signature: CMirror * __cdecl core_mirror_cpp_CMirror_ctor_FUN_004f3fc0(CMirror *this_ptr)

#include "nocturne.h"

CMirror * __cdecl core_mirror_cpp_CMirror_ctor_FUN_004f3fc0(CMirror *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = __arrinit(this_ptr->clip_planes,5,&g_SClipPlaneTypeInfo);
  return (CMirror *)((int)pvVar1 + -0x98);
}
