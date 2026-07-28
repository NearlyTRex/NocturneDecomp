// Name: wincore_wddvmem.cpp_FUN_00552a20
// Address: 00552a20
// Address Range: [[00552a20, 00552ae5]]
// Convention: unknown
// Signature: void wincore_wddvmem_cpp_FUN_00552a20(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void wincore_wddvmem_cpp_FUN_00552a20(void)

{
  DAT_005c5010 = malloc
                           (((int)((DAT_005b7624 + (DAT_005b7624 >> 0x1f) * -8) -
                                  (uint)((DAT_005b7624 >> 0x1f) << 2 < 0)) >> 3) *
                            DAT_005b761c * DAT_005b7620);
  if (DAT_005c5010 == (void *)0x0) {
    PTR_01cc4800 = "..\\wincore\\wddvmem.cpp";
    INT_01cc4804 = 0xea;
    core_main_c_FUN_004c8440("WDDVMEM: Fatal - out of frame buffer memory");
  }
  _DAT_02ddf560 = malloc(DAT_005b761c * DAT_005b7620 * 4 + 0x40);
  if (_DAT_02ddf560 != (void *)0x0) {
    DAT_006af62c = (int)_DAT_02ddf560 + 0x10U & 0xfffffff0;
    return;
  }
  PTR_01cc4800 = "..\\wincore\\wddvmem.cpp";
  INT_01cc4804 = 0xef;
  core_main_c_FUN_004c8440("WDDVMEM: Fatal - out of Z buffer memory");
  DAT_006af62c = (int)_DAT_02ddf560 + 0x10U & 0xfffffff0;
  return;
}
