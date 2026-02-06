// Name: core_gore.cpp_FUN_004ee390
// Address: 004ee390
// Address Range: [[004ee390, 004ee3a5]]
// Convention: __cdecl
// Signature: CFootstep * __cdecl core_gore_cpp_FUN_004ee390(CFootstep *this_ptr)

#include "nocturne.h"

CFootstep * __cdecl core_gore_cpp_FUN_004ee390(CFootstep *this_ptr)

{
  CVector3f *pCVar1;
  
  pCVar1 = core_dracbrid_cpp_freeVectors_FUN_00486e30((CVector3f *)(this_ptr->unk + 8));
  return (CFootstep *)&pCVar1[-1].y;
}
