// Name: FUN_0054e670
// Address: 0054e670
// Address Range: [[0054e670, 0054e68d]]
// Convention: unknown
// Signature: void FUN_0054e670(int param_1)

#include "nocturne.h"

void FUN_0054e670(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1;
  do {
    iVar1 = iVar2 + 4;
    *(uint *)(iVar2 + 0x2140) = 1;
    iVar2 = iVar1;
  } while (iVar1 != param_1 + 0xf0);
  return;
}
