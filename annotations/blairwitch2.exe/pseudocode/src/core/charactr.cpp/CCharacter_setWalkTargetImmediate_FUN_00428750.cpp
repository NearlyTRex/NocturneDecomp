// Name: core_charactr.cpp_CCharacter_setWalkTargetImmediate_FUN_00428750
// Address: 00428750
// Address Range: [[00428750, 00428791]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setWalkTargetImmediate_FUN_00428750(CCharacter *this_ptr,CDemonActor *target)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_setWalkTargetImmediate_FUN_00428750(CCharacter *this_ptr,CDemonActor *target)

{
  CCharacter_full_vtable *pCVar1;
  
  this_ptr->walk_state = WALK_STATE_WALKING;
  this_ptr->walk_min_distance = -1.0;
  this_ptr->walk_to_target = target;
  pCVar1 = (this_ptr->base).vtable._uc;
  this_ptr->walk_max_distance = 1e+30;
  (*(pCVar1->_uc).setWalkTimeout)(this_ptr,-1.0);
  return;
}
