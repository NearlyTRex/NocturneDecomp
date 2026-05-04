// Name: core_xform.cpp_multiplyQuaternionInPlace_FUN_005f7700
// Address: 005f7700
// MANUAL RECONSTRUCTION
// Address Range: [[005f7700, 005f772e] [00604c3b, 00604c5d]]
// Convention: __cdecl
// Signature: CQuaternion4f * __cdecl core_xform_cpp_multiplyQuaternionInPlace_FUN_005f7700(CQuaternion4f *quat1_inout,CQuaternion4f *quat2_ptr)

#include "nocturne.h"

CQuaternion4f * __cdecl core_xform_cpp_multiplyQuaternionInPlace_FUN_005f7700(CQuaternion4f *quat1_inout,CQuaternion4f *quat2_ptr)

{
  CQuaternion4f local_1c;

  core_xform_cpp_multiplyQuaternion_FUN_005f7640(quat1_inout,quat2_ptr,&local_1c);
  *quat1_inout = local_1c;
  return quat1_inout;
}
