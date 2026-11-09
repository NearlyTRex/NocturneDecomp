// Name: crt_unknown.c_FUN_005a6026
// Address: 005a6026
// Address Range: [[005a6026, 005a6032]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005a6026(void)

#include "nocturne.h"

uint FUN_005a6026(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_005acde0();
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
