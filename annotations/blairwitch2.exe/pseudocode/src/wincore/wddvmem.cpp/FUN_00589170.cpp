// Name: FUN_00589170
// Address: 00589170
// Address Range: [[00589170, 00589247]]
// Convention: unknown
// Signature: void FUN_00589170(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00589170(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (_DAT_02661afc == 0) {
    if (_DAT_01c37788 != 0) {
      _DAT_02661af4 = 1;
      return;
    }
    if (0 < DAT_006141bc) {
      iVar4 = DAT_006141c0 >> 0x1f;
      iVar2 = DAT_006141c0 + iVar4 * -8;
      iVar5 = 0;
      iVar6 = DAT_006141b8 * 4;
      iVar3 = 0;
      iVar1 = 0;
      do {
        *(int *)(&DAT_01c2a38c + iVar1) =
             DAT_00622010 + DAT_006141b8 * iVar3 * ((int)(iVar2 - (uint)(iVar4 << 2 < 0)) >> 3);
        iVar3 = iVar3 + 1;
        *(int *)(&DAT_01c2b64c + iVar1) = DAT_0070c62c + iVar5;
        iVar5 = iVar5 + iVar6;
        iVar1 = iVar1 + 4;
      } while (iVar3 < DAT_006141bc);
    }
    iVar2 = (**(code **)(*_DAT_02661ae8 + 0x80))(_DAT_02661ae8,0);
    if (iVar2 != 0) {
      _DAT_01d046a0 = "..\\wincore\\wddvmem.cpp";
      _DAT_01d046a4 = 0x265;
      FUN_004e4500("closeScreenDevice - Unable to unlock");
    }
    _DAT_02661af4 = 1;
  }
  return;
}
