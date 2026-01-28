// Name: core_path.cpp_CPathMap_CallToQueuePop_FUN_00548750
// Address: 00548750
// Address Range: [[00548750, 00548799]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_CPathMap_CallToQueuePop_FUN_00548750(CPathMap *this_ptr)

#include "nocturne.h"

void __cdecl core_path_cpp_CPathMap_CallToQueuePop_FUN_00548750(CPathMap *this_ptr)

{
  g_PathfindingDestZ = 100;
  g_PathfindingDestX = 99;
  g_PathfindingCurrentX = 0x32;
  g_PathfindingCurrentZ = 0x32;
  g_PathfindingMaxClimbHeight = 2;
  core_path_cpp_CPathMap_queuePop_FUN_005487a0(this_ptr,(this_ptr->voxel_coords).y);
  return;
}
