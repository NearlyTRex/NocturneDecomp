// Name: crt_unknown.c_FUN_005c5b20
// Address: 005c5b20
// Address Range: [[005c5b20, 005c5bba]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c5b20(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005c5b20(void)

{
  uint *puVar1;
  
  puVar1 = _DAT_026807e4;
  if (_DAT_026807e4 != (uint *)0x0) {
    for (; (void *)*puVar1 != (void *)0x0; puVar1 = puVar1 + 1) {
      if (_DAT_026807e0 != (uint *)0x0) {
        if (*(char *)(((int)puVar1 - (int)_DAT_026807e4 >> 2) + (int)_DAT_026807e0) != '\0') {
          debugFree((void *)*puVar1);
        }
        *puVar1 = 0;
      }
    }
    if (_DAT_026807e0 == (uint *)0x0) {
      puVar1 = (uint *)malloc(5);
    }
    else {
      puVar1 = (uint *)realloc(_DAT_026807e4,5);
    }
    if (puVar1 == (uint *)0x0) {
      return 0xffffffff;
    }
    _DAT_026807e4 = puVar1;
    *puVar1 = 0;
    _DAT_026807e0 = puVar1 + 1;
    *(byte *)_DAT_026807e0 = 0;
  }
  return 0;
}
