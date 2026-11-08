// Name: FUN_0057ee90
// Address: 0057ee90
// Address Range: [[0057ee90, 0057ef9f]]
// Convention: unknown
// Signature: float FUN_0057ee90(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_0057ee90(int param_1,int param_2)

{
  int iVar1;
  float local_18;
  float local_14;
  
  local_18 = 0.0;
  switch(*(uint *)(param_1 + 0x85c)) {
  case 0:
    break;
  case 1:
    if (0.0 < *(float *)(param_1 + 0x8c4)) {
      local_18 = 1.0 - *(float *)(param_1 + 0x8d8) / *(float *)(param_1 + 0x8c4);
    }
    break;
  case 2:
  case 3:
    local_18 = 1.0;
    break;
  case 4:
    if (0.0 < *(float *)(param_1 + 0x8cc)) {
      local_18 = *(float *)(param_1 + 0x8d8) / *(float *)(param_1 + 0x8cc);
    }
    break;
  default:
    _DAT_01d046a0 = "..\\core\\turret.cpp";
    _DAT_01d046a4 = 0x1c1;
    FUN_004e4500("CTurret::getCurFrame - invalid state");
  }
  if (local_18 < 0.0) {
    local_14 = 0.0;
  }
  else {
    if (1.0 < local_18) {
      local_18 = 1.0;
    }
    if (param_2 == 0) {
      param_1 = param_1 + 0x2b4;
    }
    else {
      param_1 = param_1 + 0x6e0;
    }
    iVar1 = FUN_0044fd20(param_1);
    local_14 = (float)(*(int *)(iVar1 + 0x100) + -1) * local_18;
  }
  return local_14;
}
