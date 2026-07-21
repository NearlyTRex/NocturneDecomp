// Name: core_path.cpp_CPathMap_searchGrid_FUN_004f20a0
// Address: 004f20a0
// Address Range: [[004f20a0, 004f2528]]
// Convention: __cdecl
// Signature: uint __cdecl core_path_cpp_CPathMap_searchGrid_FUN_004f20a0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_path_cpp_CPathMap_searchGrid_FUN_004f20a0(uint param_1,uint param_2)

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
  
  memset(0x1e40098,0,0x2774);
  _DAT_01e4280c = 1;
  _DAT_01e4008c = 0;
  _DAT_01e3162c = _DAT_01e3161c;
  _DAT_01e31634 = _DAT_01e31620;
  *(byte *)(_DAT_01e3161c + 0x1e40098 + _DAT_01e31620 * 100) = 1;
  _DAT_01e40090 = 1;
  _DAT_01e31630 = param_2;
  do {
    if (*(char *)(_DAT_01e31628 * 100 + _DAT_01e31624 + 0x1e40098) != '\0') {
      return 1;
    }
    if (_DAT_01e4008c == _DAT_01e40090) {
      _DAT_01cc4800 = "..\\core\\path.cpp";
      _DAT_01cc4804 = 0xdf;
      FUN_004c8440("queuePop - empty queue?!");
    }
    iVar2 = _DAT_01e4008c * 0xc;
    iVar1 = *(int *)(&DAT_01e3162c + iVar2);
    iVar9 = *(int *)(&DAT_01e31630 + iVar2);
    _DAT_01e4008c = _DAT_01e4008c + 1;
    iVar2 = *(int *)(&DAT_01e31634 + iVar2);
    if (4999 < (int)_DAT_01e4008c) {
      _DAT_01e4008c = 0;
    }
    iVar3 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0(param_1,iVar2 + 1,iVar1,iVar9);
    iVar4 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0(param_1,iVar2,iVar1 + 1,iVar9);
    iVar5 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0(param_1,iVar2 + -1,iVar1,iVar9)
    ;
    iVar6 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0(param_1,iVar2,iVar1 + -1,iVar9)
    ;
    if ((((_DAT_01e3161c == iVar1) && (iVar2 == _DAT_01e31620)) ||
        ((iVar1 == _DAT_01e31624 && (iVar2 == _DAT_01e31628)))) ||
       ((((iVar9 - iVar3 < _DAT_01e312f4 && (iVar9 - iVar5 < _DAT_01e312f4)) &&
         (iVar9 - iVar4 < _DAT_01e312f4)) && (iVar9 - iVar6 < _DAT_01e312f4)))) {
      if (((iVar2 < 99) && (*(char *)((iVar2 + 1) * 100 + iVar1 + 0x1e40098) == '\0')) &&
         (uVar7 = iVar3 - iVar9 >> 0x1f, (int)((iVar3 - iVar9 ^ uVar7) - uVar7) < _DAT_01e312f4)) {
        *(byte *)((iVar2 + 1) * 100 + iVar1 + 0x1e40098) = 1;
        iVar8 = _DAT_01e40090 * 0xc;
        *(int *)(&DAT_01e3162c + iVar8) = iVar1;
        uVar7 = _DAT_01e40090 + 1;
        *(int *)(&DAT_01e31630 + iVar8) = iVar3;
        _DAT_01e4280c = _DAT_01e4280c + 1;
        _DAT_01e40090 = uVar7;
        *(int *)(&DAT_01e31634 + iVar8) = iVar2 + 1;
        if (4999 < (int)uVar7) {
          _DAT_01e40090 = 0;
        }
      }
      if (((iVar1 < 99) && (*(char *)(iVar2 * 100 + iVar1 + 0x1e40099) == '\0')) &&
         (uVar7 = iVar4 - iVar9 >> 0x1f, (int)((iVar4 - iVar9 ^ uVar7) - uVar7) < _DAT_01e312f4)) {
        *(byte *)(iVar2 * 100 + 0x1e40099 + iVar1) = 3;
        iVar3 = _DAT_01e40090 * 0xc;
        *(int *)(&DAT_01e3162c + iVar3) = iVar1 + 1;
        _DAT_01e40090 = _DAT_01e40090 + 1;
        *(int *)(&DAT_01e31630 + iVar3) = iVar4;
        *(int *)(&DAT_01e31634 + iVar3) = iVar2;
        _DAT_01e4280c = _DAT_01e4280c + 1;
        if (4999 < (int)_DAT_01e40090) {
          _DAT_01e40090 = 0;
        }
      }
      if (((0 < iVar2) && (*(char *)((iVar2 + -1) * 100 + iVar1 + 0x1e40098) == '\0')) &&
         (uVar7 = iVar5 - iVar9 >> 0x1f, (int)((iVar5 - iVar9 ^ uVar7) - uVar7) < _DAT_01e312f4)) {
        *(byte *)((iVar2 + -1) * 100 + iVar1 + 0x1e40098) = 2;
        iVar3 = _DAT_01e40090 * 0xc;
        *(int *)(&DAT_01e3162c + iVar3) = iVar1;
        _DAT_01e40090 = _DAT_01e40090 + 1;
        *(int *)(&DAT_01e31630 + iVar3) = iVar5;
        *(int *)(&DAT_01e31634 + iVar3) = iVar2 + -1;
        _DAT_01e4280c = _DAT_01e4280c + 1;
        if (4999 < (int)_DAT_01e40090) {
          _DAT_01e40090 = 0;
        }
      }
      if (((0 < iVar1) && (*(char *)(iVar2 * 100 + iVar1 + 0x1e40097) == '\0')) &&
         (uVar7 = iVar6 - iVar9 >> 0x1f, (int)((iVar6 - iVar9 ^ uVar7) - uVar7) < _DAT_01e312f4)) {
        *(byte *)(iVar2 * 100 + 0x1e40097 + iVar1) = 4;
        iVar9 = _DAT_01e40090 * 0xc;
        _DAT_01e4280c = _DAT_01e4280c + 1;
        *(int *)(&DAT_01e3162c + iVar9) = iVar1 + -1;
        uVar7 = _DAT_01e40090 + 1;
        *(int *)(&DAT_01e31630 + iVar9) = iVar6;
        _DAT_01e40090 = uVar7;
        *(int *)(&DAT_01e31634 + iVar9) = iVar2;
        if (4999 < (int)uVar7) {
          _DAT_01e40090 = 0;
        }
      }
    }
  } while (_DAT_01e4008c != _DAT_01e40090);
  return _DAT_01e4008c ^ _DAT_01e40090;
}
