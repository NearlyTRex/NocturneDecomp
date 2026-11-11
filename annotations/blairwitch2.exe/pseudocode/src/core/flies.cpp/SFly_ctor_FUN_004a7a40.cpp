// Name: core_flies.cpp_SFly_ctor_FUN_004a7a40
// Address: 004a7a40
// Address Range: [[004a7a40, 004a7a5a]]
// Convention: __cdecl
// Signature: SFly * __cdecl core_flies_cpp_SFly_ctor_FUN_004a7a40(SFly *this_ptr)

#include "nocturne.h"

SFly * __cdecl core_flies_cpp_SFly_ctor_FUN_004a7a40(SFly *this_ptr)

{
  int iVar1;
  
  iVar1 = __arrinit(this_ptr->control_points,4,&g_CVectorTypeInfo);
  return (SFly *)(iVar1 + -4);
}
