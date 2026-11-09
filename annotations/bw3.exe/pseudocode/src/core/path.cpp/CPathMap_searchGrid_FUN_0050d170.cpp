// Name: core_path.cpp_CPathMap_searchGrid_FUN_0050d170
// Address: 0050d170
// Address Range: [[0050d170, 0050d5f8]]
// Convention: __cdecl
// Signature: uint __cdecl core_path_cpp_CPathMap_searchGrid_FUN_0050d170(CPathMap *this_ptr,int start_height)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_path_cpp_CPathMap_searchGrid_FUN_0050d170(CPathMap *this_ptr,int start_height)

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
  
  memset((void *)0x1ed02b8,0,0x2774);
  _DAT_01ed2a2c = 1;
  _DAT_01ed02ac = 0;
  _DAT_01ec184c = _DAT_01ec183c;
  _DAT_01ec1854 = _DAT_01ec1840;
  *(byte *)(_DAT_01ec183c + 0x1ed02b8 + _DAT_01ec1840 * 100) = 1;
  _DAT_01ed02b0 = 1;
  _DAT_01ec1850 = start_height;
  do {
    if (*(char *)(_DAT_01ec1848 * 100 + _DAT_01ec1844 + 0x1ed02b8) != '\0') {
      return 1;
    }
    if (_DAT_01ed02ac == _DAT_01ed02b0) {
      _DAT_01d71de0 = "..\\core\\path.cpp";
      _DAT_01d71de4 = 0xdf;
      core_main_c_FUN_004e4330("queuePop - empty queue?!");
    }
    iVar1 = _DAT_01ed02ac * 0xc;
    grid_x = *(int *)(&DAT_01ec184c + iVar1);
    iVar8 = *(int *)(&DAT_01ec1850 + iVar1);
    _DAT_01ed02ac = _DAT_01ed02ac + 1;
    iVar1 = *(int *)(&DAT_01ec1854 + iVar1);
    if (4999 < (int)_DAT_01ed02ac) {
      _DAT_01ed02ac = 0;
    }
    iVar2 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_0050b320
                      (this_ptr,iVar1 + 1,grid_x,iVar8);
    iVar3 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_0050b320
                      (this_ptr,iVar1,grid_x + 1,iVar8);
    iVar4 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_0050b320
                      (this_ptr,iVar1 + -1,grid_x,iVar8);
    iVar5 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_0050b320
                      (this_ptr,iVar1,grid_x + -1,iVar8);
    if ((((_DAT_01ec183c == grid_x) && (iVar1 == _DAT_01ec1840)) ||
        ((grid_x == _DAT_01ec1844 && (iVar1 == _DAT_01ec1848)))) ||
       ((((iVar8 - iVar2 < _DAT_01ec1514 && (iVar8 - iVar4 < _DAT_01ec1514)) &&
         (iVar8 - iVar3 < _DAT_01ec1514)) && (iVar8 - iVar5 < _DAT_01ec1514)))) {
      if (((iVar1 < 99) && (*(char *)((iVar1 + 1) * 100 + grid_x + 0x1ed02b8) == '\0')) &&
         (uVar6 = iVar2 - iVar8 >> 0x1f, (int)((iVar2 - iVar8 ^ uVar6) - uVar6) < _DAT_01ec1514)) {
        *(byte *)((iVar1 + 1) * 100 + grid_x + 0x1ed02b8) = 1;
        iVar7 = _DAT_01ed02b0 * 0xc;
        *(int *)(&DAT_01ec184c + iVar7) = grid_x;
        uVar6 = _DAT_01ed02b0 + 1;
        *(int *)(&DAT_01ec1850 + iVar7) = iVar2;
        _DAT_01ed2a2c = _DAT_01ed2a2c + 1;
        _DAT_01ed02b0 = uVar6;
        *(int *)(&DAT_01ec1854 + iVar7) = iVar1 + 1;
        if (4999 < (int)uVar6) {
          _DAT_01ed02b0 = 0;
        }
      }
      if (((grid_x < 99) && (*(char *)(iVar1 * 100 + grid_x + 0x1ed02b9) == '\0')) &&
         (uVar6 = iVar3 - iVar8 >> 0x1f, (int)((iVar3 - iVar8 ^ uVar6) - uVar6) < _DAT_01ec1514)) {
        *(byte *)(iVar1 * 100 + 0x1ed02b9 + grid_x) = 3;
        iVar2 = _DAT_01ed02b0 * 0xc;
        *(int *)(&DAT_01ec184c + iVar2) = grid_x + 1;
        _DAT_01ed02b0 = _DAT_01ed02b0 + 1;
        *(int *)(&DAT_01ec1850 + iVar2) = iVar3;
        *(int *)(&DAT_01ec1854 + iVar2) = iVar1;
        _DAT_01ed2a2c = _DAT_01ed2a2c + 1;
        if (4999 < (int)_DAT_01ed02b0) {
          _DAT_01ed02b0 = 0;
        }
      }
      if (((0 < iVar1) && (*(char *)((iVar1 + -1) * 100 + grid_x + 0x1ed02b8) == '\0')) &&
         (uVar6 = iVar4 - iVar8 >> 0x1f, (int)((iVar4 - iVar8 ^ uVar6) - uVar6) < _DAT_01ec1514)) {
        *(byte *)((iVar1 + -1) * 100 + grid_x + 0x1ed02b8) = 2;
        iVar2 = _DAT_01ed02b0 * 0xc;
        *(int *)(&DAT_01ec184c + iVar2) = grid_x;
        _DAT_01ed02b0 = _DAT_01ed02b0 + 1;
        *(int *)(&DAT_01ec1850 + iVar2) = iVar4;
        *(int *)(&DAT_01ec1854 + iVar2) = iVar1 + -1;
        _DAT_01ed2a2c = _DAT_01ed2a2c + 1;
        if (4999 < (int)_DAT_01ed02b0) {
          _DAT_01ed02b0 = 0;
        }
      }
      if (((0 < grid_x) && (*(char *)(iVar1 * 100 + grid_x + 0x1ed02b7) == '\0')) &&
         (uVar6 = iVar5 - iVar8 >> 0x1f, (int)((iVar5 - iVar8 ^ uVar6) - uVar6) < _DAT_01ec1514)) {
        *(byte *)(iVar1 * 100 + 0x1ed02b7 + grid_x) = 4;
        iVar8 = _DAT_01ed02b0 * 0xc;
        _DAT_01ed2a2c = _DAT_01ed2a2c + 1;
        *(int *)(&DAT_01ec184c + iVar8) = grid_x + -1;
        uVar6 = _DAT_01ed02b0 + 1;
        *(int *)(&DAT_01ec1850 + iVar8) = iVar5;
        _DAT_01ed02b0 = uVar6;
        *(int *)(&DAT_01ec1854 + iVar8) = iVar1;
        if (4999 < (int)uVar6) {
          _DAT_01ed02b0 = 0;
        }
      }
    }
  } while (_DAT_01ed02ac != _DAT_01ed02b0);
  return _DAT_01ed02ac ^ _DAT_01ed02b0;
}
