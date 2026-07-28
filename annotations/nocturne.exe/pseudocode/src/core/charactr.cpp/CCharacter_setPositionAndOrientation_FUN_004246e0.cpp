// Name: core_charactr.cpp_CCharacter_setPositionAndOrientation_FUN_004246e0
// Address: 004246e0
// Address Range: [[004246e0, 0042472d]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004246e0(CCharacter *this_ptr,CVector3f *new_position,CVector3f *new_orientation)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004246e0(CCharacter *this_ptr,CVector3f *new_position,CVector3f *new_orientation)

{
  float fVar1;
  int unaff_EBX;
  CVector3f *unaff_retaddr;
  
  (*(((this_ptr->base).vtable._uc)->_uc).kill)(this_ptr,unaff_EBX,unaff_retaddr,(float)this_ptr);
  core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_0040b150();
  fVar1 = 9999.0f;
  (this_ptr->velocity).z = 0.0;
  (this_ptr->velocity).y = (this_ptr->velocity).z;
  (this_ptr->velocity).x = (this_ptr->velocity).y;
  this_ptr->closest_distance_threshold = fVar1;
  return;
}
