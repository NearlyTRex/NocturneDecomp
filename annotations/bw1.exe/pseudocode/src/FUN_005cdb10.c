// Name: FUN_005cdb10
// Address: 005cdb10
// Address Range: [[005cdb10, 005cdb7e]]
// Convention: unknown
// Signature: undefined4 FUN_005cdb10(undefined4 param_1,int param_2)

#include "nocturne.h"

uint FUN_005cdb10(uint param_1,int param_2)

{
  int iVar1;
  byte auStack_8 [4];
  
  FUN_005c90f0(param_2,auStack_8);
  iVar1 = FUN_005c9110(auStack_8);
  auStack_8[iVar1] = 0;
  while( true ) {
    iVar1 = FUN_005cc560(param_1);
    if (iVar1 != 0) break;
    iVar1 = FUN_005cdf70(param_1,auStack_8);
    if (iVar1 == 0) break;
    param_1 = FUN_005c90c0(param_1);
  }
  iVar1 = FUN_005cc560(param_1);
  if ((iVar1 != 0) && (param_2 != 0)) {
    param_1 = 0;
  }
  return param_1;
}
