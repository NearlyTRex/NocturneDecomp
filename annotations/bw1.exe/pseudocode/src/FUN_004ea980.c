// Name: FUN_004ea980
// Address: 004ea980
// Address Range: [[004ea980, 004eaa0e]]
// Convention: unknown
// Signature: void FUN_004ea980(int param_1)

#include "nocturne.h"

void FUN_004ea980(int param_1)

{
  int iVar1;
  
  *(byte ***)(param_1 + 0x154) = &PTR_FUN_00601d34;
  iVar1 = 0;
  do {
    if (param_1 == *(int *)(iVar1 + 0x1d06aa4)) {
      *(uint *)(iVar1 + 0x1d06aa4) = 0;
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x10);
  iVar1 = FUN_004f6f80(param_1 + 0x1fae8,0);
  iVar1 = FUN_00533060(iVar1 + -0x138e0,0);
  iVar1 = FUN_0040ee30(iVar1 + -0x8c2c,0);
  iVar1 = FUN_00441ca0(iVar1 + -0x93c,0);
  iVar1 = FUN_005673f0(iVar1 + -0x2b48,0);
  FUN_00408730(iVar1 + -0x158,1);
  return;
}
