// Name: FUN_0051dc90
// Address: 0051dc90
// Address Range: [[0051dc90, 0051dcaa]]
// Convention: unknown
// Signature: void FUN_0051dc90(int param_1)

#include "nocturne.h"

void FUN_0051dc90(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1;
  do {
    iVar1 = iVar2 + 4;
    *(uint *)(iVar2 + 0x2140) = 1;
    iVar2 = iVar1;
  } while (iVar1 != param_1 + 0x78);
  return;
}
