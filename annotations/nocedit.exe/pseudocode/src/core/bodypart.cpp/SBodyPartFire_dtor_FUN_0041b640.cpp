// Name: core_bodypart.cpp_SBodyPartFire_dtor_FUN_0041b640
// Address: 0041b640
// Address Range: [[0041b640, 0041b655]]
// Convention: __cdecl
// Signature: SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_dtor_FUN_0041b640(SBodyPartFire *this_ptr,uint flags)

#include "nocturne.h"

SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_dtor_FUN_0041b640(SBodyPartFire *this_ptr,uint flags)

{
  SBodyPartFire_ptr_12 pCVar1;
  
  pCVar1 = (SBodyPartFire_ptr_12)
           core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&(this_ptr->flame).base,1);
  return ADJ(pCVar1);
}
