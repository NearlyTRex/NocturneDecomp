// Name: FUN_004ba490
// Address: 004ba490
// Address Range: [[004ba490, 004ba53c]]
// Convention: unknown
// Signature: void FUN_004ba490(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ba490(void)

{
  uint uVar1;
  
  uVar1 = FUN_00507f10(0x01DA62F0,0,0x34);
  FUN_005a28f0(uVar1);
  FUN_005a28f0(&DAT_01d21fa0,0,600);
  _DAT_01d221fc = *(uint *)(0x01ED78C8 + 0x15aeb8);
  if ((*(int *)(0x01D1A05C + 0x40) == 0) && (DAT_007dffb4 == 0)) {
    _DAT_01d221f8 = *(int *)(0x01D1A05C + 0x40);
    FUN_005809d0(DAT_005fba18 / 2,DAT_005fba1c / 2);
  }
  if (*(int *)(0x01D1A05C + 0x40) != 0) {
    _DAT_01d22b48 = 0xffffffff;
  }
  if (DAT_007dffb4 == 0) {
    return;
  }
  _DAT_01d22b48 = 0xffffffff;
  return;
}
