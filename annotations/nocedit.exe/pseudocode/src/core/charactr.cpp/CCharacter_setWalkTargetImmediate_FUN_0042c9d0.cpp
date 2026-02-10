// Name: core_charactr.cpp_CCharacter_setWalkTargetImmediate_FUN_0042c9d0
// Address: 0042c9d0
// Address Range: [[0042c9d0, 0042ca11]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setWalkTargetImmediate_FUN_0042c9d0 (CCharacter *this_ptr,CDemonActor *target)

#include "nocturne.h"

void __cdecl
core_charactr_cpp_CCharacter_setWalkTargetImmediate_FUN_0042c9d0
          (CCharacter *this_ptr,CDemonActor *target)

{
  CCharacter_full_vtable *pCVar1;
  
  this_ptr->is_walking = 1;
  this_ptr->walk_min_distance = -1.0;
  this_ptr->walk_to_target = target;
  pCVar1 = (this_ptr->base).vtable._uc;
  this_ptr->walk_max_distance = 1e+30;
  (*(pCVar1->_uc).setWalkTimeout)(this_ptr,-1.0);
  return;
}
