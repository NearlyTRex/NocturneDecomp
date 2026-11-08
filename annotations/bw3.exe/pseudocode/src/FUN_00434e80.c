// Name: FUN_00434e80
// Address: 00434e80
// Address Range: [[00434e80, 00434e95] [00434ea0, 00434eb4] [00434ec0, 00434ec5]]
// Convention: unknown
// Signature: undefined * FUN_00434e80(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_00434e80(void)

{
  if (DAT_005fba20 == 8) {
    if (_DAT_01c6e2a0 != 0) {
      return &UNK_00434d42;
    }
    return &UNK_00434c48;
  }
  if (DAT_005fba20 != 0x10) {
    return &UNK_00434c1a;
  }
  return &UNK_00434e50;
}
