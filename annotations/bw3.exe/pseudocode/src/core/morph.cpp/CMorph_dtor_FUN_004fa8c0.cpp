// Name: core_morph.cpp_CMorph_dtor_FUN_004fa8c0
// Address: 004fa8c0
// Address Range: [[004fa8c0, 004fa8dc]]
// Convention: __cdecl
// Signature: CMorph * __cdecl core_morph_cpp_CMorph_dtor_FUN_004fa8c0(CMorph *this_ptr,uint flags)

#include "nocturne.h"

CMorph * __cdecl core_morph_cpp_CMorph_dtor_FUN_004fa8c0(CMorph *this_ptr,uint flags)

{
  CMorph *pCVar1;
  
  core_morph_cpp_CMorph_free_FUN_004fa8e0(this_ptr);
  pCVar1 = (CMorph *)core_morph_cpp_FUN_004fb180(this_ptr->models,0);
  return pCVar1;
}
