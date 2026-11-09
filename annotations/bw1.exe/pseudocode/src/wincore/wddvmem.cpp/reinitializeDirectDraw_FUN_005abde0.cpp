// Name: wincore_wddvmem.cpp_reinitializeDirectDraw_FUN_005abde0
// Address: 005abde0
// Address Range: [[005abde0, 005abe8b]]
// Convention: __cdecl
// Signature: int __cdecl wincore_wddvmem_cpp_reinitializeDirectDraw_FUN_005abde0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl wincore_wddvmem_cpp_reinitializeDirectDraw_FUN_005abde0(void)

{
  HRESULT HVar1;
  int iVar2;
  
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
    iVar2 = (**(code **)(*_DAT_02c99300 + 0x50))(_DAT_02c99300,_DAT_02c9be68,0x11);
    if (iVar2 == 0) {
      return 1;
    }
  }
  return 0;
}
