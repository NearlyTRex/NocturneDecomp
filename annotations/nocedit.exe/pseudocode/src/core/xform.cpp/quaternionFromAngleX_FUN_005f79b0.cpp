// Name: core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
// Address: 005f79b0
// Address Range: [[005f79b0, 005f79e9]]
// Convention: __cdecl
// Signature: void core_xform.cpp_quaternionFromAngleX_FUN_005f79b0(CQuaternion4f * quat_ptr, float angle_radians)

#include "nocturne.h"

void __cdecl
core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(CQuaternion4f *quat_ptr,float angle_radians)

{
  float *unaff_ESI;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)(float)quat_ptr * (float10)0.5);
  fVar2 = (float10)fsin((float10)(float)quat_ptr * (float10)0.5);
  *unaff_ESI = (float)fVar1;
  unaff_ESI[1] = (float)fVar2;
  unaff_ESI[2] = 0.0;
  unaff_ESI[3] = 0.0;
  return;
}
