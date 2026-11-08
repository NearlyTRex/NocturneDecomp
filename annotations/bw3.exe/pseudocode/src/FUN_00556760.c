// Name: FUN_00556760
// Address: 00556760
// Address Range: [[00556760, 00556771]]
// Convention: unknown
// Signature: undefined4 FUN_00556760(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00556760(int param_1)

{
  int iVar1;
  
  _DAT_02cf3290 = param_1;
  if (param_1 == 0) {
    return 0;
  }
  FUN_00556c60();
  if (_DAT_02cf3280 != (int *)0x0) {
    iVar1 = (**(code **)(*_DAT_02cf3280 + 8))(_DAT_02cf3280);
    if (iVar1 == 0) {
      return 0;
    }
  }
  _DAT_02cf3284 = 0;
  FUN_00552b30();
  return 1;
}
