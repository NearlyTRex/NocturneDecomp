// Name: core_setcolid.cpp_FUN_0053ecd0
// Address: 0053ecd0
// Address Range: [[0053ecd0, 0053ed06]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_FUN_0053ecd0(CDemonSet *this_ptr,int laser_type,int color_r,int color_g,int color_b)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_FUN_0053ecd0(CDemonSet *this_ptr,int laser_type,int color_r,int color_g,int color_b)

{
  *(uint *)&this_ptr->field_0x15f698 = 3;
  *(int *)&this_ptr->field_0x15f69c = laser_type;
  *(int *)&this_ptr->field_0x15f6a0 = color_r;
  *(int *)&this_ptr->field_0x15f6a4 = color_g;
  *(int *)&this_ptr->field_0x15f6a8 = color_b;
  return;
}
