// Name: core_path.cpp_CPathMap_reset_FUN_00548510
// Address: 00548510
// MANUAL RECONSTRUCTION
// Address Range: [[00548510, 00548580]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_CPathMap_reset_FUN_00548510(CPathMap *this_ptr)

#include "nocturne.h"

void __cdecl core_path_cpp_CPathMap_reset_FUN_00548510(CPathMap *this_ptr)

{
  uint uVar1;
  
  memset(this_ptr->height_cache_tags,0x7f,40000);
  this_ptr->last_pathfinding_result = 0;
  (this_ptr->cached_world_position).x = 1e+30;
  (this_ptr->cached_world_position).y = 0.0;
  (this_ptr->cached_world_position).z = 0.0;
  (this_ptr->path_heading).x = 0.0;
  (this_ptr->path_heading).y = 0.0;
  (this_ptr->path_heading).z = 0.0;
  uVar1 = rand();
  this_ptr->update_timer = uVar1 & 0x3fff;
  return;
}
