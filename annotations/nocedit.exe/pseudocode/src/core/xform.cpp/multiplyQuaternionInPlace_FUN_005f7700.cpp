// Name: core_xform.cpp_multiplyQuaternionInPlace_FUN_005f7700
// Address: 005f7700
// Address Range: [[005f7700, 005f772e]]
// Convention: __cdecl
// Signature: CQuaternion4f * core_xform.cpp_multiplyQuaternionInPlace_FUN_005f7700(CQuaternion4f * quat1_inout, CQuaternion4f * quat2_ptr)

#include "nocturne.h"

CQuaternion4f * __cdecl
core_xform_cpp_multiplyQuaternionInPlace_FUN_005f7700
          (CQuaternion4f *quat1_inout,CQuaternion4f *quat2_ptr)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_17f8 [1525];
  CQuaternion4f local_1c;
  
  bVar4 = 0;
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(quat1_inout,quat2_ptr,&local_1c);
  puVar2 = (uint *)((int)quat1_inout + (uint)bVar4 * -8 + 4);
  quat1_inout->w = local_1c.w;
  puVar3 = puVar2 + (uint)bVar4 * -2 + 1;
  puVar1 = (uint *)((int)&local_1c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  *puVar2 = *(uint *)((int)&local_1c + (uint)bVar4 * -8 + 4);
  *puVar3 = *puVar1;
  puVar3[(uint)bVar4 * -2 + 1] = puVar1[(uint)bVar4 * -2 + 1];
  return quat1_inout;
}
