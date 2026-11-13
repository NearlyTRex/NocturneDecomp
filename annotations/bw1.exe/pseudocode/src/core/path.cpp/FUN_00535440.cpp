// Name: core_path.cpp_FUN_00535440
// Address: 00535440
// Address Range: [[00535440, 00535489]]
// Convention: unknown
// Signature: void core_path_cpp_FUN_00535440(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_path_cpp_FUN_00535440(void)

{
  CPathMap *in_stack_00000004;
  
  _DAT_01e6c178 = 100;
  _DAT_01e6c174 = 99;
  _DAT_01e6c16c = 0x32;
  _DAT_01e6c170 = 0x32;
  _DAT_01e6be44 = 2;
  core_path_cpp_CPathMap_searchGrid_FUN_00535490
            (in_stack_00000004,(in_stack_00000004->voxel_coords).y);
  return;
}
