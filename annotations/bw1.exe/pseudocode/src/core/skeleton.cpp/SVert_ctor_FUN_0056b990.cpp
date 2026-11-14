// Name: core_skeleton.cpp_SVert_ctor_FUN_0056b990
// Address: 0056b990
// Address Range: [[0056b990, 0056b9aa]]
// Convention: __cdecl
// Signature: SVert * __cdecl core_skeleton_cpp_SVert_ctor_FUN_0056b990(SVert *this_ptr)

#include "nocturne.h"

SVert * __cdecl core_skeleton_cpp_SVert_ctor_FUN_0056b990(SVert *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = __arrinit(this_ptr->bone_offsets,3,&g_CVectorTypeInfo);
  return (SVert *)((int)pvVar1 + -0x10);
}
