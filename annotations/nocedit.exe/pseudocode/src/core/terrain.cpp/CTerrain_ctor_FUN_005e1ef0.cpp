// Name: core_terrain.cpp_CTerrain_ctor_FUN_005e1ef0
// Address: 005e1ef0
// Address Range: [[005e1ef0, 005e1f2a]]
// Convention: __cdecl
// Signature: CTerrain * core_terrain.cpp_CTerrain_ctor_FUN_005e1ef0(CTerrain * this_ptr)

#include "nocturne.h"

CTerrain * __cdecl core_terrain_cpp_CTerrain_ctor_FUN_005e1ef0(CTerrain *this_ptr)

{
  CGround *this_ptr_00;
  CTerrain *pCVar1;
  
  this_ptr_00 = g_CGroundPtr;
  this_ptr->animation_counter = 0;
  core_ground_cpp_CGround_init_FUN_004eef00(this_ptr_00);
  pCVar1 = (CTerrain *)core_ground_cpp_CGround_load_FUN_004ef030(g_CGroundPtr,"junk.jnk");
  g_CTerrainInstance.initialized = 1;
  return pCVar1;
}
