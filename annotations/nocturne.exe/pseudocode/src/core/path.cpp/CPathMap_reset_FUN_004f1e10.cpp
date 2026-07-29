// Name: core_path.cpp_CPathMap_reset_FUN_004f1e10
// Address: 004f1e10
// Address Range: [[004f1e10, 004f1e80]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_CPathMap_reset_FUN_004f1e10(CPathMap *this_ptr)

#include "nocturne.h"

void __cdecl core_path_cpp_CPathMap_reset_FUN_004f1e10(CPathMap *this_ptr)

{
  uint uVar1;
  
  memset(this_ptr->height_cache_tags,0x7f,40000);
  this_ptr->last_pathfinding_result = 0;
  (this_ptr->cached_world_position).z = 0.0;
  (this_ptr->cached_world_position).y = (this_ptr->cached_world_position).z;
  (this_ptr->cached_world_position).x = (this_ptr->cached_world_position).y;
  (this_ptr->cached_world_position).x = 1e+30;
  (this_ptr->path_heading).z = 0.0;
  (this_ptr->path_heading).y = (this_ptr->path_heading).z;
  (this_ptr->path_heading).x = (this_ptr->path_heading).y;
  uVar1 = rand();
  this_ptr->update_timer = uVar1 & 0x3fff;
  return;
}
