// Name: FUN_005c5b20
// Address: 005c5b20
// Address Range: [[005c5b20, 005c5bba]]
// Convention: unknown
// Signature: undefined4 FUN_005c5b20(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005c5b20(void)

{
  int *piVar1;
  
  piVar1 = _DAT_026807e4;
  if (_DAT_026807e4 != (int *)0x0) {
    for (; *piVar1 != 0; piVar1 = piVar1 + 1) {
      if (_DAT_026807e0 != (int *)0x0) {
        if (*(char *)(((int)piVar1 - (int)_DAT_026807e4 >> 2) + (int)_DAT_026807e0) != '\0') {
          FUN_005b86a0(*piVar1);
        }
        *piVar1 = 0;
      }
    }
    if (_DAT_026807e0 == (int *)0x0) {
      piVar1 = (int *)FUN_005b8580(5);
    }
    else {
      piVar1 = (int *)FUN_005b8ce0(_DAT_026807e4,5);
    }
    if (piVar1 == (int *)0x0) {
      return 0xffffffff;
    }
    _DAT_026807e4 = piVar1;
    *piVar1 = 0;
    _DAT_026807e0 = piVar1 + 1;
    *(byte *)_DAT_026807e0 = 0;
  }
  return 0;
}
