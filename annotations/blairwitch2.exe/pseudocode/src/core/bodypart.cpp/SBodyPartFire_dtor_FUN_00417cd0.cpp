// Name: core_bodypart.cpp_SBodyPartFire_dtor_FUN_00417cd0
// Address: 00417cd0
// Address Range: [[00417cd0, 00417ce5]]
// Convention: __cdecl
// Signature: SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_dtor_FUN_00417cd0(SBodyPartFire *this_ptr,uint flags)

#include "nocturne.h"

SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_dtor_FUN_00417cd0(SBodyPartFire *this_ptr,uint flags)

{
  CDemonActor *pCVar1;
  
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00408930((CDemonActor *)&this_ptr->field_0xc,1);
  return (SBodyPartFire *)&pCVar1[-1].field_0x2a8;
}
