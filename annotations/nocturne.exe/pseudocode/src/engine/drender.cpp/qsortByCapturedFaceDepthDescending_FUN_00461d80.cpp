// Name: engine_drender.cpp_qsortByCapturedFaceDepthDescending_FUN_00461d80
// Address: 00461d80
// Address Range: [[00461d80, 00461daa]]
// Convention: unknown
// Signature: undefined4 engine_drender_cpp_qsortByCapturedFaceDepthDescending_FUN_00461d80(int *param_1,int *param_2)

#include "nocturne.h"

uint engine_drender_cpp_qsortByCapturedFaceDepthDescending_FUN_00461d80(int *param_1,int *param_2)

{
  if (*(int *)(*param_1 + 8) < *(int *)(*param_2 + 8)) {
    return 1;
  }
  if (*(int *)(*param_2 + 8) < *(int *)(*param_1 + 8)) {
    return 0xffffffff;
  }
  return 0;
}
