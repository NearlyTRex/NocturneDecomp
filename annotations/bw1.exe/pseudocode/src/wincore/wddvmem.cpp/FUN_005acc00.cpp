// Name: FUN_005acc00
// Address: 005acc00
// Address Range: [[005acc00, 005accd7]]
// Convention: unknown
// Signature: void FUN_005acc00(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005acc00(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (_DAT_02c9931c == 0) {
    if (_DAT_01c50948 != 0) {
      _DAT_02c99314 = 1;
      return;
    }
    if (0 < DAT_0061b49c) {
      iVar4 = DAT_0061b4a0 >> 0x1f;
      iVar2 = DAT_0061b4a0 + iVar4 * -8;
      iVar5 = 0;
      iVar6 = DAT_0061b498 * 4;
      iVar3 = 0;
      iVar1 = 0;
      do {
        *(int *)(&DAT_01c4354c + iVar1) =
             DAT_00629010 + DAT_0061b498 * iVar3 * ((int)(iVar2 - (uint)(iVar4 << 2 < 0)) >> 3);
        iVar3 = iVar3 + 1;
        *(int *)(&DAT_01c4480c + iVar1) = DAT_0071362c + iVar5;
        iVar5 = iVar5 + iVar6;
        iVar1 = iVar1 + 4;
      } while (iVar3 < DAT_0061b49c);
    }
    iVar2 = (**(code **)(*_DAT_02c99308 + 0x80))(_DAT_02c99308,0);
    if (iVar2 != 0) {
      _DAT_01d1d400 = "..\\wincore\\wddvmem.cpp";
      _DAT_01d1d404 = 0x28f;
      FUN_005030e0("closeScreenDevice - Unable to unlock");
    }
    _DAT_02c99314 = 1;
  }
  return;
}
