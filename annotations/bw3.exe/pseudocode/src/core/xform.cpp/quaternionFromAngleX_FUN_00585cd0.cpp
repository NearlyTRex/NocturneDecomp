// Name: core_xform.cpp_quaternionFromAngleX_FUN_00585cd0
// Address: 00585cd0
// Address Range: [[00585cd0, 00585d09]]
// Convention: __stack_esi
// Signature: CQuaternion4f * __stack_esi core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(float angle_radians,CQuaternion4f *quat_out)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CQuaternion4f * __stack_esi core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(float angle_radians,CQuaternion4f *quat_out)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)angle_radians * (float10)_DAT_005d81a7);
  fVar2 = (float10)fsin((float10)angle_radians * (float10)_DAT_005d81a7);
  quat_out->w = (float)fVar1;
  quat_out->x = (float)fVar2;
  quat_out->y = 0.0;
  quat_out->z = 0.0;
  return quat_out;
}
