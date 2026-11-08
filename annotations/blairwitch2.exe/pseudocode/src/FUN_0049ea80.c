// Name: FUN_0049ea80
// Address: 0049ea80
// Address Range: [[0049ea80, 0049eaf7]]
// Convention: unknown
// Signature: void FUN_0049ea80(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0049ea80(uint param_1,uint param_2)

{
  byte *puVar1;
  byte local_110 [256];
  uint local_10;
  
  local_10 = 0;
  FUN_0049c190(param_1);
  FUN_005b9600(local_110,0xff,param_2);
  puVar1 = (byte *)0x1c9c4d4;
  FUN_005b8100(param_2,&DAT_005d5832,&local_10);
  do {
    FUN_00499c60(puVar1,param_2);
    puVar1 = puVar1 + 0x70;
  } while (puVar1 != &DAT_01c9cd94);
  return;
}
