// Name: FUN_0042c410
// Address: 0042c410
// Address Range: [[0042c410, 0042c425] [0042c430, 0042c444] [0042c450, 0042c455]]
// Convention: unknown
// Signature: undefined * FUN_0042c410(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_0042c410(void)

{
  if (DAT_006141c0 == 8) {
    if (_DAT_01c38b40 != 0) {
      return &UNK_0042c2d2;
    }
    return &UNK_0042c1d8;
  }
  if (DAT_006141c0 != 0x10) {
    return &UNK_0042c1aa;
  }
  return &UNK_0042c3e0;
}
