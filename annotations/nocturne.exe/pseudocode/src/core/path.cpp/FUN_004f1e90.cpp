// Name: FUN_004f1e90
// Address: 004f1e90
// Address Range: [[004f1e90, 004f1eec]]
// Convention: unknown
// Signature: void FUN_004f1e90(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f1e90(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_01e312f8) {
    iVar2 = 0;
    do {
      if (*(int *)(iVar2 + 0x1e312fc) == 0) {
        _DAT_01cc4800 = "p@..\\core\\path.cpp" + 2;
        _DAT_01cc4804 = 0x6a1;
        FUN_004c8440("Global pathmap list corruption");
      }
      puVar1 = (uint *)(iVar2 + 0x1e312fc);
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
      FUN_004f1e10(*puVar1);
    } while (iVar3 < _DAT_01e312f8);
  }
  return;
}
