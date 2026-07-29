// Name: core_flies.cpp_SFly_ctor_FUN_0048fca0
// Address: 0048fca0
// Address Range: [[0048fca0, 0048fcba]]
// Convention: __cdecl
// Signature: SFly * __cdecl core_flies_cpp_SFly_ctor_FUN_0048fca0(SFly *this_ptr)

#include "nocturne.h"

SFly * __cdecl core_flies_cpp_SFly_ctor_FUN_0048fca0(SFly *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = __arrinit
                     (this_ptr->control_points,4,&g_CVectorTypeInfo_005993b0);
  return (SFly *)((int)pvVar1 + -4);
}
