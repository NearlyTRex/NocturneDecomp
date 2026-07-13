// Name: FUN_0045e280
// Address: 0045e280
// Address Range: [[0045e280, 0045e2d5]]
// Convention: unknown
// Signature: void FUN_0045e280(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0045e280(uint param_1,uint param_2)

{
  byte auStack_1008 [4096];
  byte *puStack_8;
  
  puStack_8 = &stack0x0000000c;
  FUN_00563a08(auStack_1008,param_2,&puStack_8);
  puStack_8 = (byte *)0x0;
  FUN_0045e260(param_1,auStack_1008);
  return;
}
