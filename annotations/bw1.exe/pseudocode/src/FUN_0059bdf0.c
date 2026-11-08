// Name: FUN_0059bdf0
// Address: 0059bdf0
// Address Range: [[0059b8c0, 0059b8c2] [0059bdf0, 0059be2d]]
// Convention: unknown
// Signature: undefined4 FUN_0059bdf0(int param_1,int param_2)

#include "nocturne.h"

uint FUN_0059bdf0(int param_1,int param_2)

{
  uint uVar1;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0x174) == 7)) {
    if (*(char *)(param_1 + 0x308) == '\0') {
      return 1;
    }
    uVar1 = FUN_0049dea0(param_1 + 0x308,param_2,0);
    return uVar1;
  }
  return 0;
}
