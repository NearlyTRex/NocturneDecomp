// Name: FUN_00480fa0
// Address: 00480fa0
// Address Range: [[00480fa0, 00480ff5]]
// Convention: unknown
// Signature: void FUN_00480fa0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00480fa0(uint param_1,uint param_2)

{
  byte auStack_1008 [4096];
  byte *puStack_8;
  
  puStack_8 = &stack0x0000000c;
  FUN_005bfb18(auStack_1008,param_2,&puStack_8);
  puStack_8 = (byte *)0x0;
  FUN_00480f80(param_1,auStack_1008);
  return;
}
