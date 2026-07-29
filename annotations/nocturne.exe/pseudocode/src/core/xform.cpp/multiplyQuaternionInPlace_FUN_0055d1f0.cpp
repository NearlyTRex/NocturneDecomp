// Name: core_xform.cpp_multiplyQuaternionInPlace_FUN_0055d1f0
// Address: 0055d1f0
// Address Range: [[0055d1f0, 0055d21e]]
// Convention: __cdecl
// Signature: CQuaternion4f * __cdecl core_xform_cpp_multiplyQuaternionInPlace_FUN_0055d1f0(CQuaternion4f *quat1_inout,CQuaternion4f *quat2_ptr)

#include "nocturne.h"

CQuaternion4f * __cdecl core_xform_cpp_multiplyQuaternionInPlace_FUN_0055d1f0(CQuaternion4f *quat1_inout,CQuaternion4f *quat2_ptr)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  float afStackY_17f8 [1525];
  float local_1c;
  
  bVar3 = 0;
  core_xform_cpp_multiplyQuaternion_FUN_0055d130(quat1_inout,quat2_ptr);
  puVar1 = (uint *)((int)quat1_inout + (uint)bVar3 * -8 + 4);
  quat1_inout->w = local_1c;
  puVar2 = puVar1 + (uint)bVar3 * -2 + 1;
  *puVar1 = *(uint *)(&stack0xffffffe8 + (uint)bVar3 * -8);
  *puVar2 = *(uint *)(&stack0xffffffec + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  puVar2[(uint)bVar3 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xffffffec + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4)
  ;
  return quat1_inout;
}
