// Name: FUN_0047bda0
// Address: 0047bda0
// Address Range: [[0047bda0, 0047bde3]]
// Convention: unknown
// Signature: void FUN_0047bda0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047bda0(uint param_1,uint param_2)

{
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  FUN_005b7768(0x1c225f0,param_2,&local_8);
  local_8 = (byte *)0x0;
  FUN_0047b800("Message",0x1c225f0,_DAT_01c2639c);
  return;
}
