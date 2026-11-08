// Name: FUN_00550ea0
// Address: 00550ea0
// Address Range: [[00550ea0, 00550edb]]
// Convention: unknown
// Signature: undefined4 FUN_00550ea0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00550ea0(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_0054d3a0(param_1,1);
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(iVar1 + 0x30) = param_2;
  *(uint *)(iVar1 + 0x34) = 1;
  *(byte *)(iVar1 + 0x118) = *(byte *)(iVar1 + 0x118) | 4;
  FUN_00551440();
  return 1;
}
