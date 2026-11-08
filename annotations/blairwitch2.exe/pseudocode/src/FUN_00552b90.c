// Name: FUN_00552b90
// Address: 00552b90
// Address Range: [[00552b90, 00552c3c]]
// Convention: unknown
// Signature: undefined4 FUN_00552b90(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00552b90(void)

{
  int iVar1;
  
  iVar1 = FUN_00552c40();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00552aa0(DAT_0061bcac);
  if (-1 < DAT_0061bcac) {
    if (*(int *)(DAT_0061bcac * 0x118 + 0x26486c0) == 0) {
      _DAT_02648e80 = (int *)FUN_005589e0(*(uint *)(DAT_0061bcac * 0x118 + 0x26486c4));
    }
    if (*(int *)(DAT_0061bcac * 0x118 + 0x26486c0) == 1) {
      _DAT_02648e80 = (int *)FUN_00557910(*(uint *)(DAT_0061bcac * 0x118 + 0x26486c4));
    }
    if (_DAT_02648e80 == (int *)0x0) {
      return 0;
    }
    _DAT_02648e88 = (**(code **)(*_DAT_02648e80 + 0x14))(_DAT_02648e80);
    return 1;
  }
  return 0;
}
