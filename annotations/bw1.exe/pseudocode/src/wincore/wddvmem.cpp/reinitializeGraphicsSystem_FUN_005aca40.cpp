// Name: wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_005aca40
// Address: 005aca40
// Address Range: [[005aca40, 005acb0d]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_reinitializeGraphicsSystem_FUN_005aca40(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_reinitializeGraphicsSystem_FUN_005aca40(void)

{
  HRESULT HVar1;
  
  _DAT_02c99318 = 0;
  if (_DAT_02c83370 == 0) {
    return;
  }
  engine_special_cpp_restoreVideoMode_FUN_00582310();
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
  HVar1 = DirectDrawCreate((GUID *)0x0,(LPDIRECTDRAW *)&DAT_02c99300,(IUnknown *)0x0);
  if (HVar1 == 0) {
    (**(code **)(*_DAT_02c99300 + 0x50))(_DAT_02c99300,_DAT_02c9be68,0x11);
  }
  wincore_wddvmem_cpp_FUN_005ac300(DAT_0061b498,DAT_0061b49c,DAT_0061b4a0);
  return;
}
