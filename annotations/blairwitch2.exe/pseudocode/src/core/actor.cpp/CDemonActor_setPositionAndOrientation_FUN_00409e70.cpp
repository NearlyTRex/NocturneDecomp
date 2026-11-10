// Name: core_actor.cpp_CDemonActor_setPositionAndOrientation_FUN_00409e70
// Address: 00409e70
// Address Range: [[00409e70, 00409ebf]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409e70(CDemonActor *this_ptr,CVector3f *new_position,CVector3f *new_orientation)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409e70(CDemonActor *this_ptr,CVector3f *new_position,CVector3f *new_orientation)

{
  *(float *)&this_ptr->field_0x20 = new_position->x;
  *(float *)&this_ptr->field_0x24 = new_position->y;
  *(float *)&this_ptr->field_0x28 = new_position->z;
  if ((CVector3f *)&this_ptr->orient != new_orientation) {
    (this_ptr->orient).vec.x = new_orientation->x;
    (this_ptr->orient).vec.y = new_orientation->y;
    (this_ptr->orient).vec.z = new_orientation->z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(this_ptr);
  return;
}
