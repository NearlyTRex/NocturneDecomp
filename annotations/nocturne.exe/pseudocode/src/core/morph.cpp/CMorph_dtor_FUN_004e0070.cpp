// Name: core_morph.cpp_CMorph_dtor_FUN_004e0070
// Address: 004e0070
// Address Range: [[004e0070, 004e008c]]
// Convention: __cdecl
// Signature: CMorph * __cdecl core_morph_cpp_CMorph_dtor_FUN_004e0070(CMorph *this_ptr,uint flags)

#include "nocturne.h"

CMorph * __cdecl core_morph_cpp_CMorph_dtor_FUN_004e0070(CMorph *this_ptr,uint flags)

{
  CMorph *pCVar1;
  
  core_morph_cpp_CMorph_free_FUN_004e0090(this_ptr);
  pCVar1 = (CMorph *)core_morph_cpp_CMorphModel_arrdtor_FUN_004e08c0(this_ptr->models,0);
  return pCVar1;
}
