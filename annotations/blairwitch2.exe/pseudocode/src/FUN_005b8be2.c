// Name: FUN_005b8be2
// Address: 005b8be2
// Address Range: [[005b8be2, 005b8c24]]
// Convention: unknown
// Signature: int FUN_005b8be2(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005b8be2(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  while( true ) {
    do {
      iVar1 = FUN_005b8580(param_1);
      if (iVar1 != 0) {
        return iVar1;
      }
    } while ((_DAT_026807cc != (code *)0x0) && (iVar1 = (*_DAT_026807cc)(param_1), iVar1 != 0));
    if (_DAT_026807c8 == (code *)0x0) break;
    (*_DAT_026807c8)();
  }
  return 0;
}
