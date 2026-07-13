// Name: FUN_0044ba20
// Address: 0044ba20
// Address Range: [[0044ba20, 0044baab]]
// Convention: unknown
// Signature: undefined4 * FUN_0044ba20(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint * FUN_0044ba20(int param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x150);
  if (iVar1 == 0) {
    *param_2 = 0xbf800000;
    param_2[1] = 0xbdcccccd;
    param_2[2] = 0xbf800000;
    param_2[3] = 0x3f800000;
    param_2[4] = 0x40066666;
    param_2[5] = 0x3f800000;
    return param_2;
  }
  (**(code **)(*(int *)(iVar1 + 0x14c) + 0x14))(iVar1,param_2);
  return param_2;
}
