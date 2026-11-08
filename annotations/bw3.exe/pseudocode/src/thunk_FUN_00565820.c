// Name: thunk_FUN_00565820
// Address: 004ec930
// Address Range: [[004ec930, 004ec934]]
// Convention: unknown
// Signature: undefined4 thunk_FUN_00565820(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint thunk_FUN_00565820(void)

{
  int iVar1;
  
  if (_DAT_01c6cee8 == 0) {
    _DAT_02cf612c = _DAT_01c6cee8;
  }
  else {
    iVar1 = (*_DAT_02cf6004)();
    if (iVar1 != 0) {
      _DAT_02cf6128 = DAT_005fba20;
      _DAT_02cf612c = 1;
      _DAT_01c6cee8 = 0;
      DAT_005fba20 = _DAT_02cf6120;
      return 1;
    }
  }
  return 0;
}
