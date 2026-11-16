// Name: core_xform.cpp_quaternionFromAxisAngle_FUN_00585d90
// Address: 00585d90
// Address Range: [[00585d90, 00585ddb]]
// Convention: __stack2_esi
// Signature: CQuaternion4f * __stack2_esi core_xform_cpp_quaternionFromAxisAngle_FUN_00585d90(float angle_radians,CVector3f *axis_ptr,CQuaternion4f *quat_out)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CQuaternion4f * __stack2_esi core_xform_cpp_quaternionFromAxisAngle_FUN_00585d90(float angle_radians,CVector3f *axis_ptr,CQuaternion4f *quat_out)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = (float10)fsin((float10)angle_radians * (float10)_DAT_005d81b3);
  fVar5 = (float10)fcos((float10)angle_radians * (float10)_DAT_005d81b3);
  fVar1 = axis_ptr->x;
  fVar2 = axis_ptr->y;
  fVar3 = axis_ptr->z;
  quat_out->w = (float)fVar5;
  quat_out->x = (float)(fVar4 * (float10)fVar1);
  quat_out->y = (float)(fVar4 * (float10)fVar2);
  quat_out->z = (float)(fVar4 * (float10)fVar3);
  return quat_out;
}
