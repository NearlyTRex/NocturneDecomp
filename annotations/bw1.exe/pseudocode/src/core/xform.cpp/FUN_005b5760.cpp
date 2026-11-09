// Name: core_xform.cpp_FUN_005b5760
// Address: 005b5760
// Address Range: [[005b5760, 005b585f]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_FUN_005b5760(CMatrix3x4f *output_matrix,CVector3f *position,CVector3f *euler_angles)

#include "nocturne.h"

void __cdecl core_xform_cpp_FUN_005b5760(CMatrix3x4f *output_matrix,CVector3f *position,CVector3f *euler_angles)

{
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  core_dirmat_cpp_FUN_0045fd80(&local_24,&local_20,euler_angles);
  core_dirmat_cpp_FUN_0045fd80(&local_1c,&local_14,&euler_angles->field_0x8);
  core_dirmat_cpp_FUN_0045fd80(&local_10,&local_18,&euler_angles->field_0x4);
  *(float *)output_matrix = local_18 * local_14 + local_10 * local_24 * local_1c;
  *(float *)(output_matrix + 4) = -local_18 * local_1c + local_10 * local_24 * local_14;
  *(float *)(output_matrix + 8) = local_10 * local_20;
  *(float *)(output_matrix + 0x10) = local_1c * local_20;
  *(float *)(output_matrix + 0x14) = local_14 * local_20;
  *(float *)(output_matrix + 0x18) = -local_24;
  *(float *)(output_matrix + 0x20) = -local_10 * local_14 + local_18 * local_24 * local_1c;
  *(float *)(output_matrix + 0x24) = local_1c * local_10 + local_18 * local_24 * local_14;
  *(float *)(output_matrix + 0x28) = local_18 * local_20;
  *(uint *)(output_matrix + 0xc) = *(uint *)position;
  *(uint *)(output_matrix + 0x1c) = *(uint *)&position->field_0x4;
  *(uint *)(output_matrix + 0x2c) = *(uint *)&position->field_0x8;
  return;
}
