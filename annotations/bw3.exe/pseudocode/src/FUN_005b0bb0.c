// Name: FUN_005b0bb0
// Address: 005b0bb0
// Address Range: [[005b0bb0, 005b0c4a]]
// Convention: unknown
// Signature: undefined4 FUN_005b0bb0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005b0bb0(void)

{
  int *piVar1;
  
  piVar1 = _DAT_02d25924;
  if (_DAT_02d25924 != (int *)0x0) {
    for (; *piVar1 != 0; piVar1 = piVar1 + 1) {
      if (_DAT_02d25920 != (int *)0x0) {
        if (*(char *)(((int)piVar1 - (int)_DAT_02d25924 >> 2) + (int)_DAT_02d25920) != '\0') {
          FUN_005a3770(*piVar1);
        }
        *piVar1 = 0;
      }
    }
    if (_DAT_02d25920 == (int *)0x0) {
      piVar1 = (int *)FUN_005a3650(5);
    }
    else {
      piVar1 = (int *)FUN_005a3e50(_DAT_02d25924,5);
    }
    if (piVar1 == (int *)0x0) {
      return 0xffffffff;
    }
    _DAT_02d25924 = piVar1;
    *piVar1 = 0;
    _DAT_02d25920 = piVar1 + 1;
    *(byte *)_DAT_02d25920 = 0;
  }
  return 0;
}
