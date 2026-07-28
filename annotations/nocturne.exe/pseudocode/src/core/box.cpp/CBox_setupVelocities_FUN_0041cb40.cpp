// Name: core_box.cpp_CBox_setupVelocities_FUN_0041cb40
// Address: 0041cb40
// Address Range: [[0041cb40, 0041cbbe]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBox_setupVelocities_FUN_0041cb40(CBox *this_ptr,CVector3f *linear_velocity,CVector3f *angular_velocity)

#include "nocturne.h"

void __cdecl core_box_cpp_CBox_setupVelocities_FUN_0041cb40(CBox *this_ptr,CVector3f *linear_velocity,CVector3f *angular_velocity)

{
  float *pfVar1;
  byte local_14 [12];
  
  if (linear_velocity != (CVector3f *)0x0) {
    if (&this_ptr->linear_velocity != linear_velocity) {
      (this_ptr->linear_velocity).x = linear_velocity->x;
      (this_ptr->linear_velocity).y = linear_velocity->y;
      (this_ptr->linear_velocity).z = linear_velocity->z;
    }
    pfVar1 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                                (&this_ptr->rotation_matrix,local_14,&this_ptr->linear_velocity);
    if (&this_ptr->linear_velocity_local != (CVector3f *)pfVar1) {
      (this_ptr->linear_velocity_local).x = *pfVar1;
      (this_ptr->linear_velocity_local).y = pfVar1[1];
      (this_ptr->linear_velocity_local).z = pfVar1[2];
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
