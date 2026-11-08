// Name: FUN_005c0f32
// Address: 005c0f32
// Address Range: [[005c0f32, 005c0f74]]
// Convention: unknown
// Signature: int FUN_005c0f32(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005c0f32(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  while( true ) {
    do {
      iVar1 = FUN_005c08d0(param_1);
      if (iVar1 != 0) {
        return iVar1;
      }
    } while ((_DAT_02c9f6bc != (code *)0x0) && (iVar1 = (*_DAT_02c9f6bc)(param_1), iVar1 != 0));
    if (_DAT_02c9f6b8 == (code *)0x0) break;
    (*_DAT_02c9f6b8)();
  }
  return 0;
}
