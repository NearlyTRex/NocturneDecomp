// Name: core_xform.cpp_quaternionToAxisAngle_FUN_005f7730
// Address: 005f7730
// Address Range: [[005f7730, 005f77da]]
// Convention: __cdecl
// Signature: void core_xform.cpp_quaternionToAxisAngle_FUN_005f7730(CQuaternion4f * quat_ptr, float * angle_out, CVector3f * axis_out)

#include "nocturne.h"

void __cdecl
core_xform_cpp_quaternionToAxisAngle_FUN_005f7730
          (CQuaternion4f *quat_ptr,float *angle_out,CVector3f *axis_out)

{
  float fVar1;
  CQuaternion4f *extraout_ECX;
  CVector3f *extraout_EDX;
  double dVar2;
  
  if (angle_out != (float *)0x0) {
    dVar2 = (double)quat_ptr->w;
    if ((float)-1 < quat_ptr->w) {
      if (dVar2 < 1.0) {
        dVar2 = crt_math_c_acos_FUN_00600162(dVar2);
        *angle_out = (float)((float10)dVar2 * (float10)2);
        quat_ptr = extraout_ECX;
        axis_out = extraout_EDX;
      }
      else {
        *angle_out = 0.0;
      }
    }
    else {
      *angle_out = 6.2831855;
    }
  }
  if (axis_out != (CVector3f *)0x0) {
    fVar1 = 1.0 - quat_ptr->w * quat_ptr->w;
    if (0.0 < fVar1) {
      fVar1 = 1.0 / SQRT(fVar1);
      axis_out->x = quat_ptr->x * fVar1;
      axis_out->y = quat_ptr->y * fVar1;
      axis_out->z = fVar1 * quat_ptr->z;
      return;
    }
    axis_out->z = 0.0;
    axis_out->y = axis_out->z;
    axis_out->x = axis_out->y;
  }
  return;
}
