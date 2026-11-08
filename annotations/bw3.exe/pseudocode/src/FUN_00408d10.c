// Name: FUN_00408d10
// Address: 00408d10
// Address Range: [[00408d10, 00408d98]]
// Convention: unknown
// Signature: undefined4 FUN_00408d10(int param_1,float *param_2,float param_3)

#include "nocturne.h"

uint FUN_00408d10(int param_1,float *param_2,float param_3)

{
  int iVar1;
  uint local_30 [5];
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  FUN_0053ed80(local_30);
  local_30[0] = 0;
  iVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0x3c))(param_1,local_30);
  if ((((iVar1 == 2) && (fStack_1c - param_3 <= param_2[1])) && (param_2[1] <= fStack_18 + param_3))
     && (*param_2 * *param_2 + param_2[2] * param_2[2] <=
         (fStack_14 + param_3) * (fStack_14 + param_3))) {
    return 1;
  }
  return 0;
}
