// Name: core_gore.cpp_FUN_004ee370
// Address: 004ee370
// Address Range: [[004ee370, 004ee38a]]
// Convention: __cdecl
// Signature: CFootstep * core_gore.cpp_FUN_004ee370(CFootstep * this_ptr)

#include "nocturne.h"

CFootstep * __cdecl core_gore_cpp_FUN_004ee370(CFootstep *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (this_ptr->field0_0x0 + 8,4,&g_CVectorTypeInfo);
  return (CFootstep *)((int)pvVar1 + -8);
}
