// Name: FUN_005c3197
// Address: 005c3197
// Address Range: [[005c3197, 005c31c2]]
// Convention: unknown
// Signature: undefined4 FUN_005c3197(void)

#include "nocturne.h"

uint FUN_005c3197(void)

{
  bool bVar1;
  byte *in_EAX;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iStack_4;
  
  if (in_EAX < &iStack_4) {
    puVar2 = (uint *)(*(code *)PTR_FUN_006265fc)();
    if (*puVar2 < (uint)-((int)in_EAX - (int)&iStack_4)) {
      uVar3 = FUN_005c31c3();
      return uVar3;
    }
  }
  iStack_4 = 1;
  uVar3 = FUN_005c9f70();
  iVar5 = -4;
  do {
    *(int *)(&stack0xfffffff0 + iVar5) = iVar5;
    iVar5 = iVar5 + -0x1000;
    iVar4 = iStack_4 + -0x1000;
    bVar1 = 0xfff < iStack_4;
    iStack_4 = iVar4;
  } while (iVar4 != 0 && bVar1);
  return uVar3;
}
