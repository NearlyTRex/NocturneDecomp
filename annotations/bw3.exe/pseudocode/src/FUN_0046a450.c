// Name: FUN_0046a450
// Address: 0046a450
// Address Range: [[0046a450, 0046a4cd]]
// Convention: unknown
// Signature: void FUN_0046a450(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

void FUN_0046a450(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  byte auStack_1014 [4096];
  byte *puStack_14;
  
  puStack_14 = &stack0x0000001c;
  FUN_005a2898(auStack_1014,param_6,&puStack_14);
  puStack_14 = (byte *)0x0;
  FUN_0046a3e0(param_1,auStack_1014,param_2,param_3,param_4,param_5);
  return;
}
