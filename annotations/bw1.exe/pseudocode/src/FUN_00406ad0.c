// Name: FUN_00406ad0
// Address: 00406ad0
// Address Range: [[00406ad0, 00406baa]]
// Convention: unknown
// Signature: int FUN_00406ad0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00406ad0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00403920(param_1 + 8);
  if (iVar1 != 0) {
    if (_DAT_01c51d00 == 0) {
      if (DAT_0061b4a0 == 0x20) {
        _DAT_01c4f02c = FUN_0057fb03;
      }
      else {
        _DAT_01c4f02c = FUN_0057fd39;
      }
    }
    else if (DAT_0061b4a0 == 0x20) {
      _DAT_01c4f02c = (code *)&LAB_0057de01;
    }
    else {
      _DAT_01c4f02c = (code *)&LAB_0057e5e3;
    }
    if (_DAT_01c4f028 == 0) {
      _DAT_01c51d14 = 0x267;
    }
    else {
      _DAT_01c51d14 = 0x67;
    }
    _DAT_01c51d18 = 1;
    FUN_004039d0(param_1);
    if (_DAT_01c4f028 == 0) {
      FUN_0043de60(*(uint *)(param_1 + 4),param_1 + 0x18);
      return param_1 + 0x18 + *(int *)(param_1 + 4) * 4;
    }
    FUN_0043cbf0(*(uint *)(param_1 + 4),param_1 + 0x18);
  }
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 4;
}
