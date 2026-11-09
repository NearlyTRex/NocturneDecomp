// Name: core_boxactor.cpp_FUN_0041ce90
// Address: 0041ce90
// Address Range: [[0041ce90, 0041cf12]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_FUN_0041ce90(CBoxActor *this_ptr,CVector3f *new_position,CVector3f *new_orientation)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_FUN_0041ce90(CBoxActor *this_ptr,CVector3f *new_position,CVector3f *new_orientation)

{
  *(uint *)&this_ptr->field_0x20 = *(uint *)new_position;
  *(uint *)&this_ptr->field_0x24 = *(uint *)&new_position->field_0x4;
  *(uint *)&this_ptr->field_0x28 = *(uint *)&new_position->field_0x8;
  if ((CVector3f *)&this_ptr->field_0x30 != new_orientation) {
    *(uint *)&this_ptr->field_0x30 = *(uint *)new_orientation;
    *(uint *)&this_ptr->field_0x34 = *(uint *)&new_orientation->field_0x4;
    *(uint *)&this_ptr->field_0x38 = *(uint *)&new_orientation->field_0x8;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)this_ptr);
  if ((CVector3f *)&this_ptr->field_0x4f0 != new_position) {
    *(uint *)&this_ptr->field_0x4f0 = *(uint *)new_position;
    *(uint *)&this_ptr->field_0x4f4 = *(uint *)&new_position->field_0x4;
    *(uint *)&this_ptr->field_0x4f8 = *(uint *)&new_position->field_0x8;
  }
  if ((CVector3f *)&this_ptr->field_0x4fc != new_orientation) {
    *(uint *)&this_ptr->field_0x4fc = *(uint *)new_orientation;
    *(uint *)&this_ptr->field_0x500 = *(uint *)&new_orientation->field_0x4;
    *(uint *)&this_ptr->field_0x504 = *(uint *)&new_orientation->field_0x8;
  }
  core_boxactor_cpp_FUN_0041bf10(this_ptr);
  return;
}
