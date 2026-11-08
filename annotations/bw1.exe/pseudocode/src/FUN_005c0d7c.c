// Name: FUN_005c0d7c
// Address: 005c0d7c
// Address Range: [[005c0d7c, 005c0d8b]]
// Convention: unknown
// Signature: int FUN_005c0d7c(int param_1)

#include "nocturne.h"

int FUN_005c0d7c(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x30;
  if (0x39 < iVar1) {
    iVar1 = param_1 + 0x57;
  }
  return iVar1;
}
