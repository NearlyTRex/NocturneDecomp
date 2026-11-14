// Name: wincore_wddvmem.cpp_FUN_005ac270
// Address: 005ac270
// Address Range: [[005ac270, 005ac2f1]]
// Convention: unknown
// Signature: void wincore_wddvmem_cpp_FUN_005ac270(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void wincore_wddvmem_cpp_FUN_005ac270(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0;
  if (0 < DAT_0061b49c) {
    iVar5 = DAT_0061b4a0 >> 0x1f;
    iVar1 = DAT_0061b4a0 + iVar5 * -8;
    iVar2 = DAT_0061b498 * 4;
    iVar6 = 0;
    iVar3 = 0;
    do {
      *(int *)(&DAT_01c4354c + iVar3) =
           DAT_0061b498 * iVar4 * ((int)(iVar1 - (uint)(iVar5 << 2 < 0)) >> 3) + DAT_00629010;
      iVar4 = iVar4 + 1;
      *(int *)(&DAT_01c4480c + iVar3) = DAT_0071362c + iVar6;
      iVar6 = iVar6 + iVar2;
      iVar3 = iVar3 + 4;
    } while (iVar4 < DAT_0061b49c);
  }
  return;
}
