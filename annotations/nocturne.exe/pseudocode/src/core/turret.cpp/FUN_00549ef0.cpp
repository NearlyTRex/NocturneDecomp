// Name: FUN_00549ef0
// Address: 00549ef0
// Address Range: [[00549ef0, 00549fff]]
// Convention: unknown
// Signature: float FUN_00549ef0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_00549ef0(int param_1,int param_2)

{
  int iVar1;
  float local_18;
  float local_14;
  
  local_18 = 0.0;
  switch(*(uint *)(param_1 + 0x6f8)) {
  case 0:
    break;
  case 1:
    if (0.0 < *(float *)(param_1 + 0x760)) {
      local_18 = 1.0 - *(float *)(param_1 + 0x774) / *(float *)(param_1 + 0x760);
    }
    break;
  case 2:
  case 3:
    local_18 = 1.0;
    break;
  case 4:
    if (0.0 < *(float *)(param_1 + 0x768)) {
      local_18 = *(float *)(param_1 + 0x774) / *(float *)(param_1 + 0x768);
    }
    break;
  default:
    _DAT_01cc4800 = "@..\\core\\turret.cpp" + 1;
    _DAT_01cc4804 = 0x1c1;
    FUN_004c8440("CTurret::getCurFrame - invalid state");
  }
  if (local_18 < 0.0) {
    local_14 = 0.0;
  }
  else {
    if (1.0 < local_18) {
      local_18 = 1.0;
    }
    if (param_2 == 0) {
      param_1 = param_1 + 0x150;
    }
    else {
      param_1 = param_1 + 0x57c;
    }
    iVar1 = FUN_00454530(param_1);
    local_14 = (float)(*(int *)(iVar1 + 0x100) + -1) * local_18;
  }
  return local_14;
}
