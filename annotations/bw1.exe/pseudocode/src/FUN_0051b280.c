// Name: FUN_0051b280
// Address: 0051b280
// Address Range: [[0051b280, 0051b2a2]]
// Convention: unknown
// Signature: int FUN_0051b280(int param_1)

#include "nocturne.h"

int FUN_0051b280(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(param_1 + 0x1118); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14c)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}
