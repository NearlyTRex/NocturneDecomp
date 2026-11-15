// Name: core_box.cpp_CBox_setupVelocities_FUN_0041d790
// Address: 0041d790
// Address Range: [[0041d790, 0041d827]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBox_setupVelocities_FUN_0041d790(CBox *this_ptr,CVector3f *linear_velocity,CVector3f *angular_velocity)

#include "nocturne.h"

void __cdecl core_box_cpp_CBox_setupVelocities_FUN_0041d790(CBox *this_ptr,CVector3f *linear_velocity,CVector3f *angular_velocity)

{
  byte bVar1;
  float afStackY_1010 [1016];
  CVector3f local_28;
  float local_1c;
  float local_18 [2];
  
  bVar1 = 0;
  if (linear_velocity != (CVector3f *)0x0) {
    if (&this_ptr->linear_velocity != linear_velocity) {
      (this_ptr->linear_velocity).x = linear_velocity->x;
      (this_ptr->linear_velocity).y = linear_velocity->y;
      (this_ptr->linear_velocity).z = linear_velocity->z;
    }
    core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045b870
              (&this_ptr->rotation_matrix,&this_ptr->linear_velocity,&local_28);
    local_1c = local_28.x;
    local_18[(uint)bVar1 * -2] = *(float *)((int)&local_28 + (uint)bVar1 * -8 + 4);
    local_18[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
         *(float *)((int)&local_28 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
    if (&this_ptr->linear_velocity_local != (CVector3f *)&local_1c) {
      (this_ptr->linear_velocity_local).x = local_1c;
      (this_ptr->linear_velocity_local).y = local_18[0];
      (this_ptr->linear_velocity_local).z = local_18[1];
    }
  }
  if ((angular_velocity != (CVector3f *)0x0) && (&this_ptr->angular_velocity != angular_velocity)) {
    (this_ptr->angular_velocity).x = angular_velocity->x;
    (this_ptr->angular_velocity).y = angular_velocity->y;
    (this_ptr->angular_velocity).z = angular_velocity->z;
    return;
  }
  return;
}
