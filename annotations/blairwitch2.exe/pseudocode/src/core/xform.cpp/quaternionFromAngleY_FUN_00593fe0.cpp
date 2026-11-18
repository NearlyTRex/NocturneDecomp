// Name: core_xform.cpp_quaternionFromAngleY_FUN_00593fe0
// Address: 00593fe0
// Address Range: [[00593fe0, 00594019]]
// Convention: __stack_esi
// Signature: CQuaternion4f * __stack_esi core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(float angle_radians,CQuaternion4f *quat_out)

#include "nocturne.h"

CQuaternion4f * __stack_esi core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(float angle_radians,CQuaternion4f *quat_out)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)angle_radians * (float10)0.5f);
  fVar2 = (float10)fsin((float10)angle_radians * (float10)0.5f);
  quat_out->w = (float)fVar1;
  quat_out->x = 0.0;
  quat_out->y = (float)fVar2;
  quat_out->z = 0.0;
  return quat_out;
}
