// Name: core_bodypart.cpp_SBodyPartFire_dtor_FUN_004180c0
// Address: 004180c0
// Address Range: [[004180c0, 004180d5]]
// Convention: unknown
// Signature: CDemonActor ** core_bodypart_cpp_SBodyPartFire_dtor_FUN_004180c0(int param_1)

#include "nocturne.h"

CDemonActor ** core_bodypart_cpp_SBodyPartFire_dtor_FUN_004180c0(int param_1)

{
  CDemonActor *pCVar1;
  
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0((CDemonActor *)(param_1 + 0xc),1);
  return &pCVar1[-1].next_actor;
}
