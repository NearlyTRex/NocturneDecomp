// Name: core_moon.cpp_CMoon_ctor_FUN_00529a80
// Address: 00529a80
// Address Range: [[00529a80, 00529aa0]]
// Convention: __cdecl
// Signature: CMoon * __cdecl core_moon_cpp_CMoon_ctor_FUN_00529a80(CMoon *this_ptr)

#include "nocturne.h"

CMoon * __cdecl core_moon_cpp_CMoon_ctor_FUN_00529a80(CMoon *this_ptr)

{
  CMoon_ptr_8 pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00476cf0(&this_ptr->moon);
  ADJ(pCVar1)->rotation_phase = 0.0;
  ADJ(pCVar1)->is_loaded = 0;
  return ADJ(pCVar1);
}
