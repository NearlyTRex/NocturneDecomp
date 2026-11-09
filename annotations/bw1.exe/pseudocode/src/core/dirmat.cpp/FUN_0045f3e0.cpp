// Name: core_dirmat.cpp_FUN_0045f3e0
// Address: 0045f3e0
// Address Range: [[0045f3e0, 0045f4c8]]
// Convention: __cdecl
// Signature: void __cdecl core_dirmat_cpp_FUN_0045f3e0(CMatrix3x3f *this_ptr,CVector3f *euler_angles)

#include "nocturne.h"

void __cdecl core_dirmat_cpp_FUN_0045f3e0(CMatrix3x3f *this_ptr,CVector3f *euler_angles)

{
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  core_dirmat_cpp_FUN_0045fd80(&local_20,&local_1c,euler_angles);
  core_dirmat_cpp_FUN_0045fd80(&local_18,&local_14,&euler_angles->field_0x8);
  core_dirmat_cpp_FUN_0045fd80(&local_10,&local_c,&euler_angles->field_0x4);
  *(float *)this_ptr = local_c * local_14 + local_10 * local_20 * local_18;
  *(float *)(this_ptr + 4) = -local_c * local_18 + local_10 * local_20 * local_14;
  *(float *)(this_ptr + 8) = local_10 * local_1c;
  *(float *)(this_ptr + 0xc) = local_18 * local_1c;
  *(float *)(this_ptr + 0x10) = local_14 * local_1c;
  *(float *)(this_ptr + 0x14) = -local_20;
  *(float *)(this_ptr + 0x18) = -local_10 * local_14 + local_c * local_20 * local_18;
  *(float *)(this_ptr + 0x1c) = local_18 * local_10 + local_c * local_20 * local_14;
  *(float *)(this_ptr + 0x20) = local_c * local_1c;
  return;
}
