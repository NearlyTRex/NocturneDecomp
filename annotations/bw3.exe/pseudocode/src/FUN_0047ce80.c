// Name: FUN_0047ce80
// Address: 0047ce80
// Address Range: [[0047ce80, 0047cedb]]
// Convention: unknown
// Signature: void FUN_0047ce80(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047ce80(uint param_1,uint param_2)

{
  byte local_408 [1024];
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  FUN_005a2898(local_408,param_2,&local_8);
  local_8 = (byte *)0x0;
  FUN_0047c8e0("Message",local_408,_DAT_01c5bb04);
  return;
}
