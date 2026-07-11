// Name: FUN_004efdd0
// Address: 004efdd0
// Address Range: [[004efdd0, 004efe51]]
// Convention: unknown
// Signature: int FUN_004efdd0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004efdd0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_01e312f8) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      if (param_1 == *(int *)(iVar2 + 0x1e312fc)) {
        _DAT_01e312f8 = _DAT_01e312f8 + -1;
        FUN_00566170(iVar2 + 0x1e312fc,iVar2 + 0x1e31300,(_DAT_01e312f8 - iVar3) * 4);
        *(uint *)(_DAT_01e312f8 * 4 + 0x1e312fc) = 0;
        return param_1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar1;
    } while (iVar1 < _DAT_01e312f8 * 4);
  }
  return param_1;
}
