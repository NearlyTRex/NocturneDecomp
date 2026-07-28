// Name: core_path.cpp_CPathMap_searchGrid_FUN_004f20a0
// Address: 004f20a0
// Address Range: [[004f20a0, 004f2528]]
// Convention: __cdecl
// Signature: uint __cdecl core_path_cpp_CPathMap_searchGrid_FUN_004f20a0(CPathMap *this_ptr,int start_height)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_path_cpp_CPathMap_searchGrid_FUN_004f20a0(CPathMap *this_ptr,int start_height)

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
  
  memset((void *)0x1e40098,0,0x2774);
  _DAT_01e4280c = 1;
  _DAT_01e4008c = 0;
  _DAT_01e3162c = _DAT_01e3161c;
  _DAT_01e31634 = _DAT_01e31620;
  *(byte *)(_DAT_01e3161c + 0x1e40098 + _DAT_01e31620 * 100) = 1;
  _DAT_01e40090 = 1;
  _DAT_01e31630 = start_height;
  do {
    if (*(char *)(_DAT_01e31628 * 100 + _DAT_01e31624 + 0x1e40098) != '\0') {
      return 1;
    }
    if (_DAT_01e4008c == _DAT_01e40090) {
      PTR_01cc4800 = "..\\core\\path.cpp";
      INT_01cc4804 = 0xdf;
      core_main_c_FUN_004c8440("queuePop - empty queue?!");
    }
    iVar1 = _DAT_01e4008c * 0xc;
    grid_x = *(int *)(&DAT_01e3162c + iVar1);
    iVar8 = *(int *)(&DAT_01e31630 + iVar1);
    _DAT_01e4008c = _DAT_01e4008c + 1;
    iVar1 = *(int *)(&DAT_01e31634 + iVar1);
    if (4999 < (int)_DAT_01e4008c) {
      _DAT_01e4008c = 0;
    }
    iVar2 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0
                      (this_ptr,iVar1 + 1,grid_x,iVar8);
    iVar3 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0
                      (this_ptr,iVar1,grid_x + 1,iVar8);
    iVar4 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0
                      (this_ptr,iVar1 + -1,grid_x,iVar8);
    iVar5 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0
                      (this_ptr,iVar1,grid_x + -1,iVar8);
    if ((((_DAT_01e3161c == grid_x) && (iVar1 == _DAT_01e31620)) ||
        ((grid_x == _DAT_01e31624 && (iVar1 == _DAT_01e31628)))) ||
       ((((iVar8 - iVar2 < _DAT_01e312f4 && (iVar8 - iVar4 < _DAT_01e312f4)) &&
         (iVar8 - iVar3 < _DAT_01e312f4)) && (iVar8 - iVar5 < _DAT_01e312f4)))) {
      if (((iVar1 < 99) && (*(char *)((iVar1 + 1) * 100 + grid_x + 0x1e40098) == '\0')) &&
         (uVar6 = iVar2 - iVar8 >> 0x1f, (int)((iVar2 - iVar8 ^ uVar6) - uVar6) < _DAT_01e312f4)) {
        *(byte *)((iVar1 + 1) * 100 + grid_x + 0x1e40098) = 1;
        iVar7 = _DAT_01e40090 * 0xc;
        *(int *)(&DAT_01e3162c + iVar7) = grid_x;
        uVar6 = _DAT_01e40090 + 1;
        *(int *)(&DAT_01e31630 + iVar7) = iVar2;
        _DAT_01e4280c = _DAT_01e4280c + 1;
        _DAT_01e40090 = uVar6;
        *(int *)(&DAT_01e31634 + iVar7) = iVar1 + 1;
        if (4999 < (int)uVar6) {
          _DAT_01e40090 = 0;
        }
      }
      if (((grid_x < 99) && (*(char *)(iVar1 * 100 + grid_x + 0x1e40099) == '\0')) &&
         (uVar6 = iVar3 - iVar8 >> 0x1f, (int)((iVar3 - iVar8 ^ uVar6) - uVar6) < _DAT_01e312f4)) {
        *(byte *)(iVar1 * 100 + 0x1e40099 + grid_x) = 3;
        iVar2 = _DAT_01e40090 * 0xc;
        *(int *)(&DAT_01e3162c + iVar2) = grid_x + 1;
        _DAT_01e40090 = _DAT_01e40090 + 1;
        *(int *)(&DAT_01e31630 + iVar2) = iVar3;
        *(int *)(&DAT_01e31634 + iVar2) = iVar1;
        _DAT_01e4280c = _DAT_01e4280c + 1;
        if (4999 < (int)_DAT_01e40090) {
          _DAT_01e40090 = 0;
        }
      }
      if (((0 < iVar1) && (*(char *)((iVar1 + -1) * 100 + grid_x + 0x1e40098) == '\0')) &&
         (uVar6 = iVar4 - iVar8 >> 0x1f, (int)((iVar4 - iVar8 ^ uVar6) - uVar6) < _DAT_01e312f4)) {
        *(byte *)((iVar1 + -1) * 100 + grid_x + 0x1e40098) = 2;
        iVar2 = _DAT_01e40090 * 0xc;
        *(int *)(&DAT_01e3162c + iVar2) = grid_x;
        _DAT_01e40090 = _DAT_01e40090 + 1;
        *(int *)(&DAT_01e31630 + iVar2) = iVar4;
        *(int *)(&DAT_01e31634 + iVar2) = iVar1 + -1;
        _DAT_01e4280c = _DAT_01e4280c + 1;
        if (4999 < (int)_DAT_01e40090) {
          _DAT_01e40090 = 0;
        }
      }
      if (((0 < grid_x) && (*(char *)(iVar1 * 100 + grid_x + 0x1e40097) == '\0')) &&
         (uVar6 = iVar5 - iVar8 >> 0x1f, (int)((iVar5 - iVar8 ^ uVar6) - uVar6) < _DAT_01e312f4)) {
        *(byte *)(iVar1 * 100 + 0x1e40097 + grid_x) = 4;
        iVar8 = _DAT_01e40090 * 0xc;
        _DAT_01e4280c = _DAT_01e4280c + 1;
        *(int *)(&DAT_01e3162c + iVar8) = grid_x + -1;
        uVar6 = _DAT_01e40090 + 1;
        *(int *)(&DAT_01e31630 + iVar8) = iVar5;
        _DAT_01e40090 = uVar6;
        *(int *)(&DAT_01e31634 + iVar8) = iVar1;
        if (4999 < (int)uVar6) {
          _DAT_01e40090 = 0;
        }
      }
    }
  } while (_DAT_01e4008c != _DAT_01e40090);
  return _DAT_01e4008c ^ _DAT_01e40090;
}
