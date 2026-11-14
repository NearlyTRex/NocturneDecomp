// Name: core_morph.cpp_CMorph_dtor_FUN_005b6e80
// Address: 005b6e80
// Address Range: [[005b6e80, 005b6e9c]]
// Convention: __cdecl
// Signature: CMorph * __cdecl core_morph_cpp_CMorph_dtor_FUN_005b6e80(CMorph *this_ptr,uint flags)

#include "nocturne.h"

CMorph * __cdecl core_morph_cpp_CMorph_dtor_FUN_005b6e80(CMorph *this_ptr,uint flags)

{
  CMorph *pCVar1;
  
  core_morph_cpp_CMorph_free_FUN_005b6ea0(this_ptr);
  pCVar1 = (CMorph *)core_morph_cpp_FUN_005b7720(this_ptr->models,0);
  return pCVar1;
}
