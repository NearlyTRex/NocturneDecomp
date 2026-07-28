// Name: core_mirror.cpp_CMirror_ctor_FUN_004d6550
// Address: 004d6550
// Address Range: [[004d6550, 004d656e]]
// Convention: __cdecl
// Signature: CMirror * __cdecl core_mirror_cpp_CMirror_ctor_FUN_004d6550(CMirror *this_ptr)

#include "nocturne.h"

CMirror * __cdecl core_mirror_cpp_CMirror_ctor_FUN_004d6550(CMirror *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = __arrinit
                     (this_ptr->clip_planes,5,&g_SClipPlaneTypeInfo_005a08a0);
  return (CMirror *)((int)pvVar1 + -0x98);
}
