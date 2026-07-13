// Name: FUN_0042d130
// Address: 0042d130
// Address Range: [[0042d130, 0042d145] [0042d150, 0042d164] [0042d170, 0042d175]]
// Convention: unknown
// Signature: undefined * FUN_0042d130(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_0042d130(void)

{
  if (DAT_005b7624 == 8) {
    if (_DAT_01c03948 != 0) {
      return &UNK_0042cff2;
    }
    return &UNK_0042cef8;
  }
  if (DAT_005b7624 != 0x10) {
    return &UNK_0042ceca;
  }
  return &UNK_0042d100;
}
