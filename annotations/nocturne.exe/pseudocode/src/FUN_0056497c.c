// Name: FUN_0056497c
// Address: 0056497c
// Address Range: [[0056497c, 005649be]]
// Convention: unknown
// Signature: int FUN_0056497c(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0056497c(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  while( true ) {
    do {
      iVar1 = malloc(param_1);
      if (iVar1 != 0) {
        return iVar1;
      }
    } while ((_DAT_02de548c != (code *)0x0) && (iVar1 = (*_DAT_02de548c)(param_1), iVar1 != 0));
    if (_DAT_02de5488 == (code *)0x0) break;
    (*_DAT_02de5488)();
  }
  return 0;
}
