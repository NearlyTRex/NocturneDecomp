// Name: FUN_004215d0
// Address: 004215d0
// Address Range: [[004215c4, 004215c9] [004215d0, 0042161a]]
// Convention: unknown
// Signature: undefined4 FUN_004215d0(float *param_1,float *param_2)

#include "nocturne.h"

uint FUN_004215d0(float *param_1,float *param_2)

{
  if ((((*param_1 <= param_2[3]) && (*param_2 <= param_1[3])) && (param_1[1] <= param_2[4])) &&
     (((param_2[1] <= param_1[4] && (param_1[2] <= param_2[5])) && (param_2[2] <= param_1[5])))) {
    return 1;
  }
  return 0;
}
