// Name: core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00511840
// Address: 00511840
// Address Range: [[00511840, 00511876]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00511840(CDemonSet *this_ptr,int laser_type,int color_r,int color_g,int color_b)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00511840(CDemonSet *this_ptr,int laser_type,int color_r,int color_g,int color_b)

{
  this_ptr->vdir_boxes[0xeb].rotation_matrix.m[0].x = 4.2039e-45;
  this_ptr->vdir_boxes[0xeb].rotation_matrix.m[0].y = (float)laser_type;
  this_ptr->vdir_boxes[0xeb].rotation_matrix.m[0].z = (float)color_r;
  this_ptr->vdir_boxes[0xeb].rotation_matrix.m[1].x = (float)color_g;
  this_ptr->vdir_boxes[0xeb].rotation_matrix.m[1].y = (float)color_b;
  return;
}
