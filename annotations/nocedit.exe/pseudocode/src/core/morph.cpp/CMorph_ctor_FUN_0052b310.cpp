// Name: core_morph.cpp_CMorph_ctor_FUN_0052b310
// Address: 0052b310
// Address Range: [[0052b310, 0052b32e]]
// Convention: __cdecl
// Signature: CMorph * __cdecl core_morph_cpp_CMorph_ctor_FUN_0052b310(CMorph *this_ptr)

#include "nocturne.h"

CMorph * __cdecl core_morph_cpp_CMorph_ctor_FUN_0052b310(CMorph *this_ptr)

{
  CMorph *pCVar1;
  
  pCVar1 = __arrinit(this_ptr,2,&g_CMorphModelTypeInfo);
  pCVar1->rescale_enabled = 1;
  return pCVar1;
}
