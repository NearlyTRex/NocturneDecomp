// Name: core_morph.cpp_CMorph_dtor_FUN_00522fc0
// Address: 00522fc0
// Address Range: [[00522fc0, 00522fdc]]
// Convention: __cdecl
// Signature: CMorph * __cdecl core_morph_cpp_CMorph_dtor_FUN_00522fc0(CMorph *this_ptr,uint flags)

#include "nocturne.h"

CMorph * __cdecl core_morph_cpp_CMorph_dtor_FUN_00522fc0(CMorph *this_ptr,uint flags)

{
  CMorph *pCVar1;
  
  core_morph_cpp_CMorph_free_FUN_00522fe0(this_ptr);
  pCVar1 = (CMorph *)core_morph_cpp_FUN_00523880(this_ptr->models,0);
  return pCVar1;
}
