// Name: core_bodypart.cpp_SBodyPartFire_dtor_FUN_0041b640
// Address: 0041b640
// Address Range: [[0041b640, 0041b655]]
// Convention: __cdecl
// Signature: SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_dtor_FUN_0041b640(SBodyPartFire *this_ptr,uint flags)

#include "nocturne.h"

SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_dtor_FUN_0041b640(SBodyPartFire *this_ptr,uint flags)

{
  CDemonActor *pCVar1;
  
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&(this_ptr->flame).base,1);
  return (SBodyPartFire *)&pCVar1[-1].next_actor;
}
