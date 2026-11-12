// Name: core_skeleton.cpp_SVert_ctor_FUN_00549310
// Address: 00549310
// Address Range: [[00549310, 0054932a]]
// Convention: __cdecl
// Signature: SVert * __cdecl core_skeleton_cpp_SVert_ctor_FUN_00549310(SVert *this_ptr)

#include "nocturne.h"

SVert * __cdecl core_skeleton_cpp_SVert_ctor_FUN_00549310(SVert *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = __arrinit(this_ptr->bone_offsets,3,&g_CVectorTypeInfo);
  return (SVert *)((int)pvVar1 + -0x10);
}
