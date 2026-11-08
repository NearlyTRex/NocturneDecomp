// Name: FUN_004d3250
// Address: 004d3250
// Address Range: [[004d3250, 004d32c9]]
// Convention: unknown
// Signature: undefined4 FUN_004d3250(int param_1)

#include "nocturne.h"

uint FUN_004d3250(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x20b94) == 0) {
    return 0;
  }
  iVar1 = FUN_004de610(param_1 + 0x206e8,*(uint *)(*(int *)(param_1 + 0x20b94) + 0x990),1);
  if (iVar1 != 0) {
    FUN_00463d10(*(uint *)(param_1 + 0x20b94));
    *(uint *)(param_1 + 0x20b94) = 0;
    return 1;
  }
  FUN_00465550(*(uint *)(param_1 + 0x20b94));
  *(uint *)(param_1 + 0x20b94) = 0;
  return 0;
}
