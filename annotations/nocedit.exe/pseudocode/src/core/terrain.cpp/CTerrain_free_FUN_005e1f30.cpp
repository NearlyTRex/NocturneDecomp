// Name: core_terrain.cpp_CTerrain_free_FUN_005e1f30
// Address: 005e1f30
// Address Range: [[005e1f30, 005e1f47]]
// Convention: __cdecl
// Signature: void __cdecl core_terrain_cpp_CTerrain_free_FUN_005e1f30(CTerrain *this_ptr)

#include "nocturne.h"

void __cdecl core_terrain_cpp_CTerrain_free_FUN_005e1f30(CTerrain *this_ptr)

{
  core_ground_cpp_CGround_free_FUN_004eefb0(g_CGroundPtr);
  g_CTerrainInstance.initialized = 0;
  return;
}
