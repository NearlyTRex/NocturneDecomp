// Name: wincore_wddvmem.cpp_FUN_005abf1e
// Address: 005abf1e
// Address Range: [[005abf1e, 005abfe5]]
// Convention: unknown
// Signature: void wincore_wddvmem_cpp_FUN_005abf1e(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wincore_wddvmem_cpp_FUN_005abf1e(void)

{
  DAT_00629010 = FUN_005c08d0
                           (((int)((DAT_0061b4a0 + (DAT_0061b4a0 >> 0x1f) * -8) -
                                  (uint)((DAT_0061b4a0 >> 0x1f) << 2 < 0)) >> 3) *
                            DAT_0061b498 * DAT_0061b49c);
  if (DAT_00629010 == (void *)0x0) {
    _DAT_01d1d400 = "..\\wincore\\wddvmem.cpp";
    _DAT_01d1d404 = 0xed;
    core_main_c_FUN_005030e0("WDDVMEM: Fatal - out of frame buffer memory");
  }
  _DAT_02c99310 = FUN_005c08d0(DAT_0061b498 * DAT_0061b49c * 4 + 0x40);
  if (_DAT_02c99310 != (void *)0x0) {
    DAT_0071362c = (int)_DAT_02c99310 + 0x10U & 0xfffffff0;
    return;
  }
  _DAT_01d1d400 = "..\\wincore\\wddvmem.cpp";
  _DAT_01d1d404 = 0xf2;
  core_main_c_FUN_005030e0("WDDVMEM: Fatal - out of Z buffer memory");
  DAT_0071362c = (int)_DAT_02c99310 + 0x10U & 0xfffffff0;
  return;
}
