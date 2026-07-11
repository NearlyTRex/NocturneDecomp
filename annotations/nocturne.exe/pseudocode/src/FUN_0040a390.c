// Name: FUN_0040a390
// Address: 0040a390
// Address Range: [[0040a390, 0040a418]]
// Convention: unknown
// Signature: undefined4 FUN_0040a390(int param_1,float *param_2,float param_3)

#include "nocturne.h"

uint FUN_0040a390(int param_1,float *param_2,float param_3)

{
  int iVar1;
  uint local_30 [5];
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  FUN_00511990(local_30);
  local_30[0] = 0;
  iVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x34))(param_1,local_30);
  if ((((iVar1 == 2) && (fStack_1c - param_3 <= param_2[1])) && (param_2[1] <= fStack_18 + param_3))
     && (*param_2 * *param_2 + param_2[2] * param_2[2] <=
         (fStack_14 + param_3) * (fStack_14 + param_3))) {
    return 1;
  }
  return 0;
}
