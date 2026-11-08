// Name: FUN_004f6a50
// Address: 004f6a50
// Address Range: [[004f6a50, 004f6a72]]
// Convention: unknown
// Signature: int FUN_004f6a50(int param_1)

#include "nocturne.h"

int FUN_004f6a50(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(param_1 + 0x143c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14c)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}
