// Name: core_xform.cpp_quaternionFromAxisAngle_FUN_005f7a70
// Address: 005f7a70
// Address Range: [[005f7a70, 005f7ab9]]
// Convention: __stack2_esi
// Signature: CQuaternion4f * core_xform.cpp_quaternionFromAxisAngle_FUN_005f7a70(float angle_radians, CVector3f * axis_ptr, CQuaternion4f * quat_out)

#include "nocturne.h"

CQuaternion4f * __stack2_esi
core_xform_cpp_quaternionFromAxisAngle_FUN_005f7a70
          (float angle_radians,CVector3f *axis_ptr,CQuaternion4f *quat_out)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = (float10)fsin((float10)angle_radians * (float10)0.5);
  fVar5 = (float10)fcos((float10)angle_radians * (float10)0.5);
  fVar1 = axis_ptr->x;
  fVar2 = axis_ptr->y;
  fVar3 = axis_ptr->z;
  quat_out->w = (float)fVar5;
  quat_out->x = (float)((float10)fVar1 * fVar4);
  quat_out->y = (float)((float10)fVar2 * fVar4);
  quat_out->z = (float)((float10)fVar3 * fVar4);
  return quat_out;
}
