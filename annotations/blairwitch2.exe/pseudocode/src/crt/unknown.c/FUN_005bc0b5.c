// Name: crt_unknown.c_FUN_005bc0b5
// Address: 005bc0b5
// Address Range: [[005bc0b5, 005bc133]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005bc0b5(double *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005bc0b5(double *param_1,float *param_2)

{
  if ((((((ulonglong)*param_1 & 0x7fffffff00000000) != 0) || (*(int *)param_1 != 0)) &&
      ((*param_1 <= 0.0 || ((_DAT_005f199c < *param_1 || (*param_1 < _DAT_005f19a4)))))) &&
     ((*param_1 < _DAT_005f19ac || (_DAT_005f19b4 < *param_1)))) {
    return 1;
  }
  *param_2 = (float)*param_1;
  return 0;
}
