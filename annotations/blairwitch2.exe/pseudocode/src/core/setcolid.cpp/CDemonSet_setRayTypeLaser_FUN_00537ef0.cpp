// Name: core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00537ef0
// Address: 00537ef0
// Address Range: [[00537ef0, 00537f26]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00537ef0(CDemonSet *this_ptr,int laser_type,int color_r,int color_g,int color_b)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00537ef0(CDemonSet *this_ptr,int laser_type,int color_r,int color_g,int color_b)

{
  *(uint *)&this_ptr->ray_query = 3;
  *(int *)&this_ptr->field_0x15f698 = laser_type;
  *(int *)&this_ptr->field_0x15f69c = color_r;
  *(int *)&this_ptr->field_0x15f6a0 = color_g;
  *(int *)&this_ptr->field_0x15f6a4 = color_b;
  return;
}
