// Name: FUN_004942e0
// Address: 004942e0
// Address Range: [[004942e0, 0049433b]]
// Convention: unknown
// Signature: void FUN_004942e0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004942e0(uint param_1,uint param_2)

{
  byte local_408 [1024];
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  FUN_005bfb18(local_408,param_2,&local_8);
  local_8 = (byte *)0x0;
  FUN_00493d40("Message",local_408,_DAT_01c3f55c);
  return;
}
