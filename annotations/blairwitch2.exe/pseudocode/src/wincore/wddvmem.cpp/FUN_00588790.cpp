// Name: FUN_00588790
// Address: 00588790
// Address Range: [[00588790, 005888f4]]
// Convention: unknown
// Signature: undefined4 FUN_00588790(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00588790(void)

{
  int iVar1;
  
  DAT_00622010 = FUN_005b8580(((int)((DAT_006141c0 + (DAT_006141c0 >> 0x1f) * -8) -
                                    (uint)((DAT_006141c0 >> 0x1f) << 2 < 0)) >> 3) *
                              DAT_006141b8 * DAT_006141bc);
  if (DAT_00622010 == 0) {
    _DAT_01d046a0 = "..\\wincore\\wddvmem.cpp";
    _DAT_01d046a4 = 0xea;
    FUN_004e4500("WDDVMEM: Fatal - out of frame buffer memory");
  }
  _DAT_02661af0 = FUN_005b8580(DAT_006141b8 * DAT_006141bc * 4 + 0x40);
  if (_DAT_02661af0 == 0) {
    _DAT_01d046a0 = "..\\wincore\\wddvmem.cpp";
    _DAT_01d046a4 = 0xef;
    FUN_004e4500("WDDVMEM: Fatal - out of Z buffer memory");
  }
  DAT_0070c62c = _DAT_02661af0 + 0x10U & 0xfffffff0;
  if (_DAT_02661aec != (int *)0x0) {
    (**(code **)(*_DAT_02661aec + 8))(_DAT_02661aec);
    _DAT_02661aec = (int *)0x0;
  }
  if (_DAT_02661ae8 != (int *)0x0) {
    (**(code **)(*_DAT_02661ae8 + 8))(_DAT_02661ae8);
    _DAT_02661ae8 = (int *)0x0;
  }
  if (_DAT_02661ae4 != (int *)0x0) {
    (**(code **)(*_DAT_02661ae4 + 8))(_DAT_02661ae4);
    _DAT_02661ae4 = (int *)0x0;
  }
  if (_DAT_02661ae0 != (int *)0x0) {
    (**(code **)(*_DAT_02661ae0 + 0x4c))(_DAT_02661ae0);
    (**(code **)(*_DAT_02661ae0 + 8))(_DAT_02661ae0);
    _DAT_02661ae0 = (int *)0x0;
  }
  iVar1 = DirectDrawCreate(0,&DAT_02661ae0,0);
  if (iVar1 == 0) {
    (**(code **)(*_DAT_02661ae0 + 0x50))(_DAT_02661ae0,_DAT_02664628,0x11);
  }
  FUN_0055e8c0(_DAT_02664628);
  return 1;
}
