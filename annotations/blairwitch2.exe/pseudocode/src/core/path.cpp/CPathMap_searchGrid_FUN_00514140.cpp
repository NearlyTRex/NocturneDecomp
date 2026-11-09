// Name: core_path.cpp_CPathMap_searchGrid_FUN_00514140
// Address: 00514140
// Address Range: [[00514140, 005145c8]]
// Convention: __cdecl
// Signature: uint __cdecl core_path_cpp_CPathMap_searchGrid_FUN_00514140(CPathMap *this_ptr,int start_height)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_path_cpp_CPathMap_searchGrid_FUN_00514140(CPathMap *this_ptr,int start_height)

{
  int grid_x;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  memset((void *)0x1e5ec78,0,0x2774);
  _DAT_01e613ec = 1;
  _DAT_01e5ec6c = 0;
  _DAT_01e5020c = _DAT_01e501fc;
  _DAT_01e50214 = _DAT_01e50200;
  *(byte *)(_DAT_01e501fc + 0x1e5ec78 + _DAT_01e50200 * 100) = 1;
  _DAT_01e5ec70 = 1;
  _DAT_01e50210 = start_height;
  do {
    if (*(char *)(_DAT_01e50208 * 100 + _DAT_01e50204 + 0x1e5ec78) != '\0') {
      return 1;
    }
    if (_DAT_01e5ec6c == _DAT_01e5ec70) {
      _DAT_01d046a0 = "..\\core\\path.cpp";
      _DAT_01d046a4 = 0xdf;
      core_main_c_FUN_004e4500("queuePop - empty queue?!");
    }
    iVar1 = _DAT_01e5ec6c * 0xc;
    grid_x = *(int *)(&DAT_01e5020c + iVar1);
    iVar8 = *(int *)(&DAT_01e50210 + iVar1);
    _DAT_01e5ec6c = _DAT_01e5ec6c + 1;
    iVar1 = *(int *)(&DAT_01e50214 + iVar1);
    if (4999 < (int)_DAT_01e5ec6c) {
      _DAT_01e5ec6c = 0;
    }
    iVar2 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0
                      (this_ptr,iVar1 + 1,grid_x,iVar8);
    iVar3 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0
                      (this_ptr,iVar1,grid_x + 1,iVar8);
    iVar4 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0
                      (this_ptr,iVar1 + -1,grid_x,iVar8);
    iVar5 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0
                      (this_ptr,iVar1,grid_x + -1,iVar8);
    if ((((_DAT_01e501fc == grid_x) && (iVar1 == _DAT_01e50200)) ||
        ((grid_x == _DAT_01e50204 && (iVar1 == _DAT_01e50208)))) ||
       ((((iVar8 - iVar2 < _DAT_01e4fed4 && (iVar8 - iVar4 < _DAT_01e4fed4)) &&
         (iVar8 - iVar3 < _DAT_01e4fed4)) && (iVar8 - iVar5 < _DAT_01e4fed4)))) {
      if (((iVar1 < 99) && (*(char *)((iVar1 + 1) * 100 + grid_x + 0x1e5ec78) == '\0')) &&
         (uVar6 = iVar2 - iVar8 >> 0x1f, (int)((iVar2 - iVar8 ^ uVar6) - uVar6) < _DAT_01e4fed4)) {
        *(byte *)((iVar1 + 1) * 100 + grid_x + 0x1e5ec78) = 1;
        iVar7 = _DAT_01e5ec70 * 0xc;
        *(int *)(&DAT_01e5020c + iVar7) = grid_x;
        uVar6 = _DAT_01e5ec70 + 1;
        *(int *)(&DAT_01e50210 + iVar7) = iVar2;
        _DAT_01e613ec = _DAT_01e613ec + 1;
        _DAT_01e5ec70 = uVar6;
        *(int *)(&DAT_01e50214 + iVar7) = iVar1 + 1;
        if (4999 < (int)uVar6) {
          _DAT_01e5ec70 = 0;
        }
      }
      if (((grid_x < 99) && (*(char *)(iVar1 * 100 + grid_x + 0x1e5ec79) == '\0')) &&
         (uVar6 = iVar3 - iVar8 >> 0x1f, (int)((iVar3 - iVar8 ^ uVar6) - uVar6) < _DAT_01e4fed4)) {
        *(byte *)(iVar1 * 100 + 0x1e5ec79 + grid_x) = 3;
        iVar2 = _DAT_01e5ec70 * 0xc;
        *(int *)(&DAT_01e5020c + iVar2) = grid_x + 1;
        _DAT_01e5ec70 = _DAT_01e5ec70 + 1;
        *(int *)(&DAT_01e50210 + iVar2) = iVar3;
        *(int *)(&DAT_01e50214 + iVar2) = iVar1;
        _DAT_01e613ec = _DAT_01e613ec + 1;
        if (4999 < (int)_DAT_01e5ec70) {
          _DAT_01e5ec70 = 0;
        }
      }
      if (((0 < iVar1) && (*(char *)((iVar1 + -1) * 100 + grid_x + 0x1e5ec78) == '\0')) &&
         (uVar6 = iVar4 - iVar8 >> 0x1f, (int)((iVar4 - iVar8 ^ uVar6) - uVar6) < _DAT_01e4fed4)) {
        *(byte *)((iVar1 + -1) * 100 + grid_x + 0x1e5ec78) = 2;
        iVar2 = _DAT_01e5ec70 * 0xc;
        *(int *)(&DAT_01e5020c + iVar2) = grid_x;
        _DAT_01e5ec70 = _DAT_01e5ec70 + 1;
        *(int *)(&DAT_01e50210 + iVar2) = iVar4;
        *(int *)(&DAT_01e50214 + iVar2) = iVar1 + -1;
        _DAT_01e613ec = _DAT_01e613ec + 1;
        if (4999 < (int)_DAT_01e5ec70) {
          _DAT_01e5ec70 = 0;
        }
      }
      if (((0 < grid_x) && (*(char *)(iVar1 * 100 + grid_x + 0x1e5ec77) == '\0')) &&
         (uVar6 = iVar5 - iVar8 >> 0x1f, (int)((iVar5 - iVar8 ^ uVar6) - uVar6) < _DAT_01e4fed4)) {
        *(byte *)(iVar1 * 100 + 0x1e5ec77 + grid_x) = 4;
        iVar8 = _DAT_01e5ec70 * 0xc;
        _DAT_01e613ec = _DAT_01e613ec + 1;
        *(int *)(&DAT_01e5020c + iVar8) = grid_x + -1;
        uVar6 = _DAT_01e5ec70 + 1;
        *(int *)(&DAT_01e50210 + iVar8) = iVar5;
        _DAT_01e5ec70 = uVar6;
        *(int *)(&DAT_01e50214 + iVar8) = iVar1;
        if (4999 < (int)uVar6) {
          _DAT_01e5ec70 = 0;
        }
      }
    }
  } while (_DAT_01e5ec6c != _DAT_01e5ec70);
  return _DAT_01e5ec6c ^ _DAT_01e5ec70;
}
