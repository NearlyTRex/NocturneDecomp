// Name: FUN_0056ef24
// Address: 0056ef24
// Address Range: [[0056ef24, 0056ef45]]
// Convention: unknown
// Signature: void FUN_0056ef24(void)

#include "nocturne.h"

void FUN_0056ef24(void)

{
  int iVar1;
  uint *in_FS_OFFSET;
  
  iVar1 = (*(code *)PTR_FUN_005c1abc)();
  if (*(uint **)(iVar1 + 0x54) != (uint *)0x0) {
    *in_FS_OFFSET = **(uint **)(iVar1 + 0x54);
  }
  iVar1 = (*(code *)PTR_FUN_005c1abc)();
  *(uint *)(iVar1 + 0x54) = 0;
  return;
}
