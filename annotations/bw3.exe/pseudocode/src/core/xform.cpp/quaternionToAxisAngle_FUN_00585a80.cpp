// Name: core_xform.cpp_quaternionToAxisAngle_FUN_00585a80
// Address: 00585a80
// Address Range: [[00585a80, 00585b1f]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_quaternionToAxisAngle_FUN_00585a80(CQuaternion4f *quat_in,float *angle_out,CVector3f *axis_out)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_xform_cpp_quaternionToAxisAngle_FUN_00585a80(CQuaternion4f *quat_in,float *angle_out,CVector3f *axis_out)

{
  float fVar1;
  CQuaternion4f *extraout_ECX;
  CVector3f *extraout_EDX;
  float10 fVar2;
  
  if (angle_out != (float *)0x0) {
    if (_DAT_005d8197 < quat_in->w) {
      if ((int)quat_in->w < 0x3f800000) {
        fVar2 = (float10)quat_in->w;
        acos();
        *angle_out = (float)(fVar2 * (float10)_DAT_005d819b);
        quat_in = extraout_ECX;
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
    fVar1 = 1.0 - quat_in->w * quat_in->w;
    if (0.0 < fVar1) {
      fVar1 = 1.0 / SQRT(fVar1);
      axis_out->x = quat_in->x * fVar1;
      axis_out->y = quat_in->y * fVar1;
      axis_out->z = fVar1 * quat_in->z;
      return;
    }
    axis_out->z = 0.0;
    axis_out->y = axis_out->z;
    axis_out->x = axis_out->y;
  }
  return;
}
