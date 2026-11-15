// Name: core_xform.cpp_quaternionFromAngleY_FUN_005b7b30
// Address: 005b7b30
// Address Range: [[005b7b30, 005b7b69]]
// Convention: __stack_esi
// Signature: CQuaternion4f * __stack_esi core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(float angle_radians,CQuaternion4f *quat_out)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CQuaternion4f * __stack_esi core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(float angle_radians,CQuaternion4f *quat_out)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)angle_radians * (float10)_DAT_005fa180);
  fVar2 = (float10)fsin((float10)angle_radians * (float10)_DAT_005fa180);
  quat_out->w = (float)fVar1;
  quat_out->x = 0.0;
  quat_out->y = (float)fVar2;
  quat_out->z = 0.0;
  return quat_out;
}
