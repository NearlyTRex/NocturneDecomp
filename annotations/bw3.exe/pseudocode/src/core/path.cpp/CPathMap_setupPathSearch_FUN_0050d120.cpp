// Name: core_path.cpp_CPathMap_setupPathSearch_FUN_0050d120
// Address: 0050d120
// Address Range: [[0050d120, 0050d169]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_CPathMap_setupPathSearch_FUN_0050d120(CPathMap *this_ptr)

#include "nocturne.h"

void __cdecl core_path_cpp_CPathMap_setupPathSearch_FUN_0050d120(CPathMap *this_ptr)

{
  g_PathfindingDestZ = 100;
  g_PathfindingDestX = 99;
  g_PathfindingCurrentX = 0x32;
  g_PathfindingCurrentZ = 0x32;
  g_PathfindingMaxClimbHeight = 2;
  core_path_cpp_CPathMap_searchGrid_FUN_0050d170(this_ptr,(this_ptr->voxel_coords).y);
  return;
}
