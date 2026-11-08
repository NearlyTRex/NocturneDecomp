// Name: FUN_00514140
// Address: 00514140
// Address Range: [[00514140, 005145c8]]
// Convention: unknown
// Signature: uint FUN_00514140(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00514140(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  FUN_005b77c0(0x1e5ec78,0,0x2774);
  _DAT_01e613ec = 1;
  _DAT_01e5ec6c = 0;
  _DAT_01e5020c = _DAT_01e501fc;
  _DAT_01e50214 = _DAT_01e50200;
  *(byte *)(_DAT_01e501fc + 0x1e5ec78 + _DAT_01e50200 * 100) = 1;
  _DAT_01e5ec70 = 1;
  _DAT_01e50210 = param_2;
  do {
    if (*(char *)(_DAT_01e50208 * 100 + _DAT_01e50204 + 0x1e5ec78) != '\0') {
      return 1;
    }
    if (_DAT_01e5ec6c == _DAT_01e5ec70) {
      _DAT_01d046a0 = "..\\core\\path.cpp";
      _DAT_01d046a4 = 0xdf;
      FUN_004e4500("queuePop - empty queue?!");
    }
    iVar2 = _DAT_01e5ec6c * 0xc;
    iVar1 = *(int *)(&DAT_01e5020c + iVar2);
    iVar9 = *(int *)(&DAT_01e50210 + iVar2);
    _DAT_01e5ec6c = _DAT_01e5ec6c + 1;
    iVar2 = *(int *)(&DAT_01e50214 + iVar2);
    if (4999 < (int)_DAT_01e5ec6c) {
      _DAT_01e5ec6c = 0;
    }
    iVar3 = FUN_005122f0(param_1,iVar2 + 1,iVar1,iVar9);
    iVar4 = FUN_005122f0(param_1,iVar2,iVar1 + 1,iVar9);
    iVar5 = FUN_005122f0(param_1,iVar2 + -1,iVar1,iVar9);
    iVar6 = FUN_005122f0(param_1,iVar2,iVar1 + -1,iVar9);
    if ((((_DAT_01e501fc == iVar1) && (iVar2 == _DAT_01e50200)) ||
        ((iVar1 == _DAT_01e50204 && (iVar2 == _DAT_01e50208)))) ||
       ((((iVar9 - iVar3 < _DAT_01e4fed4 && (iVar9 - iVar5 < _DAT_01e4fed4)) &&
         (iVar9 - iVar4 < _DAT_01e4fed4)) && (iVar9 - iVar6 < _DAT_01e4fed4)))) {
      if (((iVar2 < 99) && (*(char *)((iVar2 + 1) * 100 + iVar1 + 0x1e5ec78) == '\0')) &&
         (uVar7 = iVar3 - iVar9 >> 0x1f, (int)((iVar3 - iVar9 ^ uVar7) - uVar7) < _DAT_01e4fed4)) {
        *(byte *)((iVar2 + 1) * 100 + iVar1 + 0x1e5ec78) = 1;
        iVar8 = _DAT_01e5ec70 * 0xc;
        *(int *)(&DAT_01e5020c + iVar8) = iVar1;
        uVar7 = _DAT_01e5ec70 + 1;
        *(int *)(&DAT_01e50210 + iVar8) = iVar3;
        _DAT_01e613ec = _DAT_01e613ec + 1;
        _DAT_01e5ec70 = uVar7;
        *(int *)(&DAT_01e50214 + iVar8) = iVar2 + 1;
        if (4999 < (int)uVar7) {
          _DAT_01e5ec70 = 0;
        }
      }
      if (((iVar1 < 99) && (*(char *)(iVar2 * 100 + iVar1 + 0x1e5ec79) == '\0')) &&
         (uVar7 = iVar4 - iVar9 >> 0x1f, (int)((iVar4 - iVar9 ^ uVar7) - uVar7) < _DAT_01e4fed4)) {
        *(byte *)(iVar2 * 100 + 0x1e5ec79 + iVar1) = 3;
        iVar3 = _DAT_01e5ec70 * 0xc;
        *(int *)(&DAT_01e5020c + iVar3) = iVar1 + 1;
        _DAT_01e5ec70 = _DAT_01e5ec70 + 1;
        *(int *)(&DAT_01e50210 + iVar3) = iVar4;
        *(int *)(&DAT_01e50214 + iVar3) = iVar2;
        _DAT_01e613ec = _DAT_01e613ec + 1;
        if (4999 < (int)_DAT_01e5ec70) {
          _DAT_01e5ec70 = 0;
        }
      }
      if (((0 < iVar2) && (*(char *)((iVar2 + -1) * 100 + iVar1 + 0x1e5ec78) == '\0')) &&
         (uVar7 = iVar5 - iVar9 >> 0x1f, (int)((iVar5 - iVar9 ^ uVar7) - uVar7) < _DAT_01e4fed4)) {
        *(byte *)((iVar2 + -1) * 100 + iVar1 + 0x1e5ec78) = 2;
        iVar3 = _DAT_01e5ec70 * 0xc;
        *(int *)(&DAT_01e5020c + iVar3) = iVar1;
        _DAT_01e5ec70 = _DAT_01e5ec70 + 1;
        *(int *)(&DAT_01e50210 + iVar3) = iVar5;
        *(int *)(&DAT_01e50214 + iVar3) = iVar2 + -1;
        _DAT_01e613ec = _DAT_01e613ec + 1;
        if (4999 < (int)_DAT_01e5ec70) {
          _DAT_01e5ec70 = 0;
        }
      }
      if (((0 < iVar1) && (*(char *)(iVar2 * 100 + iVar1 + 0x1e5ec77) == '\0')) &&
         (uVar7 = iVar6 - iVar9 >> 0x1f, (int)((iVar6 - iVar9 ^ uVar7) - uVar7) < _DAT_01e4fed4)) {
        *(byte *)(iVar2 * 100 + 0x1e5ec77 + iVar1) = 4;
        iVar9 = _DAT_01e5ec70 * 0xc;
        _DAT_01e613ec = _DAT_01e613ec + 1;
        *(int *)(&DAT_01e5020c + iVar9) = iVar1 + -1;
        uVar7 = _DAT_01e5ec70 + 1;
        *(int *)(&DAT_01e50210 + iVar9) = iVar6;
        _DAT_01e5ec70 = uVar7;
        *(int *)(&DAT_01e50214 + iVar9) = iVar2;
        if (4999 < (int)uVar7) {
          _DAT_01e5ec70 = 0;
        }
      }
    }
  } while (_DAT_01e5ec6c != _DAT_01e5ec70);
  return _DAT_01e5ec6c ^ _DAT_01e5ec70;
}
