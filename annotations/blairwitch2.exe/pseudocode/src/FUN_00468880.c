// Name: FUN_00468880
// Address: 00468880
// Address Range: [[00468880, 004688fd]]
// Convention: unknown
// Signature: void FUN_00468880(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

void FUN_00468880(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  byte auStack_1014 [4096];
  byte *puStack_14;
  
  puStack_14 = &stack0x0000001c;
  FUN_005b7768(auStack_1014,param_6,&puStack_14);
  puStack_14 = (byte *)0x0;
  FUN_00468810(param_1,auStack_1014,param_2,param_3,param_4,param_5);
  return;
}
