// Name: FUN_005755c0
// Address: 005755c0
// Address Range: [[005755c0, 0057566c]]
// Convention: unknown
// Signature: undefined4 FUN_005755c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005755c0(void)

{
  int iVar1;
  
  iVar1 = FUN_00575670();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_005754d0(DAT_006232fc);
  if (-1 < DAT_006232fc) {
    if (*(int *)(DAT_006232fc * 0x118 + 0x2c7fe90) == 0) {
      _DAT_02c80650 = (int *)FUN_0057b410(*(uint *)(DAT_006232fc * 0x118 + 0x2c7fe94));
    }
    if (*(int *)(DAT_006232fc * 0x118 + 0x2c7fe90) == 1) {
      _DAT_02c80650 = (int *)FUN_0057a340(*(uint *)(DAT_006232fc * 0x118 + 0x2c7fe94));
    }
    if (_DAT_02c80650 == (int *)0x0) {
      return 0;
    }
    _DAT_02c80658 = (**(code **)(*_DAT_02c80650 + 0x14))(_DAT_02c80650);
    return 1;
  }
  return 0;
}
