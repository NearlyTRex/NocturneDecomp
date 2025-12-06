// Name: core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
// Address: 00547d00
// Address Range: [[00547d00, 00547dc0]]
// Convention: __cdecl
// Signature: int core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)

#include "nocturne.h"

int __cdecl
core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
          (CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles,
          int direction_hint)

{
  int iVar1;
  
  if ((((this_ptr->cached_world_position).x != dest_position->x) ||
      ((this_ptr->cached_world_position).y != dest_position->y)) ||
     ((this_ptr->cached_world_position).z != dest_position->z)) {
    if (&this_ptr->cached_world_position != dest_position) {
      (this_ptr->cached_world_position).x = dest_position->x;
      (this_ptr->cached_world_position).y = dest_position->y;
      (this_ptr->cached_world_position).z = dest_position->z;
    }
    g_PathfindingMaxClimbHeight = 1;
    do {
      iVar1 = core_path_cpp_CPathMap_findPathToDestination_FUN_00547320
                        (this_ptr,dest_position,&this_ptr->path_heading,direction_hint);
      this_ptr->last_pathfinding_result = iVar1;
      if (iVar1 == 1) break;
      g_PathfindingMaxClimbHeight = g_PathfindingMaxClimbHeight + 1;
    } while (g_PathfindingMaxClimbHeight < 4);
  }
  if (&this_ptr->path_heading != out_euler_angles) {
    out_euler_angles->x = (this_ptr->path_heading).x;
    out_euler_angles->y = (this_ptr->path_heading).y;
    out_euler_angles->z = (this_ptr->path_heading).z;
    return this_ptr->last_pathfinding_result;
  }
  return this_ptr->last_pathfinding_result;
}
