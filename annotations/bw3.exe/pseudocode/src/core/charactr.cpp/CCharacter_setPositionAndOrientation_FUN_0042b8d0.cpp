// Name: core_charactr.cpp_CCharacter_setPositionAndOrientation_FUN_0042b8d0
// Address: 0042b8d0
// Address Range: [[0042b8d0, 0042b91d]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_0042b8d0(CCharacter *this_ptr,CVector3f *new_position,CVector3f *new_orientation)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_0042b8d0(CCharacter *this_ptr,CVector3f *new_position,CVector3f *new_orientation)

{
  float fVar1;
  
  (*(((this_ptr->base).vtable._uc)->_uc).releaseVictim)(this_ptr);
  core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409d00
            (&this_ptr->base,new_position,new_orientation);
  fVar1 = _DAT_005dd234;
  (this_ptr->velocity).z = 0.0;
  (this_ptr->velocity).y = (this_ptr->velocity).z;
  (this_ptr->velocity).x = (this_ptr->velocity).y;
  this_ptr->closest_distance_threshold = fVar1;
  return;
}
