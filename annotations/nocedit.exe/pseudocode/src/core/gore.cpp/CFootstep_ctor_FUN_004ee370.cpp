// Name: core_gore.cpp_CFootstep_ctor_FUN_004ee370
// Address: 004ee370
// Address Range: [[004ee370, 004ee38a]]
// Convention: __cdecl
// Signature: CFootstep * __cdecl core_gore_cpp_CFootstep_ctor_FUN_004ee370(CFootstep *this_ptr)

#include "nocturne.h"

CFootstep * __cdecl core_gore_cpp_CFootstep_ctor_FUN_004ee370(CFootstep *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = __arrinit(this_ptr->corners,4,&g_CVectorTypeInfo);
  return (CFootstep *)((int)pvVar1 + -8);
}
