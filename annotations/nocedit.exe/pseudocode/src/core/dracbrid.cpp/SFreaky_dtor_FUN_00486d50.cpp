// Name: core_dracbrid.cpp_SFreaky_dtor_FUN_00486d50
// Address: 00486d50
// Address Range: [[00486d50, 00486d65]]
// Convention: __cdecl
// Signature: SFreaky * __cdecl core_dracbrid_cpp_SFreaky_dtor_FUN_00486d50(SFreaky *this_ptr,uint flags)

#include "nocturne.h"

SFreaky * __cdecl core_dracbrid_cpp_SFreaky_dtor_FUN_00486d50(SFreaky *this_ptr,uint flags)

{
  CVector3f *pCVar1;
  
  pCVar1 = core_dracbrid_cpp_CVector3f_arrdtor_FUN_00486e30(this_ptr->unk2,0);
  return (SFreaky *)&pCVar1[-3].y;
}
