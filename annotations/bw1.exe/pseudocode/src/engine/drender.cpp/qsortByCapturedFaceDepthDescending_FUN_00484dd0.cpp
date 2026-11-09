// Name: engine_drender.cpp_qsortByCapturedFaceDepthDescending_FUN_00484dd0
// Address: 00484dd0
// Address Range: [[00484dd0, 00484dfa]]
// Convention: __cdecl
// Signature: undefined4 __cdecl engine_drender_cpp_qsortByCapturedFaceDepthDescending_FUN_00484dd0(int *param_1,int *param_2)

#include "nocturne.h"

uint __cdecl engine_drender_cpp_qsortByCapturedFaceDepthDescending_FUN_00484dd0(int *param_1,int *param_2)

{
  if (*(int *)(*param_1 + 8) < *(int *)(*param_2 + 8)) {
    return 1;
  }
  if (*(int *)(*param_2 + 8) < *(int *)(*param_1 + 8)) {
    return 0xffffffff;
  }
  return 0;
}
