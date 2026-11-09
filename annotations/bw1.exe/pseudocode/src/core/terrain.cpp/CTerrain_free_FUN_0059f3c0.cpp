// Name: core_terrain.cpp_CTerrain_free_FUN_0059f3c0
// Address: 0059f3c0
// Address Range: [[0059f3c0, 0059f3d7]]
// Convention: __cdecl
// Signature: void __cdecl core_terrain_cpp_CTerrain_free_FUN_0059f3c0(CTerrain *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_terrain_cpp_CTerrain_free_FUN_0059f3c0(CTerrain *this_ptr)

{
  core_ground_cpp_CGround_free_FUN_004e72e0(g_CGroundPtr);
  _DAT_02c8ae6c = 0;
  return;
}
