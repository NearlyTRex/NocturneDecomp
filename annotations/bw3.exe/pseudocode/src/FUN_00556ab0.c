// Name: FUN_00556ab0
// Address: 00556ab0
// Address Range: [[00556ab0, 00556adc]]
// Convention: unknown
// Signature: undefined4 FUN_00556ab0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00556ab0(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00552f10(param_1,1);
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(iVar1 + 0x38) = param_2;
  *(byte *)(iVar1 + 0x118) = *(byte *)(iVar1 + 0x118) | 8;
  FUN_00556fd0();
  return 1;
}
