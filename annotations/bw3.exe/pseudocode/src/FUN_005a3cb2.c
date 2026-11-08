// Name: FUN_005a3cb2
// Address: 005a3cb2
// Address Range: [[005a3cb2, 005a3cf4]]
// Convention: unknown
// Signature: int FUN_005a3cb2(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005a3cb2(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  while( true ) {
    do {
      iVar1 = FUN_005a3650(param_1);
      if (iVar1 != 0) {
        return iVar1;
      }
    } while ((_DAT_02d2590c != (code *)0x0) && (iVar1 = (*_DAT_02d2590c)(param_1), iVar1 != 0));
    if (_DAT_02d25908 == (code *)0x0) break;
    (*_DAT_02d25908)();
  }
  return 0;
}
