// Name: core_xform.cpp_FUN_00591c10
// Address: 00591c10
// Address Range: [[00591c10, 00591d0f]]
// Convention: unknown
// Signature: void core_xform_cpp_FUN_00591c10(float *param_1,float *param_2,int param_3)

#include "nocturne.h"

void core_xform_cpp_FUN_00591c10(float *param_1,float *param_2,int param_3)

{
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  core_dirmat_cpp_FUN_00449c20(&local_24,&local_20,param_3);
  core_dirmat_cpp_FUN_00449c20(&local_1c,&local_14,param_3 + 8);
  core_dirmat_cpp_FUN_00449c20(&local_10,&local_18,param_3 + 4);
  *param_1 = local_18 * local_14 + local_10 * local_24 * local_1c;
  param_1[1] = -local_18 * local_1c + local_10 * local_24 * local_14;
  param_1[2] = local_10 * local_20;
  param_1[4] = local_1c * local_20;
  param_1[5] = local_14 * local_20;
  param_1[6] = -local_24;
  param_1[8] = -local_10 * local_14 + local_18 * local_24 * local_1c;
  param_1[9] = local_1c * local_10 + local_18 * local_24 * local_14;
  param_1[10] = local_18 * local_20;
  param_1[3] = *param_2;
  param_1[7] = param_2[1];
  param_1[0xb] = param_2[2];
  return;
}
