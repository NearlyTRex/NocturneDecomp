// Name: FUN_00406da0
// Address: 00406da0
// Address Range: [[00406da0, 00406de4]]
// Convention: unknown
// Signature: void FUN_00406da0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406da0(int param_1)

{
  DAT_006141d8 = param_1 >> 8;
  if ((int)DAT_006141d8 < 0) {
    DAT_006141d8 = 0;
  }
  else if (0xff < (int)DAT_006141d8) {
    DAT_006141d8 = 0xff;
  }
  DAT_006093c0 = DAT_006141d8 | DAT_006141d8 << 8 | DAT_006141d8 << 0x10;
  _DAT_0070ca80 = DAT_006093c0 ^ 0xffffff;
  return;
}
