// Name: wincore_wddvmem.cpp_videoRestore_FUN_005ad2c0
// Address: 005ad2c0
// Address Range: [[005ad2c0, 005ad3cf] [005ad3d1, 005ad441]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_videoRestore_FUN_005ad2c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_videoRestore_FUN_005ad2c0(void)

{
  int iVar1;
  HRESULT HVar2;
  
  if ((_DAT_02c83370 == 0) || (_DAT_02c99318 == 0)) {
    if (_DAT_02c99304 != (int *)0x0) {
      (**(code **)(*_DAT_02c99304 + 0x6c))(_DAT_02c99304);
      (**(code **)(*_DAT_02c99308 + 0x6c))(_DAT_02c99308);
      if (_DAT_02c9930c != (int *)0x0) {
        iVar1 = (**(code **)(*_DAT_02c99304 + 0x7c))(_DAT_02c99304,_DAT_02c9930c);
        if (iVar1 != 0) {
          _DAT_01d1d400 = "..\\wincore\\wddvmem.cpp";
          _DAT_01d1d404 = 0x3fe;
          core_main_c_FUN_005030e0("videoRestore - Unable to set front buffer palette");
          return;
        }
      }
    }
  }
  else {
    iVar1 = _stricmp(&DAT_006257d0,"trigl.dll");
    if (iVar1 != 0) {
      iVar1 = engine_special_cpp_FUN_005821c0(DAT_0061b498,DAT_0061b49c,DAT_0061b4a0);
      if (iVar1 == 0) {
        _DAT_02c83370 = iVar1;
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
        HVar2 = DirectDrawCreate
                          ((GUID *)0x0,(LPDIRECTDRAW *)&DAT_02c99300,(IUnknown *)0x0);
        if (HVar2 == 0) {
          (**(code **)(*_DAT_02c99300 + 0x50))(_DAT_02c99300,_DAT_02c9be68,0x11);
        }
        wincore_wddvmem_cpp_FUN_005ac300(DAT_0061b498,DAT_0061b49c,DAT_0061b4a0);
      }
    }
    SetFocus(_DAT_02c9be68);
  }
  return;
}
