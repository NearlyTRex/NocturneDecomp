// Name: core_ground.cpp_CGround_renderVisibleTerrain_FUN_004efb70
// Address: 004efb70
// Address Range: [[004efb70, 004efc80]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_renderVisibleTerrain_FUN_004efb70(CGround *this_ptr)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_renderVisibleTerrain_FUN_004efb70(CGround *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_20;
  int local_1c;
  
  iVar1 = -this_ptr->grid_width;
  if (-this_ptr->grid_width < this_ptr->visible_min_x) {
    iVar1 = this_ptr->visible_min_x;
  }
  local_1c = this_ptr->grid_width;
  if (this_ptr->visible_max_x < this_ptr->grid_width) {
    local_1c = this_ptr->visible_max_x;
  }
  iVar4 = -this_ptr->grid_height;
  if (-this_ptr->grid_height < this_ptr->visible_min_y) {
    iVar4 = this_ptr->visible_min_y;
  }
  local_20 = this_ptr->grid_height;
  if (this_ptr->visible_max_y < this_ptr->grid_height) {
    local_20 = this_ptr->visible_max_y;
  }
  for (; iVar2 = iVar1, iVar4 < 0; iVar4 = iVar4 + 1) {
    for (; iVar3 = local_1c, iVar2 < 0; iVar2 = iVar2 + 1) {
      core_ground_cpp_CGround_renderTerrainQuad_FUN_004ef990
                (this_ptr,this_ptr->camera_x + iVar2,this_ptr->camera_y + iVar4);
    }
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      core_ground_cpp_CGround_renderTerrainQuad_FUN_004ef990
                (this_ptr,this_ptr->camera_x + iVar3,this_ptr->camera_y + iVar4);
    }
  }
  while (local_20 = local_20 + -1, iVar4 = iVar1, -1 < local_20) {
    for (; iVar2 = local_1c, iVar4 < 0; iVar4 = iVar4 + 1) {
      core_ground_cpp_CGround_renderTerrainQuad_FUN_004ef990
                (this_ptr,this_ptr->camera_x + iVar4,this_ptr->camera_y + local_20);
    }
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      core_ground_cpp_CGround_renderTerrainQuad_FUN_004ef990
                (this_ptr,this_ptr->camera_x + iVar2,this_ptr->camera_y + local_20);
    }
  }
  return;
}
