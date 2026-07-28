// Name: core_path.cpp_CPathMap_setupPathSearch_FUN_004f2050
// Address: 004f2050
// Address Range: [[004f2050, 004f2099]]
// Convention: unknown
// Signature: void core_path_cpp_CPathMap_setupPathSearch_FUN_004f2050(CPathMap *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_path_cpp_CPathMap_setupPathSearch_FUN_004f2050(CPathMap *param_1)

{
  _DAT_01e31628 = 100;
  _DAT_01e31624 = 99;
  _DAT_01e3161c = 0x32;
  _DAT_01e31620 = 0x32;
  _DAT_01e312f4 = 2;
  core_path_cpp_CPathMap_searchGrid_FUN_004f20a0(param_1,(param_1->voxel_coords).y);
  return;
}
