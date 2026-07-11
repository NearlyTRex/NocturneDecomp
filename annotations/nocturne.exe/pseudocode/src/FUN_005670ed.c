// Name: FUN_005670ed
// Address: 005670ed
// Address Range: [[005670ed, 0056710c]]
// Convention: unknown
// Signature: undefined4 FUN_005670ed(int param_1)

#include "nocturne.h"

uint FUN_005670ed(int param_1)

{
  bool bVar1;
  uint in_EAX;
  int iVar2;
  int iVar3;
  
  iVar3 = -4;
  do {
    *(int *)(&stack0xfffffff8 + iVar3) = iVar3;
    iVar3 = iVar3 + -0x1000;
    iVar2 = param_1 + -0x1000;
    bVar1 = 0xfff < param_1;
    param_1 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return in_EAX;
}
