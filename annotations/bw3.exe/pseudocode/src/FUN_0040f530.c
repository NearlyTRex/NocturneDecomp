// Name: FUN_0040f530
// Address: 0040f530
// Address Range: [[0040f530, 0040f54b]]
// Convention: unknown
// Signature: undefined4 FUN_0040f530(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_0040f530(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0040c790(param_2,"CHero");
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 2;
  }
  return uVar2;
}
