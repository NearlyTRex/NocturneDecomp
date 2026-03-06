// Name: core_dracbrid.cpp_SFreaky_ctor_FUN_00486d30
// Address: 00486d30
// Address Range: [[00486d30, 00486d4a]]
// Convention: __cdecl
// Signature: SFreaky * __cdecl core_dracbrid_cpp_SFreaky_ctor_FUN_00486d30(SFreaky *this_ptr)

#include "nocturne.h"

SFreaky * __cdecl core_dracbrid_cpp_SFreaky_ctor_FUN_00486d30(SFreaky *this_ptr)

{
  SFreaky_ptr_32 pvVar1;
  
  pvVar1 = __arrinit(this_ptr->control_points,4,&g_CVectorTypeInfo);
  return ADJ(pvVar1);
}
