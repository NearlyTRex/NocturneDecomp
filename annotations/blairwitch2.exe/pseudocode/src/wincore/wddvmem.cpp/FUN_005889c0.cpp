// Name: wincore_wddvmem.cpp_FUN_005889c0
// Address: 005889c0
// Address Range: [[005889c0, 00588a41]]
// Convention: unknown
// Signature: void wincore_wddvmem_cpp_FUN_005889c0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void wincore_wddvmem_cpp_FUN_005889c0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0;
  if (0 < DAT_006141bc) {
    iVar5 = DAT_006141c0 >> 0x1f;
    iVar1 = DAT_006141c0 + iVar5 * -8;
    iVar2 = DAT_006141b8 * 4;
    iVar6 = 0;
    iVar3 = 0;
    do {
      *(int *)(&DAT_01c2a38c + iVar3) =
           DAT_006141b8 * iVar4 * ((int)(iVar1 - (uint)(iVar5 << 2 < 0)) >> 3) + DAT_00622010;
      iVar4 = iVar4 + 1;
      *(int *)(&DAT_01c2b64c + iVar3) = DAT_0070c62c + iVar6;
      iVar6 = iVar6 + iVar2;
      iVar3 = iVar3 + 4;
    } while (iVar4 < DAT_006141bc);
  }
  return;
}
