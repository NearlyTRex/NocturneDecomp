// Name: core_flies.cpp_SFly_ctor_FUN_004ccd20
// Address: 004ccd20
// Address Range: [[004ccd20, 004ccd3a]]
// Convention: __cdecl
// Signature: SFly * __cdecl core_flies_cpp_SFly_ctor_FUN_004ccd20(SFly *this_ptr)

#include "nocturne.h"

SFly * __cdecl core_flies_cpp_SFly_ctor_FUN_004ccd20(SFly *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = __arrinit(this_ptr->control_points,4,&g_CVectorTypeInfo);
  return (SFly *)((int)pvVar1 + -4);
}
