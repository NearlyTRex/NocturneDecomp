// Name: FUN_00535280
// Address: 00535280
// Address Range: [[00535280, 005352dc]]
// Convention: unknown
// Signature: void FUN_00535280(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00535280(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_01e6be48) {
    iVar2 = 0;
    do {
      if (*(int *)(iVar2 + 0x1e6be4c) == 0) {
        _DAT_01d1d400 = "..\\core\\path.cpp";
        _DAT_01d1d404 = 0x6a2;
        FUN_005030e0("Global pathmap list corruption");
      }
      puVar1 = (uint *)(iVar2 + 0x1e6be4c);
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
      FUN_00535200(*puVar1);
    } while (iVar3 < _DAT_01e6be48);
  }
  return;
}
