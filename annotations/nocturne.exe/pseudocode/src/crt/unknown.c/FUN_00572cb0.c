// Name: crt_unknown.c_FUN_00572cb0
// Address: 00572cb0
// Address Range: [[00572cb0, 00572d4a]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_00572cb0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00572cb0(void)

{
  uint *puVar1;
  
  puVar1 = _DAT_02de54a4;
  if (_DAT_02de54a4 != (uint *)0x0) {
    for (; (void *)*puVar1 != (void *)0x0; puVar1 = puVar1 + 1) {
      if (_DAT_02de54a0 != (uint *)0x0) {
        if (*(char *)(((int)puVar1 - (int)_DAT_02de54a4 >> 2) + (int)_DAT_02de54a0) != '\0') {
          free((void *)*puVar1);
        }
        *puVar1 = 0;
      }
    }
    if (_DAT_02de54a0 == (uint *)0x0) {
      puVar1 = (uint *)malloc(5);
    }
    else {
      puVar1 = (uint *)realloc(_DAT_02de54a4,5);
    }
    if (puVar1 == (uint *)0x0) {
      return 0xffffffff;
    }
    _DAT_02de54a4 = puVar1;
    *puVar1 = 0;
    _DAT_02de54a0 = puVar1 + 1;
    *(byte *)_DAT_02de54a0 = 0;
  }
  return 0;
}
