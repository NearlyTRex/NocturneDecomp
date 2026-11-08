// Name: FUN_005afef8
// Address: 005afef8
// Address Range: [[005afef8, 005aff1b]]
// Convention: unknown
// Signature: undefined4 FUN_005afef8(int param_1)

#include "nocturne.h"

uint FUN_005afef8(int param_1)

{
  int iVar1;
  
  if ((param_1 != 7) && (param_1 != 4)) {
    iVar1 = (*(code *)PTR_FUN_006079a0)();
    return *(uint *)(iVar1 + 0x5c + param_1 * 8);
  }
  return *(uint *)(param_1 * 8 + 0x607e8c);
}
