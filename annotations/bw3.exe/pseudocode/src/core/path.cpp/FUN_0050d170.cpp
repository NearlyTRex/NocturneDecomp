// Name: FUN_0050d170
// Address: 0050d170
// Address Range: [[0050d170, 0050d5f8]]
// Convention: unknown
// Signature: uint FUN_0050d170(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0050d170(uint param_1,uint param_2)

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
  
  FUN_005a28f0(0x1ed02b8,0,0x2774);
  _DAT_01ed2a2c = 1;
  _DAT_01ed02ac = 0;
  _DAT_01ec184c = _DAT_01ec183c;
  _DAT_01ec1854 = _DAT_01ec1840;
  *(byte *)(_DAT_01ec183c + 0x1ed02b8 + _DAT_01ec1840 * 100) = 1;
  _DAT_01ed02b0 = 1;
  _DAT_01ec1850 = param_2;
  do {
    if (*(char *)(_DAT_01ec1848 * 100 + _DAT_01ec1844 + 0x1ed02b8) != '\0') {
      return 1;
    }
    if (_DAT_01ed02ac == _DAT_01ed02b0) {
      _DAT_01d71de0 = "..\\core\\path.cpp";
      _DAT_01d71de4 = 0xdf;
      FUN_004e4330("queuePop - empty queue?!");
    }
    iVar2 = _DAT_01ed02ac * 0xc;
    iVar1 = *(int *)(&DAT_01ec184c + iVar2);
    iVar9 = *(int *)(&DAT_01ec1850 + iVar2);
    _DAT_01ed02ac = _DAT_01ed02ac + 1;
    iVar2 = *(int *)(&DAT_01ec1854 + iVar2);
    if (4999 < (int)_DAT_01ed02ac) {
      _DAT_01ed02ac = 0;
    }
    iVar3 = FUN_0050b320(param_1,iVar2 + 1,iVar1,iVar9);
    iVar4 = FUN_0050b320(param_1,iVar2,iVar1 + 1,iVar9);
    iVar5 = FUN_0050b320(param_1,iVar2 + -1,iVar1,iVar9);
    iVar6 = FUN_0050b320(param_1,iVar2,iVar1 + -1,iVar9);
    if ((((_DAT_01ec183c == iVar1) && (iVar2 == _DAT_01ec1840)) ||
        ((iVar1 == _DAT_01ec1844 && (iVar2 == _DAT_01ec1848)))) ||
       ((((iVar9 - iVar3 < _DAT_01ec1514 && (iVar9 - iVar5 < _DAT_01ec1514)) &&
         (iVar9 - iVar4 < _DAT_01ec1514)) && (iVar9 - iVar6 < _DAT_01ec1514)))) {
      if (((iVar2 < 99) && (*(char *)((iVar2 + 1) * 100 + iVar1 + 0x1ed02b8) == '\0')) &&
         (uVar7 = iVar3 - iVar9 >> 0x1f, (int)((iVar3 - iVar9 ^ uVar7) - uVar7) < _DAT_01ec1514)) {
        *(byte *)((iVar2 + 1) * 100 + iVar1 + 0x1ed02b8) = 1;
        iVar8 = _DAT_01ed02b0 * 0xc;
        *(int *)(&DAT_01ec184c + iVar8) = iVar1;
        uVar7 = _DAT_01ed02b0 + 1;
        *(int *)(&DAT_01ec1850 + iVar8) = iVar3;
        _DAT_01ed2a2c = _DAT_01ed2a2c + 1;
        _DAT_01ed02b0 = uVar7;
        *(int *)(&DAT_01ec1854 + iVar8) = iVar2 + 1;
        if (4999 < (int)uVar7) {
          _DAT_01ed02b0 = 0;
        }
      }
      if (((iVar1 < 99) && (*(char *)(iVar2 * 100 + iVar1 + 0x1ed02b9) == '\0')) &&
         (uVar7 = iVar4 - iVar9 >> 0x1f, (int)((iVar4 - iVar9 ^ uVar7) - uVar7) < _DAT_01ec1514)) {
        *(byte *)(iVar2 * 100 + 0x1ed02b9 + iVar1) = 3;
        iVar3 = _DAT_01ed02b0 * 0xc;
        *(int *)(&DAT_01ec184c + iVar3) = iVar1 + 1;
        _DAT_01ed02b0 = _DAT_01ed02b0 + 1;
        *(int *)(&DAT_01ec1850 + iVar3) = iVar4;
        *(int *)(&DAT_01ec1854 + iVar3) = iVar2;
        _DAT_01ed2a2c = _DAT_01ed2a2c + 1;
        if (4999 < (int)_DAT_01ed02b0) {
          _DAT_01ed02b0 = 0;
        }
      }
      if (((0 < iVar2) && (*(char *)((iVar2 + -1) * 100 + iVar1 + 0x1ed02b8) == '\0')) &&
         (uVar7 = iVar5 - iVar9 >> 0x1f, (int)((iVar5 - iVar9 ^ uVar7) - uVar7) < _DAT_01ec1514)) {
        *(byte *)((iVar2 + -1) * 100 + iVar1 + 0x1ed02b8) = 2;
        iVar3 = _DAT_01ed02b0 * 0xc;
        *(int *)(&DAT_01ec184c + iVar3) = iVar1;
        _DAT_01ed02b0 = _DAT_01ed02b0 + 1;
        *(int *)(&DAT_01ec1850 + iVar3) = iVar5;
        *(int *)(&DAT_01ec1854 + iVar3) = iVar2 + -1;
        _DAT_01ed2a2c = _DAT_01ed2a2c + 1;
        if (4999 < (int)_DAT_01ed02b0) {
          _DAT_01ed02b0 = 0;
        }
      }
      if (((0 < iVar1) && (*(char *)(iVar2 * 100 + iVar1 + 0x1ed02b7) == '\0')) &&
         (uVar7 = iVar6 - iVar9 >> 0x1f, (int)((iVar6 - iVar9 ^ uVar7) - uVar7) < _DAT_01ec1514)) {
        *(byte *)(iVar2 * 100 + 0x1ed02b7 + iVar1) = 4;
        iVar9 = _DAT_01ed02b0 * 0xc;
        _DAT_01ed2a2c = _DAT_01ed2a2c + 1;
        *(int *)(&DAT_01ec184c + iVar9) = iVar1 + -1;
        uVar7 = _DAT_01ed02b0 + 1;
        *(int *)(&DAT_01ec1850 + iVar9) = iVar6;
        _DAT_01ed02b0 = uVar7;
        *(int *)(&DAT_01ec1854 + iVar9) = iVar2;
        if (4999 < (int)uVar7) {
          _DAT_01ed02b0 = 0;
        }
      }
    }
  } while (_DAT_01ed02ac != _DAT_01ed02b0);
  return _DAT_01ed02ac ^ _DAT_01ed02b0;
}
