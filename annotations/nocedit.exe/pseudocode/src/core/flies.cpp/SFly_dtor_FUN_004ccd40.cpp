// Name: core_flies.cpp_SFly_dtor_FUN_004ccd40
// Address: 004ccd40
// Address Range: [[004ccd40, 004ccd55]]
// Convention: __cdecl
// Signature: SFly * __cdecl core_flies_cpp_SFly_dtor_FUN_004ccd40(SFly *this_ptr)

#include "nocturne.h"

SFly * __cdecl core_flies_cpp_SFly_dtor_FUN_004ccd40(SFly *this_ptr)

{
  CVector3f *pCVar1;
  
  pCVar1 = core_dracbrid_cpp_freeVectors_FUN_00486e30(this_ptr->unk2);
  return (SFly *)&pCVar1[-1].z;
}
