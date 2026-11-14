// Name: crt_unknown.c_FUN_005cdf00
// Address: 005cdf00
// Address Range: [[005cdf00, 005cdf66]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005cdf00(undefined4 param_1)

#include "nocturne.h"

uint FUN_005cdf00(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte auStack_c [4];
  
  uVar3 = param_1;
  while( true ) {
    iVar1 = FUN_005cc560(uVar3);
    if (iVar1 != 0) break;
    uVar2 = FUN_005c9080(uVar3);
    uVar2 = FUN_005ce990(uVar2);
    FUN_005c90f0(uVar2,auStack_c);
    iVar1 = FUN_005c9110(auStack_c);
    auStack_c[iVar1] = 0;
    FUN_005cdec0(uVar3,auStack_c);
    uVar3 = FUN_005c90c0(uVar3);
  }
  return param_1;
}
