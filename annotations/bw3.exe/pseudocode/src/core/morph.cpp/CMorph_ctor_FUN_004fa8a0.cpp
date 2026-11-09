// Name: core_morph.cpp_CMorph_ctor_FUN_004fa8a0
// Address: 004fa8a0
// Address Range: [[004fa8a0, 004fa8be]]
// Convention: __cdecl
// Signature: CMorph * __cdecl core_morph_cpp_CMorph_ctor_FUN_004fa8a0(CMorph *this_ptr)

#include "nocturne.h"

CMorph * __cdecl core_morph_cpp_CMorph_ctor_FUN_004fa8a0(CMorph *this_ptr)

{
  CMorph *pCVar1;
  
  pCVar1 = (CMorph *)__arrinit(this_ptr,2,&g_CMorphModelTypeInfo);
  *(uint *)(pCVar1 + 0xc28) = 1;
  return pCVar1;
}
