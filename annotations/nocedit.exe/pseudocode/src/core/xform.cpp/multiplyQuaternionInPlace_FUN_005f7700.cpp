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
  BADSPACEBASE *in_ESP;
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  float afStackY_17f4 [1524];
  CQuaternion4f *in_stack_ffffffe4;
  float fStack_18;
  
  bVar3 = 0;
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(quat1_inout,quat2_ptr,in_stack_ffffffe4);
  puVar1 = (uint *)((int)quat1_inout + (uint)bVar3 * -8 + 4);
  quat1_inout->w = fStack_18;
  puVar2 = puVar1 + (uint)bVar3 * -2 + 1;
  *puVar1 = *(uint *)(&stack0xffffffec + (uint)bVar3 * -8);
  *puVar2 = *(uint *)(&stack0xfffffff0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  puVar2[(uint)bVar3 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xfffffff0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4)
  ;
  return quat1_inout;
}
