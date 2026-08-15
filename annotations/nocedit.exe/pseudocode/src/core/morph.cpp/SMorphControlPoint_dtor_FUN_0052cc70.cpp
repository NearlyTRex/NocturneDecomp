// Name: core_morph.cpp_SMorphControlPoint_dtor_FUN_0052cc70
// Address: 0052cc70
// Address Range: [[0052cc70, 0052cc85]]
// Convention: __cdecl
// Signature: SMorphControlPoint * __cdecl core_morph_cpp_SMorphControlPoint_dtor_FUN_0052cc70(SMorphControlPoint *this_ptr,uint flags)

#include "nocturne.h"

SMorphControlPoint * __cdecl core_morph_cpp_SMorphControlPoint_dtor_FUN_0052cc70(SMorphControlPoint *this_ptr,uint flags)

{
  SMorphControlPoint_ptr_8 pCVar1;
  
  pCVar1 = (SMorphControlPoint_ptr_8)
           core_morph_cpp_CVector3f_arrdtor2_FUN_0052cc90(this_ptr->position,0);
  return ADJ(pCVar1);
}
