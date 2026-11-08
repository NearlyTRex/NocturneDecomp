// Name: FUN_00495110
// Address: 00495110
// Address Range: [[00495110, 00495146]]
// Convention: unknown
// Signature: undefined4 FUN_00495110(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00495110(int param_1,uint param_2)

{
  int iVar1;
  
  FUN_00495280(param_1);
  iVar1 = FUN_00495230(param_1,param_2);
  if (-1 < iVar1) {
    return *(uint *)(param_1 + 0x3acc + iVar1 * 0x120);
  }
  return 0;
}
