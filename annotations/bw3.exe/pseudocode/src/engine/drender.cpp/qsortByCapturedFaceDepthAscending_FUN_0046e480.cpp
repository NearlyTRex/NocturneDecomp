// Name: engine_drender.cpp_qsortByCapturedFaceDepthAscending_FUN_0046e480
// Address: 0046e480
// Address Range: [[0046e480, 0046e4aa]]
// Convention: __cdecl
// Signature: undefined4 __cdecl engine_drender_cpp_qsortByCapturedFaceDepthAscending_FUN_0046e480(int *param_1,int *param_2)

#include "nocturne.h"

uint __cdecl engine_drender_cpp_qsortByCapturedFaceDepthAscending_FUN_0046e480(int *param_1,int *param_2)

{
  if (*(int *)(*param_2 + 8) < *(int *)(*param_1 + 8)) {
    return 1;
  }
  if (*(int *)(*param_1 + 8) < *(int *)(*param_2 + 8)) {
    return 0xffffffff;
  }
  return 0;
}
