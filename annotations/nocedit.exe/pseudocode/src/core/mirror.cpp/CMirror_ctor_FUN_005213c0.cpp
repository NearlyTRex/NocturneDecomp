// Name: core_mirror.cpp_CMirror_ctor_FUN_005213c0
// Address: 005213c0
// Address Range: [[005213c0, 005213de]]
// Convention: __cdecl
// Signature: CMirror * __cdecl core_mirror_cpp_CMirror_ctor_FUN_005213c0(CMirror *this_ptr)

#include "nocturne.h"

CMirror * __cdecl core_mirror_cpp_CMirror_ctor_FUN_005213c0(CMirror *this_ptr)

{
  CMirror_ptr_152 pvVar1;
  
  pvVar1 = __arrinit(this_ptr->clip_planes,5,&g_SClipPlaneTypeInfo);
  return ADJ(pvVar1);
}
