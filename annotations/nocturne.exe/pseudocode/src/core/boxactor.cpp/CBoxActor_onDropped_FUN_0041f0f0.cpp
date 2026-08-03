// Name: core_boxactor.cpp_CBoxActor_onDropped_FUN_0041f0f0
// Address: 0041f0f0
// Address Range: [[0041f0f0, 0041f146]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_onDropped_FUN_0041f0f0(CBoxActor *this_ptr,CVector3f *drop_position)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CBoxActor_onDropped_FUN_0041f0f0(CBoxActor *this_ptr,CVector3f *drop_position)

{
  CVector3f local_10;
  
  this_ptr->carrier_actor = (CDemonActor *)0x0;
  core_boxactor_cpp_CBoxActor_setupPhysicsBox_FUN_0041e4d0(this_ptr);
  if (drop_position == (CVector3f *)0x0) {
    return;
  }
  local_10.z = 0.0;
  local_10.y = 0.0;
  local_10.x = 9.424778;
  core_box_cpp_CBox_setupVelocities_FUN_0041cb40(&this_ptr->physics_box,drop_position,&local_10);
  return;
}
