// Name: FUN_00556930
// Address: 00556930
// Address Range: [[00556930, 0055696b]]
// Convention: unknown
// Signature: undefined4 FUN_00556930(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00556930(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00552f10(param_1,1);
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(iVar1 + 0x1c) = param_2;
  *(uint *)(iVar1 + 0x20) = 1;
  *(byte *)(iVar1 + 0x118) = *(byte *)(iVar1 + 0x118) | 2;
  FUN_00556fd0();
  return 1;
}
