// Name: FUN_004b73f0
// Address: 004b73f0
// Address Range: [[004b73f0, 004b7432]]
// Convention: unknown
// Signature: void FUN_004b73f0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004b73f0(uint param_1,uint param_2)

{
  byte *puVar1;
  
  FUN_005c03c0(param_2,"Fire state\n");
  puVar1 = (byte *)0x1cb4f60;
  FUN_005c03c0(param_2,&DAT_005df684);
  do {
    FUN_004b2740(puVar1,param_2);
    puVar1 = puVar1 + 0x70;
  } while (puVar1 != &DAT_01cb5820);
  return;
}
