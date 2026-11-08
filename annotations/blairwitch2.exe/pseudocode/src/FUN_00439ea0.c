// Name: FUN_00439ea0
// Address: 00439ea0
// Address Range: [[00439ea0, 00439ebb]]
// Convention: unknown
// Signature: undefined4 FUN_00439ea0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00439ea0(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0040c840(param_2,"?CHero" + 1);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 4;
  }
  return uVar2;
}
