// Name: FUN_0043b7f0
// Address: 0043b7f0
// Address Range: [[0043b7f0, 0043bb01]]
// Convention: unknown
// Signature: void FUN_0043b7f0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043b7f0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  char *pcVar6;
  
  iVar4 = 0;
  switch(DAT_00609fa0) {
  case 0:
    _DAT_01326d08 = _DAT_01326d08 + _DAT_01c2a370;
    if (_DAT_01326d04 < _DAT_01326d08) {
      _DAT_01326d08 = _DAT_01326d04;
      DAT_00609fa0 = 1;
      _DAT_01326d00 = DAT_00609f9c;
    }
    if (_DAT_01326d04 != 0) {
      iVar4 = (int)(((longlong)DAT_00609f98 * (longlong)_DAT_01326d08) / (longlong)_DAT_01326d04);
    }
    pcVar6 = "Attack : ";
    break;
  case 1:
    _DAT_01326d00 = _DAT_01326d00 - _DAT_01c2a370;
    if (_DAT_01326d00 < 0) {
      _DAT_01326d00 = 0;
      DAT_00609fa0 = 2;
      _DAT_01326d10 = _DAT_01326d0c;
    }
    pcVar6 = "Sustain : ";
    iVar4 = DAT_00609f98;
    break;
  case 2:
    _DAT_01326d10 = _DAT_01326d10 - _DAT_01c2a370;
    if (_DAT_01326d10 < 0) {
      _DAT_01326d10 = 0;
      DAT_00609fa0 = 3;
    }
    if (_DAT_01326d0c != 0) {
      iVar4 = (int)(((longlong)DAT_00609f98 * (longlong)_DAT_01326d10) / (longlong)_DAT_01326d0c);
    }
    pcVar6 = "Decay : ";
    break;
  default:
    goto switchD_0043b808_caseD_3;
  }
  FUN_00436710(PTR_DAT_00609ed0,pcVar6);
switchD_0043b808_caseD_3:
  _DAT_01326d14 =
       _DAT_01326d14 +
       ((uint)((longlong)iVar4 * (longlong)(int)_DAT_01c2a370) >> 0x10 |
       (int)((ulonglong)((longlong)iVar4 * (longlong)(int)_DAT_01c2a370) >> 0x20) << 0x10);
  uVar3 = _DAT_01326d1c;
  if (0xffff < _DAT_01326d14) {
    uVar2 = _DAT_01c2a370 & 1;
    _DAT_01326d14 = 0;
    uVar3 = (int)(_DAT_01c2a370 & 2) >> 1;
    bVar5 = _DAT_01326d18 == uVar2;
    _DAT_01326d18 = uVar2;
    if ((bVar5) && (_DAT_01326d1c == uVar3)) {
      uVar3 = (uint)(uVar3 == 0);
    }
  }
  _DAT_01326d1c = uVar3;
  if ((*(int *)(param_1 + 0x148) < 0x1e0) || (DAT_00609fa0 == 3)) {
    _DAT_01326d18 = 0;
    _DAT_01326d1c = 0;
  }
  if (*(int *)(param_1 + 0x11e4) == 0) {
    *(uint *)(param_1 + 0x11e4) = 1;
  }
  else {
    _DAT_01d046a0 = "..\\core\\dcamera.cpp";
    _DAT_01d046a4 = 0x2e7;
    FUN_004e4500("CDemonCamera::beginScene - Scene already open!");
  }
  FUN_0043b7a0(param_1,param_2);
  FUN_0046b710(DAT_0060b280,0,0,*(int *)(param_1 + 0x144) + -1,*(int *)(param_1 + 0x148) + -1);
  uVar3 = _DAT_01326d18;
  *(uint *)(param_1 + 0x11d4) = 0;
  *(uint *)(param_1 + 0x11d8) = 0;
  *(uint *)(param_1 + 0x1d0) = 0;
  _DAT_01c35e40 = _DAT_01c35e40 + uVar3 * 0x10000;
  *(int *)(param_1 + 0x11dc) = *(int *)(param_1 + 0x144) + -1;
  _DAT_01c35e44 = _DAT_01c35e44 + _DAT_01326d1c * -0x10000;
  *(int *)(param_1 + 0x11e0) = *(int *)(param_1 + 0x148) + -1;
  uVar1 = DAT_0060b280;
  *(int *)(param_1 + 0x168) = param_2;
  FUN_0046afb0(uVar1,param_1 + 4);
  FUN_0046b4b0(DAT_0060b280,*(uint *)(param_1 + 0x38));
  FUN_0046b060(DAT_0060b280,param_1 + 0x10);
  if (param_2 == 0) {
    if (_DAT_0264bba0 != 0) {
      FUN_0055f590();
    }
    FUN_0055b1f0();
    FUN_0055b254();
    if (_DAT_01c37788 != 0) {
      FUN_0055fd40();
      FUN_0055fef0();
    }
  }
  FUN_0043c5d0(param_1);
  return;
}
