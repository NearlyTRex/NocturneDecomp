// Name: wincore_wddvmem.cpp_initializeScanlinePointers_FUN_00552d70
// Address: 00552d70
// Address Range: [[00552d70, 00552df1]]
// Convention: unknown
// Signature: void wincore_wddvmem_cpp_initializeScanlinePointers_FUN_00552d70(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void wincore_wddvmem_cpp_initializeScanlinePointers_FUN_00552d70(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0;
  if (0 < DAT_005b7620) {
    iVar5 = DAT_005b7624 >> 0x1f;
    iVar1 = DAT_005b7624 + iVar5 * -8;
    iVar2 = DAT_005b761c * 4;
    iVar6 = 0;
    iVar3 = 0;
    do {
      *(int *)(&DAT_01bd2fa0 + iVar3) =
           DAT_005b761c * iVar4 * ((int)(iVar1 - (uint)(iVar5 << 2 < 0)) >> 3) + DAT_005c5010;
      iVar4 = iVar4 + 1;
      *(int *)(&DAT_01bd4260 + iVar3) = DAT_006af62c + iVar6;
      iVar6 = iVar6 + iVar2;
      iVar3 = iVar3 + 4;
    } while (iVar4 < DAT_005b7620);
  }
  return;
}
