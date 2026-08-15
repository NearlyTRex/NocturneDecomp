// Name: core_dracbrid.cpp_SFreaky_dtor_FUN_00486d50
// Address: 00486d50
// Address Range: [[00486d50, 00486d65]]
// Convention: __cdecl
// Signature: SFreaky * __cdecl core_dracbrid_cpp_SFreaky_dtor_FUN_00486d50(SFreaky *this_ptr,uint flags)

#include "nocturne.h"

SFreaky * __cdecl core_dracbrid_cpp_SFreaky_dtor_FUN_00486d50(SFreaky *this_ptr,uint flags)

{
  SFreaky_ptr_32 pCVar1;
  
  pCVar1 = (SFreaky_ptr_32)
           core_dracbrid_cpp_CVector3f_arrdtor4_FUN_00486e30(this_ptr->control_points,0);
  return ADJ(pCVar1);
}
