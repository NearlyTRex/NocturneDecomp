// Name: FUN_004eb5e0
// Address: 004eb5e0
// Address Range: [[004eb5e0, 004eb659]]
// Convention: unknown
// Signature: undefined4 FUN_004eb5e0(int param_1)

#include "nocturne.h"

uint FUN_004eb5e0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1ff74) == 0) {
    return 0;
  }
  iVar1 = FUN_004fc240(param_1 + 0x1fae8,*(uint *)(*(int *)(param_1 + 0x1ff74) + 0x990),1);
  if (iVar1 != 0) {
    FUN_004774d0(*(uint *)(param_1 + 0x1ff74));
    *(uint *)(param_1 + 0x1ff74) = 0;
    return 1;
  }
  FUN_00478d10(*(uint *)(param_1 + 0x1ff74));
  *(uint *)(param_1 + 0x1ff74) = 0;
  return 0;
}
