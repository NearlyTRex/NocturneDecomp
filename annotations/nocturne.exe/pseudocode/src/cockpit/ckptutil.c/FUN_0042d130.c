// Name: cockpit_ckptutil.c_FUN_0042d130
// Address: 0042d130
// Address Range: [[0042d130, 0042d145]]
// Convention: unknown
// Signature: code * cockpit_ckptutil_c_FUN_0042d130(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * cockpit_ckptutil_c_FUN_0042d130(void)

{
  if (DAT_005b7624 == 8) {
    if (_DAT_01c03948 != 0) {
      return cockpit_ckptutil_c_FUN_0042cff2;
    }
    return cockpit_ckptutil_c_FUN_0042cef8;
  }
  if (DAT_005b7624 != 0x10) {
    return cockpit_ckptutil_c_FUN_0042ceca;
  }
  return cockpit_ckptutil_c_FUN_0042d100;
}
