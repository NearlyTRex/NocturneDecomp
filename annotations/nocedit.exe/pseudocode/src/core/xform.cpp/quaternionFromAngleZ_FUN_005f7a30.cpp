// Name: core_xform.cpp_quaternionFromAngleZ_FUN_005f7a30
// Address: 005f7a30
// Address Range: [[005f7a30, 005f7a69]]
// Convention: __stack_esi
// Signature: void core_xform.cpp_quaternionFromAngleZ_FUN_005f7a30(float angle_radians, CQuaternion4f * quat_ptr)

#include "nocturne.h"

void __stack_esi
core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30(float angle_radians,CQuaternion4f *quat_ptr)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)angle_radians * (float10)0.5);
  fVar2 = (float10)fsin((float10)angle_radians * (float10)0.5);
  quat_ptr->w = (float)fVar1;
  quat_ptr->x = 0.0;
  quat_ptr->y = 0.0;
  quat_ptr->z = (float)fVar2;
  return;
}
