// Name: FUN_0050c190
// Address: 0050c190
// Address Range: [[0050c190, 0050c232]]
// Convention: unknown
// Signature: void FUN_0050c190(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050c190(int param_1)

{
  int iVar1;
  byte local_10 [8];
  
  iVar1 = FUN_0058e9e0();
  _DAT_01d34e34 = iVar1 / 0x12 - _DAT_01d34e34;
  if (_DAT_01d34e34 < 0) {
    _DAT_01d34e34 = 0;
  }
  else if (0x20000 < _DAT_01d34e34) {
    _DAT_01d34e34 = 0x20000;
  }
  _DAT_01d34e38 = _DAT_01d34e38 + _DAT_01d34e34;
  _DAT_01d34e34 = iVar1 / 0x12;
  while( true ) {
    iVar1 = FUN_00579090(param_1 + 0x180);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = FUN_00579240(param_1 + 0x180,&DAT_01d62e4c,0x404,local_10);
    if (iVar1 < 1) break;
    _DAT_01d62e48 = iVar1 + 1;
    FUN_0050c280(param_1,local_10,&DAT_01d62e48);
  }
  FUN_0050db90(param_1);
  return;
}
