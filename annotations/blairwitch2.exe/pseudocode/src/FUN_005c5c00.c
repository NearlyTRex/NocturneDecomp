// Name: FUN_005c5c00
// Address: 005c5c00
// Address Range: [[005c5c00, 005c5c66]]
// Convention: unknown
// Signature: undefined4 FUN_005c5c00(undefined4 param_1)

#include "nocturne.h"

uint FUN_005c5c00(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte auStack_c [4];
  
  uVar3 = param_1;
  while( true ) {
    iVar1 = FUN_005c4260(uVar3);
    if (iVar1 != 0) break;
    uVar2 = FUN_005c0dc0(uVar3);
    uVar2 = FUN_005c6690(uVar2);
    FUN_005c0e30(uVar2,auStack_c);
    iVar1 = FUN_005c0e50(auStack_c);
    auStack_c[iVar1] = 0;
    FUN_005c5bc0(uVar3,auStack_c);
    uVar3 = FUN_005c0e00(uVar3);
  }
  return param_1;
}
