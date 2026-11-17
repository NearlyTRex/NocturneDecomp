// Name: core_terrain.cpp_CTerrain_free_FUN_0057b840
// Address: 0057b840
// Address Range: [[0057b840, 0057b857]]
// Convention: __cdecl
// Signature: void __cdecl core_terrain_cpp_CTerrain_free_FUN_0057b840(CTerrain *this_ptr)

#include "nocturne.h"

void __cdecl core_terrain_cpp_CTerrain_free_FUN_0057b840(CTerrain *this_ptr)

{
  core_ground_cpp_CGround_free_FUN_004caa60(g_CGroundPtr);
  g_CTerrainInstance.initialized = 0;
  return;
}
