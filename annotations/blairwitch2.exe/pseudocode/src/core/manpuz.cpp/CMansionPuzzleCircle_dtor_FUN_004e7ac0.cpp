// Name: core_manpuz.cpp_CMansionPuzzleCircle_dtor_FUN_004e7ac0
// Address: 004e7ac0
// Address Range: [[004e7ac0, 004e7b0d]]
// Convention: unknown
// Signature: CMansionPuzzleCircle * core_manpuz_cpp_CMansionPuzzleCircle_dtor_FUN_004e7ac0(CMansionPuzzleCircle *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CMansionPuzzleCircle * core_manpuz_cpp_CMansionPuzzleCircle_dtor_FUN_004e7ac0(CMansionPuzzleCircle *this_ptr,uint flags)

{
  CMansionPuzzleCircle *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CMansionPuzzleCircleTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (CMansionPuzzleCircle *)core_actor_cpp_CDemonActor_dtor_FUN_00408930(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
