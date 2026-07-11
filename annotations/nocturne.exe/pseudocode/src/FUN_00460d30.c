// Name: FUN_00460d30
// Address: 00460d30
// Address Range: [[00460d30, 00460d83]]
// Convention: unknown
// Signature: float * FUN_00460d30(undefined4 param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_00460d30(uint param_1,float *param_2)

{
  float fVar1;
  int local_20;
  int local_1c;
  int local_18;
  
  FUN_004ce760();
  fVar1 = (float)_DAT_0057dc6d;
  *param_2 = (float)local_20 * fVar1;
  param_2[1] = (float)local_1c * fVar1;
  param_2[2] = (float)local_18 * fVar1;
  return param_2;
}
