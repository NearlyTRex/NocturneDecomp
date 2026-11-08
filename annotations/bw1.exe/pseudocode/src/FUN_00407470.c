// Name: FUN_00407470
// Address: 00407470
// Address Range: [[00407470, 00407562]]
// Convention: unknown
// Signature: void FUN_00407470(int param_1,uint param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407470(int param_1,uint param_2,int param_3)

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
    _DAT_01c51d14 = param_2;
    if ((param_2 & 0x10) != 0) {
      _DAT_01c4f024 =
           FUN_004ffd40(*(uint *)(param_1 + 8),*(uint *)(param_1 + 0xc),
                        *(uint *)(param_1 + 0x10));
    }
    _DAT_01c51d18 = param_3;
    if (param_3 == 0) {
      if ((param_2 & 0xc0) != 0) {
        _DAT_01c51d18 = 1;
      }
    }
    else {
      _DAT_01c51d18 = 5;
    }
    if (_DAT_01c4f028 == 0) {
      FUN_0043de60(*(uint *)(param_1 + 4),param_1 + 0x18);
      return;
    }
    FUN_0043cbf0(*(uint *)(param_1 + 4),param_1 + 0x18);
  }
  return;
}
