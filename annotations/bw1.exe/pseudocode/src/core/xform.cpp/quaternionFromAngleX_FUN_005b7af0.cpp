// Name: core_xform.cpp_quaternionFromAngleX_FUN_005b7af0
// Address: 005b7af0
// Address Range: [[005b7af0, 005b7b29]]
// Convention: __stack_esi
// Signature: CQuaternion4f * __stack_esi core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(float angle_radians,CQuaternion4f *quat_out)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CQuaternion4f * __stack_esi core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(float angle_radians,CQuaternion4f *quat_out)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)angle_radians * (float10)_DAT_005fa17c);
  fVar2 = (float10)fsin((float10)angle_radians * (float10)_DAT_005fa17c);
  quat_out->w = (float)fVar1;
  quat_out->x = (float)fVar2;
  quat_out->y = 0.0;
  quat_out->z = 0.0;
  return quat_out;
}
