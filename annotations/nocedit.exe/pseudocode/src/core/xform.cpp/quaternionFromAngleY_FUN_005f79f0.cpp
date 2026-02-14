// Name: core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
// Address: 005f79f0
// Address Range: [[005f79f0, 005f7a29]]
// Convention: __stack_esi
// Signature: CQuaternion4f * __stack_esi core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(float angle_radians,CQuaternion4f *quat_out)

#include "nocturne.h"

CQuaternion4f * __stack_esi core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(float angle_radians,CQuaternion4f *quat_out)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)angle_radians * (float10)0.5);
  fVar2 = (float10)fsin((float10)angle_radians * (float10)0.5);
  quat_out->w = (float)fVar1;
  quat_out->x = 0.0;
  quat_out->y = (float)fVar2;
  quat_out->z = 0.0;
  return quat_out;
}
