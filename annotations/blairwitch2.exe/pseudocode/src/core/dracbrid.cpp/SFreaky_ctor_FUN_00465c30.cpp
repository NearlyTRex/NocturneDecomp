// Name: core_dracbrid.cpp_SFreaky_ctor_FUN_00465c30
// Address: 00465c30
// Address Range: [[00465c30, 00465c4a]]
// Convention: __cdecl
// Signature: SFreaky * __cdecl core_dracbrid_cpp_SFreaky_ctor_FUN_00465c30(SFreaky *this_ptr)

#include "nocturne.h"

SFreaky * __cdecl core_dracbrid_cpp_SFreaky_ctor_FUN_00465c30(SFreaky *this_ptr)

{
  int iVar1;
  
  iVar1 = __arrinit(this_ptr->control_points,4,&g_CVectorTypeInfo);
  return (SFreaky *)(iVar1 + -0x20);
}
