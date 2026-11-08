// Name: FUN_00480d90
// Address: 00480d90
// Address Range: [[00480d90, 00480e0d]]
// Convention: unknown
// Signature: void FUN_00480d90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

void FUN_00480d90(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  byte auStack_1014 [4096];
  byte *puStack_14;
  
  puStack_14 = &stack0x0000001c;
  FUN_005bfb18(auStack_1014,param_6,&puStack_14);
  puStack_14 = (byte *)0x0;
  FUN_00480d20(param_1,auStack_1014,param_2,param_3,param_4,param_5);
  return;
}
