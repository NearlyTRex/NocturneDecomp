// Name: FUN_005b08a0
// Address: 005b08a0
// Address Range: [[005b08a0, 005b090e]]
// Convention: unknown
// Signature: undefined4 FUN_005b08a0(undefined4 param_1,int param_2)

#include "nocturne.h"

uint FUN_005b08a0(uint param_1,int param_2)

{
  int iVar1;
  byte auStack_8 [4];
  
  FUN_005aca30(param_2,auStack_8);
  iVar1 = FUN_005aca50(auStack_8);
  auStack_8[iVar1] = 0;
  while( true ) {
    iVar1 = FUN_005af2a0(param_1);
    if (iVar1 != 0) break;
    iVar1 = FUN_005b0d00(param_1,auStack_8);
    if (iVar1 == 0) break;
    param_1 = FUN_005aca00(param_1);
  }
  iVar1 = FUN_005af2a0(param_1);
  if ((iVar1 != 0) && (param_2 != 0)) {
    param_1 = 0;
  }
  return param_1;
}
