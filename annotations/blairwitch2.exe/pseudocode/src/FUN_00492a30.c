// Name: FUN_00492a30
// Address: 00492a30
// Address Range: [[00492a30, 00492a4b]]
// Convention: unknown
// Signature: undefined4 FUN_00492a30(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00492a30(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0040c840(param_2,"?CHero" + 1);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 2;
  }
  return uVar2;
}
