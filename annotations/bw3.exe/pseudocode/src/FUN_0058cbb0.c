// Name: FUN_0058cbb0
// Address: 0058cbb0
// Address Range: [[0058cbb0, 0058cbdd]]
// Convention: unknown
// Signature: undefined4 FUN_0058cbb0(int param_1)

#include "nocturne.h"

uint FUN_0058cbb0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_004fc070(param_1 + 0x158);
  if (*(int *)(iVar1 + 0x24) == 0xf) {
    return 1;
  }
  uVar2 = FUN_0040c7e0(param_1);
  return uVar2;
}
