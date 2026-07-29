// Name: core_skeleton.cpp_SVert_ctor_FUN_0051f840
// Address: 0051f840
// Address Range: [[0051f840, 0051f85a]]
// Convention: __cdecl
// Signature: SVert * __cdecl core_skeleton_cpp_SVert_ctor_FUN_0051f840(SVert *this_ptr)

#include "nocturne.h"

SVert * __cdecl core_skeleton_cpp_SVert_ctor_FUN_0051f840(SVert *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = __arrinit(&this_ptr->position,3,&g_CVectorTypeInfo_005993b0);
  return (SVert *)((int)pvVar1 + -0x10);
}
