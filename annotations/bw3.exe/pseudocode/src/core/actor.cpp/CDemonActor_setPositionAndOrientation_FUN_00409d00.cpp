// Name: core_actor.cpp_CDemonActor_setPositionAndOrientation_FUN_00409d00
// Address: 00409d00
// Address Range: [[00409d00, 00409d4f]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409d00(CDemonActor *this_ptr,CVector3f *new_position,CVector3f *new_orientation)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409d00(CDemonActor *this_ptr,CVector3f *new_position,CVector3f *new_orientation)

{
  (this_ptr->location).position.x = new_position->x;
  (this_ptr->location).position.y = new_position->y;
  (this_ptr->location).position.z = new_position->z;
  if ((CVector3f *)&this_ptr->orient != new_orientation) {
    (this_ptr->orient).vec.x = new_orientation->x;
    (this_ptr->orient).vec.y = new_orientation->y;
    (this_ptr->orient).vec.z = new_orientation->z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(this_ptr);
  return;
}
