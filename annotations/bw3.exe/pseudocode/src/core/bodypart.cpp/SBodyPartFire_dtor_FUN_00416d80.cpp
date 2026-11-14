// Name: core_bodypart.cpp_SBodyPartFire_dtor_FUN_00416d80
// Address: 00416d80
// Address Range: [[00416d80, 00416d95]]
// Convention: __cdecl
// Signature: SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_dtor_FUN_00416d80(SBodyPartFire *this_ptr,uint flags)

#include "nocturne.h"

SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_dtor_FUN_00416d80(SBodyPartFire *this_ptr,uint flags)

{
  CDemonActor *pCVar1;
  
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00408770(&(this_ptr->flame).base,1);
  return (SBodyPartFire *)&pCVar1[-1].next_actor;
}
