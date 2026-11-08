// Name: FUN_005cb5f4
// Address: 005cb5f4
// Address Range: [[005cb5f4, 005cb615]]
// Convention: unknown
// Signature: void FUN_005cb5f4(void)

#include "nocturne.h"

void FUN_005cb5f4(void)

{
  int iVar1;
  uint *in_FS_OFFSET;
  
  iVar1 = (*(code *)PTR_FUN_006265fc)();
  if (*(uint **)(iVar1 + 0x54) != (uint *)0x0) {
    *in_FS_OFFSET = **(uint **)(iVar1 + 0x54);
  }
  iVar1 = (*(code *)PTR_FUN_006265fc)();
  *(uint *)(iVar1 + 0x54) = 0;
  return;
}
