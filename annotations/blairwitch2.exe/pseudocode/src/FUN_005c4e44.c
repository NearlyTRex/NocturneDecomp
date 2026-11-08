// Name: FUN_005c4e44
// Address: 005c4e44
// Address Range: [[005c4e44, 005c4e67]]
// Convention: unknown
// Signature: undefined4 FUN_005c4e44(int param_1)

#include "nocturne.h"

uint FUN_005c4e44(int param_1)

{
  int iVar1;
  
  if ((param_1 != 7) && (param_1 != 4)) {
    iVar1 = (*(code *)PTR_FUN_0061f2a4)();
    return *(uint *)(iVar1 + 0x58 + param_1 * 8);
  }
  return *(uint *)(&DAT_0061f764 + param_1 * 8);
}
