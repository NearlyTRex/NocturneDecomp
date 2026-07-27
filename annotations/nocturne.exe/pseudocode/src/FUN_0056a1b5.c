// Name: FUN_0056a1b5
// Address: 0056a1b5
// Address Range: [[0056a1b5, 0056a233]]
// Convention: unknown
// Signature: undefined4 FUN_0056a1b5(double *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0056a1b5(double *param_1,float *param_2)

{
  if ((((((ulonglong)*param_1 & 0x7fffffff00000000) != 0) || (*(int *)param_1 != 0)) &&
      ((*param_1 <= 0.0 || ((_DAT_00598b54 < *param_1 || (*param_1 < _DAT_00598b5c)))))) &&
     ((*param_1 < _DAT_00598b64 || (_DAT_00598b6c < *param_1)))) {
    return 1;
  }
  *param_2 = (float)*param_1;
  return 0;
}
