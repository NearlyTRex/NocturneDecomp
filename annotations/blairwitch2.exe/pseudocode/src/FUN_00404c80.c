// Name: FUN_00404c80
// Address: 00404c80
// Address Range: [[00404c80, 00404d65]]
// Convention: unknown
// Signature: int FUN_00404c80(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00404c80(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00403970(param_1 + 8);
  if (iVar1 == 0) goto LAB_00404cee;
  if (_DAT_01c38aec == 0) {
    if (_DAT_01c38b40 == 0) {
      if (DAT_006141c0 == 0x20) goto LAB_00404cb8;
      _DAT_01c35e6c = FUN_0055d2e9;
    }
    else {
      if (DAT_006141c0 != 0x20) goto LAB_00404d1d;
      _DAT_01c35e6c = (code *)&LAB_0055b3b1;
    }
  }
  else if (_DAT_01c38b40 == 0) {
    if (DAT_006141c0 == 0x20) {
LAB_00404cb8:
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
LAB_00404d1d:
    _DAT_01c35e6c = (code *)&LAB_0055bb93;
  }
  _DAT_01c38b54 = 0xd9;
  _DAT_01c38b58 = 1;
  FUN_00403a20(param_1);
  FUN_00431d90(*(uint *)(param_1 + 4),param_1 + 0x18);
LAB_00404cee:
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 4;
}
