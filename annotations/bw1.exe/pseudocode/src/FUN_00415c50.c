// Name: FUN_00415c50
// Address: 00415c50
// Address Range: [[00415c50, 00415c7f]]
// Convention: unknown
// Signature: void FUN_00415c50(void)

#include "nocturne.h"

void FUN_00415c50(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < DAT_007c394c) {
    iVar3 = 0;
    do {
      puVar1 = (uint *)((int)&DAT_007c3950 + iVar3);
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 1;
      (**(code **)(*(int *)*puVar1 + 0xc))((int *)*puVar1);
    } while (iVar2 < DAT_007c394c);
  }
  return;
}
