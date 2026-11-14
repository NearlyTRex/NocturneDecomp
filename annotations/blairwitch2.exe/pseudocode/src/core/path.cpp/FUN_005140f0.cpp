// Name: core_path.cpp_FUN_005140f0
// Address: 005140f0
// Address Range: [[005140f0, 00514139]]
// Convention: unknown
// Signature: void core_path_cpp_FUN_005140f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_path_cpp_FUN_005140f0(void)

{
  CPathMap *in_stack_00000004;
  
  _DAT_01e50208 = 100;
  _DAT_01e50204 = 99;
  _DAT_01e501fc = 0x32;
  _DAT_01e50200 = 0x32;
  _DAT_01e4fed4 = 2;
  core_path_cpp_CPathMap_searchGrid_FUN_00514140
            (in_stack_00000004,(in_stack_00000004->voxel_coords).y);
  return;
}
