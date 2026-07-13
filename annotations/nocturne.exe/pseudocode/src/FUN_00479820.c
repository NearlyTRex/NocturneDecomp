// Name: FUN_00479820
// Address: 00479820
// Address Range: [[00479820, 004798d0]]
// Convention: unknown
// Signature: undefined4 FUN_00479820(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00479820(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float afStack_28 [8];
  
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,&fStack_40);
  fVar3 = (float)_DAT_0057f337;
  fVar1 = (fStack_3c + fStack_30) * _DAT_0057f333;
  fVar2 = (fStack_38 + fStack_2c) * _DAT_0057f333;
  if (param_2 == afStack_28) {
    return 1;
  }
  *param_2 = (fStack_40 + fStack_34) * _DAT_0057f333;
  param_2[1] = (fStack_30 - fStack_3c) * fVar3 + fVar1;
  param_2[2] = fVar2;
  return 1;
}
