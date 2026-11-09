// Name: wincore_wddvmem.cpp_FUN_00579b1e
// Address: 00579b1e
// Address Range: [[00579b1e, 00579ba1]]
// Convention: unknown
// Signature: void wincore_wddvmem_cpp_FUN_00579b1e(void)

#include "nocturne.h"

void wincore_wddvmem_cpp_FUN_00579b1e(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0;
  if (0 < DAT_005fba1c) {
    iVar5 = DAT_005fba20 >> 0x1f;
    iVar1 = DAT_005fba20 + iVar5 * -8;
    iVar2 = DAT_005fba18 * 4;
    iVar6 = 0;
    iVar3 = 0;
    do {
      *(int *)(&DAT_01c5faec + iVar3) =
           DAT_005fba18 * iVar4 * ((int)(iVar1 - (uint)(iVar5 << 2 < 0)) >> 3) + DAT_0060b010;
      iVar4 = iVar4 + 1;
      *(int *)(&DAT_01c60dac + iVar3) = DAT_0072ffac + iVar6;
      iVar6 = iVar6 + iVar2;
      iVar3 = iVar3 + 4;
    } while (iVar4 < DAT_005fba1c);
  }
  return;
}
