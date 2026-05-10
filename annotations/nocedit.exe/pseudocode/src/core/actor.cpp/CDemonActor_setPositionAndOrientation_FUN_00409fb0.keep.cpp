// Name: core_actor.cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0
// Address: 00409fb0
// MANUAL RECONSTRUCTION
// Address Range: [[00409fb0, 0040a008]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0(CDemonActor *this_ptr,CVector3f *new_position,CVector3f *new_orientation)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0(CDemonActor *this_ptr,CVector3f *new_position,CVector3f *new_orientation)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x56e);
  (this_ptr->location).position = *new_position;
  if ((CVector3f *)&this_ptr->orient != new_orientation) {
    (this_ptr->orient).vec = *new_orientation;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(this_ptr);
  return;
}
