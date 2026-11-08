// Name: FUN_00550f20
// Address: 00550f20
// Address Range: [[00550f20, 00550f4c]]
// Convention: unknown
// Signature: undefined4 FUN_00550f20(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00550f20(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_0054d3a0(param_1,1);
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(iVar1 + 0x38) = param_2;
  *(byte *)(iVar1 + 0x118) = *(byte *)(iVar1 + 0x118) | 8;
  FUN_00551440();
  return 1;
}
