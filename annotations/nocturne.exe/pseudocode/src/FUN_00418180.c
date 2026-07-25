// Name: FUN_00418180
// Address: 00418180
// Address Range: [[00418180, 004181ed]]
// Convention: unknown
// Signature: float * FUN_00418180(float *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_00418180(float *param_1,int param_2)

{
  float fVar1;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  
  (**(code **)(*(int *)(param_2 + 0x14c) + 0x14))(param_2,&fStack_30);
  fVar1 = _DAT_0057912e;
  *param_1 = (fStack_30 + fStack_24) * _DAT_0057912e;
  param_1[1] = fVar1 * (fStack_2c + fStack_20);
  param_1[2] = fStack_28 + (float)_DAT_00579136;
  return param_1;
}
