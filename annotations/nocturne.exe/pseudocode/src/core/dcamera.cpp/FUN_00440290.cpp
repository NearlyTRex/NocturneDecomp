// Name: FUN_00440290
// Address: 00440290
// Address Range: [[00440290, 004405c8]]
// Convention: unknown
// Signature: void FUN_00440290(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00440290(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  char *pcVar6;
  
  iVar4 = 0;
  switch(DAT_005ad44c) {
  case 0:
    _DAT_012ceb60 = _DAT_012ceb60 + _DAT_01bd1d80;
    if (_DAT_012ceb5c < _DAT_012ceb60) {
      _DAT_012ceb60 = _DAT_012ceb5c;
      DAT_005ad44c = 1;
      _DAT_012ceb58 = DAT_005ad448;
    }
    if (_DAT_012ceb5c != 0) {
      iVar4 = (int)(((longlong)DAT_005ad444 * (longlong)_DAT_012ceb60) / (longlong)_DAT_012ceb5c);
    }
    pcVar6 = "Attack : ";
    break;
  case 1:
    _DAT_012ceb58 = _DAT_012ceb58 - _DAT_01bd1d80;
    if (_DAT_012ceb58 < 0) {
      _DAT_012ceb58 = 0;
      DAT_005ad44c = 2;
      _DAT_012ceb68 = _DAT_012ceb64;
    }
    pcVar6 = "Sustain : ";
    iVar4 = DAT_005ad444;
    break;
  case 2:
    _DAT_012ceb68 = _DAT_012ceb68 - _DAT_01bd1d80;
    if (_DAT_012ceb68 < 0) {
      _DAT_012ceb68 = 0;
      DAT_005ad44c = 3;
    }
    if (_DAT_012ceb64 != 0) {
      iVar4 = (int)(((longlong)DAT_005ad444 * (longlong)_DAT_012ceb68) / (longlong)_DAT_012ceb64);
    }
    pcVar6 = "Decay : ";
    break;
  default:
    goto switchD_004402a8_caseD_3;
  }
  FUN_0043ac60(PTR_DAT_005ad350,pcVar6);
switchD_004402a8_caseD_3:
  _DAT_012ceb6c =
       _DAT_012ceb6c +
       ((uint)((longlong)iVar4 * (longlong)(int)_DAT_01bd1d80) >> 0x10 |
       (int)((ulonglong)((longlong)iVar4 * (longlong)(int)_DAT_01bd1d80) >> 0x20) << 0x10);
  uVar3 = _DAT_012ceb74;
  if (0xffff < _DAT_012ceb6c) {
    uVar2 = _DAT_01bd1d80 & 1;
    _DAT_012ceb6c = 0;
    uVar3 = (int)(_DAT_01bd1d80 & 2) >> 1;
    bVar5 = _DAT_012ceb70 == uVar2;
    _DAT_012ceb70 = uVar2;
    if ((bVar5) && (_DAT_012ceb74 == uVar3)) {
      uVar3 = (uint)(uVar3 == 0);
    }
  }
  _DAT_012ceb74 = uVar3;
  if ((*(int *)(param_1 + 0x140) < 0x1e0) || (DAT_005ad44c == 3)) {
    _DAT_012ceb70 = 0;
    _DAT_012ceb74 = 0;
  }
  if (*(int *)(param_1 + 0x11e4) == 0) {
    *(uint *)(param_1 + 0x11e4) = 1;
  }
  else {
    _DAT_01cc4800 = "..\\core\\dcamera.cpp";
    _DAT_01cc4804 = 0x2f3;
    FUN_004c8440("CDemonCamera::beginScene - Scene already open!");
  }
  FUN_00440240(param_1,param_2);
  FUN_00460e40(DAT_005ae704,*(uint *)(param_1 + 0x144),*(uint *)(param_1 + 0x148),
               *(int *)(param_1 + 0x13c) + -1,*(int *)(param_1 + 0x140) + -1);
  *(uint *)(param_1 + 0x1d0) = 0;
  *(uint *)(param_1 + 0x11d4) = *(uint *)(param_1 + 0x144);
  *(uint *)(param_1 + 0x11d8) = *(uint *)(param_1 + 0x148);
  uVar3 = _DAT_012ceb70;
  *(int *)(param_1 + 0x11dc) = *(int *)(param_1 + 0x144) + *(int *)(param_1 + 0x13c) + -1;
  _DAT_01c00c50 = _DAT_01c00c50 + uVar3 * 0x10000;
  _DAT_01c00c54 = _DAT_01c00c54 + _DAT_012ceb74 * -0x10000;
  *(int *)(param_1 + 0x11e0) = *(int *)(param_1 + 0x148) + *(int *)(param_1 + 0x140) + -1;
  uVar1 = DAT_005ae704;
  *(int *)(param_1 + 0x168) = param_2;
  FUN_00460700(uVar1,param_1 + 0x104);
  FUN_00460c00(DAT_005ae704,*(uint *)(param_1 + 0x138));
  FUN_004607b0(DAT_005ae704,param_1 + 0x110);
  if (param_2 == 0) {
    if (_DAT_02dc9d60 != 0) {
      FUN_00532340();
    }
    FUN_0052ee70();
    FUN_0052eed4();
    if (_DAT_01c02594 != 0) {
      FUN_005329a0();
      FUN_00532b50();
    }
  }
  FUN_00440fe0(param_1);
  return;
}
