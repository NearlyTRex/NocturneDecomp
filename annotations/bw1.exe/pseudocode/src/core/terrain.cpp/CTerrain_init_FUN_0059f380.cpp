// Name: core_terrain.cpp_CTerrain_init_FUN_0059f380
// Address: 0059f380
// Address Range: [[0059f380, 0059f3ba]]
// Convention: __cdecl
// Signature: void __cdecl core_terrain_cpp_CTerrain_init_FUN_0059f380(CTerrain *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_terrain_cpp_CTerrain_init_FUN_0059f380(CTerrain *this_ptr)

{
  CGround *this_ptr_00;
  
  this_ptr_00 = g_CGroundPtr;
  *(uint *)this_ptr = 0;
  core_ground_cpp_CGround_init_FUN_004e7240(this_ptr_00);
  core_ground_cpp_CGround_load_FUN_004e7340(g_CGroundPtr,"junk.jnk");
  _DAT_02c8ae6c = 1;
  return;
}
