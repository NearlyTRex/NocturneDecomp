// Name: core_box.cpp_CBox_setupVelocities_FUN_00420180
// Address: 00420180
// Address Range: [[00420180, 004201fe]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBox_setupVelocities_FUN_00420180(CBox *this_ptr,CVector3f *linear_velocity,CVector3f *angular_velocity)

#include "nocturne.h"

void __cdecl core_box_cpp_CBox_setupVelocities_FUN_00420180(CBox *this_ptr,CVector3f *linear_velocity,CVector3f *angular_velocity)

{
  CVector3f *pCVar1;
  CVector3f local_14;
  
  if (linear_velocity != (CVector3f *)0x0) {
    if (&this_ptr->linear_velocity != linear_velocity) {
      (this_ptr->linear_velocity).x = linear_velocity->x;
      (this_ptr->linear_velocity).y = linear_velocity->y;
      (this_ptr->linear_velocity).z = linear_velocity->z;
    }
    pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                       (&this_ptr->rotation_matrix,&local_14,&this_ptr->linear_velocity);
    if (&this_ptr->linear_velocity_local != pCVar1) {
      (this_ptr->linear_velocity_local).x = pCVar1->x;
      (this_ptr->linear_velocity_local).y = pCVar1->y;
      (this_ptr->linear_velocity_local).z = pCVar1->z;
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
