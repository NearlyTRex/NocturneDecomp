// Name: FUN_0047cee0
// Address: 0047cee0
// Address Range: [[0047cee0, 0047cf3b]]
// Convention: unknown
// Signature: void FUN_0047cee0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047cee0(uint param_1,uint param_2)

{
  byte local_408 [1024];
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  FUN_005a2898(local_408,param_2,&local_8);
  local_8 = (byte *)0x0;
  FUN_0047c8e0("Warning",local_408,_DAT_01c5bb08);
  return;
}
