// Name: FUN_00558730
// Address: 00558730
// Address Range: [[00558730, 005587dc]]
// Convention: unknown
// Signature: undefined4 FUN_00558730(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00558730(void)

{
  int iVar1;
  
  iVar1 = FUN_005587e0();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00558640(DAT_0060423c);
  if (-1 < DAT_0060423c) {
    if (*(int *)(DAT_0060423c * 0x118 + 0x2cf2ac0) == 0) {
      _DAT_02cf3280 = (int *)FUN_0055e540(*(uint *)(DAT_0060423c * 0x118 + 0x2cf2ac4));
    }
    if (*(int *)(DAT_0060423c * 0x118 + 0x2cf2ac0) == 1) {
      _DAT_02cf3280 = (int *)FUN_0055d470(*(uint *)(DAT_0060423c * 0x118 + 0x2cf2ac4));
    }
    if (_DAT_02cf3280 == (int *)0x0) {
      return 0;
    }
    _DAT_02cf3288 = (**(code **)(*_DAT_02cf3280 + 0x14))(_DAT_02cf3280);
    return 1;
  }
  return 0;
}
