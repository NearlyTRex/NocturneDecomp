// Name: FUN_0048c7d0
// Address: 0048c7d0
// Address Range: [[0048c7d0, 0048c847]]
// Convention: unknown
// Signature: void FUN_0048c7d0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0048c7d0(uint param_1,uint param_2)

{
  byte *puVar1;
  byte local_110 [256];
  uint local_10;
  
  local_10 = 0;
  FUN_0048a150(param_1);
  FUN_00564b20(local_110,0xff,param_2);
  puVar1 = (byte *)0x1c625f8;
  FUN_00563350(param_2,&DAT_0058152c,&local_10);
  do {
    FUN_00487d50(puVar1,param_2);
    puVar1 = puVar1 + 0x70;
  } while (puVar1 != &DAT_01c62eb8);
  return;
}
