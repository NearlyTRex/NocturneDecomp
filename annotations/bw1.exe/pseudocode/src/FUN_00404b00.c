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
  if (_DAT_01c51cac == 0) {
    if (_DAT_01c51d00 == 0) {
      if (DAT_0061b4a0 == 0x20) goto LAB_00404b38;
      _DAT_01c4f02c = FUN_0057fd39;
    }
    else {
      if (DAT_0061b4a0 != 0x20) goto LAB_00404b9d;
      _DAT_01c4f02c = (code *)&LAB_0057de01;
    }
  }
  else if (_DAT_01c51d00 == 0) {
    if (DAT_0061b4a0 == 0x20) {
LAB_00404b38:
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
LAB_00404b9d:
    _DAT_01c4f02c = (code *)&LAB_0057e5e3;
  }
  _DAT_01c51d14 = 0xd9;
  _DAT_01c51d18 = 1;
  FUN_004039d0(param_1);
  FUN_0043cbf0(*(uint *)(param_1 + 4),param_1 + 0x18);
LAB_00404b6e:
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 4;
}
