// Name: core_box.cpp_CBox_setupVelocities_FUN_00420180
// Address: 00420180
// MANUAL RECONSTRUCTION
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
      this_ptr->linear_velocity = *linear_velocity;
    }
    pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                       (&this_ptr->rotation_matrix,&local_14,&this_ptr->linear_velocity);
    if (&this_ptr->linear_velocity_local != pCVar1) {
      this_ptr->linear_velocity_local = *pCVar1;
    }
  }
  if ((angular_velocity != (CVector3f *)0x0) && (&this_ptr->angular_velocity != angular_velocity)) {
    this_ptr->angular_velocity = *angular_velocity;
    return;
  }
  return;
}
