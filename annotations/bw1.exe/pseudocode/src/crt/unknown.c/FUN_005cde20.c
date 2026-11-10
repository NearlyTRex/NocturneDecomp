// Name: crt_unknown.c_FUN_005cde20
// Address: 005cde20
// Address Range: [[005cde20, 005cdeba]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005cde20(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005cde20(void)

{
  int *piVar1;
  
  piVar1 = _DAT_02c9f6d4;
  if (_DAT_02c9f6d4 != (int *)0x0) {
    for (; *piVar1 != 0; piVar1 = piVar1 + 1) {
      if (_DAT_02c9f6d0 != (int *)0x0) {
        if (*(char *)(((int)piVar1 - (int)_DAT_02c9f6d4 >> 2) + (int)_DAT_02c9f6d0) != '\0') {
          FUN_005c09f0(*piVar1);
        }
        *piVar1 = 0;
      }
    }
    if (_DAT_02c9f6d0 == (int *)0x0) {
      piVar1 = FUN_005c08d0(5);
    }
    else {
      piVar1 = (int *)realloc(_DAT_02c9f6d4,5);
    }
    if (piVar1 == (int *)0x0) {
      return 0xffffffff;
    }
    _DAT_02c9f6d4 = piVar1;
    *piVar1 = 0;
    _DAT_02c9f6d0 = piVar1 + 1;
    *(byte *)_DAT_02c9f6d0 = 0;
  }
  return 0;
}
