// Name: core_morph.cpp_CMorph_ctor_FUN_005b6e60
// Address: 005b6e60
// Address Range: [[005b6e60, 005b6e7e]]
// Convention: __cdecl
// Signature: CMorph * __cdecl core_morph_cpp_CMorph_ctor_FUN_005b6e60(CMorph *this_ptr)

#include "nocturne.h"

CMorph * __cdecl core_morph_cpp_CMorph_ctor_FUN_005b6e60(CMorph *this_ptr)

{
  CMorph *pCVar1;
  
  pCVar1 = (CMorph *)__arrinit(this_ptr,2,&g_CMorphModelTypeInfo);
  *(uint *)(pCVar1 + 0xc28) = 1;
  return pCVar1;
}
