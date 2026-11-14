// Name: core_path.cpp_CPathMap_setupPathSearch_FUN_005140f0
// Address: 005140f0
// Address Range: [[005140f0, 00514139]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_CPathMap_setupPathSearch_FUN_005140f0(CPathMap *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_path_cpp_CPathMap_setupPathSearch_FUN_005140f0(CPathMap *this_ptr)

{
  _DAT_01e50208 = 100;
  _DAT_01e50204 = 99;
  _DAT_01e501fc = 0x32;
  _DAT_01e50200 = 0x32;
  _DAT_01e4fed4 = 2;
  core_path_cpp_CPathMap_searchGrid_FUN_00514140(this_ptr,(this_ptr->voxel_coords).y);
  return;
}
