// Name: FUN_00496280
// Address: 00496280
// Address Range: [[00496280, 0049629b]]
// Convention: unknown
// Signature: undefined4 FUN_00496280(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00496280(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0040c790(param_2,"?CHero" + 1);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 2;
  }
  return uVar2;
}
