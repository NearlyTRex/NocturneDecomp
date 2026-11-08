// Name: FUN_004054e0
// Address: 004054e0
// Address Range: [[004054e0, 004055f7]]
// Convention: unknown
// Signature: int FUN_004054e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004054e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00403920(param_1 + 8);
  if (iVar1 != 0) {
    if (_DAT_01c6b5c8 == 0) {
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
      _DAT_01c6e2b4 = 0x20d;
      _DAT_01c6e2b8 = 0;
      FUN_0043bac0(*(uint *)(param_1 + 4),param_1 + 0x18);
      return param_1 + 0x18 + *(int *)(param_1 + 4) * 4;
    }
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
    _DAT_01c6e2b4 = 0xd;
    _DAT_01c6e2b8 = 4;
    FUN_0043a840(*(uint *)(param_1 + 4),param_1 + 0x18);
  }
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 4;
}
