// Name: core_doc.cpp_FUN_004765f0
// Address: 004765f0
// Address Range: [[004765f0, 0047661e]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_004765f0(float *param_1,float *param_2)

#include "nocturne.h"

void core_doc_cpp_FUN_004765f0(float *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = 1.0 / *param_2;
  *param_1 = *param_1 * fVar1;
  param_1[1] = param_1[1] * fVar1;
  param_1[2] = param_1[2] * fVar1;
  return;
}
