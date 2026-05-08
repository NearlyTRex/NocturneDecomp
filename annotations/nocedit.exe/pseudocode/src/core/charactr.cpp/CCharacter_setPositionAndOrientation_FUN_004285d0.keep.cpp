// Name: core_charactr.cpp_CCharacter_setPositionAndOrientation_FUN_004285d0
// Address: 004285d0
// MANUAL RECONSTRUCTION
// Address Range: [[004285d0, 0042861d]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004285d0(CCharacter *this_ptr,CVector3f *new_position,CVector3f *new_orientation)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004285d0(CCharacter *this_ptr,CVector3f *new_position,CVector3f *new_orientation)

{
  float fVar1;
  
  (*(((this_ptr->base).vtable._uc)->_uc).releaseVictim)(this_ptr);
  core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0
            (&this_ptr->base,new_position,new_orientation);
  fVar1 = 9999.0f;
  (this_ptr->velocity).x = 0.0;
  (this_ptr->velocity).y = 0.0;
  (this_ptr->velocity).z = 0.0;
  this_ptr->closest_distance_threshold = fVar1;
  return;
}
