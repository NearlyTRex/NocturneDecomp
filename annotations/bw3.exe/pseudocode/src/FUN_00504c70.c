// Name: FUN_00504c70
// Address: 00504c70
// Address Range: [[00504c70, 00504d12]]
// Convention: unknown
// Signature: void FUN_00504c70(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00504c70(int param_1)

{
  int iVar1;
  byte local_10 [8];
  
  iVar1 = FUN_005806a0();
  _DAT_01da6474 = iVar1 / 0x12 - _DAT_01da6474;
  if (_DAT_01da6474 < 0) {
    _DAT_01da6474 = 0;
  }
  else if (0x20000 < _DAT_01da6474) {
    _DAT_01da6474 = 0x20000;
  }
  _DAT_01da6478 = _DAT_01da6478 + _DAT_01da6474;
  _DAT_01da6474 = iVar1 / 0x12;
  while( true ) {
    iVar1 = FUN_0056f960(param_1 + 0x180);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = FUN_0056fb10(param_1 + 0x180,&DAT_01dd448c,0x404,local_10);
    if (iVar1 < 1) break;
    _DAT_01dd4488 = iVar1 + 1;
    FUN_00504d60(param_1,local_10,&DAT_01dd4488);
  }
  FUN_00506670(param_1);
  return;
}
