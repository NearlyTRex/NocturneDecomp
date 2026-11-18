// Name: core_xform.cpp_quaternionFromAngleZ_FUN_00594020
// Address: 00594020
// Address Range: [[00594020, 00594059]]
// Convention: __stack_esi
// Signature: CQuaternion4f * __stack_esi core_xform_cpp_quaternionFromAngleZ_FUN_00594020(float angle_radians,CQuaternion4f *quat_out)

#include "nocturne.h"

CQuaternion4f * __stack_esi core_xform_cpp_quaternionFromAngleZ_FUN_00594020(float angle_radians,CQuaternion4f *quat_out)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)angle_radians * (float10)0.5f);
  fVar2 = (float10)fsin((float10)angle_radians * (float10)0.5f);
  quat_out->w = (float)fVar1;
  quat_out->x = 0.0;
  quat_out->y = 0.0;
  quat_out->z = (float)fVar2;
  return quat_out;
}
