// Name: FUN_00406d90
// Address: 00406d90
// Address Range: [[00406d90, 00406ec8]]
// Convention: unknown
// Signature: int FUN_00406d90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00406d90(int param_1)

{
  int iVar1;
  
  if (_DAT_01c6cee8 == 0) {
    FUN_004057b0(param_1);
    iVar1 = FUN_00405600(param_1);
    return iVar1;
  }
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
      _DAT_01c6e2b4 = 0x28d;
      _DAT_01c6e2b8 = 5;
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
    _DAT_01c6e2b4 = 0x8d;
    _DAT_01c6e2b8 = 5;
    FUN_0043a840(*(uint *)(param_1 + 4),param_1 + 0x18);
  }
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 4;
}
