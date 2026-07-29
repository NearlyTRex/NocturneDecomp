// Name: core_flies.cpp_SFly_dtor_FUN_0048fcc0
// Address: 0048fcc0
// Address Range: [[0048fcc0, 0048fcd5]]
// Convention: __cdecl
// Signature: SFly * __cdecl core_flies_cpp_SFly_dtor_FUN_0048fcc0(SFly *this_ptr,uint flags)

#include "nocturne.h"

SFly * __cdecl core_flies_cpp_SFly_dtor_FUN_0048fcc0(SFly *this_ptr,uint flags)

{
  CVector3f *pCVar1;
  
  pCVar1 = core_dracbrid_cpp_CVector3f_arrdtor_FUN_0045b410(this_ptr->control_points,0);
  return (SFly *)&pCVar1[-1].z;
}
