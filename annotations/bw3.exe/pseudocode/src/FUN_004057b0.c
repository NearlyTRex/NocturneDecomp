// Name: FUN_004057b0
// Address: 004057b0
// Address Range: [[004057b0, 00405846]]
// Convention: unknown
// Signature: int FUN_004057b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004057b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00403920(param_1 + 8);
  if (iVar1 != 0) {
    if (_DAT_01c6e2a0 == 0) {
      if (DAT_005fba20 == 0x20) {
        _DAT_01c6b5cc = FUN_00562c33;
      }
      else {
        _DAT_01c6b5cc = FUN_00562e69;
      }
    }
    else if (DAT_005fba20 == 0x20) {
      _DAT_01c6b5cc = (code *)&LAB_00560f31;
    }
    else {
      _DAT_01c6b5cc = (code *)&LAB_00561713;
    }
    _DAT_01c6e2b4 = 0x80;
    _DAT_01c6e2b8 = 1;
    FUN_0043a840(*(uint *)(param_1 + 4),param_1 + 0x18);
  }
  return *(int *)(param_1 + 4) * 4 + param_1 + 0x18;
}
