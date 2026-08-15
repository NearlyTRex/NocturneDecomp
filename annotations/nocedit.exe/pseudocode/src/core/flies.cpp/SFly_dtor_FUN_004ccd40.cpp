// Name: core_flies.cpp_SFly_dtor_FUN_004ccd40
// Address: 004ccd40
// Address Range: [[004ccd40, 004ccd55]]
// Convention: __cdecl
// Signature: SFly * __cdecl core_flies_cpp_SFly_dtor_FUN_004ccd40(SFly *this_ptr,uint flags)

#include "nocturne.h"

SFly * __cdecl core_flies_cpp_SFly_dtor_FUN_004ccd40(SFly *this_ptr,uint flags)

{
  SFly_ptr_4 pCVar1;
  
  pCVar1 = (SFly_ptr_4)core_dracbrid_cpp_CVector3f_arrdtor4_FUN_00486e30(this_ptr->control_points,0)
  ;
  return ADJ(pCVar1);
}
