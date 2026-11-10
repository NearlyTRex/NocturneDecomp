// Name: core_bodypart.cpp_SBodyPartFire_ctor_FUN_0041b130
// Address: 0041b130
// Address Range: [[0041b130, 0041b143]]
// Convention: __cdecl
// Signature: SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_ctor_FUN_0041b130(SBodyPartFire *this_ptr)

#include "nocturne.h"

SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_ctor_FUN_0041b130(SBodyPartFire *this_ptr)

{
  CFlame *pCVar1;
  
  pCVar1 = core_flame_cpp_CFlame_ctor_FUN_004b7a30((CFlame *)&this_ptr->field_0xc);
  return (SBodyPartFire *)&pCVar1[-1].do_visibility_check;
}
