// Name: core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
// Address: 005f79b0
// Address Range: [[005f79b0, 005f79e9]]
// Convention: __stack_esi
// Signature: void core_xform.cpp_quaternionFromAngleX_FUN_005f79b0(float angle_radians, CQuaternion4f * quat_ptr)

#include "nocturne.h"

void __stack_esi
core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(float angle_radians,CQuaternion4f *quat_ptr)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)angle_radians * (float10)0.5);
  fVar2 = (float10)fsin((float10)angle_radians * (float10)0.5);
  quat_ptr->w = (float)fVar1;
  quat_ptr->x = (float)fVar2;
  quat_ptr->y = 0.0;
  quat_ptr->z = 0.0;
  return;
}
