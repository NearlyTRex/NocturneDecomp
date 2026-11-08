// Name: FUN_005ae464
// Address: 005ae464
// Address Range: [[005ae464, 005ae485]]
// Convention: unknown
// Signature: void FUN_005ae464(void)

#include "nocturne.h"

void FUN_005ae464(void)

{
  int iVar1;
  uint *in_FS_OFFSET;
  
  iVar1 = (*(code *)PTR_FUN_006079a0)();
  if (*(uint **)(iVar1 + 0x54) != (uint *)0x0) {
    *in_FS_OFFSET = **(uint **)(iVar1 + 0x54);
  }
  iVar1 = (*(code *)PTR_FUN_006079a0)();
  *(uint *)(iVar1 + 0x54) = 0;
  return;
}
