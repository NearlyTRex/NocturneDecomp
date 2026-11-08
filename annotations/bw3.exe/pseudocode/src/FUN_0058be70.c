// Name: FUN_0058be70
// Address: 0058be70
// Address Range: [[0058be70, 0058bea8]]
// Convention: unknown
// Signature: undefined4 FUN_0058be70(int param_1)

#include "nocturne.h"

uint FUN_0058be70(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_004fc070(param_1 + 0x158);
  if ((*(int *)(iVar1 + 0x24) == 0xf) && (*(int *)(0x01D81080 + 0x1008) == 0)) {
    return 0;
  }
  uVar2 = FUN_0042e220(param_1);
  return uVar2;
}
