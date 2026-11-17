// Name: core_terrain.cpp_CTerrain_free_FUN_0059f3c0
// Address: 0059f3c0
// Address Range: [[0059f3c0, 0059f3d7]]
// Convention: __cdecl
// Signature: void __cdecl core_terrain_cpp_CTerrain_free_FUN_0059f3c0(CTerrain *this_ptr)

#include "nocturne.h"

void __cdecl core_terrain_cpp_CTerrain_free_FUN_0059f3c0(CTerrain *this_ptr)

{
  core_ground_cpp_CGround_free_FUN_004e72e0(g_CGroundPtr);
  g_CTerrainInstance.initialized = 0;
  return;
}
