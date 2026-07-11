// Name: FUN_005670e0
// Address: 005670e0
// Address Range: [[005670e0, 005670ec]]
// Convention: unknown
// Signature: undefined4 FUN_005670e0(void)

#include "nocturne.h"

uint FUN_005670e0(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_0056ddc0();
  iVar5 = -4;
  iVar3 = 1;
  do {
    *(int *)(&stack0xfffffff4 + iVar5) = iVar5;
    iVar5 = iVar5 + -0x1000;
    iVar4 = iVar3 + -0x1000;
    bVar1 = 0xfff < iVar3;
    iVar3 = iVar4;
  } while (iVar4 != 0 && bVar1);
  return uVar2;
}
