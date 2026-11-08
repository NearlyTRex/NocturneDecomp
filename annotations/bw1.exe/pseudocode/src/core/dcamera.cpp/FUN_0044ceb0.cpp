// Name: FUN_0044ceb0
// Address: 0044ceb0
// Address Range: [[0044ceb0, 0044d1c1]]
// Convention: unknown
// Signature: void FUN_0044ceb0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044ceb0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  char *pcVar6;
  
  iVar4 = 0;
  switch(DAT_0061122c) {
  case 0:
    _DAT_01342208 = _DAT_01342208 + _DAT_01c43530;
    if (_DAT_01342204 < _DAT_01342208) {
      _DAT_01342208 = _DAT_01342204;
      DAT_0061122c = 1;
      _DAT_01342200 = DAT_00611228;
    }
    if (_DAT_01342204 != 0) {
      iVar4 = (int)(((longlong)DAT_00611224 * (longlong)_DAT_01342208) / (longlong)_DAT_01342204);
    }
    pcVar6 = "Attack : ";
    break;
  case 1:
    _DAT_01342200 = _DAT_01342200 - _DAT_01c43530;
    if (_DAT_01342200 < 0) {
      _DAT_01342200 = 0;
      DAT_0061122c = 2;
      _DAT_01342210 = _DAT_0134220c;
    }
    pcVar6 = "Sustain : ";
    iVar4 = DAT_00611224;
    break;
  case 2:
    _DAT_01342210 = _DAT_01342210 - _DAT_01c43530;
    if (_DAT_01342210 < 0) {
      _DAT_01342210 = 0;
      DAT_0061122c = 3;
    }
    if (_DAT_0134220c != 0) {
      iVar4 = (int)(((longlong)DAT_00611224 * (longlong)_DAT_01342210) / (longlong)_DAT_0134220c);
    }
    pcVar6 = "Decay : ";
    break;
  default:
    goto switchD_0044cec8_caseD_3;
  }
  FUN_00445430(PTR_DAT_00611100,pcVar6);
switchD_0044cec8_caseD_3:
  _DAT_01342214 =
       _DAT_01342214 +
       ((uint)((longlong)iVar4 * (longlong)(int)_DAT_01c43530) >> 0x10 |
       (int)((ulonglong)((longlong)iVar4 * (longlong)(int)_DAT_01c43530) >> 0x20) << 0x10);
  uVar3 = _DAT_0134221c;
  if (0xffff < _DAT_01342214) {
    uVar2 = _DAT_01c43530 & 1;
    _DAT_01342214 = 0;
    uVar3 = (int)(_DAT_01c43530 & 2) >> 1;
    bVar5 = _DAT_01342218 == uVar2;
    _DAT_01342218 = uVar2;
    if ((bVar5) && (_DAT_0134221c == uVar3)) {
      uVar3 = (uint)(uVar3 == 0);
    }
  }
  _DAT_0134221c = uVar3;
  if ((*(int *)(param_1 + 0x148) < 0x1e0) || (DAT_0061122c == 3)) {
    _DAT_01342218 = 0;
    _DAT_0134221c = 0;
  }
  if (*(int *)(param_1 + 0x11e4) == 0) {
    *(uint *)(param_1 + 0x11e4) = 1;
  }
  else {
    _DAT_01d1d400 = "..\\core\\dcamera.cpp";
    _DAT_01d1d404 = 0x2eb;
    FUN_005030e0("CDemonCamera::beginScene - Scene already open!");
  }
  FUN_0044ce60(param_1,param_2);
  FUN_00483c10(DAT_00612560,0,0,*(int *)(param_1 + 0x144) + -1,*(int *)(param_1 + 0x148) + -1);
  uVar3 = _DAT_01342218;
  *(uint *)(param_1 + 0x11d4) = 0;
  *(uint *)(param_1 + 0x11d8) = 0;
  *(uint *)(param_1 + 0x1d0) = 0;
  _DAT_01c4f000 = _DAT_01c4f000 + uVar3 * 0x10000;
  *(int *)(param_1 + 0x11dc) = *(int *)(param_1 + 0x144) + -1;
  _DAT_01c4f004 = _DAT_01c4f004 + _DAT_0134221c * -0x10000;
  *(int *)(param_1 + 0x11e0) = *(int *)(param_1 + 0x148) + -1;
  uVar1 = DAT_00612560;
  *(int *)(param_1 + 0x168) = param_2;
  FUN_004834b0(uVar1,param_1 + 4);
  FUN_004839b0(DAT_00612560,*(uint *)(param_1 + 0x38));
  FUN_00483560(DAT_00612560,param_1 + 0x10);
  if (param_2 == 0) {
    if (_DAT_02c83370 != 0) {
      FUN_00581fe0();
    }
    FUN_0057dc40();
    FUN_0057dca4();
    if (_DAT_01c50948 != 0) {
      FUN_00582790();
      FUN_00582940();
    }
  }
  FUN_0044dc90(param_1);
  return;
}
