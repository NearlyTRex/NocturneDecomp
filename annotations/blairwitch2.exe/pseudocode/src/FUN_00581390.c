// Name: FUN_00581390
// Address: 00581390
// Address Range: [[00581390, 005813be]]
// Convention: unknown
// Signature: int FUN_00581390(int param_1)

#include "nocturne.h"

int FUN_00581390(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x70) == 2) {
    return 2;
  }
  iVar1 = *(int *)(param_1 + 0x10cb4);
  if (iVar1 != 0) {
    if ((iVar1 != 1) && (iVar1 != 2)) {
      return 2;
    }
    return iVar1;
  }
  return 0;
}
