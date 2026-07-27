// Name: core_spline.cpp_FUN_00534070
// Address: 00534070
// Address Range: [[00534070, 005340ca]]
// Convention: unknown
// Signature: int core_spline_cpp_FUN_00534070(int param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

int core_spline_cpp_FUN_00534070(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  return (int)ROUND((float)param_5 * *(float *)(param_1 + 0x1c) +
                    (float)param_4 * *(float *)(param_1 + 0x18) +
                    (float)param_3 * *(float *)(param_1 + 0x14) +
                    (float)param_2 * *(float *)(param_1 + 0x10));
}
