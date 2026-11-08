// Name: FUN_005c4e68
// Address: 005c4e68
// Address Range: [[005c4e68, 005c4e8b]]
// Convention: unknown
// Signature: undefined4 FUN_005c4e68(int param_1)

#include "nocturne.h"

uint FUN_005c4e68(int param_1)

{
  int iVar1;
  
  if ((param_1 != 7) && (param_1 != 4)) {
    iVar1 = (*(code *)PTR_FUN_0061f2a4)();
    return *(uint *)(iVar1 + 0x5c + param_1 * 8);
  }
  return *(uint *)(param_1 * 8 + 0x61f768);
}
