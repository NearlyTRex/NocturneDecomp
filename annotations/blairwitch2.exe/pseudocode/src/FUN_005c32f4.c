// Name: FUN_005c32f4
// Address: 005c32f4
// Address Range: [[005c32f4, 005c3315]]
// Convention: unknown
// Signature: void FUN_005c32f4(void)

#include "nocturne.h"

void FUN_005c32f4(void)

{
  int iVar1;
  uint *in_FS_OFFSET;
  
  iVar1 = (*(code *)PTR_FUN_0061f2a4)();
  if (*(uint **)(iVar1 + 0x54) != (uint *)0x0) {
    *in_FS_OFFSET = **(uint **)(iVar1 + 0x54);
  }
  iVar1 = (*(code *)PTR_FUN_0061f2a4)();
  *(uint *)(iVar1 + 0x54) = 0;
  return;
}
