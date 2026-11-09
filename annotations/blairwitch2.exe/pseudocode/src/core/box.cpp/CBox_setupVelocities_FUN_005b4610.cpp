// Name: core_box.cpp_CBox_setupVelocities_FUN_005b4610
// Address: 005b4610
// Address Range: [[005b4610, 005b46a7]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBox_setupVelocities_FUN_005b4610(CBox *this_ptr,CVector3f *linear_velocity,CVector3f *angular_velocity)

#include "nocturne.h"

void __cdecl core_box_cpp_CBox_setupVelocities_FUN_005b4610(CBox *this_ptr,CVector3f *linear_velocity,CVector3f *angular_velocity)

{
  byte bVar1;
  uint auStackY_1010 [1016];
  uint local_28;
  uint local_1c;
  uint local_18 [2];
  
  bVar1 = 0;
  if (linear_velocity != (CVector3f *)0x0) {
    if ((CVector3f *)(this_ptr + 0x40) != linear_velocity) {
      *(uint *)(this_ptr + 0x40) = *(uint *)linear_velocity;
      *(uint *)(this_ptr + 0x44) = *(uint *)&linear_velocity->field_0x4;
      *(uint *)(this_ptr + 0x48) = *(uint *)&linear_velocity->field_0x8;
    }
    core_dirmat_cpp_FUN_004495a0(this_ptr + 0x18,this_ptr + 0x40);
    local_1c = local_28;
    local_18[(uint)bVar1 * -2] = *(uint *)(&stack0xffffffdc + (uint)bVar1 * -8);
    local_18[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
         *(uint *)(&stack0xffffffe0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    if (this_ptr + 0x4c != (CBox *)&local_1c) {
      *(uint *)(this_ptr + 0x4c) = local_1c;
      *(uint *)(this_ptr + 0x50) = local_18[0];
      *(uint *)(this_ptr + 0x54) = local_18[1];
    }
  }
  if ((angular_velocity != (CVector3f *)0x0) && ((CVector3f *)(this_ptr + 0x70) != angular_velocity)
     ) {
    *(uint *)(this_ptr + 0x70) = *(uint *)angular_velocity;
    *(uint *)(this_ptr + 0x74) = *(uint *)&angular_velocity->field_0x4;
    *(uint *)(this_ptr + 0x78) = *(uint *)&angular_velocity->field_0x8;
    return;
  }
  return;
}
