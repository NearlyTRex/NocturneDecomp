// Name: core_xform.cpp_quaternionFromAngleZ_FUN_005f7a30
// Address: 005f7a30
// Address Range: [[005f7a30, 005f7a69]]
// Convention: __cdecl
// Signature: void core_xform.cpp_quaternionFromAngleZ_FUN_005f7a30(CQuaternion4f * quat_ptr, float angle_radians)

#include "nocturne.h"

void __cdecl
core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30(CQuaternion4f *quat_ptr,float angle_radians)

{
  float *unaff_ESI;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)(float)quat_ptr * (float10)0.5);
  fVar2 = (float10)fsin((float10)(float)quat_ptr * (float10)0.5);
  *unaff_ESI = (float)fVar1;
  unaff_ESI[1] = 0.0;
  unaff_ESI[2] = 0.0;
  unaff_ESI[3] = (float)fVar2;
  return;
}
