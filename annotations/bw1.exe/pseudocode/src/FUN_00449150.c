// Name: FUN_00449150
// Address: 00449150
// Address Range: [[00449150, 0044916b]]
// Convention: unknown
// Signature: undefined4 FUN_00449150(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00449150(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0040c550(param_2,"?CHero" + 1);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 4;
  }
  return uVar2;
}
