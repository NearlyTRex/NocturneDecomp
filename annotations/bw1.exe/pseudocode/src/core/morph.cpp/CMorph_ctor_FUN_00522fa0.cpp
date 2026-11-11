// Name: core_morph.cpp_CMorph_ctor_FUN_00522fa0
// Address: 00522fa0
// Address Range: [[00522fa0, 00522fbe]]
// Convention: __cdecl
// Signature: CMorph * __cdecl core_morph_cpp_CMorph_ctor_FUN_00522fa0(CMorph *this_ptr)

#include "nocturne.h"

CMorph * __cdecl core_morph_cpp_CMorph_ctor_FUN_00522fa0(CMorph *this_ptr)

{
  CMorph *pCVar1;
  
  pCVar1 = (CMorph *)__arrinit(this_ptr,2,&g_CMorphModelTypeInfo);
  pCVar1->rescale_enabled = 1;
  return pCVar1;
}
