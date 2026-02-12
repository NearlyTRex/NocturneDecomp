// Name: core_bodypart.cpp_SBodyPartFire_ctor_FUN_0041b620
// Address: 0041b620
// Address Range: [[0041b620, 0041b633]]
// Convention: __cdecl
// Signature: SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_ctor_FUN_0041b620(SBodyPartFire *this_ptr)

#include "nocturne.h"

SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_ctor_FUN_0041b620(SBodyPartFire *this_ptr)

{
  SBodyPartFire_ptr_12 pCVar1;
  
  pCVar1 = core_flame_cpp_CFlame_ctor_FUN_004c9aa0(&this_ptr->flame);
  return ADJ(pCVar1);
}
