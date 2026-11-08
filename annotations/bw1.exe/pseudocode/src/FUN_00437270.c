// Name: FUN_00437270
// Address: 00437270
// Address Range: [[00437270, 00437285] [00437290, 004372a4] [004372b0, 004372b5]]
// Convention: unknown
// Signature: undefined * FUN_00437270(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_00437270(void)

{
  if (DAT_0061b4a0 == 8) {
    if (_DAT_01c51d00 != 0) {
      return &UNK_00437132;
    }
    return &UNK_00437038;
  }
  if (DAT_0061b4a0 != 0x10) {
    return &UNK_0043700a;
  }
  return &UNK_00437240;
}
