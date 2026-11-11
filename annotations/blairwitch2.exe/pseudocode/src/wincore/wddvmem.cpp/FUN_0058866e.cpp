// Name: wincore_wddvmem.cpp_FUN_0058866e
// Address: 0058866e
// Address Range: [[0058866e, 00588735]]
// Convention: unknown
// Signature: void wincore_wddvmem_cpp_FUN_0058866e(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wincore_wddvmem_cpp_FUN_0058866e(void)

{
  DAT_00622010 = malloc
                           (((int)((DAT_006141c0 + (DAT_006141c0 >> 0x1f) * -8) -
                                  (uint)((DAT_006141c0 >> 0x1f) << 2 < 0)) >> 3) *
                            DAT_006141b8 * DAT_006141bc);
  if (DAT_00622010 == (void *)0x0) {
    _DAT_01d046a0 = "..\\wincore\\wddvmem.cpp";
    _DAT_01d046a4 = 0xea;
    core_main_c_FUN_004e4500("WDDVMEM: Fatal - out of frame buffer memory");
  }
  _DAT_02661af0 = malloc(DAT_006141b8 * DAT_006141bc * 4 + 0x40);
  if (_DAT_02661af0 != (void *)0x0) {
    DAT_0070c62c = (int)_DAT_02661af0 + 0x10U & 0xfffffff0;
    return;
  }
  _DAT_01d046a0 = "..\\wincore\\wddvmem.cpp";
  _DAT_01d046a4 = 0xef;
  core_main_c_FUN_004e4500("WDDVMEM: Fatal - out of Z buffer memory");
  DAT_0070c62c = (int)_DAT_02661af0 + 0x10U & 0xfffffff0;
  return;
}
