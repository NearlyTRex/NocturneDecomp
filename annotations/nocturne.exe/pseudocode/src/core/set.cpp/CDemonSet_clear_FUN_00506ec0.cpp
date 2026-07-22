// Name: core_set.cpp_CDemonSet_clear_FUN_00506ec0
// Address: 00506ec0
// Address Range: [[00506ec0, 00506f02]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_clear_FUN_00506ec0(int param_1)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_clear_FUN_00506ec0(int param_1)

{
  int iVar1;
  
  core_dmodel_cpp_FUN_00452f10(0x1fbacc8);
  iVar1 = param_1 + 4;
  do {
    FUN_00514430(iVar1);
    iVar1 = iVar1 + 0x1a0;
  } while (iVar1 != param_1 + 0x19644);
  core_terrain_cpp_CTerrain_free_FUN_005492f0(0x02DD10C8);
  return;
}
