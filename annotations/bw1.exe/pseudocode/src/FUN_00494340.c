// Name: FUN_00494340
// Address: 00494340
// Address Range: [[00494340, 0049439b]]
// Convention: unknown
// Signature: void FUN_00494340(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00494340(uint param_1,uint param_2)

{
  byte local_408 [1024];
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  FUN_005bfb18(local_408,param_2,&local_8);
  local_8 = (byte *)0x0;
  FUN_00493d40("Warning",local_408,_DAT_01c3f560);
  return;
}
