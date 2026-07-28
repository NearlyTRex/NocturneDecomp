// Name: crt_unknown.c_ProbeStackSpace_FUN_005670ed
// Address: 005670ed
// Address Range: [[005670ed, 0056710c]]
// Convention: __stdcall
// Signature: void __stdcall crt_unknown_c_ProbeStackSpace_FUN_005670ed(uint size)

#include "nocturne.h"

void __stdcall ProbeStackSpace(uint size)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = -4;
  do {
    *(int *)(&stack0xfffffff8 + iVar3) = iVar3;
    iVar3 = iVar3 + -0x1000;
    uVar2 = size - 0x1000;
    bVar1 = 0xfff < (int)size;
    size = uVar2;
  } while (uVar2 != 0 && bVar1);
  return;
}
