// Name: FUN_0056bbb0
// Address: 0056bbb0
// Address Range: [[0056bbb0, 0056bbe2]]
// Convention: unknown
// Signature: void FUN_0056bbb0(int param_1)

#include "nocturne.h"

void FUN_0056bbb0(int param_1)

{
  byte bVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 0xd) & 0x20) == 0) {
    iVar2 = FUN_005705c0(*(uint *)(param_1 + 0x10));
    if (iVar2 != 0) {
      bVar1 = *(byte *)(param_1 + 0xd);
      *(byte *)(param_1 + 0xd) = bVar1 | 0x20;
      if ((bVar1 & 7) == 0) {
        *(byte *)(param_1 + 0xd) = bVar1 | 0x22;
      }
    }
  }
  return;
}
