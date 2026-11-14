// Name: wincore_wddvmem.cpp_analyzePixelFormat_FUN_005acd00
// Address: 005acd00
// Address Range: [[005acd00, 005aceb4]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_analyzePixelFormat_FUN_005acd00(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_analyzePixelFormat_FUN_005acd00(void)

{
  int iVar1;
  uint uVar2;
  uint local_70 [15];
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  memset(local_70,0,0x6c);
  local_70[0] = 0x6c;
  iVar1 = (**(code **)(*_DAT_02c99308 + 100))(_DAT_02c99308,0,local_70,1,0);
  if (iVar1 != 0) {
    _DAT_01d1d400 = "..\\wincore\\wddvmem.cpp";
    _DAT_01d1d404 = 0x2be;
    core_main_c_FUN_005030e0("setColorTable16 - Unable to lock back buffer!");
  }
  iVar1 = (**(code **)(*_DAT_02c99308 + 0x80))(_DAT_02c99308,0);
  if (iVar1 != 0) {
    _DAT_01d1d400 = "..\\wincore\\wddvmem.cpp";
    _DAT_01d1d404 = 0x2c0;
    core_main_c_FUN_005030e0("setColorTable16 - Unable to unlock back buffer!");
  }
  _DAT_01c4e9d4 = 0;
  for (uVar2 = uStack_34; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1) {
    _DAT_01c4e9d4 = _DAT_01c4e9d4 + 1;
  }
  _DAT_01c4e9d8 = (uint)(0xff / (ulonglong)(uStack_34 >> ((byte)_DAT_01c4e9d4 & 0x1f)));
  _DAT_01c4e9dc = 0;
  uVar2 = _DAT_01c4e9d8;
  if (_DAT_01c4e9d8 == 0) {
    _DAT_01c4e9dc = 0x20;
  }
  else {
    for (; 1 < uVar2; uVar2 = uVar2 >> 1) {
      _DAT_01c4e9dc = _DAT_01c4e9dc + 1;
    }
  }
  _DAT_01c4e9e0 = 0;
  for (uVar2 = uStack_30; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1) {
    _DAT_01c4e9e0 = _DAT_01c4e9e0 + 1;
  }
  _DAT_01c4e9e4 = (uint)(0xff / (ulonglong)(uStack_30 >> ((byte)_DAT_01c4e9e0 & 0x1f)));
  _DAT_01c4e9e8 = 0;
  uVar2 = _DAT_01c4e9e4;
  if (_DAT_01c4e9e4 == 0) {
    _DAT_01c4e9e8 = 0x20;
  }
  else {
    for (; 1 < uVar2; uVar2 = uVar2 >> 1) {
      _DAT_01c4e9e8 = _DAT_01c4e9e8 + 1;
    }
  }
  _DAT_01c4e9ec = 0;
  for (uVar2 = uStack_2c; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1) {
    _DAT_01c4e9ec = _DAT_01c4e9ec + 1;
  }
  _DAT_01c4e9f0 = (uint)(0xff / (ulonglong)(uStack_2c >> ((byte)_DAT_01c4e9ec & 0x1f)));
  _DAT_01c4e9f4 = 0;
  uVar2 = _DAT_01c4e9f0;
  if (_DAT_01c4e9f0 == 0) {
    _DAT_01c4e9f4 = 0x20;
    wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004ecf70();
    return;
  }
  for (; 1 < uVar2; uVar2 = uVar2 >> 1) {
    _DAT_01c4e9f4 = _DAT_01c4e9f4 + 1;
  }
  wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004ecf70();
  return;
}
