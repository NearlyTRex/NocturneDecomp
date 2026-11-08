// Name: FUN_005890c0
// Address: 005890c0
// Address Range: [[005890c0, 0058916f]]
// Convention: unknown
// Signature: void FUN_005890c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005890c0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_74 [4];
  int iStack_64;
  
  if ((_DAT_02661afc == 0) && (_DAT_01c37788 == 0)) {
    FUN_005b77c0(local_74,0,0x6c);
    iVar3 = 0;
    local_74[0] = 0x6c;
    iVar1 = (**(code **)(*_DAT_02661ae8 + 100))(_DAT_02661ae8,0,local_74,1);
    if (iVar1 != 0) {
      _DAT_01d046a0 = "..\\wincore\\wddvmem.cpp";
      _DAT_01d046a4 = 0x23b;
      FUN_004e4500("openScreenDevice - Unable to lock screen!");
    }
    if (0 < DAT_006141bc) {
      iVar1 = DAT_006141bc * 4;
      iVar2 = 0;
      do {
        *(int *)(&DAT_01c2a38c + iVar2) = iStack_64;
        iVar2 = iVar2 + 4;
        iStack_64 = iStack_64 + iVar3;
      } while (iVar2 < iVar1);
      return;
    }
  }
  return;
}
