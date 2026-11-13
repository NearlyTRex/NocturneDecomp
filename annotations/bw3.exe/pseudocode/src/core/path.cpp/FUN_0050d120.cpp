// Name: core_path.cpp_FUN_0050d120
// Address: 0050d120
// Address Range: [[0050d120, 0050d169]]
// Convention: unknown
// Signature: void core_path_cpp_FUN_0050d120(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_path_cpp_FUN_0050d120(void)

{
  CPathMap *in_stack_00000004;
  
  _DAT_01ec1848 = 100;
  _DAT_01ec1844 = 99;
  _DAT_01ec183c = 0x32;
  _DAT_01ec1840 = 0x32;
  _DAT_01ec1514 = 2;
  core_path_cpp_CPathMap_searchGrid_FUN_0050d170
            (in_stack_00000004,(in_stack_00000004->voxel_coords).y);
  return;
}
