// Name: core_skeleton.cpp_SVert_ctor_FUN_005a1f70
// Address: 005a1f70
// Address Range: [[005a1f70, 005a1f8a]]
// Convention: __cdecl
// Signature: SVert * __cdecl core_skeleton_cpp_SVert_ctor_FUN_005a1f70(SVert *this_ptr)

#include "nocturne.h"

SVert * __cdecl core_skeleton_cpp_SVert_ctor_FUN_005a1f70(SVert *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = __arrinit(&this_ptr->position,3,&g_CVectorTypeInfo);
  return (SVert *)((int)pvVar1 + -0x10);
}
