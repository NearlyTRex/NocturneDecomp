// Name: FUN_005798f0
// Address: 005798f0
// Address Range: [[005798f0, 00579a54]]
// Convention: unknown
// Signature: undefined4 FUN_005798f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005798f0(void)

{
  int iVar1;
  
  DAT_0060b010 = FUN_005a3650(((int)((DAT_005fba20 + (DAT_005fba20 >> 0x1f) * -8) -
                                    (uint)((DAT_005fba20 >> 0x1f) << 2 < 0)) >> 3) *
                              DAT_005fba18 * DAT_005fba1c);
  if (DAT_0060b010 == 0) {
    _DAT_01d71de0 = "..\\wincore\\wddvmem.cpp";
    _DAT_01d71de4 = 0xed;
    FUN_004e4330("WDDVMEM: Fatal - out of frame buffer memory");
  }
  _DAT_02d0bcf0 = FUN_005a3650(DAT_005fba18 * DAT_005fba1c * 4 + 0x40);
  if (_DAT_02d0bcf0 == 0) {
    _DAT_01d71de0 = "..\\wincore\\wddvmem.cpp";
    _DAT_01d71de4 = 0xf2;
    FUN_004e4330("WDDVMEM: Fatal - out of Z buffer memory");
  }
  DAT_0072ffac = _DAT_02d0bcf0 + 0x10U & 0xfffffff0;
  if (_DAT_02d0bcec != (int *)0x0) {
    (**(code **)(*_DAT_02d0bcec + 8))(_DAT_02d0bcec);
    _DAT_02d0bcec = (int *)0x0;
  }
  if (_DAT_02d0bce8 != (int *)0x0) {
    (**(code **)(*_DAT_02d0bce8 + 8))(_DAT_02d0bce8);
    _DAT_02d0bce8 = (int *)0x0;
  }
  if (_DAT_02d0bce4 != (int *)0x0) {
    (**(code **)(*_DAT_02d0bce4 + 8))(_DAT_02d0bce4);
    _DAT_02d0bce4 = (int *)0x0;
  }
  if (_DAT_02d0bce0 != (int *)0x0) {
    (**(code **)(*_DAT_02d0bce0 + 0x4c))(_DAT_02d0bce0);
    (**(code **)(*_DAT_02d0bce0 + 8))(_DAT_02d0bce0);
    _DAT_02d0bce0 = (int *)0x0;
  }
  iVar1 = DirectDrawCreate(0,&DAT_02d0bce0,0);
  if (iVar1 == 0) {
    (**(code **)(*_DAT_02d0bce0 + 0x50))(_DAT_02d0bce0,_DAT_02d21b78,0x11);
  }
  FUN_00564be0(_DAT_02d21b78);
  return 1;
}
