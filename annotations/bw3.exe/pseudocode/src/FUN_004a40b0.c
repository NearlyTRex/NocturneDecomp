// Name: FUN_004a40b0
// Address: 004a40b0
// Address Range: [[004a40b0, 004a40f2]]
// Convention: unknown
// Signature: void FUN_004a40b0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004a40b0(uint param_1,uint param_2)

{
  byte *puVar1;
  
  FUN_005a3140(param_2,"Fire state\n");
  puVar1 = (byte *)0x1cfaff8;
  FUN_005a3140(param_2,&DAT_005c0a60);
  do {
    FUN_0049dd20(puVar1,param_2);
    puVar1 = puVar1 + 0x70;
  } while (puVar1 != &DAT_01cfb8b8);
  return;
}
