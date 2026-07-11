// Name: FUN_00572d90
// Address: 00572d90
// Address Range: [[00572d90, 00572df6]]
// Convention: unknown
// Signature: undefined4 FUN_00572d90(undefined4 param_1)

#include "nocturne.h"

uint FUN_00572d90(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte auStack_c [4];
  
  uVar3 = param_1;
  while( true ) {
    iVar1 = FUN_00570ca0(uVar3);
    if (iVar1 != 0) break;
    uVar2 = FUN_0056d9f0(uVar3);
    uVar2 = FUN_00573db0(uVar2);
    FUN_0056da30(uVar2,auStack_c);
    iVar1 = FUN_0056da50(auStack_c);
    auStack_c[iVar1] = 0;
    FUN_00572d50(uVar3,auStack_c);
    uVar3 = FUN_0056da80(uVar3);
  }
  return param_1;
}
