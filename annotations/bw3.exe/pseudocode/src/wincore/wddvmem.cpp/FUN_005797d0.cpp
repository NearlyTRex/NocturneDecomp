// Name: wincore_wddvmem.cpp_FUN_005797d0
// Address: 005797d0
// Address Range: [[005797d0, 00579895]]
// Convention: unknown
// Signature: void wincore_wddvmem_cpp_FUN_005797d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void wincore_wddvmem_cpp_FUN_005797d0(void)

{
  DAT_0060b010 = malloc
                           (((int)((DAT_005fba20 + (DAT_005fba20 >> 0x1f) * -8) -
                                  (uint)((DAT_005fba20 >> 0x1f) << 2 < 0)) >> 3) *
                            DAT_005fba18 * DAT_005fba1c);
  if (DAT_0060b010 == (void *)0x0) {
    _DAT_01d71de0 = "..\\wincore\\wddvmem.cpp";
    _DAT_01d71de4 = 0xed;
    core_main_c_FUN_004e4330("WDDVMEM: Fatal - out of frame buffer memory");
  }
  _DAT_02d0bcf0 = malloc(DAT_005fba18 * DAT_005fba1c * 4 + 0x40);
  if (_DAT_02d0bcf0 != (void *)0x0) {
    DAT_0072ffac = (int)_DAT_02d0bcf0 + 0x10U & 0xfffffff0;
    return;
  }
  _DAT_01d71de0 = "..\\wincore\\wddvmem.cpp";
  _DAT_01d71de4 = 0xf2;
  core_main_c_FUN_004e4330("WDDVMEM: Fatal - out of Z buffer memory");
  DAT_0072ffac = (int)_DAT_02d0bcf0 + 0x10U & 0xfffffff0;
  return;
}
