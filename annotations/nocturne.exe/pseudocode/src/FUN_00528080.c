// Name: FUN_00528080
// Address: 00528080
// Address Range: [[00528080, 005280b1]]
// Convention: unknown
// Signature: undefined4 FUN_00528080(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00528080(void)

{
  int iVar1;
  
  FUN_005272b0();
  if (_DAT_02dc8318 != (int *)0x0) {
    iVar1 = (**(code **)(*_DAT_02dc8318 + 8))(_DAT_02dc8318);
    if (iVar1 == 0) {
      return 0;
    }
  }
  _DAT_02dc831c = 0;
  FUN_005230d0();
  return 1;
}
