// Name: core_terrain.cpp_CTerrain_free_FUN_005723b0
// Address: 005723b0
// Address Range: [[005723b0, 005723c7]]
// Convention: __cdecl
// Signature: void __cdecl core_terrain_cpp_CTerrain_free_FUN_005723b0(CTerrain *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_terrain_cpp_CTerrain_free_FUN_005723b0(CTerrain *this_ptr)

{
  core_ground_cpp_CGround_free_FUN_004cfc70(g_CGroundPtr);
  _DAT_02cfd8bc = 0;
  return;
}
