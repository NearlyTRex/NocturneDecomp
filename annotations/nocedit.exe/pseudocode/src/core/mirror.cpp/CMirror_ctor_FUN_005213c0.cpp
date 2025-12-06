// Name: core_mirror.cpp_CMirror_ctor_FUN_005213c0
// Address: 005213c0
// Address Range: [[005213c0, 005213de]]
// Convention: __cdecl
// Signature: CMirror * core_mirror.cpp_CMirror_ctor_FUN_005213c0(CMirror * this_ptr)

#include "nocturne.h"

CMirror * __cdecl core_mirror_cpp_CMirror_ctor_FUN_005213c0(CMirror *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (this_ptr->clip_planes,5,&g_SClipPlaneTypeInfo);
  return (CMirror *)((int)pvVar1 + -0x98);
}
