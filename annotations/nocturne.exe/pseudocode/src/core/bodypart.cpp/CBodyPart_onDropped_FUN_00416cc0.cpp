// Name: core_bodypart.cpp_CBodyPart_onDropped_FUN_00416cc0
// Address: 00416cc0
// Address Range: [[00416cc0, 00416d2a]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_onDropped_FUN_00416cc0(CBodyPart *this_ptr,CVector3f *drop_position)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_onDropped_FUN_00416cc0(CBodyPart *this_ptr,CVector3f *drop_position)

{
  CVector3f local_10;
  
  this_ptr->carried_by_actor = (CDemonActor *)0x0;
  core_bodypart_cpp_CBodyPart_setupPhysicsBox_FUN_00417d70(this_ptr);
  if (drop_position == (CVector3f *)0x0) {
    this_ptr->physics_timer = 10.0;
    return;
  }
  local_10.z = 0.0;
  local_10.y = 0.0;
  local_10.x = 9.424778;
  core_box_cpp_CBox_setupVelocities_FUN_0041cb40(&this_ptr->physics_box,drop_position,&local_10);
  this_ptr->physics_timer = 10.0;
  return;
}
