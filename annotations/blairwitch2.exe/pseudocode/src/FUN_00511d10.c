// Name: FUN_00511d10
// Address: 00511d10
// Address Range: [[00511d10, 00511d91]]
// Convention: unknown
// Signature: int FUN_00511d10(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00511d10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_01e4fed8) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      if (param_1 == *(int *)(iVar2 + 0x1e4fedc)) {
        _DAT_01e4fed8 = _DAT_01e4fed8 + -1;
        FUN_005ba1f0(iVar2 + 0x1e4fedc,iVar2 + 0x1e4fee0,(_DAT_01e4fed8 - iVar3) * 4);
        *(uint *)(_DAT_01e4fed8 * 4 + 0x1e4fedc) = 0;
        return param_1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar1;
    } while (iVar1 < _DAT_01e4fed8 * 4);
  }
  return param_1;
}
