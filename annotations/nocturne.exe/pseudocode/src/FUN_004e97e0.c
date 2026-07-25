// Name: FUN_004e97e0
// Address: 004e97e0
// Address Range: [[004e97e0, 004e9850]]
// Convention: unknown
// Signature: void FUN_004e97e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e97e0(int param_1)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  
  iVar1 = 0;
  if (0 < _DAT_01d09c00) {
    iVar2 = 0;
    puVar3 = &DAT_01d09c68;
    do {
      while (*(int *)(iVar2 + 0x1d09c04) < param_1) {
        _DAT_01d09c00 = _DAT_01d09c00 + -1;
        memmove(iVar2 + 0x1d09c04,puVar3,(_DAT_01d09c00 - iVar1) * 100);
        if (_DAT_01d09c00 <= iVar1) {
          return;
        }
      }
      puVar3 = puVar3 + 100;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 100;
    } while (iVar1 < _DAT_01d09c00);
  }
  return;
}
