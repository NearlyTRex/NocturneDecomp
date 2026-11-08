// Name: FUN_005cd168
// Address: 005cd168
// Address Range: [[005cd168, 005cd18b]]
// Convention: unknown
// Signature: undefined4 FUN_005cd168(int param_1)

#include "nocturne.h"

uint FUN_005cd168(int param_1)

{
  int iVar1;
  
  if ((param_1 != 7) && (param_1 != 4)) {
    iVar1 = (*(code *)PTR_FUN_006265fc)();
    return *(uint *)(iVar1 + 0x5c + param_1 * 8);
  }
  return *(uint *)(param_1 * 8 + 0x626ae8);
}
