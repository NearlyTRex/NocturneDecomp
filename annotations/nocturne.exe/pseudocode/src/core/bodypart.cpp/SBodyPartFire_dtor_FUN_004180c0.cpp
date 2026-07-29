// Name: core_bodypart.cpp_SBodyPartFire_dtor_FUN_004180c0
// Address: 004180c0
// Address Range: [[004180c0, 004180d5]]
// Convention: __cdecl
// Signature: SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_dtor_FUN_004180c0(SBodyPartFire *this_ptr,uint flags)

#include "nocturne.h"

SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_dtor_FUN_004180c0(SBodyPartFire *this_ptr,uint flags)

{
  CDemonActor *pCVar1;
  
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&(this_ptr->flame).base,1);
  return (SBodyPartFire *)&pCVar1[-1].next_actor;
}
