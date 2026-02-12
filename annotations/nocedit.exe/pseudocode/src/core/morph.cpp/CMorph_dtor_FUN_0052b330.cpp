// Name: core_morph.cpp_CMorph_dtor_FUN_0052b330
// Address: 0052b330
// Address Range: [[0052b330, 0052b34c]]
// Convention: __cdecl
// Signature: CMorph * __cdecl core_morph_cpp_CMorph_dtor_FUN_0052b330(CMorph *this_ptr,uint flags)

#include "nocturne.h"

CMorph * __cdecl core_morph_cpp_CMorph_dtor_FUN_0052b330(CMorph *this_ptr,uint flags)

{
  CMorph *pCVar1;
  
  core_morph_cpp_CMorph_FUN_0052b350(this_ptr);
  pCVar1 = (CMorph *)core_morph_cpp_CMorphModel_arrdtor_FUN_0052cd10(this_ptr->models,0);
  return pCVar1;
}
