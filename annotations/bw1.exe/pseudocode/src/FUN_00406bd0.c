// Name: FUN_00406bd0
// Address: 00406bd0
// Address Range: [[00406bd0, 00406c14]]
// Convention: unknown
// Signature: void FUN_00406bd0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406bd0(int param_1)

{
  DAT_0061b4b8 = param_1 >> 8;
  if ((int)DAT_0061b4b8 < 0) {
    DAT_0061b4b8 = 0;
  }
  else if (0xff < (int)DAT_0061b4b8) {
    DAT_0061b4b8 = 0xff;
  }
  DAT_006104f0 = DAT_0061b4b8 | DAT_0061b4b8 << 8 | DAT_0061b4b8 << 0x10;
  _DAT_00713a80 = DAT_006104f0 ^ 0xffffff;
  return;
}
