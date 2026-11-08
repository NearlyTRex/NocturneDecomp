// Name: FUN_00538390
// Address: 00538390
// Address Range: [[00538390, 005383f1]]
// Convention: unknown
// Signature: void FUN_00538390(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00538390(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_020b0258 == 0) {
    _DAT_01d046a0 = "..\\core\\setdir.cpp";
    _DAT_01d046a4 = 0x70;
    FUN_004e4500("saveZBufferTable - not saved!");
  }
  if (0 < param_1) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      *(uint *)(&DAT_01c2b64c + iVar2) = *(uint *)(&DAT_020b0258 + iVar2);
      iVar2 = iVar1;
    } while (iVar1 < param_1 * 4);
  }
  _DAT_020b0258 = 0;
  return;
}
