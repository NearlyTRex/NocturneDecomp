// Name: core_spline.cpp_evaluateSplintInt_FUN_00567800
// Address: 00567800
// Address Range: [[00567800, 00567859]]
// Convention: unknown
// Signature: int core_spline_cpp_evaluateSplintInt_FUN_00567800(float *param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

int core_spline_cpp_evaluateSplintInt_FUN_00567800(float *param_1,int param_2,int param_3,int param_4,int param_5)

{
  return (int)ROUND((float)param_5 * param_1[3] +
                    (float)param_4 * param_1[2] +
                    (float)param_2 * *param_1 + (float)param_3 * param_1[1]);
}
