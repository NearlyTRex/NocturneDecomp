// Name: thunk_FUN_0055f500
// Address: 004f23d0
// Address Range: [[004f23d0, 004f23d4]]
// Convention: unknown
// Signature: undefined4 thunk_FUN_0055f500(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint thunk_FUN_0055f500(void)

{
  int iVar1;
  
  if (_DAT_01c37788 == 0) {
    _DAT_0264bd00 = _DAT_01c37788;
  }
  else {
    iVar1 = (*_DAT_0264bbd8)();
    if (iVar1 != 0) {
      _DAT_0264bcfc = DAT_006141c0;
      _DAT_0264bd00 = 1;
      _DAT_01c37788 = 0;
      DAT_006141c0 = _DAT_0264bcf4;
      return 1;
    }
  }
  return 0;
}
