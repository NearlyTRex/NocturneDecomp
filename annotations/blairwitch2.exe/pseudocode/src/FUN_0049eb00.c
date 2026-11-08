// Name: FUN_0049eb00
// Address: 0049eb00
// Address Range: [[0049eb00, 0049eb42]]
// Convention: unknown
// Signature: void FUN_0049eb00(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0049eb00(uint param_1,uint param_2)

{
  byte *puVar1;
  
  FUN_005b8010(param_2,"Fire state\n");
  puVar1 = (byte *)0x1c9c4d4;
  FUN_005b8010(param_2,&DAT_005d5842);
  do {
    FUN_00499da0(puVar1,param_2);
    puVar1 = puVar1 + 0x70;
  } while (puVar1 != &DAT_01c9cd94);
  return;
}
