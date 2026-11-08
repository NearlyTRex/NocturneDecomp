// Name: FUN_0041e910
// Address: 0041e910
// Address Range: [[0041e904, 0041e909] [0041e910, 0041e95a]]
// Convention: unknown
// Signature: undefined4 FUN_0041e910(float *param_1,float *param_2)

#include "nocturne.h"

uint FUN_0041e910(float *param_1,float *param_2)

{
  if ((((*param_1 <= param_2[3]) && (*param_2 <= param_1[3])) && (param_1[1] <= param_2[4])) &&
     (((param_2[1] <= param_1[4] && (param_1[2] <= param_2[5])) && (param_2[2] <= param_1[5])))) {
    return 1;
  }
  return 0;
}
