// Name: FUN_00589270
// Address: 00589270
// Address Range: [[00589270, 00589424]]
// Convention: unknown
// Signature: void FUN_00589270(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00589270(void)

{
  int iVar1;
  uint uVar2;
  uint local_70 [15];
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  FUN_005b77c0(local_70,0,0x6c);
  local_70[0] = 0x6c;
  iVar1 = (**(code **)(*_DAT_02661ae8 + 100))(_DAT_02661ae8,0,local_70,1,0);
  if (iVar1 != 0) {
    _DAT_01d046a0 = "..\\wincore\\wddvmem.cpp";
    _DAT_01d046a4 = 0x294;
    FUN_004e4500("setColorTable16 - Unable to lock back buffer!");
  }
  iVar1 = (**(code **)(*_DAT_02661ae8 + 0x80))(_DAT_02661ae8,0);
  if (iVar1 != 0) {
    _DAT_01d046a0 = "..\\wincore\\wddvmem.cpp";
    _DAT_01d046a4 = 0x296;
    FUN_004e4500("setColorTable16 - Unable to unlock back buffer!");
  }
  _DAT_01c35814 = 0;
  for (uVar2 = uStack_34; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1) {
    _DAT_01c35814 = _DAT_01c35814 + 1;
  }
  _DAT_01c35818 = (uint)(0xff / (ulonglong)(uStack_34 >> ((byte)_DAT_01c35814 & 0x1f)));
  _DAT_01c3581c = 0;
  uVar2 = _DAT_01c35818;
  if (_DAT_01c35818 == 0) {
    _DAT_01c3581c = 0x20;
  }
  else {
    for (; 1 < uVar2; uVar2 = uVar2 >> 1) {
      _DAT_01c3581c = _DAT_01c3581c + 1;
    }
  }
  _DAT_01c35820 = 0;
  for (uVar2 = uStack_30; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1) {
    _DAT_01c35820 = _DAT_01c35820 + 1;
  }
  _DAT_01c35824 = (uint)(0xff / (ulonglong)(uStack_30 >> ((byte)_DAT_01c35820 & 0x1f)));
  _DAT_01c35828 = 0;
  uVar2 = _DAT_01c35824;
  if (_DAT_01c35824 == 0) {
    _DAT_01c35828 = 0x20;
  }
  else {
    for (; 1 < uVar2; uVar2 = uVar2 >> 1) {
      _DAT_01c35828 = _DAT_01c35828 + 1;
    }
  }
  _DAT_01c3582c = 0;
  for (uVar2 = uStack_2c; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1) {
    _DAT_01c3582c = _DAT_01c3582c + 1;
  }
  _DAT_01c35830 = (uint)(0xff / (ulonglong)(uStack_2c >> ((byte)_DAT_01c3582c & 0x1f)));
  _DAT_01c35834 = 0;
  uVar2 = _DAT_01c35830;
  if (_DAT_01c35830 == 0) {
    _DAT_01c35834 = 0x20;
    FUN_004d0d10();
    return;
  }
  for (; 1 < uVar2; uVar2 = uVar2 >> 1) {
    _DAT_01c35834 = _DAT_01c35834 + 1;
  }
  FUN_004d0d10();
  return;
}
