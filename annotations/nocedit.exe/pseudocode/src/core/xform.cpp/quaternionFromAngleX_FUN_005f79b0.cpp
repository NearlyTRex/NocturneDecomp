// Name: core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
// Address: 005f79b0
// Address Range: [[005f79b0, 005f79e9]]
// Convention: __stack_esi
// Signature: CQuaternion4f * __stack_esi core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(float angle_radians,CQuaternion4f *quat_out)

#include "nocturne.h"

CQuaternion4f * __stack_esi
core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(float angle_radians,CQuaternion4f *quat_out)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)angle_radians * (float10)0.5);
  fVar2 = (float10)fsin((float10)angle_radians * (float10)0.5);
  quat_out->w = (float)fVar1;
  quat_out->x = (float)fVar2;
  quat_out->y = 0.0;
  quat_out->z = 0.0;
  return quat_out;
}
