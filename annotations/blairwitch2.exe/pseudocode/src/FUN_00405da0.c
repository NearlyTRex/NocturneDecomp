// Name: FUN_00405da0
// Address: 00405da0
// Address Range: [[00405da0, 00405e36]]
// Convention: unknown
// Signature: int FUN_00405da0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00405da0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00403970(param_1 + 8);
  if (iVar1 != 0) {
    if (_DAT_01c38b40 == 0) {
      if (DAT_006141c0 == 0x20) {
        _DAT_01c35e6c = FUN_0055d0b3;
      }
      else {
        _DAT_01c35e6c = FUN_0055d2e9;
      }
    }
    else if (DAT_006141c0 == 0x20) {
      _DAT_01c35e6c = (code *)&LAB_0055b3b1;
    }
    else {
      _DAT_01c35e6c = (code *)&LAB_0055bb93;
    }
    _DAT_01c38b54 = 0x81;
    _DAT_01c38b58 = 1;
    FUN_00431d90(*(uint *)(param_1 + 4),param_1 + 0x18);
  }
  return *(int *)(param_1 + 4) * 4 + param_1 + 0x18;
}
