// Name: FUN_004a4030
// Address: 004a4030
// Address Range: [[004a4030, 004a40a7]]
// Convention: unknown
// Signature: void FUN_004a4030(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004a4030(uint param_1,uint param_2)

{
  byte *puVar1;
  byte local_110 [256];
  uint local_10;
  
  local_10 = 0;
  FUN_004a1480(param_1);
  FUN_005a3f00(local_110,0xff,param_2);
  puVar1 = (byte *)0x1cfaff8;
  FUN_005a3230(param_2,&DAT_005c0a50,&local_10);
  do {
    FUN_0049dbe0(puVar1,param_2);
    puVar1 = puVar1 + 0x70;
  } while (puVar1 != &DAT_01cfb8b8);
  return;
}
