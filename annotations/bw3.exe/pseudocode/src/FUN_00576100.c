// Name: FUN_00576100
// Address: 00576100
// Address Range: [[00576100, 0057612e]]
// Convention: unknown
// Signature: int FUN_00576100(int param_1)

#include "nocturne.h"

int FUN_00576100(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x70) == 2) {
    return 2;
  }
  iVar1 = *(int *)(param_1 + 0xd210);
  if (iVar1 != 0) {
    if ((iVar1 != 1) && (iVar1 != 2)) {
      return 2;
    }
    return iVar1;
  }
  return 0;
}
