// Name: FUN_00553620
// Address: 00553620
// Address Range: [[00553620, 005537d4]]
// Convention: unknown
// Signature: void FUN_00553620(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00553620(void)

{
  int iVar1;
  uint uVar2;
  uint local_70 [15];
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  FUN_00563cc0(local_70,0,0x6c);
  local_70[0] = 0x6c;
  iVar1 = (**(code **)(*_DAT_02ddf558 + 100))(_DAT_02ddf558,0,local_70,1,0);
  if (iVar1 != 0) {
    _DAT_01cc4800 = "..\\wincore\\wddvmem.cpp";
    _DAT_01cc4804 = 0x2ae;
    FUN_004c8440("setColorTable16 - Unable to lock back buffer!");
  }
  iVar1 = (**(code **)(*_DAT_02ddf558 + 0x80))(_DAT_02ddf558,0);
  if (iVar1 != 0) {
    _DAT_01cc4800 = "..\\wincore\\wddvmem.cpp";
    _DAT_01cc4804 = 0x2b0;
    FUN_004c8440("setColorTable16 - Unable to unlock back buffer!");
  }
  _DAT_01c00624 = 0;
  for (uVar2 = uStack_34; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1) {
    _DAT_01c00624 = _DAT_01c00624 + 1;
  }
  _DAT_01c00628 = (uint)(0xff / (ulonglong)(uStack_34 >> ((byte)_DAT_01c00624 & 0x1f)));
  _DAT_01c0062c = 0;
  uVar2 = _DAT_01c00628;
  if (_DAT_01c00628 == 0) {
    _DAT_01c0062c = 0x20;
  }
  else {
    for (; 1 < uVar2; uVar2 = uVar2 >> 1) {
      _DAT_01c0062c = _DAT_01c0062c + 1;
    }
  }
  _DAT_01c00630 = 0;
  for (uVar2 = uStack_30; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1) {
    _DAT_01c00630 = _DAT_01c00630 + 1;
  }
  _DAT_01c00634 = (uint)(0xff / (ulonglong)(uStack_30 >> ((byte)_DAT_01c00630 & 0x1f)));
  _DAT_01c00638 = 0;
  uVar2 = _DAT_01c00634;
  if (_DAT_01c00634 == 0) {
    _DAT_01c00638 = 0x20;
  }
  else {
    for (; 1 < uVar2; uVar2 = uVar2 >> 1) {
      _DAT_01c00638 = _DAT_01c00638 + 1;
    }
  }
  _DAT_01c0063c = 0;
  for (uVar2 = uStack_2c; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1) {
    _DAT_01c0063c = _DAT_01c0063c + 1;
  }
  _DAT_01c00640 = (uint)(0xff / (ulonglong)(uStack_2c >> ((byte)_DAT_01c0063c & 0x1f)));
  _DAT_01c00644 = 0;
  uVar2 = _DAT_01c00640;
  if (_DAT_01c00640 == 0) {
    _DAT_01c00644 = 0x20;
    FUN_004b63f0();
    return;
  }
  for (; 1 < uVar2; uVar2 = uVar2 >> 1) {
    _DAT_01c00644 = _DAT_01c00644 + 1;
  }
  FUN_004b63f0();
  return;
}
