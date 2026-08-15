// Name: core_dracbrid.cpp_SFreaky_dtor_FUN_0045b330
// Address: 0045b330
// Address Range: [[0045b330, 0045b345]]
// Convention: __cdecl
// Signature: SFreaky * __cdecl core_dracbrid_cpp_SFreaky_dtor_FUN_0045b330(SFreaky *this_ptr,uint flags)

#include "nocturne.h"

SFreaky * __cdecl core_dracbrid_cpp_SFreaky_dtor_FUN_0045b330(SFreaky *this_ptr,uint flags)

{
  CVector3f *pCVar1;
  
  pCVar1 = core_dracbrid_cpp_CVector3f_arrdtor4_FUN_0045b410(this_ptr->control_points,0);
  return (SFreaky *)&pCVar1[-3].y;
}
