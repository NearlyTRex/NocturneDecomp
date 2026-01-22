// Name: core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
// Address: 005f79f0
// Address Range: [[005f79f0, 005f7a29]]
// Convention: __stack_esi
// Signature: void core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(float angle_radians, CQuaternion4f * quat_ptr)

#include "nocturne.h"

void __stack_esi
core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(float angle_radians,CQuaternion4f *quat_ptr)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)angle_radians * (float10)0.5);
  fVar2 = (float10)fsin((float10)angle_radians * (float10)0.5);
  quat_ptr->w = (float)fVar1;
  quat_ptr->x = 0.0;
  quat_ptr->y = (float)fVar2;
  quat_ptr->z = 0.0;
  return;
}
