// Name: core_terrain.cpp_CTerrain_free_FUN_005723b0
// Address: 005723b0
// Address Range: [[005723b0, 005723c7]]
// Convention: __cdecl
// Signature: void __cdecl core_terrain_cpp_CTerrain_free_FUN_005723b0(CTerrain *this_ptr)

#include "nocturne.h"

void __cdecl core_terrain_cpp_CTerrain_free_FUN_005723b0(CTerrain *this_ptr)

{
  core_ground_cpp_CGround_free_FUN_004cfc70(g_CGroundPtr);
  g_CTerrain_02cfd8b8.initialized = 0;
  return;
}
