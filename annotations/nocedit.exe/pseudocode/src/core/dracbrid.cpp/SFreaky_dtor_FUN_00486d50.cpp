// Name: core_dracbrid.cpp_SFreaky_dtor_FUN_00486d50
// Address: 00486d50
// Address Range: [[00486d50, 00486d65]]
// Convention: __cdecl
// Signature: SFreaky * __cdecl core_dracbrid_cpp_SFreaky_dtor_FUN_00486d50(SFreaky *this_ptr)

#include "nocturne.h"

SFreaky * __cdecl core_dracbrid_cpp_SFreaky_dtor_FUN_00486d50(SFreaky *this_ptr)

{
  CVector3f *pCVar1;
  
  pCVar1 = core_dracbrid_cpp_freeVectors_FUN_00486e30(this_ptr->unk2);
  return (SFreaky *)&pCVar1[-3].y;
}
