// Name: FUN_00552a20
// Address: 00552a20
// Address Range: [[00552a20, 00552ae5]]
// Convention: unknown
// Signature: void FUN_00552a20(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_00552a20(void)

{
  DAT_005c5010 = malloc
                           (((int)((DAT_005b7624 + (DAT_005b7624 >> 0x1f) * -8) -
                                  (uint)((DAT_005b7624 >> 0x1f) << 2 < 0)) >> 3) *
                            DAT_005b761c * DAT_005b7620);
  if (DAT_005c5010 == 0) {
    _DAT_01cc4800 = "..\\wincore\\wddvmem.cpp";
    _DAT_01cc4804 = 0xea;
    FUN_004c8440("WDDVMEM: Fatal - out of frame buffer memory");
  }
  _DAT_02ddf560 = malloc(DAT_005b761c * DAT_005b7620 * 4 + 0x40);
  if (_DAT_02ddf560 != 0) {
    DAT_006af62c = _DAT_02ddf560 + 0x10U & 0xfffffff0;
    return;
  }
  _DAT_01cc4800 = "..\\wincore\\wddvmem.cpp";
  _DAT_01cc4804 = 0xef;
  FUN_004c8440("WDDVMEM: Fatal - out of Z buffer memory");
  DAT_006af62c = _DAT_02ddf560 + 0x10U & 0xfffffff0;
  return;
}
