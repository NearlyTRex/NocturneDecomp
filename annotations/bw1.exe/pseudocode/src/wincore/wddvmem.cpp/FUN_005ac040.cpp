// Name: FUN_005ac040
// Address: 005ac040
// Address Range: [[005ac040, 005ac1a4]]
// Convention: unknown
// Signature: undefined4 FUN_005ac040(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005ac040(void)

{
  int iVar1;
  
  DAT_00629010 = FUN_005c08d0(((int)((DAT_0061b4a0 + (DAT_0061b4a0 >> 0x1f) * -8) -
                                    (uint)((DAT_0061b4a0 >> 0x1f) << 2 < 0)) >> 3) *
                              DAT_0061b498 * DAT_0061b49c);
  if (DAT_00629010 == 0) {
    _DAT_01d1d400 = "..\\wincore\\wddvmem.cpp";
    _DAT_01d1d404 = 0xed;
    FUN_005030e0("WDDVMEM: Fatal - out of frame buffer memory");
  }
  _DAT_02c99310 = FUN_005c08d0(DAT_0061b498 * DAT_0061b49c * 4 + 0x40);
  if (_DAT_02c99310 == 0) {
    _DAT_01d1d400 = "..\\wincore\\wddvmem.cpp";
    _DAT_01d1d404 = 0xf2;
    FUN_005030e0("WDDVMEM: Fatal - out of Z buffer memory");
  }
  DAT_0071362c = _DAT_02c99310 + 0x10U & 0xfffffff0;
  if (_DAT_02c9930c != (int *)0x0) {
    (**(code **)(*_DAT_02c9930c + 8))(_DAT_02c9930c);
    _DAT_02c9930c = (int *)0x0;
  }
  if (_DAT_02c99308 != (int *)0x0) {
    (**(code **)(*_DAT_02c99308 + 8))(_DAT_02c99308);
    _DAT_02c99308 = (int *)0x0;
  }
  if (_DAT_02c99304 != (int *)0x0) {
    (**(code **)(*_DAT_02c99304 + 8))(_DAT_02c99304);
    _DAT_02c99304 = (int *)0x0;
  }
  if (_DAT_02c99300 != (int *)0x0) {
    (**(code **)(*_DAT_02c99300 + 0x4c))(_DAT_02c99300);
    (**(code **)(*_DAT_02c99300 + 8))(_DAT_02c99300);
    _DAT_02c99300 = (int *)0x0;
  }
  iVar1 = DirectDrawCreate(0,&DAT_02c99300,0);
  if (iVar1 == 0) {
    (**(code **)(*_DAT_02c99300 + 0x50))(_DAT_02c99300,_DAT_02c9be68,0x11);
  }
  FUN_00581310(_DAT_02c9be68);
  return 1;
}
