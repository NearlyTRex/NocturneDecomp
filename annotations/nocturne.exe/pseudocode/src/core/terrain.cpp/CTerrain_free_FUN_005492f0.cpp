// Name: core_terrain.cpp_CTerrain_free_FUN_005492f0
// Address: 005492f0
// Address Range: [[005492f0, 00549307]]
// Convention: __cdecl
// Signature: void __cdecl core_terrain_cpp_CTerrain_free_FUN_005492f0(CTerrain *this_ptr)

#include "nocturne.h"

void __cdecl core_terrain_cpp_CTerrain_free_FUN_005492f0(CTerrain *this_ptr)

{
  core_ground_cpp_CGround_free_FUN_004b1470(g_CGroundPtr);
  g_CTerrainInstance.initialized = 0;
  return;
}
