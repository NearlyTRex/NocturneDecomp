// Name: core_gore.cpp_CFootstep_dtor_FUN_004ee390
// Address: 004ee390
// Address Range: [[004ee390, 004ee3a5]]
// Convention: __cdecl
// Signature: CFootstep * __cdecl core_gore_cpp_CFootstep_dtor_FUN_004ee390(CFootstep *this_ptr,uint flags)

#include "nocturne.h"

CFootstep * __cdecl core_gore_cpp_CFootstep_dtor_FUN_004ee390(CFootstep *this_ptr,uint flags)

{
  CFootstep_ptr_8 pCVar1;
  
  pCVar1 = (CFootstep_ptr_8)core_dracbrid_cpp_CVector3f_arrdtor4_FUN_00486e30(this_ptr->corners,0);
  return ADJ(pCVar1);
}
