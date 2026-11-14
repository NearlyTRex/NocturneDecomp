// Name: core_box.cpp_CBox_setupVelocities_FUN_005b4610
// Address: 005b4610
// Address Range: [[005b4610, 005b46a7]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBox_setupVelocities_FUN_005b4610(CBox *this_ptr,CVector3f *linear_velocity,CVector3f *angular_velocity)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_box_cpp_CBox_setupVelocities_FUN_005b4610(CBox *this_ptr,CVector3f *linear_velocity,CVector3f *angular_velocity)

{
  byte bVar1;
  float afStackY_1010 [1016];
  float local_28;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar1 = 0;
  if (linear_velocity != (CVector3f *)0x0) {
    if (&this_ptr->linear_velocity != linear_velocity) {
      (this_ptr->linear_velocity).x = linear_velocity->x;
      (this_ptr->linear_velocity).y = linear_velocity->y;
      (this_ptr->linear_velocity).z = linear_velocity->z;
    }
    core_dirmat_cpp_FUN_004495a0(&this_ptr->rotation_matrix,&this_ptr->linear_velocity);
    local_1c = local_28;
    (&stack0xffffffe8)[(uint)bVar1 * 0xfffffffe] =
         (float)*(uint *)(&stack0xffffffdc + (uint)bVar1 * -8);
    *(uint *)((int)&stack0xffffffec + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffffe0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    if (&this_ptr->linear_velocity_local != (CVector3f *)&stack0xffffffe4) {
      (this_ptr->linear_velocity_local).x = local_1c;
      (this_ptr->linear_velocity_local).y = local_18;
      (this_ptr->linear_velocity_local).z = local_14;
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
