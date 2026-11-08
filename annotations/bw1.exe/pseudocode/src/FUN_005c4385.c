// Name: FUN_005c4385
// Address: 005c4385
// Address Range: [[005c4385, 005c4403]]
// Convention: unknown
// Signature: undefined4 FUN_005c4385(double *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005c4385(double *param_1,float *param_2)

{
  if ((((((ulonglong)*param_1 & 0x7fffffff00000000) != 0) || (*(int *)param_1 != 0)) &&
      ((*param_1 <= 0.0 || ((_DAT_005fab44 < *param_1 || (*param_1 < _DAT_005fab4c)))))) &&
     ((*param_1 < _DAT_005fab54 || (_DAT_005fab5c < *param_1)))) {
    return 1;
  }
  *param_2 = (float)*param_1;
  return 0;
}
