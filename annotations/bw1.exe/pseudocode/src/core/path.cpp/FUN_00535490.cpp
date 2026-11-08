// Name: FUN_00535490
// Address: 00535490
// Address Range: [[00535490, 00535918]]
// Convention: unknown
// Signature: uint FUN_00535490(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00535490(uint param_1,uint param_2)

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
  
  FUN_005bfb70(0x1e7abe8,0,0x2774);
  _DAT_01e7d35c = 1;
  _DAT_01e7abdc = 0;
  _DAT_01e6c17c = _DAT_01e6c16c;
  _DAT_01e6c184 = _DAT_01e6c170;
  *(byte *)(_DAT_01e6c16c + 0x1e7abe8 + _DAT_01e6c170 * 100) = 1;
  _DAT_01e7abe0 = 1;
  _DAT_01e6c180 = param_2;
  do {
    if (*(char *)(_DAT_01e6c178 * 100 + _DAT_01e6c174 + 0x1e7abe8) != '\0') {
      return 1;
    }
    if (_DAT_01e7abdc == _DAT_01e7abe0) {
      _DAT_01d1d400 = "..\\core\\path.cpp";
      _DAT_01d1d404 = 0xdf;
      FUN_005030e0("queuePop - empty queue?!");
    }
    iVar2 = _DAT_01e7abdc * 0xc;
    iVar1 = *(int *)(&DAT_01e6c17c + iVar2);
    iVar9 = *(int *)(&DAT_01e6c180 + iVar2);
    _DAT_01e7abdc = _DAT_01e7abdc + 1;
    iVar2 = *(int *)(&DAT_01e6c184 + iVar2);
    if (4999 < (int)_DAT_01e7abdc) {
      _DAT_01e7abdc = 0;
    }
    iVar3 = FUN_00533640(param_1,iVar2 + 1,iVar1,iVar9);
    iVar4 = FUN_00533640(param_1,iVar2,iVar1 + 1,iVar9);
    iVar5 = FUN_00533640(param_1,iVar2 + -1,iVar1,iVar9);
    iVar6 = FUN_00533640(param_1,iVar2,iVar1 + -1,iVar9);
    if ((((_DAT_01e6c16c == iVar1) && (iVar2 == _DAT_01e6c170)) ||
        ((iVar1 == _DAT_01e6c174 && (iVar2 == _DAT_01e6c178)))) ||
       ((((iVar9 - iVar3 < _DAT_01e6be44 && (iVar9 - iVar5 < _DAT_01e6be44)) &&
         (iVar9 - iVar4 < _DAT_01e6be44)) && (iVar9 - iVar6 < _DAT_01e6be44)))) {
      if (((iVar2 < 99) && (*(char *)((iVar2 + 1) * 100 + iVar1 + 0x1e7abe8) == '\0')) &&
         (uVar7 = iVar3 - iVar9 >> 0x1f, (int)((iVar3 - iVar9 ^ uVar7) - uVar7) < _DAT_01e6be44)) {
        *(byte *)((iVar2 + 1) * 100 + iVar1 + 0x1e7abe8) = 1;
        iVar8 = _DAT_01e7abe0 * 0xc;
        *(int *)(&DAT_01e6c17c + iVar8) = iVar1;
        uVar7 = _DAT_01e7abe0 + 1;
        *(int *)(&DAT_01e6c180 + iVar8) = iVar3;
        _DAT_01e7d35c = _DAT_01e7d35c + 1;
        _DAT_01e7abe0 = uVar7;
        *(int *)(&DAT_01e6c184 + iVar8) = iVar2 + 1;
        if (4999 < (int)uVar7) {
          _DAT_01e7abe0 = 0;
        }
      }
      if (((iVar1 < 99) && (*(char *)(iVar2 * 100 + iVar1 + 0x1e7abe9) == '\0')) &&
         (uVar7 = iVar4 - iVar9 >> 0x1f, (int)((iVar4 - iVar9 ^ uVar7) - uVar7) < _DAT_01e6be44)) {
        *(byte *)(iVar2 * 100 + 0x1e7abe9 + iVar1) = 3;
        iVar3 = _DAT_01e7abe0 * 0xc;
        *(int *)(&DAT_01e6c17c + iVar3) = iVar1 + 1;
        _DAT_01e7abe0 = _DAT_01e7abe0 + 1;
        *(int *)(&DAT_01e6c180 + iVar3) = iVar4;
        *(int *)(&DAT_01e6c184 + iVar3) = iVar2;
        _DAT_01e7d35c = _DAT_01e7d35c + 1;
        if (4999 < (int)_DAT_01e7abe0) {
          _DAT_01e7abe0 = 0;
        }
      }
      if (((0 < iVar2) && (*(char *)((iVar2 + -1) * 100 + iVar1 + 0x1e7abe8) == '\0')) &&
         (uVar7 = iVar5 - iVar9 >> 0x1f, (int)((iVar5 - iVar9 ^ uVar7) - uVar7) < _DAT_01e6be44)) {
        *(byte *)((iVar2 + -1) * 100 + iVar1 + 0x1e7abe8) = 2;
        iVar3 = _DAT_01e7abe0 * 0xc;
        *(int *)(&DAT_01e6c17c + iVar3) = iVar1;
        _DAT_01e7abe0 = _DAT_01e7abe0 + 1;
        *(int *)(&DAT_01e6c180 + iVar3) = iVar5;
        *(int *)(&DAT_01e6c184 + iVar3) = iVar2 + -1;
        _DAT_01e7d35c = _DAT_01e7d35c + 1;
        if (4999 < (int)_DAT_01e7abe0) {
          _DAT_01e7abe0 = 0;
        }
      }
      if (((0 < iVar1) && (*(char *)(iVar2 * 100 + iVar1 + 0x1e7abe7) == '\0')) &&
         (uVar7 = iVar6 - iVar9 >> 0x1f, (int)((iVar6 - iVar9 ^ uVar7) - uVar7) < _DAT_01e6be44)) {
        *(byte *)(iVar2 * 100 + 0x1e7abe7 + iVar1) = 4;
        iVar9 = _DAT_01e7abe0 * 0xc;
        _DAT_01e7d35c = _DAT_01e7d35c + 1;
        *(int *)(&DAT_01e6c17c + iVar9) = iVar1 + -1;
        uVar7 = _DAT_01e7abe0 + 1;
        *(int *)(&DAT_01e6c180 + iVar9) = iVar6;
        _DAT_01e7abe0 = uVar7;
        *(int *)(&DAT_01e6c184 + iVar9) = iVar2;
        if (4999 < (int)uVar7) {
          _DAT_01e7abe0 = 0;
        }
      }
    }
  } while (_DAT_01e7abdc != _DAT_01e7abe0);
  return _DAT_01e7abdc ^ _DAT_01e7abe0;
}
