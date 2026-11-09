// Name: core_xform.cpp_FUN_00591ad0
// Address: 00591ad0
// Address Range: [[00591ad0, 00591c0c]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_FUN_00591ad0(CMatrix3x4f *output_matrix,CVector3f *position,CVector3f *euler_angles)

#include "nocturne.h"

void __cdecl core_xform_cpp_FUN_00591ad0(CMatrix3x4f *output_matrix,CVector3f *position,CVector3f *euler_angles)

{
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  core_dirmat_cpp_FUN_00449c20(&local_18,&local_24,euler_angles);
  core_dirmat_cpp_FUN_00449c20(&local_14,&local_20,&euler_angles->field_0x8);
  core_dirmat_cpp_FUN_00449c20(&local_10,&local_1c,&euler_angles->field_0x4);
  *(float *)output_matrix = local_1c * local_20 + local_10 * local_18 * local_14;
  *(float *)(output_matrix + 0x10) = -local_1c * local_14 + local_10 * local_18 * local_20;
  *(float *)(output_matrix + 0x20) = local_10 * local_24;
  *(float *)(output_matrix + 4) = local_14 * local_24;
  *(float *)(output_matrix + 0x14) = local_20 * local_24;
  *(float *)(output_matrix + 0x24) = -local_18;
  *(float *)(output_matrix + 8) = -local_10 * local_20 + local_1c * local_18 * local_14;
  *(float *)(output_matrix + 0x18) = local_14 * local_10 + local_1c * local_18 * local_20;
  *(float *)(output_matrix + 0x28) = local_1c * local_24;
  *(float *)(output_matrix + 0xc) =
       -(*(float *)&position->field_0x8 * *(float *)(output_matrix + 8) +
        *(float *)position * *(float *)output_matrix +
        *(float *)&position->field_0x4 * *(float *)(output_matrix + 4));
  *(float *)(output_matrix + 0x1c) =
       -(*(float *)&position->field_0x8 * *(float *)(output_matrix + 0x18) +
        *(float *)position * *(float *)(output_matrix + 0x10) +
        *(float *)&position->field_0x4 * *(float *)(output_matrix + 0x14));
  *(float *)(output_matrix + 0x2c) =
       -(*(float *)&position->field_0x8 * *(float *)(output_matrix + 0x28) +
        *(float *)position * *(float *)(output_matrix + 0x20) +
        *(float *)&position->field_0x4 * *(float *)(output_matrix + 0x24));
  return;
}
