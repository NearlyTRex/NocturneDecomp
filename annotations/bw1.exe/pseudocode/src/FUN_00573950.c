// Name: FUN_00573950
// Address: 00573950
// Address Range: [[00573950, 0057397c]]
// Convention: unknown
// Signature: undefined4 FUN_00573950(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00573950(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_0056fa10(param_1,1);
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(iVar1 + 0x38) = param_2;
  *(byte *)(iVar1 + 0x118) = *(byte *)(iVar1 + 0x118) | 8;
  FUN_00573e70();
  return 1;
}
