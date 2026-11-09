// Name: core_bodypart.cpp_SBodyPartFire_ctor_FUN_00416d60
// Address: 00416d60
// Address Range: [[00416d60, 00416d73]]
// Convention: __cdecl
// Signature: SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_ctor_FUN_00416d60(SBodyPartFire *this_ptr)

#include "nocturne.h"

SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_ctor_FUN_00416d60(SBodyPartFire *this_ptr)

{
  CFlame *pCVar1;
  
  pCVar1 = core_flame_cpp_CFlame_ctor_FUN_004a59b0((CFlame *)&this_ptr->field_0xc);
  return (SBodyPartFire *)&pCVar1[-1].field_0x298;
}
