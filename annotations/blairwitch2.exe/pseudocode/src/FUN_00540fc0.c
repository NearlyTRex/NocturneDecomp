// Name: FUN_00540fc0
// Address: 00540fc0
// Address Range: [[00540fc0, 00540ff6]]
// Convention: unknown
// Signature: int FUN_00540fc0(int param_1,int param_2,int param_3)

#include "nocturne.h"

int FUN_00540fc0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (param_2 == param_3) {
      return iVar1;
    }
    param_2 = *(int *)(param_1 + 0x1d21c + param_2 * 0x24);
    iVar1 = iVar1 + 1;
  } while (-1 < param_2);
  if (param_3 < 0) {
    return iVar1;
  }
  return -1;
}
