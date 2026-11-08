// Name: FUN_0058cbe0
// Address: 0058cbe0
// Address Range: [[0058cbe0, 0058cc12]]
// Convention: unknown
// Signature: undefined4 FUN_0058cbe0(int param_1)

#include "nocturne.h"

uint FUN_0058cbe0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004fc070(param_1 + 0x158);
  iVar1 = *(int *)(iVar1 + 0x24);
  if ((((iVar1 != 0xf) && (iVar1 != 0x16)) && (iVar1 != 0x17)) && (iVar1 != 0x15)) {
    return 0;
  }
  return 1;
}
