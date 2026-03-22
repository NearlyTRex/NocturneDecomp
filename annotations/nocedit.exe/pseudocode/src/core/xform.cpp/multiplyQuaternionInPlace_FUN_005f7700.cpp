// Name: core_xform.cpp_multiplyQuaternionInPlace_FUN_005f7700
// Address: 005f7700
// Address Range: [[005f7700, 005f772e] [00604c3b, 00604c5d]]
// Convention: __cdecl
// Signature: CQuaternion4f * __cdecl core_xform_cpp_multiplyQuaternionInPlace_FUN_005f7700(CQuaternion4f *quat1_inout,CQuaternion4f *quat2_ptr)

#include "nocturne.h"

CQuaternion4f * __cdecl core_xform_cpp_multiplyQuaternionInPlace_FUN_005f7700(CQuaternion4f *quat1_inout,CQuaternion4f *quat2_ptr)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_17f8 [1525];
  CQuaternion4f local_1c;
  
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(quat1_inout,quat2_ptr,&local_1c);
  quat1_inout->w = local_1c.w;
  quat1_inout->x = local_1c.x;
  quat1_inout->y = local_1c.y;
  quat1_inout->z = local_1c.z;
  return quat1_inout;
}
