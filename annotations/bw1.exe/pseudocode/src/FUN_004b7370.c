// Name: FUN_004b7370
// Address: 004b7370
// Address Range: [[004b7370, 004b73e7]]
// Convention: unknown
// Signature: void FUN_004b7370(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004b7370(uint param_1,uint param_2)

{
  byte *puVar1;
  byte local_110 [256];
  uint local_10;
  
  local_10 = 0;
  FUN_004b4b30(param_1);
  FUN_005c1180(local_110,0xff,param_2);
  puVar1 = (byte *)0x1cb4f60;
  FUN_005c04b0(param_2,&DAT_005df674,&local_10);
  do {
    FUN_004b2600(puVar1,param_2);
    puVar1 = puVar1 + 0x70;
  } while (puVar1 != &DAT_01cb5820);
  return;
}
