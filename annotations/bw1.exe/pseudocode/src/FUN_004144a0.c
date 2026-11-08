// Name: FUN_004144a0
// Address: 004144a0
// Address Range: [[004144a0, 004144bb]]
// Convention: unknown
// Signature: undefined4 FUN_004144a0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_004144a0(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0040c550(param_2,"CHero");
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 2;
  }
  return uVar2;
}
