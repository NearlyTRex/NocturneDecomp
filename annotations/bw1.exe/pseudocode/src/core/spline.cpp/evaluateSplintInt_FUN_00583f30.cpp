// Name: core_spline.cpp_evaluateSplintInt_FUN_00583f30
// Address: 00583f30
// Address Range: [[00583f30, 00583f89]]
// Convention: unknown
// Signature: int core_spline_cpp_evaluateSplintInt_FUN_00583f30(float *param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

int core_spline_cpp_evaluateSplintInt_FUN_00583f30(float *param_1,int param_2,int param_3,int param_4,int param_5)

{
  return (int)ROUND((float)param_5 * param_1[3] +
                    (float)param_4 * param_1[2] +
                    (float)param_2 * *param_1 + (float)param_3 * param_1[1]);
}
