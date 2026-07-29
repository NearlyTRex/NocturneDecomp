// Name: core_bodypart.cpp_SBodyPartFire_ctor_FUN_004180a0
// Address: 004180a0
// Address Range: [[004180a0, 004180b3]]
// Convention: __cdecl
// Signature: SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_ctor_FUN_004180a0(SBodyPartFire *this_ptr)

#include "nocturne.h"

SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_ctor_FUN_004180a0(SBodyPartFire *this_ptr)

{
  CFlame *pCVar1;
  
  pCVar1 = core_flame_cpp_CFlame_ctor_FUN_0048cf60(&this_ptr->flame);
  return (SBodyPartFire *)&pCVar1[-1].do_visibility_check;
}
