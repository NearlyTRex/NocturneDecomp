// Name: FUN_004ab3e0
// Address: 004ab3e0
// Address Range: [[004ab3e0, 004ab3fb]]
// Convention: unknown
// Signature: undefined4 FUN_004ab3e0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_004ab3e0(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0040c550(param_2,"?CHero" + 1);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 2;
  }
  return uVar2;
}
