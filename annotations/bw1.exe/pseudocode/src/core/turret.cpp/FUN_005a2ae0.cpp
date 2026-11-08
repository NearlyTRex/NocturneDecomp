// Name: FUN_005a2ae0
// Address: 005a2ae0
// Address Range: [[005a2ae0, 005a2bef]]
// Convention: unknown
// Signature: float FUN_005a2ae0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_005a2ae0(int param_1,int param_2)

{
  int iVar1;
  float local_18;
  float local_14;
  
  local_18 = 0.0;
  switch(*(uint *)(param_1 + 0x700)) {
  case 0:
    break;
  case 1:
    if (0.0 < *(float *)(param_1 + 0x768)) {
      local_18 = 1.0 - *(float *)(param_1 + 0x77c) / *(float *)(param_1 + 0x768);
    }
    break;
  case 2:
  case 3:
    local_18 = 1.0;
    break;
  case 4:
    if (0.0 < *(float *)(param_1 + 0x770)) {
      local_18 = *(float *)(param_1 + 0x77c) / *(float *)(param_1 + 0x770);
    }
    break;
  default:
    _DAT_01d1d400 = "..\\core\\turret.cpp";
    _DAT_01d1d404 = 0x1c1;
    FUN_005030e0("CTurret::getCurFrame - invalid state");
  }
  if (local_18 < 0.0) {
    local_14 = 0.0;
  }
  else {
    if (1.0 < local_18) {
      local_18 = 1.0;
    }
    if (param_2 == 0) {
      param_1 = param_1 + 0x158;
    }
    else {
      param_1 = param_1 + 0x584;
    }
    iVar1 = FUN_00468900(param_1);
    local_14 = (float)(*(int *)(iVar1 + 0x100) + -1) * local_18;
  }
  return local_14;
}
