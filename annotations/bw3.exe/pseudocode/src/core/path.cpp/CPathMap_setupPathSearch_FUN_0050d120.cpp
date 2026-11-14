// Name: core_path.cpp_CPathMap_setupPathSearch_FUN_0050d120
// Address: 0050d120
// Address Range: [[0050d120, 0050d169]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_CPathMap_setupPathSearch_FUN_0050d120(CPathMap *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_path_cpp_CPathMap_setupPathSearch_FUN_0050d120(CPathMap *this_ptr)

{
  _DAT_01ec1848 = 100;
  _DAT_01ec1844 = 99;
  _DAT_01ec183c = 0x32;
  _DAT_01ec1840 = 0x32;
  _DAT_01ec1514 = 2;
  core_path_cpp_CPathMap_searchGrid_FUN_0050d170(this_ptr,(this_ptr->voxel_coords).y);
  return;
}
