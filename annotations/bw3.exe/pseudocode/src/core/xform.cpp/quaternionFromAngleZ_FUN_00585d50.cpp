// Name: core_xform.cpp_quaternionFromAngleZ_FUN_00585d50
// Address: 00585d50
// Address Range: [[00585d50, 00585d89]]
// Convention: __stack_esi
// Signature: CQuaternion4f * __stack_esi core_xform_cpp_quaternionFromAngleZ_FUN_00585d50(float angle_radians,CQuaternion4f *quat_out)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CQuaternion4f * __stack_esi core_xform_cpp_quaternionFromAngleZ_FUN_00585d50(float angle_radians,CQuaternion4f *quat_out)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)angle_radians * (float10)_DAT_005d81af);
  fVar2 = (float10)fsin((float10)angle_radians * (float10)_DAT_005d81af);
  quat_out->w = (float)fVar1;
  quat_out->x = 0.0;
  quat_out->y = 0.0;
  quat_out->z = (float)fVar2;
  return quat_out;
}
