// Name: FUN_00408370
// Address: 00408370
// Address Range: [[00408370, 004083b4]]
// Convention: unknown
// Signature: void FUN_00408370(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408370(int param_1)

{
  DAT_005b763c = param_1 >> 8;
  if ((int)DAT_005b763c < 0) {
    DAT_005b763c = 0;
  }
  else if (0xff < (int)DAT_005b763c) {
    DAT_005b763c = 0xff;
  }
  DAT_005acab4 = DAT_005b763c | DAT_005b763c << 8 | DAT_005b763c << 0x10;
  _DAT_006b0284 = DAT_005acab4 ^ 0xffffff;
  return;
}
