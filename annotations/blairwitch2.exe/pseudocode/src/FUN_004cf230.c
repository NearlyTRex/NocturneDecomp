// Name: FUN_004cf230
// Address: 004cf230
// Address Range: [[004cf230, 004cf2a9]]
// Convention: unknown
// Signature: undefined4 FUN_004cf230(int param_1)

#include "nocturne.h"

uint FUN_004cf230(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x25604) == 0) {
    return 0;
  }
  iVar1 = FUN_004dee70(param_1 + 0x2437c,*(uint *)(*(int *)(param_1 + 0x25604) + 0xaec),1);
  if (iVar1 != 0) {
    FUN_0045efc0(*(uint *)(param_1 + 0x25604));
    *(uint *)(param_1 + 0x25604) = 0;
    return 1;
  }
  FUN_00460800(*(uint *)(param_1 + 0x25604));
  *(uint *)(param_1 + 0x25604) = 0;
  return 0;
}
