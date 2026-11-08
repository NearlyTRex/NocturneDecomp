// Name: FUN_0056ede0
// Address: 0056ede0
// Address Range: [[0056e8b0, 0056e8b2] [0056ede0, 0056ee1d]]
// Convention: unknown
// Signature: undefined4 FUN_0056ede0(int param_1,int param_2)

#include "nocturne.h"

uint FUN_0056ede0(int param_1,int param_2)

{
  uint uVar1;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0x174) == 7)) {
    if (*(char *)(param_1 + 0x308) == '\0') {
      return 1;
    }
    uVar1 = FUN_00486a40(param_1 + 0x308,param_2,0);
    return uVar1;
  }
  return 0;
}
