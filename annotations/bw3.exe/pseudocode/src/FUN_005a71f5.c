// Name: FUN_005a71f5
// Address: 005a71f5
// Address Range: [[005a71f5, 005a7273]]
// Convention: unknown
// Signature: undefined4 FUN_005a71f5(double *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005a71f5(double *param_1,float *param_2)

{
  if ((((((ulonglong)*param_1 & 0x7fffffff00000000) != 0) || (*(int *)param_1 != 0)) &&
      ((*param_1 <= 0.0 || ((_DAT_005da800 < *param_1 || (*param_1 < _DAT_005da808)))))) &&
     ((*param_1 < _DAT_005da810 || (_DAT_005da818 < *param_1)))) {
    return 1;
  }
  *param_2 = (float)*param_1;
  return 0;
}
