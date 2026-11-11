// Name: wincore_wddvmem.cpp_FUN_005798f0
// Address: 005798f0
// Address Range: [[005798f0, 00579a54]]
// Convention: __cdecl
// Signature: int __cdecl wincore_wddvmem_cpp_FUN_005798f0(int width,int height)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl wincore_wddvmem_cpp_FUN_005798f0(int width,int height)

{
  HRESULT HVar1;
  
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
  if (_DAT_02d0bcf0 == (void *)0x0) {
    _DAT_01d71de0 = "..\\wincore\\wddvmem.cpp";
    _DAT_01d71de4 = 0xf2;
    core_main_c_FUN_004e4330("WDDVMEM: Fatal - out of Z buffer memory");
  }
  DAT_0072ffac = (int)_DAT_02d0bcf0 + 0x10U & 0xfffffff0;
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
  HVar1 = DirectDrawCreate((GUID *)0x0,(LPDIRECTDRAW *)&DAT_02d0bce0,(IUnknown *)0x0);
  if (HVar1 == 0) {
    (**(code **)(*_DAT_02d0bce0 + 0x50))(_DAT_02d0bce0,_DAT_02d21b78,0x11);
  }
  engine_special_cpp_loadExternalRenderer_FUN_00564be0(_DAT_02d21b78);
  return 1;
}
