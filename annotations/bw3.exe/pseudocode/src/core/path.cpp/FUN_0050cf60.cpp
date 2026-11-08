// Name: FUN_0050cf60
// Address: 0050cf60
// Address Range: [[0050cf60, 0050cfbc]]
// Convention: unknown
// Signature: void FUN_0050cf60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050cf60(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_01ec1518) {
    iVar2 = 0;
    do {
      if (*(int *)(iVar2 + 0x1ec151c) == 0) {
        _DAT_01d71de0 = "..\\core\\path.cpp";
        _DAT_01d71de4 = 0x6a2;
        FUN_004e4330("Global pathmap list corruption");
      }
      puVar1 = (uint *)(iVar2 + 0x1ec151c);
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
      FUN_0050cee0(*puVar1);
    } while (iVar3 < _DAT_01ec1518);
  }
  return;
}
