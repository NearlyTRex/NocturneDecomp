// Name: core_xform.cpp_quaternionFromAxisAngle_FUN_005f7a70
// Address: 005f7a70
// Address Range: [[005f7a70, 005f7ab9]]
// Convention: __cdecl
// Signature: void core_xform.cpp_quaternionFromAxisAngle_FUN_005f7a70(CQuaternion4f * quat_ptr, float angle_radians, CVector3f * axis_ptr)

#include "nocturne.h"

void __cdecl
core_xform_cpp_quaternionFromAxisAngle_FUN_005f7a70
          (CQuaternion4f *quat_ptr,float angle_radians,CVector3f *axis_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *unaff_ESI;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = (float10)fsin((float10)(float)quat_ptr * (float10)0.5);
  fVar5 = (float10)fcos((float10)(float)quat_ptr * (float10)0.5);
  fVar1 = *(float *)angle_radians;
  fVar2 = *(float *)((int)angle_radians + 4);
  fVar3 = *(float *)((int)angle_radians + 8);
  *unaff_ESI = (float)fVar5;
  unaff_ESI[1] = (float)((float10)fVar1 * fVar4);
  unaff_ESI[2] = (float)((float10)fVar2 * fVar4);
  unaff_ESI[3] = (float)((float10)fVar3 * fVar4);
  return;
}
