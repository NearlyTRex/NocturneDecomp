// Name: FUN_00578570
// Address: 00578570
// Address Range: [[00578050, 00578052] [00578570, 005785ad]]
// Convention: unknown
// Signature: undefined4 FUN_00578570(int param_1,int param_2)

#include "nocturne.h"

uint FUN_00578570(int param_1,int param_2)

{
  uint uVar1;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0x2d0) == 7)) {
    if (*(char *)(param_1 + 0x464) == '\0') {
      return 1;
    }
    uVar1 = FUN_00485840(param_1 + 0x464,param_2,0);
    return uVar1;
  }
  return 0;
}
