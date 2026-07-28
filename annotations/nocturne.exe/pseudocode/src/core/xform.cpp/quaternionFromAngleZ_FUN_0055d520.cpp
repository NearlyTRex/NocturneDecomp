// Name: core_xform.cpp_quaternionFromAngleZ_FUN_0055d520
// Address: 0055d520
// Address Range: [[0055d520, 0055d559]]
// Convention: __stack_esi
// Signature: CQuaternion4f * __stack_esi core_xform_cpp_quaternionFromAngleZ_FUN_0055d520(float angle_radians,CQuaternion4f *quat_out)

#include "nocturne.h"

CQuaternion4f * __stack_esi core_xform_cpp_quaternionFromAngleZ_FUN_0055d520(float angle_radians,CQuaternion4f *quat_out)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)angle_radians * (float10)0.5);
  fVar2 = (float10)fsin((float10)angle_radians * (float10)0.5);
  quat_out->w = (float)fVar1;
  quat_out->x = 0.0;
  quat_out->y = 0.0;
  quat_out->z = (float)fVar2;
  return quat_out;
}
