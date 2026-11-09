// Name: core_ground.cpp_CGround_renderVisibleTerrain_FUN_004cb5e0
// Address: 004cb5e0
// Address Range: [[004cb5e0, 004cb6f0]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_renderVisibleTerrain_FUN_004cb5e0(CGround *this_ptr)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_renderVisibleTerrain_FUN_004cb5e0(CGround *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_20;
  int local_1c;
  
  iVar1 = -*(int *)&this_ptr->field_0x10;
  if (-*(int *)&this_ptr->field_0x10 < *(int *)&this_ptr->field_0x3c) {
    iVar1 = *(int *)&this_ptr->field_0x3c;
  }
  local_1c = *(int *)&this_ptr->field_0x10;
  if (*(int *)&this_ptr->field_0x40 < *(int *)&this_ptr->field_0x10) {
    local_1c = *(int *)&this_ptr->field_0x40;
  }
  iVar4 = -*(int *)&this_ptr->field_0x14;
  if (-*(int *)&this_ptr->field_0x14 < *(int *)&this_ptr->field_0x44) {
    iVar4 = *(int *)&this_ptr->field_0x44;
  }
  local_20 = *(int *)&this_ptr->field_0x14;
  if (*(int *)&this_ptr->field_0x48 < *(int *)&this_ptr->field_0x14) {
    local_20 = *(int *)&this_ptr->field_0x48;
  }
  for (; iVar2 = iVar1, iVar4 < 0; iVar4 = iVar4 + 1) {
    for (; iVar3 = local_1c, iVar2 < 0; iVar2 = iVar2 + 1) {
      core_ground_cpp_CGround_renderTerrainQuad_FUN_004cb400
                (this_ptr,*(int *)&this_ptr->field_0x2c + iVar2,
                 *(int *)&this_ptr->field_0x30 + iVar4);
    }
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      core_ground_cpp_CGround_renderTerrainQuad_FUN_004cb400
                (this_ptr,*(int *)&this_ptr->field_0x2c + iVar3,
                 *(int *)&this_ptr->field_0x30 + iVar4);
    }
  }
  while (local_20 = local_20 + -1, iVar4 = iVar1, -1 < local_20) {
    for (; iVar2 = local_1c, iVar4 < 0; iVar4 = iVar4 + 1) {
      core_ground_cpp_CGround_renderTerrainQuad_FUN_004cb400
                (this_ptr,*(int *)&this_ptr->field_0x2c + iVar4,
                 *(int *)&this_ptr->field_0x30 + local_20);
    }
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      core_ground_cpp_CGround_renderTerrainQuad_FUN_004cb400
                (this_ptr,*(int *)&this_ptr->field_0x2c + iVar2,
                 *(int *)&this_ptr->field_0x30 + local_20);
    }
  }
  return;
}
