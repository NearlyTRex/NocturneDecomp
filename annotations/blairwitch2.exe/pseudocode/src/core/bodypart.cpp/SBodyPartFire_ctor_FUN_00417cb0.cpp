// Name: core_bodypart.cpp_SBodyPartFire_ctor_FUN_00417cb0
// Address: 00417cb0
// Address Range: [[00417cb0, 00417cc3]]
// Convention: __cdecl
// Signature: SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_ctor_FUN_00417cb0(SBodyPartFire *this_ptr)

#include "nocturne.h"

SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_ctor_FUN_00417cb0(SBodyPartFire *this_ptr)

{
  CFlame *pCVar1;
  
  pCVar1 = core_flame_cpp_CFlame_ctor_FUN_0049f180((CFlame *)&this_ptr->field_0xc);
  return (SBodyPartFire *)&pCVar1[-1].field_0x3f4;
}
