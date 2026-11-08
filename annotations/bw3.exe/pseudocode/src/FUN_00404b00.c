// Name: FUN_00404b00
// Address: 00404b00
// Address Range: [[00404b00, 00404be5]]
// Convention: unknown
// Signature: int FUN_00404b00(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00404b00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00403920(param_1 + 8);
  if (iVar1 == 0) goto LAB_00404b6e;
  if (_DAT_01c6e24c == 0) {
    if (_DAT_01c6e2a0 == 0) {
      if (DAT_005fba20 == 0x20) goto LAB_00404b38;
      _DAT_01c6b5cc = FUN_00562e69;
    }
    else {
      if (DAT_005fba20 != 0x20) goto LAB_00404b9d;
      _DAT_01c6b5cc = (code *)&LAB_00560f31;
    }
  }
  else if (_DAT_01c6e2a0 == 0) {
    if (DAT_005fba20 == 0x20) {
LAB_00404b38:
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
LAB_00404b9d:
    _DAT_01c6b5cc = (code *)&LAB_00561713;
  }
  _DAT_01c6e2b4 = 0xd9;
  _DAT_01c6e2b8 = 1;
  FUN_004039d0(param_1);
  FUN_0043a840(*(uint *)(param_1 + 4),param_1 + 0x18);
LAB_00404b6e:
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 4;
}
