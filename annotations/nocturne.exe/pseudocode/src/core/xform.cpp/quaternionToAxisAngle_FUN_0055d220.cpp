// Name: core_xform.cpp_quaternionToAxisAngle_FUN_0055d220
// Address: 0055d220
// Address Range: [[0055d220, 0055d2ca]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_quaternionToAxisAngle_FUN_0055d220(CQuaternion4f *quat_in,float *angle_out,CVector3f *axis_out)

#include "nocturne.h"

void __cdecl core_xform_cpp_quaternionToAxisAngle_FUN_0055d220(CQuaternion4f *quat_in,float *angle_out,CVector3f *axis_out)

{
  float fVar1;
  double dVar2;
  
  if (angle_out != (float *)0x0) {
    dVar2 = (double)quat_in->w;
    if ((float)-1 < quat_in->w) {
      if (dVar2 < 1.0) {
        dVar2 = acos(dVar2);
        *angle_out = (float)((float10)dVar2 * (float10)2);
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
