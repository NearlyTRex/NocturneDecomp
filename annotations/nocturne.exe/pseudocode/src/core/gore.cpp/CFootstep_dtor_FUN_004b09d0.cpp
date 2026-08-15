// Name: core_gore.cpp_CFootstep_dtor_FUN_004b09d0
// Address: 004b09d0
// Address Range: [[004b09d0, 004b09e5]]
// Convention: __cdecl
// Signature: CFootstep * __cdecl core_gore_cpp_CFootstep_dtor_FUN_004b09d0(CFootstep *this_ptr,uint flags)

#include "nocturne.h"

CFootstep * __cdecl core_gore_cpp_CFootstep_dtor_FUN_004b09d0(CFootstep *this_ptr,uint flags)

{
  CVector3f *pCVar1;
  
  pCVar1 = core_dracbrid_cpp_CVector3f_arrdtor4_FUN_0045b410(this_ptr->corners,0);
  return (CFootstep *)&pCVar1[-1].y;
}
