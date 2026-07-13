// Name: FUN_00406010
// Address: 00406010
// Address Range: [[00406010, 004060af]]
// Convention: unknown
// Signature: int FUN_00406010(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00406010(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00404610(param_1 + 8);
  if (iVar1 != 0) {
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
    _DAT_01c039a0 = 0xd1;
    _DAT_01c039a4 = 3;
    FUN_00404710(param_1);
    FUN_00432cd0(*(uint *)(param_1 + 4),param_1 + 0x18);
  }
  return *(int *)(param_1 + 4) * 4 + param_1 + 0x18;
}
