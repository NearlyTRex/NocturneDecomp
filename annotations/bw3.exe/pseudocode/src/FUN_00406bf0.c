// Name: FUN_00406bf0
// Address: 00406bf0
// Address Range: [[00406bf0, 00406c34]]
// Convention: unknown
// Signature: void FUN_00406bf0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406bf0(int param_1)

{
  DAT_005fba38 = param_1 >> 8;
  if ((int)DAT_005fba38 < 0) {
    DAT_005fba38 = 0;
  }
  else if (0xff < (int)DAT_005fba38) {
    DAT_005fba38 = 0xff;
  }
  DAT_005f07c0 = DAT_005fba38 | DAT_005fba38 << 8 | DAT_005fba38 << 0x10;
  _DAT_00730400 = DAT_005f07c0 ^ 0xffffff;
  return;
}
