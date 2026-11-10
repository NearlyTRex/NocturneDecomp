// Name: core_boxactor.cpp_CBoxActor_onDropped_FUN_00422c70
// Address: 00422c70
// Address Range: [[00422c70, 00422cc6]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_onDropped_FUN_00422c70(CBoxActor *this_ptr,CVector3f *drop_position)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CBoxActor_onDropped_FUN_00422c70(CBoxActor *this_ptr,CVector3f *drop_position)

{
  CVector3f CStack_10;
  
  this_ptr->carrier_actor = (CDemonActor *)0x0;
  core_boxactor_cpp_FUN_00421e80(this_ptr);
  if (drop_position == (CVector3f *)0x0) {
    return;
  }
  CStack_10.z = 0.0;
  CStack_10.y = 0.0;
  CStack_10.x = 9.424778;
  core_box_cpp_CBox_setupVelocities_FUN_00420450(&this_ptr->physics_box,drop_position,&CStack_10);
  return;
}
