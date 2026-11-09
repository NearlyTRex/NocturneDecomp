// Name: wincore_wddvmem.cpp_FUN_0057a5b0
// Address: 0057a5b0
// Address Range: [[0057a5b0, 0057a764]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_FUN_0057a5b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_FUN_0057a5b0(void)

{
  int iVar1;
  uint uVar2;
  uint local_70 [15];
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  memset(local_70,0,0x6c);
  local_70[0] = 0x6c;
  iVar1 = (**(code **)(*_DAT_02d0bce8 + 100))(_DAT_02d0bce8,0,local_70,1,0);
  if (iVar1 != 0) {
    _DAT_01d71de0 = "..\\wincore\\wddvmem.cpp";
    _DAT_01d71de4 = 0x2be;
    core_main_c_FUN_004e4330("setColorTable16 - Unable to lock back buffer!");
  }
  iVar1 = (**(code **)(*_DAT_02d0bce8 + 0x80))(_DAT_02d0bce8,0);
  if (iVar1 != 0) {
    _DAT_01d71de0 = "..\\wincore\\wddvmem.cpp";
    _DAT_01d71de4 = 0x2c0;
    core_main_c_FUN_004e4330("setColorTable16 - Unable to unlock back buffer!");
  }
  _DAT_01c6af74 = 0;
  for (uVar2 = uStack_34; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1) {
    _DAT_01c6af74 = _DAT_01c6af74 + 1;
  }
  _DAT_01c6af78 = (uint)(0xff / (ulonglong)(uStack_34 >> ((byte)_DAT_01c6af74 & 0x1f)));
  _DAT_01c6af7c = 0;
  uVar2 = _DAT_01c6af78;
  if (_DAT_01c6af78 == 0) {
    _DAT_01c6af7c = 0x20;
  }
  else {
    for (; 1 < uVar2; uVar2 = uVar2 >> 1) {
      _DAT_01c6af7c = _DAT_01c6af7c + 1;
    }
  }
  _DAT_01c6af80 = 0;
  for (uVar2 = uStack_30; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1) {
    _DAT_01c6af80 = _DAT_01c6af80 + 1;
  }
  _DAT_01c6af84 = (uint)(0xff / (ulonglong)(uStack_30 >> ((byte)_DAT_01c6af80 & 0x1f)));
  _DAT_01c6af88 = 0;
  uVar2 = _DAT_01c6af84;
  if (_DAT_01c6af84 == 0) {
    _DAT_01c6af88 = 0x20;
  }
  else {
    for (; 1 < uVar2; uVar2 = uVar2 >> 1) {
      _DAT_01c6af88 = _DAT_01c6af88 + 1;
    }
  }
  _DAT_01c6af8c = 0;
  for (uVar2 = uStack_2c; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1) {
    _DAT_01c6af8c = _DAT_01c6af8c + 1;
  }
  _DAT_01c6af90 = (uint)(0xff / (ulonglong)(uStack_2c >> ((byte)_DAT_01c6af8c & 0x1f)));
  _DAT_01c6af94 = 0;
  uVar2 = _DAT_01c6af90;
  if (_DAT_01c6af90 == 0) {
    _DAT_01c6af94 = 0x20;
    wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004d4eb0();
    return;
  }
  for (; 1 < uVar2; uVar2 = uVar2 >> 1) {
    _DAT_01c6af94 = _DAT_01c6af94 + 1;
  }
  wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004d4eb0();
  return;
}
