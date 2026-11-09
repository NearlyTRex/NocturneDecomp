// Name: crt_unknown.c_FUN_005badd7
// Address: 005badd7
// Address Range: [[005badd7, 005badf5]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005badd7(void)

#include "nocturne.h"

uint FUN_005badd7(void)

{
  bool bVar1;
  byte *in_EAX;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iStack_4;
  
  if (in_EAX < &iStack_4) {
    puVar2 = (uint *)(*(code *)PTR_crt_unknown_c_FUN_005bcdfc_0061f2a4)();
    if (*puVar2 < (uint)-((int)in_EAX - (int)&iStack_4)) {
      uVar3 = FUN_005bae03();
      return uVar3;
    }
  }
  iStack_4 = 1;
  uVar3 = FUN_005c1c20();
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
