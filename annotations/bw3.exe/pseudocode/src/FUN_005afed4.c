// Name: FUN_005afed4
// Address: 005afed4
// Address Range: [[005afed4, 005afef7]]
// Convention: unknown
// Signature: undefined4 FUN_005afed4(int param_1)

#include "nocturne.h"

uint FUN_005afed4(int param_1)

{
  int iVar1;
  
  if ((param_1 != 7) && (param_1 != 4)) {
    iVar1 = (*(code *)PTR_FUN_006079a0)();
    return *(uint *)(iVar1 + 0x58 + param_1 * 8);
  }
  return *(uint *)(&DAT_00607e88 + param_1 * 8);
}
