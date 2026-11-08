// Name: FUN_005a6007
// Address: 005a6007
// Address Range: [[005a6007, 005a6032]]
// Convention: unknown
// Signature: undefined4 FUN_005a6007(void)

#include "nocturne.h"

uint FUN_005a6007(void)

{
  bool bVar1;
  byte *in_EAX;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iStack_4;
  
  if (in_EAX < &iStack_4) {
    puVar2 = (uint *)(*(code *)PTR_FUN_006079a0)();
    if (*puVar2 < (uint)-((int)in_EAX - (int)&iStack_4)) {
      uVar3 = FUN_005a6033();
      return uVar3;
    }
  }
  iStack_4 = 1;
  uVar3 = FUN_005acde0();
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
