// Name: wincore_wddvmem.cpp_videoRestore_FUN_0057ab70
// Address: 0057ab70
// Address Range: [[0057ab70, 0057ac7f] [0057ac81, 0057acf1]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_videoRestore_FUN_0057ab70(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_videoRestore_FUN_0057ab70(void)

{
  int iVar1;
  HRESULT HVar2;
  
  if ((_DAT_02cf5fcc == 0) || (_DAT_02d0bcf8 == 0)) {
    if (_DAT_02d0bce4 != (int *)0x0) {
      (**(code **)(*_DAT_02d0bce4 + 0x6c))(_DAT_02d0bce4);
      (**(code **)(*_DAT_02d0bce8 + 0x6c))(_DAT_02d0bce8);
      if (_DAT_02d0bcec != (int *)0x0) {
        iVar1 = (**(code **)(*_DAT_02d0bce4 + 0x7c))(_DAT_02d0bce4,_DAT_02d0bcec);
        if (iVar1 != 0) {
          _DAT_01d71de0 = "..\\wincore\\wddvmem.cpp";
          _DAT_01d71de4 = 0x3fe;
          core_main_c_FUN_004e4330("videoRestore - Unable to set front buffer palette");
          return;
        }
      }
    }
  }
  else {
    iVar1 = _stricmp(&DAT_00606730,"trigl.dll");
    if (iVar1 != 0) {
      iVar1 = engine_special_cpp_FUN_00565a90(DAT_005fba18,DAT_005fba1c,DAT_005fba20);
      if (iVar1 == 0) {
        _DAT_02cf5fcc = iVar1;
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
        HVar2 = DirectDrawCreate
                          ((GUID *)0x0,(LPDIRECTDRAW *)&DAT_02d0bce0,(IUnknown *)0x0);
        if (HVar2 == 0) {
          (**(code **)(*_DAT_02d0bce0 + 0x50))(_DAT_02d0bce0,_DAT_02d21b78,0x11);
        }
        wincore_wddvmem_cpp_FUN_00579bb0(DAT_005fba18,DAT_005fba1c,DAT_005fba20);
      }
    }
    SetFocus(_DAT_02d21b78);
  }
  return;
}
