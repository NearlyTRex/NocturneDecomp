// Name: core_path.cpp_CPathMap_reset_FUN_00548510
// Address: 00548510
// Address Range: [[00548510, 00548580]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_CPathMap_reset_FUN_00548510(CPathMap *this_ptr)

#include "nocturne.h"

void __cdecl core_path_cpp_CPathMap_reset_FUN_00548510(CPathMap *this_ptr)

{
  uint uVar1;
  
  crt_memory_c_memset_FUN_005fde40(this_ptr->height_cache_tags,0x7f,40000);
  this_ptr->last_pathfinding_result = 0;
  (this_ptr->cached_world_position).z = 0.0;
  (this_ptr->cached_world_position).y = (this_ptr->cached_world_position).z;
  (this_ptr->cached_world_position).x = (this_ptr->cached_world_position).y;
  (this_ptr->cached_world_position).x = 1e+30;
  (this_ptr->path_heading).z = 0.0;
  (this_ptr->path_heading).y = (this_ptr->path_heading).z;
  (this_ptr->path_heading).x = (this_ptr->path_heading).y;
  uVar1 = crt_stdlib_c_rand_FUN_005feb5c();
  this_ptr->update_timer = uVar1 & 0x3fff;
  return;
}
