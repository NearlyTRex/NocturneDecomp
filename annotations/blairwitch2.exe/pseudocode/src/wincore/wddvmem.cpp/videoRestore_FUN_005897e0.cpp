// Name: wincore_wddvmem.cpp_videoRestore_FUN_005897e0
// Address: 005897e0
// Address Range: [[005897e0, 005898df] [005898e1, 00589951]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_videoRestore_FUN_005897e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_videoRestore_FUN_005897e0(void)

{
  int iVar1;
  HRESULT HVar2;
  
  if ((_DAT_0264bba0 == 0) || (_DAT_02661af8 == 0)) {
    if (_DAT_02661ae4 != (int *)0x0) {
      (**(code **)(*_DAT_02661ae4 + 0x6c))(_DAT_02661ae4);
      (**(code **)(*_DAT_02661ae8 + 0x6c))(_DAT_02661ae8);
      if (_DAT_02661aec != (int *)0x0) {
        iVar1 = (**(code **)(*_DAT_02661ae4 + 0x7c))(_DAT_02661ae4,_DAT_02661aec);
        if (iVar1 != 0) {
          _DAT_01d046a0 = "..\\wincore\\wddvmem.cpp";
          _DAT_01d046a4 = 0x3cf;
          core_main_c_FUN_004e4500("videoRestore - Unable to set front buffer palette");
          return;
        }
      }
    }
  }
  else {
    iVar1 = engine_special_cpp_setResolutionAndColorTable_FUN_0055f770
                      (DAT_006141b8,DAT_006141bc,DAT_006141c0);
    if (iVar1 == 0) {
      _DAT_0264bba0 = iVar1;
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
      HVar2 = DirectDrawCreate
                        ((GUID *)0x0,(LPDIRECTDRAW *)&DAT_02661ae0,(IUnknown *)0x0);
      if (HVar2 == 0) {
        (**(code **)(*_DAT_02661ae0 + 0x50))(_DAT_02661ae0,_DAT_02664628,0x11);
      }
      wincore_wddvmem_cpp_FUN_00588a50(DAT_006141b8,DAT_006141bc,DAT_006141c0);
    }
    SetFocus(_DAT_02664628);
  }
  return;
}
