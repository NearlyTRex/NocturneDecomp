// Name: FUN_00448ff0
// Address: 00448ff0
// Address Range: [[00448ff0, 00449301]]
// Convention: unknown
// Signature: void FUN_00448ff0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00448ff0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  char *pcVar6;
  
  iVar4 = 0;
  switch(DAT_005f17e0) {
  case 0:
    _DAT_0135eab8 = _DAT_0135eab8 + _DAT_01c5fad0;
    if (_DAT_0135eab4 < _DAT_0135eab8) {
      _DAT_0135eab8 = _DAT_0135eab4;
      DAT_005f17e0 = 1;
      _DAT_0135eab0 = DAT_005f17dc;
    }
    if (_DAT_0135eab4 != 0) {
      iVar4 = (int)(((longlong)DAT_005f17d8 * (longlong)_DAT_0135eab8) / (longlong)_DAT_0135eab4);
    }
    pcVar6 = "Attack : ";
    break;
  case 1:
    _DAT_0135eab0 = _DAT_0135eab0 - _DAT_01c5fad0;
    if (_DAT_0135eab0 < 0) {
      _DAT_0135eab0 = 0;
      DAT_005f17e0 = 2;
      _DAT_0135eac0 = _DAT_0135eabc;
    }
    pcVar6 = "Sustain : ";
    iVar4 = DAT_005f17d8;
    break;
  case 2:
    _DAT_0135eac0 = _DAT_0135eac0 - _DAT_01c5fad0;
    if (_DAT_0135eac0 < 0) {
      _DAT_0135eac0 = 0;
      DAT_005f17e0 = 3;
    }
    if (_DAT_0135eabc != 0) {
      iVar4 = (int)(((longlong)DAT_005f17d8 * (longlong)_DAT_0135eac0) / (longlong)_DAT_0135eabc);
    }
    pcVar6 = "Decay : ";
    break;
  default:
    goto switchD_00449008_caseD_3;
  }
  FUN_00441ff0(PTR_DAT_005f1690,pcVar6);
switchD_00449008_caseD_3:
  _DAT_0135eac4 =
       _DAT_0135eac4 +
       ((uint)((longlong)iVar4 * (longlong)(int)_DAT_01c5fad0) >> 0x10 |
       (int)((ulonglong)((longlong)iVar4 * (longlong)(int)_DAT_01c5fad0) >> 0x20) << 0x10);
  uVar3 = _DAT_0135eacc;
  if (0xffff < _DAT_0135eac4) {
    uVar2 = _DAT_01c5fad0 & 1;
    _DAT_0135eac4 = 0;
    uVar3 = (int)(_DAT_01c5fad0 & 2) >> 1;
    bVar5 = _DAT_0135eac8 == uVar2;
    _DAT_0135eac8 = uVar2;
    if ((bVar5) && (_DAT_0135eacc == uVar3)) {
      uVar3 = (uint)(uVar3 == 0);
    }
  }
  _DAT_0135eacc = uVar3;
  if ((*(int *)(param_1 + 0x148) < 0x1e0) || (DAT_005f17e0 == 3)) {
    _DAT_0135eac8 = 0;
    _DAT_0135eacc = 0;
  }
  if (*(int *)(param_1 + 0x11e4) == 0) {
    *(uint *)(param_1 + 0x11e4) = 1;
  }
  else {
    _DAT_01d71de0 = "..\\core\\dcamera.cpp";
    _DAT_01d71de4 = 0x2eb;
    FUN_004e4330("CDemonCamera::beginScene - Scene already open!");
  }
  FUN_00448fa0(param_1,param_2);
  FUN_0046d2f0(DAT_005f2afc,0,0,*(int *)(param_1 + 0x144) + -1,*(int *)(param_1 + 0x148) + -1);
  uVar3 = _DAT_0135eac8;
  *(uint *)(param_1 + 0x11d4) = 0;
  *(uint *)(param_1 + 0x11d8) = 0;
  *(uint *)(param_1 + 0x1d0) = 0;
  _DAT_01c6b5a0 = _DAT_01c6b5a0 + uVar3 * 0x10000;
  *(int *)(param_1 + 0x11dc) = *(int *)(param_1 + 0x144) + -1;
  _DAT_01c6b5a4 = _DAT_01c6b5a4 + _DAT_0135eacc * -0x10000;
  *(int *)(param_1 + 0x11e0) = *(int *)(param_1 + 0x148) + -1;
  uVar1 = DAT_005f2afc;
  *(int *)(param_1 + 0x168) = param_2;
  FUN_0046cb90(uVar1,param_1 + 4);
  FUN_0046d090(DAT_005f2afc,*(uint *)(param_1 + 0x38));
  FUN_0046cc40(DAT_005f2afc,param_1 + 0x10);
  if (param_2 == 0) {
    if (_DAT_02cf5fcc != 0) {
      FUN_005658b0();
    }
    FUN_00560d70();
    FUN_00560dd4();
    if (_DAT_01c6cee8 != 0) {
      FUN_00566060();
      FUN_00566210();
    }
  }
  FUN_00449dd0(param_1);
  return;
}
