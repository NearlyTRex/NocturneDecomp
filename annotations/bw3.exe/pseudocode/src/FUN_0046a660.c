// Name: FUN_0046a660
// Address: 0046a660
// Address Range: [[0046a660, 0046a6b5]]
// Convention: unknown
// Signature: void FUN_0046a660(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0046a660(uint param_1,uint param_2)

{
  byte auStack_1008 [4096];
  byte *puStack_8;
  
  puStack_8 = &stack0x0000000c;
  FUN_005a2898(auStack_1008,param_2,&puStack_8);
  puStack_8 = (byte *)0x0;
  FUN_0046a640(param_1,auStack_1008);
  return;
}
