// Name: FUN_004d19d0
// Address: 004d19d0
// Address Range: [[004d19d0, 004d1a7c]]
// Convention: unknown
// Signature: void FUN_004d19d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d19d0(void)

{
  uint uVar1;
  
  uVar1 = FUN_00530660(0x01D51C20,0,0x30);
  FUN_005bfb70(uVar1);
  FUN_005bfb70(&DAT_01ccff98,0,600);
  _DAT_01cd01f4 = *(uint *)(0x01E82168 + 0x15aeb8);
  if ((*(int *)(0x01CC8004 + 0x40) == 0) && (DAT_007c3978 == 0)) {
    _DAT_01cd01f0 = *(int *)(0x01CC8004 + 0x40);
    FUN_005b2750(DAT_0061b498 / 2,DAT_0061b49c / 2);
  }
  if (*(int *)(0x01CC8004 + 0x40) != 0) {
    _DAT_01cd0b40 = 0xffffffff;
  }
  if (DAT_007c3978 == 0) {
    return;
  }
  _DAT_01cd0b40 = 0xffffffff;
  return;
}
