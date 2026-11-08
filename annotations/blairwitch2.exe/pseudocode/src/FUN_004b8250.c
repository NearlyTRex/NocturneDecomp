// Name: FUN_004b8250
// Address: 004b8250
// Address Range: [[004b8250, 004b82d2]]
// Convention: unknown
// Signature: void FUN_004b8250(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b8250(void)

{
  uint uVar1;
  
  uVar1 = FUN_0050f430(0x01D34CB0,0,0x34);
  FUN_005b77c0(uVar1);
  FUN_005b77c0(&DAT_01cb7528,0,600);
  _DAT_01cb7784 = *(uint *)(0x01E661B8 + 0x15aeb8);
  if ((*(int *)(0x01CAF56C + 0x40) == 0) && (_DAT_026677e0 == 0)) {
    _DAT_01cb7780 = *(int *)(0x01CAF56C + 0x40);
    FUN_0058ed10(DAT_006141b8 / 2,DAT_006141bc / 2);
    return;
  }
  return;
}
