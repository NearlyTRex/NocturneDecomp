// Name: engine_drender.cpp_qsortByCapturedFaceDepthAscending_FUN_0046c8a0
// Address: 0046c8a0
// Address Range: [[0046c8a0, 0046c8ca]]
// Convention: __cdecl
// Signature: undefined4 __cdecl engine_drender_cpp_qsortByCapturedFaceDepthAscending_FUN_0046c8a0(int *param_1,int *param_2)

#include "nocturne.h"

uint __cdecl engine_drender_cpp_qsortByCapturedFaceDepthAscending_FUN_0046c8a0(int *param_1,int *param_2)

{
  if (*(int *)(*param_2 + 8) < *(int *)(*param_1 + 8)) {
    return 1;
  }
  if (*(int *)(*param_1 + 8) < *(int *)(*param_2 + 8)) {
    return 0xffffffff;
  }
  return 0;
}
