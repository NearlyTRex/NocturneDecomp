// Name: FUN_004d60e0
// Address: 004d60e0
// Address Range: [[004d60e0, 004d61d7]]
// Convention: unknown
// Signature: void FUN_004d60e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d60e0(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (_DAT_01cd0c7c != 0) {
    if (3 < _DAT_01cd0c7c) {
      _DAT_01cd0c7c = 5;
      return;
    }
    if ((_DAT_01cd0c7c == 2) &&
       (_DAT_01cd0c80 =
             ((float)*(int *)(param_1 + 0x290) * (float)_DAT_005e2ea4) /
             ((float)_DAT_005e2e9c / (float)DAT_0061b49c) + _DAT_01cd0c80,
       (float)DAT_0061b498 < _DAT_01cd0c80)) {
      _DAT_01cd0c7c = 0;
      return;
    }
    if ((_DAT_01cd0c7c == 3) &&
       (_DAT_01cd0c80 =
             _DAT_01cd0c80 -
             ((float)*(int *)(param_1 + 0x290) * (float)_DAT_005e2ea4) /
             ((float)_DAT_005e2e9c / (float)DAT_0061b49c), _DAT_01cd0c80 < 0.0)) {
      _DAT_01cd0c80 = 0.0;
      _DAT_01cd0c7c = 4;
      return;
    }
    if (_DAT_01cd0c7c != 1) {
      return;
    }
    if (_DAT_01cd0c8c + 1 < 3) {
      _DAT_01cd0c8c = _DAT_01cd0c8c + 1;
      return;
    }
    uVar1 = 2;
  }
  _DAT_01cd0c8c = 0;
  _DAT_01cd0c7c = uVar1;
  return;
}
