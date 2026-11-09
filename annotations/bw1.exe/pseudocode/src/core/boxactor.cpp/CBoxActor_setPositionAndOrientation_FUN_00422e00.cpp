// Name: core_boxactor.cpp_CBoxActor_setPositionAndOrientation_FUN_00422e00
// Address: 00422e00
// Address Range: [[00422e00, 00422e82]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_setPositionAndOrientation_FUN_00422e00(CBoxActor *this_ptr,CVector3f *new_position,CVector3f *new_orientation)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CBoxActor_setPositionAndOrientation_FUN_00422e00(CBoxActor *this_ptr,CVector3f *new_position,CVector3f *new_orientation)

{
  *(uint *)&this_ptr->field_0x20 = *(uint *)new_position;
  *(uint *)&this_ptr->field_0x24 = *(uint *)&new_position->field_0x4;
  *(uint *)&this_ptr->field_0x28 = *(uint *)&new_position->field_0x8;
  if ((CVector3f *)&this_ptr->field_0x30 != new_orientation) {
    *(uint *)&this_ptr->field_0x30 = *(uint *)new_orientation;
    *(uint *)&this_ptr->field_0x34 = *(uint *)&new_orientation->field_0x4;
    *(uint *)&this_ptr->field_0x38 = *(uint *)&new_orientation->field_0x8;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)this_ptr);
  if ((CVector3f *)&this_ptr->field_0x394 != new_position) {
    *(uint *)&this_ptr->field_0x394 = *(uint *)new_position;
    *(uint *)&this_ptr->field_0x398 = *(uint *)&new_position->field_0x4;
    *(uint *)&this_ptr->field_0x39c = *(uint *)&new_position->field_0x8;
  }
  if ((CVector3f *)&this_ptr->field_0x3a0 != new_orientation) {
    *(uint *)&this_ptr->field_0x3a0 = *(uint *)new_orientation;
    *(uint *)&this_ptr->field_0x3a4 = *(uint *)&new_orientation->field_0x4;
    *(uint *)&this_ptr->field_0x3a8 = *(uint *)&new_orientation->field_0x8;
  }
  core_boxactor_cpp_FUN_00421e80(this_ptr);
  return;
}
