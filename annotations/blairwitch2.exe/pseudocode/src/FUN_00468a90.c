// Name: FUN_00468a90
// Address: 00468a90
// Address Range: [[00468a90, 00468ae5]]
// Convention: unknown
// Signature: void FUN_00468a90(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00468a90(uint param_1,uint param_2)

{
  byte auStack_1008 [4096];
  byte *puStack_8;
  
  puStack_8 = &stack0x0000000c;
  FUN_005b7768(auStack_1008,param_2,&puStack_8);
  puStack_8 = (byte *)0x0;
  FUN_00468a70(param_1,auStack_1008);
  return;
}
