// Name: FUN_00458f80
// Address: 00458f80
// Address Range: [[00458f80, 00458fad]]
// Convention: unknown
// Signature: undefined4 FUN_00458f80(int param_1)

#include "nocturne.h"

uint FUN_00458f80(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_004fc070(param_1 + 0x158);
  if (*(int *)(iVar1 + 0x24) == 0x23) {
    return 1;
  }
  uVar2 = FUN_0040c7e0(param_1);
  return uVar2;
}
