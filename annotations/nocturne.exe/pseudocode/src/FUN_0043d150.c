// Name: FUN_0043d150
// Address: 0043d150
// Address Range: [[0043d150, 0043d1bd]]
// Convention: unknown
// Signature: undefined4 * FUN_0043d150(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint * FUN_0043d150(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_00454530(param_1 + 0x150);
  uVar1 = *(uint *)(iVar3 + 0x348);
  uVar2 = *(uint *)(iVar3 + 0x34c);
  *param_2 = 0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  return param_2;
}
