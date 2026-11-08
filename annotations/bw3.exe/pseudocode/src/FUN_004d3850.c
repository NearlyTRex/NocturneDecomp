// Name: FUN_004d3850
// Address: 004d3850
// Address Range: [[004d3850, 004d38a4]]
// Convention: unknown
// Signature: void FUN_004d3850(int param_1)

#include "nocturne.h"

void FUN_004d3850(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x20b9c) == 0) {
    return;
  }
  iVar1 = FUN_0040c840(*(int *)(param_1 + 0x20b9c),DAT_007e17b4);
  if (param_1 == *(int *)(iVar1 + 800)) {
    *(uint *)(iVar1 + 800) = 0;
    FUN_00556be0(*(uint *)(iVar1 + 0x328));
  }
  *(uint *)(param_1 + 0x20b9c) = 0;
  return;
}
