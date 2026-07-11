// Name: FUN_0051dcb0
// Address: 0051dcb0
// Address Range: [[0051dcb0, 0051dcca]]
// Convention: unknown
// Signature: void FUN_0051dcb0(int param_1)

#include "nocturne.h"

void FUN_0051dcb0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1;
  do {
    iVar1 = iVar2 + 4;
    *(uint *)(iVar2 + 0x21b8) = 0;
    iVar2 = iVar1;
  } while (iVar1 != param_1 + 0x78);
  return;
}
