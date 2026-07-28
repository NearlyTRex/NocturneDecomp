// Name: core_morph.cpp_CMorph_ctor_FUN_004e0050
// Address: 004e0050
// Address Range: [[004e0050, 004e006e]]
// Convention: __cdecl
// Signature: CMorph * __cdecl core_morph_cpp_CMorph_ctor_FUN_004e0050(CMorph *this_ptr)

#include "nocturne.h"

CMorph * __cdecl core_morph_cpp_CMorph_ctor_FUN_004e0050(CMorph *this_ptr)

{
  CMorph *pCVar1;
  
  pCVar1 = (CMorph *)__arrinit(this_ptr,2,&g_CMorphModelTypeInfo_005a0ce0);
  pCVar1->rescale_enabled = 1;
  return pCVar1;
}
