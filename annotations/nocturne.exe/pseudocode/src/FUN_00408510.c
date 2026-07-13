// Name: FUN_00408510
// Address: 00408510
// Address Range: [[00408510, 00408648]]
// Convention: unknown
// Signature: int FUN_00408510(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00408510(int param_1)

{
  int iVar1;
  
  if (_DAT_01c02594 == 0) {
    FUN_00406f30(param_1);
    iVar1 = FUN_00406d80(param_1);
    return iVar1;
  }
  iVar1 = FUN_00404610(param_1 + 8);
  if (iVar1 != 0) {
    if (_DAT_01c00c78 == 0) {
      if (_DAT_01c03948 == 0) {
        if (DAT_005b7624 == 0x20) {
          _DAT_01c00c7c = &LAB_005300ec;
        }
        else {
          _DAT_01c00c7c = &LAB_00530322;
        }
      }
      else if (DAT_005b7624 == 0x20) {
        _DAT_01c00c7c = &LAB_0052f031;
      }
      else {
        _DAT_01c00c7c = &LAB_0052f823;
      }
      _DAT_01c039a0 = 0x28d;
      _DAT_01c039a4 = 5;
      FUN_004349a0(*(uint *)(param_1 + 4),param_1 + 0x18);
      return param_1 + 0x18 + *(int *)(param_1 + 4) * 4;
    }
    if (_DAT_01c03948 == 0) {
      if (DAT_005b7624 == 0x20) {
        _DAT_01c00c7c = &LAB_005300ec;
      }
      else {
        _DAT_01c00c7c = &LAB_00530322;
      }
    }
    else if (DAT_005b7624 == 0x20) {
      _DAT_01c00c7c = &LAB_0052f031;
    }
    else {
      _DAT_01c00c7c = &LAB_0052f823;
    }
    _DAT_01c039a0 = 0x8d;
    _DAT_01c039a4 = 5;
    FUN_00432cd0(*(uint *)(param_1 + 4),param_1 + 0x18);
  }
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 4;
}
