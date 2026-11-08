// Name: FUN_00550bd0
// Address: 00550bd0
// Address Range: [[00550bd0, 00550be1]]
// Convention: unknown
// Signature: undefined4 FUN_00550bd0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00550bd0(int param_1)

{
  int iVar1;
  
  _DAT_02648e8c = param_1;
  if (param_1 == 0) {
    return 0;
  }
  FUN_005510d0();
  if (_DAT_02648e80 != (int *)0x0) {
    iVar1 = (**(code **)(*_DAT_02648e80 + 8))(_DAT_02648e80);
    if (iVar1 == 0) {
      return 0;
    }
  }
  _DAT_02648e84 = 0;
  FUN_0054cfc0();
  return 1;
}
