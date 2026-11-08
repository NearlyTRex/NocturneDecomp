// Name: FUN_005750e0
// Address: 005750e0
// Address Range: [[005750e0, 00575111]]
// Convention: unknown
// Signature: undefined4 FUN_005750e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005750e0(void)

{
  int iVar1;
  
  FUN_00573b00();
  if (_DAT_02c80650 != (int *)0x0) {
    iVar1 = (**(code **)(*_DAT_02c80650 + 8))(_DAT_02c80650);
    if (iVar1 == 0) {
      return 0;
    }
  }
  _DAT_02c80654 = 0;
  FUN_0056f630();
  return 1;
}
