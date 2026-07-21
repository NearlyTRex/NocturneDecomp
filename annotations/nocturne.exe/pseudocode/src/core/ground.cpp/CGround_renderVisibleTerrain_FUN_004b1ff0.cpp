// Name: core_ground.cpp_CGround_renderVisibleTerrain_FUN_004b1ff0
// Address: 004b1ff0
// Address Range: [[004b1ff0, 004b2100]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_renderVisibleTerrain_FUN_004b1ff0(int param_1)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_renderVisibleTerrain_FUN_004b1ff0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_20;
  int local_1c;
  
  iVar1 = -*(int *)(param_1 + 0x10);
  if (-*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x3c)) {
    iVar1 = *(int *)(param_1 + 0x3c);
  }
  local_1c = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x10)) {
    local_1c = *(int *)(param_1 + 0x40);
  }
  iVar4 = -*(int *)(param_1 + 0x14);
  if (-*(int *)(param_1 + 0x14) < *(int *)(param_1 + 0x44)) {
    iVar4 = *(int *)(param_1 + 0x44);
  }
  local_20 = *(int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x48) < *(int *)(param_1 + 0x14)) {
    local_20 = *(int *)(param_1 + 0x48);
  }
  for (; iVar2 = iVar1, iVar4 < 0; iVar4 = iVar4 + 1) {
    for (; iVar3 = local_1c, iVar2 < 0; iVar2 = iVar2 + 1) {
      core_ground_cpp_CGround_renderTerrainQuad_FUN_004b1e10
                (param_1,*(int *)(param_1 + 0x2c) + iVar2,*(int *)(param_1 + 0x30) + iVar4);
    }
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      core_ground_cpp_CGround_renderTerrainQuad_FUN_004b1e10
                (param_1,*(int *)(param_1 + 0x2c) + iVar3,*(int *)(param_1 + 0x30) + iVar4);
    }
  }
  while (local_20 = local_20 + -1, iVar4 = iVar1, -1 < local_20) {
    for (; iVar2 = local_1c, iVar4 < 0; iVar4 = iVar4 + 1) {
      core_ground_cpp_CGround_renderTerrainQuad_FUN_004b1e10
                (param_1,*(int *)(param_1 + 0x2c) + iVar4,*(int *)(param_1 + 0x30) + local_20);
    }
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      core_ground_cpp_CGround_renderTerrainQuad_FUN_004b1e10
                (param_1,*(int *)(param_1 + 0x2c) + iVar2,*(int *)(param_1 + 0x30) + local_20);
    }
  }
  return;
}
