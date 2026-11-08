// Name: FUN_0047bdf0
// Address: 0047bdf0
// Address Range: [[0047bdf0, 0047be33]]
// Convention: unknown
// Signature: void FUN_0047bdf0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047bdf0(uint param_1,uint param_2)

{
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  FUN_005b7768(0x1c229f0,param_2,&local_8);
  local_8 = (byte *)0x0;
  FUN_0047b800("Warning",0x1c229f0,_DAT_01c263a0);
  return;
}
