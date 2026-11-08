// Name: FUN_004657f0
// Address: 004657f0
// Address Range: [[004657f0, 0046583b]]
// Convention: unknown
// Signature: undefined4 FUN_004657f0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_004657f0(uint param_1,uint param_2)

{
  int iVar1;
  byte local_214 [516];
  uint local_10;
  
  FUN_00465660(local_214,param_1,param_2);
  iVar1 = FUN_004656d0(local_214);
  if (iVar1 != 0) {
    return local_10;
  }
  return 0xffffffff;
}
