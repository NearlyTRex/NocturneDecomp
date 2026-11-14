// Name: core_flies.cpp_SFly_ctor_FUN_004c0a10
// Address: 004c0a10
// Address Range: [[004c0a10, 004c0a2a]]
// Convention: __cdecl
// Signature: SFly * __cdecl core_flies_cpp_SFly_ctor_FUN_004c0a10(SFly *this_ptr)

#include "nocturne.h"

SFly * __cdecl core_flies_cpp_SFly_ctor_FUN_004c0a10(SFly *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = __arrinit(this_ptr->control_points,4,&g_CVectorTypeInfo);
  return (SFly *)((int)pvVar1 + -4);
}
