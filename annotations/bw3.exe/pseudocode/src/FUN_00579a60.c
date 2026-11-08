// Name: FUN_00579a60
// Address: 00579a60
// Address Range: [[00579a60, 00579b1a]]
// Convention: unknown
// Signature: void FUN_00579a60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00579a60(void)

{
  if (DAT_0060b010 != 0) {
    FUN_005a3770(DAT_0060b010);
    DAT_0060b010 = 0;
  }
  if (_DAT_02d0bcf0 != 0) {
    FUN_005a3770(_DAT_02d0bcf0);
    DAT_0072ffac = 0;
  }
  FUN_005657f0();
  if (_DAT_02d0bcec != (int *)0x0) {
    (**(code **)(*_DAT_02d0bcec + 8))(_DAT_02d0bcec);
    _DAT_02d0bcec = (int *)0x0;
  }
  if (_DAT_02d0bce8 != (int *)0x0) {
    (**(code **)(*_DAT_02d0bce8 + 8))(_DAT_02d0bce8);
    _DAT_02d0bce8 = (int *)0x0;
  }
  if (_DAT_02d0bce4 != (int *)0x0) {
    (**(code **)(*_DAT_02d0bce4 + 8))(_DAT_02d0bce4);
    _DAT_02d0bce4 = (int *)0x0;
  }
  if (_DAT_02d0bce0 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02d0bce0 + 0x4c))(_DAT_02d0bce0);
  (**(code **)(*_DAT_02d0bce0 + 8))(_DAT_02d0bce0);
  _DAT_02d0bce0 = (int *)0x0;
  return;
}
