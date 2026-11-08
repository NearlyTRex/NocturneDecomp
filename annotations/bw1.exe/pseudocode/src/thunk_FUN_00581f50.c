// Name: thunk_FUN_00581f50
// Address: 00511160
// Address Range: [[00511160, 00511164]]
// Convention: unknown
// Signature: undefined4 thunk_FUN_00581f50(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint thunk_FUN_00581f50(void)

{
  int iVar1;
  
  if (_DAT_01c50948 == 0) {
    _DAT_02c834d0 = _DAT_01c50948;
  }
  else {
    iVar1 = (*_DAT_02c833a8)();
    if (iVar1 != 0) {
      _DAT_02c834cc = DAT_0061b4a0;
      _DAT_02c834d0 = 1;
      _DAT_01c50948 = 0;
      DAT_0061b4a0 = _DAT_02c834c4;
      return 1;
    }
  }
  return 0;
}
