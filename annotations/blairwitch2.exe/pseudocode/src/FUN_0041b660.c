// Name: FUN_0041b660
// Address: 0041b660
// Address Range: [[0041b654, 0041b659] [0041b660, 0041b6aa]]
// Convention: unknown
// Signature: undefined4 FUN_0041b660(float *param_1,float *param_2)

#include "nocturne.h"

uint FUN_0041b660(float *param_1,float *param_2)

{
  if ((((*param_1 <= param_2[3]) && (*param_2 <= param_1[3])) && (param_1[1] <= param_2[4])) &&
     (((param_2[1] <= param_1[4] && (param_1[2] <= param_2[5])) && (param_2[2] <= param_1[5])))) {
    return 1;
  }
  return 0;
}
