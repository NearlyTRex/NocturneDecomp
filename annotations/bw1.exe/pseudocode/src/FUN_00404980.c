// Name: FUN_00404980
// Address: 00404980
// Address Range: [[00404980, 00404af4]]
// Convention: unknown
// Signature: int FUN_00404980(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00404980(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00403920(param_1 + 8);
  if (iVar1 != 0) {
    if (DAT_00713a74 == 0) {
      if (0x00000001 == 0) {
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
        _DAT_01c51d14 = 0x10;
        _DAT_01c51d18 = 0;
      }
      else {
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
        _DAT_01c51d14 = 0xd0;
        _DAT_01c51d18 = 1;
      }
    }
    else {
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
      _DAT_01c51d14 = 0;
      _DAT_01c51d18 = 0;
    }
    _DAT_01c4f024 =
         FUN_004ffd40(*(uint *)(param_1 + 8),*(uint *)(param_1 + 0xc),
                      *(uint *)(param_1 + 0x10));
    _DAT_01c4f020 = FUN_00403990(DAT_00713a5c,_DAT_01c4f024);
    FUN_0043cbf0(*(uint *)(param_1 + 4),param_1 + 0x18);
  }
  return *(int *)(param_1 + 4) * 4 + param_1 + 0x18;
}
