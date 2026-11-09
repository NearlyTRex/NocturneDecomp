// Name: unkafter_2d.cpp_FUN_005b0c90
// Address: 005b0c90
// Address Range: [[005b0c90, 005b0cf6]]
// Convention: unknown
// Signature: undefined4 unkafter_2d_cpp_FUN_005b0c90(undefined4 param_1)

#include "nocturne.h"

uint unkafter_2d_cpp_FUN_005b0c90(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte auStack_c [4];
  
  uVar3 = param_1;
  while( true ) {
    iVar1 = unkafter_asgaya_cpp_FUN_005af2a0(uVar3);
    if (iVar1 != 0) break;
    uVar2 = FUN_005ac9c0(uVar3);
    uVar2 = unkafter_2d_cpp_FUN_005b1720(uVar2);
    FUN_005aca30(uVar2,auStack_c);
    iVar1 = FUN_005aca50(auStack_c);
    auStack_c[iVar1] = 0;
    unkafter_2d_cpp_FUN_005b0c50(uVar3,auStack_c);
    uVar3 = FUN_005aca00(uVar3);
  }
  return param_1;
}
